#include "ghidra_types.h"

extern int func_00115074(float *param_1,float *param_2,float *param_3);
extern int func_00409610(float *param_1,float *param_2,float *param_3,float fparam_0,float fparam_1, float fparam_2,float fparam_3,float fparam_4,float fparam_5);

// USA 00409A00 <- EU 004099E0 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 float *
// PARAM param_6 Stack[0x4]:4 float *

undefined4
func_00409A00(int param_1,float *param_2,float *param_3,int param_4,float *param_5,float *param_6)

{
  undefined4 uVar1;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define local_24 (*(float *)(albw_frame + 0xc))
  #define fStack_20 (*(float *)(albw_frame + 0x10))
  func_00115074(&local_28,param_2,param_3);
  uVar1 = func_00409610(&local_28,param_5,param_6,param_2[0x12],
                        SQRT(local_28 * local_28 + local_24 * local_24 + fStack_20 * fStack_20),
                        *(float *)(param_1 + 0x20),*(float *)(param_4 + 4),*(float *)(param_4 + 8),
                        *(float *)(param_4 + 0xc));
  return uVar1;
}

