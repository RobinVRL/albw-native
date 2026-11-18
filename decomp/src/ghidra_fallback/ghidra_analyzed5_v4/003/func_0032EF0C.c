#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_0068C690(float *param_1);
extern undefined4 DAT_0032ef48;
extern float DAT_0032ef4c;

// USA 0032EF0C <- EU 0032EEE8 (Ghidra, non-matching)
// GLOBAL DAT_0032ef48 undefined4
// GLOBAL DAT_0032ef4c float

float func_0032EF0C(float *param_1,float *param_2)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define local_24 (*(undefined4 *)(albw_frame + 0xc))
  #define local_20 (*(undefined4 *)(albw_frame + 0x10))
  #define local_1c ((float *)(albw_frame + 0x14))
  #define local_14 (*(undefined4 *)(albw_frame + 0x1c))
  func_00115C70(local_1c,param_2,param_1);
  local_28 = local_1c[0];
  local_20 = local_14;
  local_24 = DAT_0032ef48;
  iVar1 = func_0068C690(&local_28);
  func_004D80A4(&local_28,iVar1 + 0x40000000,DAT_0032ef4c);
  return local_28;
}

