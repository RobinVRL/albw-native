#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern float *DAT_002f4c50;

// USA 002F4C24 <- EU 002F4C00 (Ghidra, non-matching)
// GLOBAL DAT_002f4c50 float *

undefined4 func_002F4C24(int param_1,int param_2,float *param_3)

{
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(float *)(albw_frame + 0x8))
  #define fStack_14 (*(float *)(albw_frame + 0xc))
  #define fStack_10 (*(float *)(albw_frame + 0x10))
  if (param_2 == 0 || param_3 == (float *)0x0) {
    return 0;
  }
  func_00115C54(&local_18,(float *)(param_1 + 0x3d0),DAT_002f4c50);
  *param_3 = local_18;
  param_3[1] = fStack_14;
  param_3[2] = fStack_10;
  return func_00115C54(param_3,param_3,(float *)(param_1 + 0xc58));
}

