#ifndef LBFGS_H
#define LBFGS_H

#include "fc.h"

extern "C" int lbfgs(int *n,
                     int *m,
                     double *x,
                     double *f,
                     double *g,
                     int *diagco,
                     double *diag,
                     int *iprint,
                     double *eps,
                     double *xtol,
                     double *w,
                     int *iflag);

#endif
