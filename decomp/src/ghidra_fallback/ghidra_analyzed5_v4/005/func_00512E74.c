#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_0014EEB8(int param_1,undefined4 *param_2,undefined4 param_3,float fparam_0);
extern undefined4 DAT_00512eb4;
extern undefined4 DAT_00512eb8;

// USA 00512E74 <- EU 00512E4C (Ghidra, non-matching)
// GLOBAL DAT_00512eb4 undefined4
// GLOBAL DAT_00512eb8 undefined4

undefined4 func_00512E74(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(undefined4 *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  uVar1 = DAT_00512eb8;
  uVar2 = DAT_00512eb4;
  fparam_0 = *(float *)(*(int *)(param_1 + 0x4cc) + 0x58);
  local_18 = DAT_00512eb4;
  local_14 = DAT_00512eb4;
  local_10 = DAT_00512eb4;
  *(undefined4 *)(param_1 + 0x524) = DAT_00512eb4;
  *(undefined4 *)(param_1 + 0x528) = uVar2;
  *(undefined4 *)(param_1 + 0x52c) = uVar2;
  uVar2 = func_0014EEB8(param_1,&local_18,uVar1,fparam_0);
  func_00115C54((float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3d0),(float *)(param_1 + 0x530));
  return uVar2;
}

