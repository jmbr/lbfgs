#pragma once

extern "C" int lbfgs_(int *n,
                      int *m,
                      double *x,
                      double *f,
                      double *g,
                      logical *diagco,
                      double *diag,
                      int *iprint,
                      double *eps,
                      double *xtol,
                      double *w,
                      int *iflag);
