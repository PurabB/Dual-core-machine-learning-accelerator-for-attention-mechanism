"""
Generate random Q/K data and compute sparsity thresholds for Step 6.

Outputs:
  sparsity_qdata.txt      - Q vectors (8 rows x 16 elements, 8-bit signed)
  sparsity_kdata.txt      - K vectors (8 cols x 16 elements, 8-bit signed)
  sparsity_thresholds.txt - element_threshold, row_threshold

Usage:
  python3 gen_sparsity_data.py [--seed 42] [--elem_pct 70] [--row_pct 30]
"""

import numpy as np
import argparse


def main():
    parser = argparse.ArgumentParser(description="Generate sparsity test data")
    parser.add_argument("--seed", type=int, default=42, help="Random seed")
    parser.add_argument(
        "--elem_pct",
        type=int,
        default=70,
        help="Element-level sparsity percentile (default: 70)",
    )
    parser.add_argument(
        "--row_pct",
        type=int,
        default=30,
        help="Row-level sparsity percentile (default: 30)",
    )
    parser.add_argument("--total_cycle", type=int, default=8, help="Number of Q rows")
    parser.add_argument("--col", type=int, default=8, help="Number of K columns")
    parser.add_argument("--pr", type=int, default=8, help="Products per dot product")
    parser.add_argument("--bw", type=int, default=8, help="Bit width")
    args = parser.parse_args()

    np.random.seed(args.seed)

    total_cycle = args.total_cycle
    col = args.col
    pr = args.pr
    bw = args.bw
    max_val = 2 ** (bw - 1) - 1  # 127 for 8-bit signed
    min_val = -(2 ** (bw - 1))  # -128 for 8-bit signed

    # Generate random Q and K data (8-bit signed integers)
    Q = np.random.randint(min_val, max_val + 1, size=(total_cycle, pr))
    K = np.random.randint(min_val, max_val + 1, size=(col, pr))

    # Compute Q*K matrix (dot products)
    # result[t][q] = sum(Q[t][k] * K[q][k] for k in range(pr))
    result = np.zeros((total_cycle, col), dtype=np.int64)
    for t in range(total_cycle):
        for q in range(col):
            result[t][q] = np.sum(Q[t].astype(np.int64) * K[q].astype(np.int64))

    abs_result = np.abs(result)

    # Element-level threshold (B1): percentile of |Q*K| values
    all_abs = abs_result.flatten()
    elem_threshold = int(np.percentile(all_abs, args.elem_pct))

    # Row-level threshold (B2): percentile of row sums
    row_sums = np.sum(abs_result, axis=1)
    row_threshold = int(np.percentile(row_sums, args.row_pct))

    # Count sparsity
    elem_gated = np.sum(all_abs < elem_threshold)
    rows_skipped = np.sum(row_sums < row_threshold)

    print(f"=== Sparsity Data Generation ===")
    print(f"Seed: {args.seed}")
    print(f"Q shape: {Q.shape}, K shape: {K.shape}")
    print(f"Result range: [{result.min()}, {result.max()}]")
    print(f"Element threshold ({args.elem_pct}th percentile): {elem_threshold}")
    print(
        f"  -> {elem_gated}/{len(all_abs)} elements gated "
        f"({100*elem_gated/len(all_abs):.1f}%)"
    )
    print(f"Row threshold ({args.row_pct}th percentile): {row_threshold}")
    print(
        f"  -> {rows_skipped}/{total_cycle} rows skipped "
        f"({100*rows_skipped/total_cycle:.1f}%)"
    )

    # Write Q data
    with open("sparsity_qdata.txt", "w") as f:
        for t in range(total_cycle):
            for j in range(pr):
                f.write(f"{Q[t][j]}\n")

    # Write K data
    with open("sparsity_kdata.txt", "w") as f:
        for q in range(col):
            for j in range(pr):
                f.write(f"{K[q][j]}\n")

    # Write thresholds
    with open("sparsity_thresholds.txt", "w") as f:
        f.write(f"{elem_threshold}\n")
        f.write(f"{row_threshold}\n")

    # Write expected results for verification
    with open("sparsity_expected.txt", "w") as f:
        f.write("# Expected Q*K results\n")
        for t in range(total_cycle):
            vals = " ".join(str(result[t][q]) for q in range(col))
            f.write(f"row{t}: {vals}\n")
        f.write(f"\n# Row sums\n")
        for t in range(total_cycle):
            f.write(f"row{t}: sum={row_sums[t]}")
            if row_sums[t] < row_threshold:
                f.write(" [SKIP]")
            f.write("\n")
        f.write(f"\n# Element gating\n")
        for t in range(total_cycle):
            gates = [
                "G" if abs_result[t][q] < elem_threshold else "." for q in range(col)
            ]
            f.write(f"row{t}: {''.join(gates)}\n")

    print(
        f"\nFiles written: sparsity_qdata.txt, sparsity_kdata.txt, "
        f"sparsity_thresholds.txt, sparsity_expected.txt"
    )


if __name__ == "__main__":
    main()
