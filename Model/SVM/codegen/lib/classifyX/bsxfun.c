/*
 * File: bsxfun.c
 *
 * MATLAB Coder version            : 3.3
 * C/C++ source code generated on  : 13-May-2018 15:38:19
 */

/* Include Files */
#include "classifyX.h"
#include "bsxfun.h"

/* Function Definitions */

/*
 * Arguments    : const double a_data[]
 *                const int a_size[2]
 *                const double b_data[]
 *                const int b_size[2]
 *                double c_data[]
 *                int c_size[2]
 * Return Type  : void
 */
void b_bsxfun(const double a_data[], const int a_size[2], const double b_data[],
              const int b_size[2], double c_data[], int c_size[2])
{
  int c;
  int b_a_size;
  int asub;
  int bsub;
  int ak;
  int bk;
  int ck;
  if (a_size[1] <= b_size[1]) {
    c = a_size[1];
  } else {
    c = b_size[1];
  }

  c_size[0] = 1;
  if (a_size[1] <= b_size[1]) {
    c_size[1] = (signed char)a_size[1];
    b_a_size = a_size[1];
  } else {
    c_size[1] = (signed char)b_size[1];
    b_a_size = b_size[1];
  }

  if ((signed char)b_a_size != 0) {
    asub = 1;
    bsub = 1;
    ak = 0;
    bk = 0;
    for (ck = 0; ck < (signed char)c; ck++) {
      c_data[ck] = a_data[ak] / b_data[bk];
      if (asub < a_size[1]) {
        ak++;
        bk++;
        bsub++;
        asub++;
      } else if (bsub < b_size[1]) {
        bk++;
        bsub++;
      } else {
        asub = 1;
        bsub = 1;
      }
    }
  }
}

/*
 * Arguments    : const double a[48]
 *                const double b[48]
 *                double c[48]
 * Return Type  : void
 */
void bsxfun(const double a[48], const double b[48], double c[48])
{
  int ak;
  int bk;
  int ck;
  ak = 0;
  bk = 0;
  for (ck = 0; ck < 48; ck++) {
    c[ck] = a[ak] - b[bk];
    ak++;
    bk++;
  }
}

/*
 * File trailer for bsxfun.c
 *
 * [EOF]
 */
