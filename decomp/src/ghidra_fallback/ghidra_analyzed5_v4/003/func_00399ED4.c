#include "ghidra_types.h"

extern int func_001151EC(undefined4 *param_1,undefined4 *param_2);
extern int func_004356B4(int *param_1);
extern int func_004CEAF0(int param_1);
extern int func_004D8054(float *param_1,uint param_2,float fparam_0);
extern int func_00543104(int param_1);
extern float DAT_00399fa4;
extern float DAT_00399fa8;
extern undefined4 DAT_00399fac;
extern undefined4 DAT_00399fb0;

// USA 00399ED4 <- EU 00399EB0 (Ghidra, non-matching)
// GLOBAL DAT_00399fa4 float
// GLOBAL DAT_00399fa8 float
// GLOBAL DAT_00399fac undefined4
// GLOBAL DAT_00399fb0 undefined4

undefined4 func_00399ED4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(float *)(albw_frame + 0x0))
  #define local_1c (*(float *)(albw_frame + 0x4))
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  iVar2 = *(int *)(param_1 + 0x34);
  *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 0x40000000;
  func_001151EC((undefined4 *)(iVar2 + 0x80),
                (undefined4 *)
                (*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 0x8d4) + 0x24) + 0x14) +
                *(int *)(*(int *)(param_1 + 4) + 0x8f8) * 0x30));
  func_004CEAF0(*(int *)(param_1 + 0x34));
  iVar2 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 0x8d4) + 0x24) + 0x14) +
          *(int *)(*(int *)(param_1 + 4) + 0x8ec) * 0x30;
  local_20 = *(float *)(iVar2 + 0xc);
  local_1c = *(float *)(iVar2 + 0x1c);
  local_18 = *(undefined4 *)(iVar2 + 0x2c);
  func_004D8054(&local_20,*(uint *)(*(int *)(param_1 + 4) + 1000),DAT_00399fa4);
  uVar3 = DAT_00399fac;
  local_1c = *(float *)(*(int *)(param_1 + 4) + 0x3d4) + DAT_00399fa8;
  *(float *)(param_1 + 0x54) = local_20;
  *(float *)(param_1 + 0x58) = local_1c;
  *(undefined4 *)(param_1 + 0x5c) = local_18;
  func_00543104(*(int *)(param_1 + 4));
  uVar1 = DAT_00399fb0;
  *(undefined4 *)(param_1 + 0xa8) = uVar3;
  *(undefined4 *)(param_1 + 0xac) = uVar1;
  *(undefined4 *)(param_1 + 0xb0) = uVar3;
  return func_004356B4((int *)(param_1 + 0x50));
}

