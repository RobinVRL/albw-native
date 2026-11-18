#include "ghidra_types.h"

extern int func_003FFE6C(int param_1,undefined4 *param_2);
extern int func_0066BF2C(undefined4 *param_1,char param_2);
extern int func_0068C794(float *param_1,float fparam_0,float fparam_1,float fparam_2,float fparam_3);
extern float DAT_00422b58;
extern float DAT_00422b5c;
extern float DAT_00422b60;
extern undefined4 DAT_00422b64;

// USA 00422AB4 <- EU 00422A94 (Ghidra, non-matching)
// GLOBAL DAT_00422b58 float
// GLOBAL DAT_00422b5c float
// GLOBAL DAT_00422b60 float
// GLOBAL DAT_00422b64 undefined4

void func_00422AB4(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  float fparam_3;
  float fparam_2;
  float fparam_1;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(float *)(albw_frame + 0x0))
  #define local_2c (*(float *)(albw_frame + 0x4))
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define local_24 (*(float *)(albw_frame + 0xc))
  #define local_20 (*(undefined4 *)(albw_frame + 0x10))
  iVar3 = *(int *)(**(int **)(param_1 + 0x1c) + 0x10);
  local_30 = *(float *)(iVar3 + 0x1c);
  local_2c = *(float *)(iVar3 + 0x20);
  fparam_3 = DAT_00422b58;
  fparam_2 = DAT_00422b5c;
  fparam_1 = DAT_00422b60;
  uVar1 = func_0068C794(&local_30,*(float *)(param_1 + 0xac),DAT_00422b60,DAT_00422b5c,DAT_00422b58)
  ;
  uVar2 = func_0068C794(&local_2c,*(float *)(param_1 + 0xb0),fparam_1,fparam_2,fparam_3);
  local_28 = local_30;
  local_24 = local_2c;
  local_20 = DAT_00422b64;
  func_003FFE6C(*(int *)(**(int **)(param_1 + 0x1c) + 0x10),&local_28);
  *(byte *)(*(int *)(param_1 + 0x1c) + 0x70) = *(byte *)(*(int *)(param_1 + 0x1c) + 0x70) | 2;
  if ((uVar1 & uVar2) != 0) {
    func_0066BF2C((undefined4 *)(param_1 + 0x20),'\x04');
  }
  return;
}

