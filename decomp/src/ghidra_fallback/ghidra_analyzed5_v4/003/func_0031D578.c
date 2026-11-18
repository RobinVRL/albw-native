#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001157FC(float *param_1,float *param_2,float *param_3);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern void func_004CE804(int param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_004CEAF0(int param_1);
extern undefined4 *DAT_0031d710;
extern float DAT_0031d714;
extern int *DAT_0031d718;
extern int *DAT_0031d71c;
extern uint *DAT_0031d720;
extern undefined4 *DAT_0031d724;
extern undefined4 DAT_0031d728;
extern undefined4 DAT_0031d72c;
extern undefined4 DAT_0031d730;
extern undefined4 *DAT_0031d734;

// USA 0031D578 <- EU 0031D554 (Ghidra, non-matching)
// GLOBAL DAT_0031d710 undefined4 *
// GLOBAL DAT_0031d714 float
// GLOBAL DAT_0031d718 int *
// GLOBAL DAT_0031d71c int *
// GLOBAL DAT_0031d720 uint *
// GLOBAL DAT_0031d724 undefined4 *
// GLOBAL DAT_0031d728 undefined4
// GLOBAL DAT_0031d72c undefined4
// GLOBAL DAT_0031d730 undefined4
// GLOBAL DAT_0031d734 undefined4 *

undefined4 func_0031D578(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  float *pfVar6;
  int *piVar7;
  float fparam_0;
  float fVar8;
  
  func_00169A80(*(int **)(param_1 + 0x40),param_2,param_3,param_4);
  func_00168E9C(*(int **)(param_1 + 0x40),*(int *)(param_1 + 0x34),(int *)0x0);
  fVar8 = DAT_0031d714;
  iVar4 = *(int *)(param_1 + 0x34);
  *(uint *)(iVar4 + 0x164) = *(uint *)(iVar4 + 0x164) | 0x40000000;
  puVar1 = DAT_0031d710;
  *(undefined4 *)(iVar4 + 0x8c) = *DAT_0031d710;
  *(undefined4 *)(iVar4 + 0x9c) = puVar1[1];
  *(undefined4 *)(iVar4 + 0xac) = puVar1[2];
  iVar4 = *(int *)(param_1 + 0x34);
  *(uint *)(iVar4 + 0x164) = *(uint *)(iVar4 + 0x164) | 0x40000000;
  *(float *)(iVar4 + 0x74) = fVar8;
  *(float *)(iVar4 + 0x78) = fVar8;
  *(float *)(iVar4 + 0x7c) = fVar8;
  func_004CEAF0(*(int *)(param_1 + 0x34));
  fparam_0 = *(float *)(param_1 + 0x44);
  (**(code **)(**(int **)(param_1 + 0x34) + 0x18))(*(int **)(param_1 + 0x34),0);
  uVar5 = 0;
  if (*(int *)(*DAT_0031d718 + 0xf3c) != 0) {
    uVar5 = *(uint *)(*(int *)(*DAT_0031d718 + 0xf3c) + 4);
  }
  func_004CE804(*(int *)(param_1 + 0x34),uVar5 & 0xffff,0,0,fparam_0);
  piVar7 = *(int **)(*DAT_0031d71c + 0x28d4);
  if (((*DAT_0031d720 & 1) == 0) && (iVar4 = func_00100174((int *)DAT_0031d720), iVar4 != 0)) {
    *DAT_0031d724 = DAT_0031d728;
  }
  if ((piVar7 == (int *)0x0) ||
     (iVar4 = (**(code **)(*piVar7 + 8))(piVar7,DAT_0031d724), iVar4 == 0)) {
    piVar7 = (int *)0x0;
  }
  uVar3 = DAT_0031d730;
  uVar2 = DAT_0031d72c;
  iVar4 = *(int *)(param_1 + 0x38);
  *(uint *)(iVar4 + 0x164) = *(uint *)(iVar4 + 0x164) | 0x40000000;
  pfVar6 = (float *)(iVar4 + 0x80);
  *pfVar6 = fVar8;
  *(undefined4 *)(iVar4 + 0x84) = uVar2;
  *(undefined4 *)(iVar4 + 0x88) = uVar2;
  *(undefined4 *)(iVar4 + 0x90) = uVar2;
  *(float *)(iVar4 + 0x94) = fVar8;
  *(undefined4 *)(iVar4 + 0x98) = uVar2;
  *(undefined4 *)(iVar4 + 0xa0) = uVar2;
  *(undefined4 *)(iVar4 + 0xa4) = uVar2;
  *(float *)(iVar4 + 0xa8) = fVar8;
  *(undefined4 *)(iVar4 + 0x8c) = uVar2;
  *(undefined4 *)(iVar4 + 0x9c) = uVar2;
  *(undefined4 *)(iVar4 + 0xac) = uVar3;
  func_001157FC(pfVar6,(float *)(piVar7 + 0x48),pfVar6);
  iVar4 = *(int *)(param_1 + 0x38);
  *(uint *)(iVar4 + 0x164) = *(uint *)(iVar4 + 0x164) | 0x40000000;
  puVar1 = DAT_0031d734;
  *(undefined4 *)(iVar4 + 0x74) = *DAT_0031d734;
  *(undefined4 *)(iVar4 + 0x78) = puVar1[1];
  *(undefined4 *)(iVar4 + 0x7c) = puVar1[2];
  return func_004CEAF0(*(int *)(param_1 + 0x38));
}

