#ifndef SOME_C_LIB_H
#define SOME_C_LIB_H

#define SOME_C_LIB_VERSION 10

#ifdef __cplusplus
extern "C" {
#endif
  int scl_sum(int x, int y);
  int scl_minus(int x, int y);
  int scl_mult(int x, int y);
  int scl_div(int x, int y);
#ifdef __cplusplus
}
#endif

#endif
