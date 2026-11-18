#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int DAT_00559b28;

// USA 00559B08 <- EU 00559AE0 (Ghidra, non-matching)
// GLOBAL DAT_00559b28 int

bool func_00559B08(float *param_1)

{
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 ((float *)(albw_frame + 0x0))
  #define local_8 (*(float *)(albw_frame + 0x8))
  func_00115C70(local_10,param_1 + 3,param_1);
  return (int)ALBW_AS_U32(SQRT(local_10[0] * local_10[0] + local_8 * local_8)) <= DAT_00559b28;
}

