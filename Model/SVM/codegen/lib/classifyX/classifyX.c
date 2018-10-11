/*
 * File: classifyX.c
 *
 * MATLAB Coder version            : 3.3
 * C/C++ source code generated on  : 13-May-2018 15:38:19
 */

/* Include Files */
#include "classifyX.h"
#include "CompactClassificationECOC.h"

/* Function Definitions */

/*
 * CLASSIFYX Classify using SVM Model
 *   CLASSIFYX classifies the measurements in X
 *   using the SVM model in the file mySVM.mat, and then
 *   returns class labels in label.
 * Arguments    : const double X[48]
 * Return Type  : double
 */
double classifyX(const double X[48])
{
  int idx;
  double pscore[3];
  int ak;
  static const signed char iv0[9] = { 1, -1, 0, 1, 0, -1, 0, 1, -1 };

  double mtmp;
  double vloss[3];
  signed char M[9];
  int bk;
  int c;
  int ck;
  double b_c;
  for (idx = 0; idx < 9; idx++) {
    ak = iv0[idx];
    if (iv0[idx] == 0) {
      ak = 0;
    }

    M[idx] = (signed char)ak;
  }

  localScore(X, pscore);
  for (idx = 0; idx < 3; idx++) {
    ak = 0;
    bk = 0;
    mtmp = 0.0;
    c = 0;
    for (ck = 0; ck < 3; ck++) {
      b_c = (double)M[idx + 3 * ak] * pscore[bk];
      ak++;
      bk++;
      b_c = 1.0 - b_c;
      if (0.0 > b_c) {
        b_c = 0.0;
      }

      mtmp += b_c;
      c++;
    }

    if (c == 0) {
      mtmp = 0.0;
    } else {
      mtmp /= (double)c;
    }

    vloss[idx] = -(mtmp / 2.0);
  }

  mtmp = vloss[0];
  idx = -1;
  for (ak = 0; ak < 2; ak++) {
    if (vloss[ak + 1] > mtmp) {
      mtmp = vloss[ak + 1];
      idx = ak;
    }
  }

  return 1.0 + ((double)idx + 1.0);
}

/*
 * File trailer for classifyX.c
 *
 * [EOF]
 */
