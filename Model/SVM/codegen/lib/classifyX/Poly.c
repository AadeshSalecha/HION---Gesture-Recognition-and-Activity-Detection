/*
 * File: Poly.c
 *
 * MATLAB Coder version            : 3.3
 * C/C++ source code generated on  : 13-May-2018 15:38:19
 */

/* Include Files */
#include "classifyX.h"
#include "Poly.h"

/* Function Definitions */

/*
 * Arguments    : const double svT[624]
 *                const double x[48]
 *                double kernelProduct[13]
 * Return Type  : void
 */
void Poly(const double svT[624], const double x[48], double kernelProduct[13])
{
  int i0;
  double d1;
  int i1;
  for (i0 = 0; i0 < 13; i0++) {
    d1 = 0.0;
    for (i1 = 0; i1 < 48; i1++) {
      d1 += x[i1] * svT[i1 + 48 * i0];
    }

    kernelProduct[i0] = (d1 + 1.0) * (d1 + 1.0);
  }
}

/*
 * Arguments    : const double svT[480]
 *                const double x[48]
 *                double kernelProduct[10]
 * Return Type  : void
 */
void b_Poly(const double svT[480], const double x[48], double kernelProduct[10])
{
  int i2;
  double d2;
  int i3;
  for (i2 = 0; i2 < 10; i2++) {
    d2 = 0.0;
    for (i3 = 0; i3 < 48; i3++) {
      d2 += x[i3] * svT[i3 + 48 * i2];
    }

    kernelProduct[i2] = (d2 + 1.0) * (d2 + 1.0);
  }
}

/*
 * Arguments    : const double svT[672]
 *                const double x[48]
 *                double kernelProduct[14]
 * Return Type  : void
 */
void c_Poly(const double svT[672], const double x[48], double kernelProduct[14])
{
  int i4;
  double d3;
  int i5;
  for (i4 = 0; i4 < 14; i4++) {
    d3 = 0.0;
    for (i5 = 0; i5 < 48; i5++) {
      d3 += x[i5] * svT[i5 + 48 * i4];
    }

    kernelProduct[i4] = (d3 + 1.0) * (d3 + 1.0);
  }
}

/*
 * File trailer for Poly.c
 *
 * [EOF]
 */
