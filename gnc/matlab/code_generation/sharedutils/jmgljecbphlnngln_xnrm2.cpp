//
// File: jmgljecbphlnngln_xnrm2.cpp
//
// Code generated for Simulink model 'est_estimator'.
//
// Model version                  : 1.1139
// Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
// C/C++ source code generated on : Wed May 17 14:42:31 2017
//
#include "rtwtypes.h"
#include <math.h>
#include "jmgljecbphlnngln_xnrm2.h"

// Function for MATLAB Function: '<S24>/compute_of_global_points'
real32_T jmgljecbphlnngln_xnrm2(int32_T n, const real32_T x_data[], int32_T ix0)
{
  real32_T y;
  real32_T scale;
  int32_T kend;
  real32_T absxk;
  real32_T t;
  int32_T k;
  y = 0.0F;
  scale = 1.17549435E-38F;
  kend = (int32_T)((int32_T)(ix0 + n) - 1);
  for (k = ix0; k <= kend; k++) {
    absxk = (real32_T)fabs((real_T)x_data[(int32_T)(k - 1)]);
    if (absxk > scale) {
      t = scale / absxk;
      y = y * t * t + 1.0F;
      scale = absxk;
    } else {
      t = absxk / scale;
      y += t * t;
    }
  }

  return scale * (real32_T)sqrt((real_T)y);
}

//
// File trailer for generated code.
//
// [EOF]
//
