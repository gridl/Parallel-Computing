#ifndef __HEATBLOCKED_
#define __HEATBLOCKED_

#include "common.h"

#define MIN(x,y) (x < y ? x : y)
#define MAX(x,y) (x > y ? x : y)

void heatBlocked(double* A0, double* Anext, int nx, int ny, int nz,
                  int tx, int ty, int tz, int timesteps);

#endif