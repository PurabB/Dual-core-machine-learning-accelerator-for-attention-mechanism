restoreDesign fullchip_pnr.enc.dat fullchip_COL8_BW8_BW_PSUM20_PR16

setLayerPreference -allLayers -isVisible 0
setLayerPreference cellBoundary -isVisible 1
setLayerPreference stdCell -isVisible 1
setLayerPreference blockage -isVisible 1
setDrawMode -fill off
fit
