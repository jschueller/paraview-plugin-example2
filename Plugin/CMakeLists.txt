paraview_add_plugin(ElevationFilter
  VERSION "1.0"
  FORCE_STATIC ON
  MODULES ElevationFilters
  MODULE_FILES "${CMAKE_CURRENT_SOURCE_DIR}/ElevationFilters/vtk.module")

