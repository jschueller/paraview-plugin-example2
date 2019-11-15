#define PARAVIEW_BUILDING_PLUGIN
#include "vtkPVPlugin.h"

PV_PLUGIN_IMPORT_INIT(ElevationFilter)

int main()
{
  PV_PLUGIN_IMPORT(ElevationFilter);
  std::cout << "ok" << std::endl;
  return 0;
}

