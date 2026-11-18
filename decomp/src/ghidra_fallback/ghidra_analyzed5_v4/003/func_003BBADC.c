#include "ghidra_types.h"

extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_004CEAF0(int param_1);
extern float DAT_003bbba0;
extern undefined4 DAT_003bbba4;
extern float *DAT_003bbba8;
extern undefined4 DAT_003bbbac;

// USA 003BBADC <- EU 003BBAB8 (Ghidra, non-matching)
// GLOBAL DAT_003bbba0 float
// GLOBAL DAT_003bbba4 undefined4
// GLOBAL DAT_003bbba8 float *
// GLOBAL DAT_003bbbac undefined4

undefined4 func_003BBADC(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 in_s0;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(float *)(albw_frame + 0x0))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x4))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x8))
  fparam_0 = DAT_003bbba0;
  if (*(char *)((int)param_1 + 0x1e9) == '\x03') {
    iVar2 = (**(code **)(*param_1 + 100))(param_1);
    if (iVar2 == 0) {
      in_s0 = DAT_003bbba4;
    }
    param_2 = *(undefined4 *)(param_1[0x7e] + 0xc);
    iVar3 = *(int *)(param_1[0x7e] + 0x14);
    if (iVar2 == 0) {
      *(undefined4 *)(iVar3 + 0x10) = in_s0;
    }
    else if (*(float *)(iVar3 + 8) != fparam_0) {
      param_2 = 1;
      *(float *)(iVar3 + 8) = fparam_0;
      *(undefined1 *)(iVar3 + 0x26) = 1;
    }
  }
  func_00169A80((int *)param_1[0x7e],param_2,param_3,param_4);
  func_00168E9C((int *)param_1[0x7e],param_1[0x7d],(int *)0x0);
  iVar2 = param_1[0x7d];
  func_00115D70(&local_20,DAT_003bbba8,fparam_0);
  *(float *)(iVar2 + 0x8c) = local_20;
  uVar1 = DAT_003bbbac;
  *(undefined4 *)(iVar2 + 0x9c) = uStack_1c;
  *(undefined4 *)(iVar2 + 0xac) = uStack_18;
  *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 0x40000000;
  iVar2 = param_1[0x7d];
  *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 0x40000000;
  *(undefined4 *)(iVar2 + 0x74) = uVar1;
  *(undefined4 *)(iVar2 + 0x78) = uVar1;
  *(undefined4 *)(iVar2 + 0x7c) = uVar1;
  return func_004CEAF0(param_1[0x7d]);
}

