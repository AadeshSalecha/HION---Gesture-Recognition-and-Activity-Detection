/*
 * File: Poly.h
 *
 * MATLAB Coder version            : 3.3
 * C/C++ source code generated on  : 13-May-2018 15:38:19
 */

#ifndef POLY_H
#define POLY_H

/* Include Files */
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "rtwtypes.h"
#include "classifyX_types.h"

/* Function Declarations */
extern void Poly(const double svT[624], const double x[48], double
                 kernelProduct[13]);
extern void b_Poly(const double svT[480], const double x[48], double
                   kernelProduct[10]);
extern void c_Poly(const double svT[672], const double x[48], double
                   kernelProduct[14]);

#endif

/*
 * File trailer for Poly.h
 *
 * [EOF]
 */
