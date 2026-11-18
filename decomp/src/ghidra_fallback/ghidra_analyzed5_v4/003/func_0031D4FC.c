#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001157FC(float *param_1,float *param_2,float *param_3);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
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

// USA 0031D4FC <- EU 0031D4D8 (Ghidra, non-matching)
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

undefined4 func_0031D4FC(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  float *pfVar5;
  code *pcVar6;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  uint in_fpscr;
  float fVar10;
  float fparam_0;
  
  piVar9 = (int *)(*(char *)(param_1 + 0x14) * 8 + 4);
  uVar3 = *(uint *)(*(int *)(param_1 + 0x2c) + (int)piVar9);
  pcVar6 = *(code **)(*(int *)(param_1 + 0x2c) + *(char *)(param_1 + 0x14) * 8);
  if ((uVar3 & 1) != 0) {
    pcVar6 = *(code **)(pcVar6 + *(int *)(*(int *)(param_1 + 0x24) + ((int)uVar3 >> 1)));
  }
  (*pcVar6)((int)(*(int *)(param_1 + 0x24)) + ((int)uVar3 >> 1));
  iVar8 = *(int *)(param_1 + 0x20);
  iVar4 = *(int *)(param_1 + 0x10) + 1;
  *(int *)(param_1 + 0x10) = iVar4;
  uVar7 = extraout_r1;
  if (iVar8 != 0) {
    fVar10 = (float)VectorUnsignedToFloat(iVar4,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(iVar8,1,fVar10);
    uVar7 = extraout_r1_00;
  }
  func_00169A80(*(int **)(param_1 + 0x40),uVar7,iVar8,piVar9);
  func_00168E9C(*(int **)(param_1 + 0x40),*(int *)(param_1 + 0x34),(int *)0x0);
  fVar10 = DAT_0031d714;
  iVar4 = *(int *)(param_1 + 0x34);
  *(uint *)(iVar4 + 0x164) = *(uint *)(iVar4 + 0x164) | 0x40000000;
  puVar1 = DAT_0031d710;
  *(undefined4 *)(iVar4 + 0x8c) = *DAT_0031d710;
  *(undefined4 *)(iVar4 + 0x9c) = puVar1[1];
  *(undefined4 *)(iVar4 + 0xac) = puVar1[2];
  iVar4 = *(int *)(param_1 + 0x34);
  *(uint *)(iVar4 + 0x164) = *(uint *)(iVar4 + 0x164) | 0x40000000;
  *(float *)(iVar4 + 0x74) = fVar10;
  *(float *)(iVar4 + 0x78) = fVar10;
  *(float *)(iVar4 + 0x7c) = fVar10;
  func_004CEAF0(*(int *)(param_1 + 0x34));
  fparam_0 = *(float *)(param_1 + 0x44);
  (**(code **)(**(int **)(param_1 + 0x34) + 0x18))(*(int **)(param_1 + 0x34),0);
  uVar3 = 0;
  if (*(int *)(*DAT_0031d718 + 0xf3c) != 0) {
    uVar3 = *(uint *)(*(int *)(*DAT_0031d718 + 0xf3c) + 4);
  }
  func_004CE804(*(int *)(param_1 + 0x34),uVar3 & 0xffff,0,0,fparam_0);
  piVar9 = *(int **)(*DAT_0031d71c + 0x28d4);
  if (((*DAT_0031d720 & 1) == 0) && (iVar4 = func_00100174((int *)DAT_0031d720), iVar4 != 0)) {
    *DAT_0031d724 = DAT_0031d728;
  }
  if ((piVar9 == (int *)0x0) ||
     (iVar4 = (**(code **)(*piVar9 + 8))(piVar9,DAT_0031d724), iVar4 == 0)) {
    piVar9 = (int *)0x0;
  }
  uVar2 = DAT_0031d730;
  uVar7 = DAT_0031d72c;
  iVar4 = *(int *)(param_1 + 0x38);
  *(uint *)(iVar4 + 0x164) = *(uint *)(iVar4 + 0x164) | 0x40000000;
  pfVar5 = (float *)(iVar4 + 0x80);
  *pfVar5 = fVar10;
  *(undefined4 *)(iVar4 + 0x84) = uVar7;
  *(undefined4 *)(iVar4 + 0x88) = uVar7;
  *(undefined4 *)(iVar4 + 0x90) = uVar7;
  *(float *)(iVar4 + 0x94) = fVar10;
  *(undefined4 *)(iVar4 + 0x98) = uVar7;
  *(undefined4 *)(iVar4 + 0xa0) = uVar7;
  *(undefined4 *)(iVar4 + 0xa4) = uVar7;
  *(float *)(iVar4 + 0xa8) = fVar10;
  *(undefined4 *)(iVar4 + 0x8c) = uVar7;
  *(undefined4 *)(iVar4 + 0x9c) = uVar7;
  *(undefined4 *)(iVar4 + 0xac) = uVar2;
  func_001157FC(pfVar5,(float *)(piVar9 + 0x48),pfVar5);
  iVar4 = *(int *)(param_1 + 0x38);
  *(uint *)(iVar4 + 0x164) = *(uint *)(iVar4 + 0x164) | 0x40000000;
  puVar1 = DAT_0031d734;
  *(undefined4 *)(iVar4 + 0x74) = *DAT_0031d734;
  *(undefined4 *)(iVar4 + 0x78) = puVar1[1];
  *(undefined4 *)(iVar4 + 0x7c) = puVar1[2];
  return func_004CEAF0(*(int *)(param_1 + 0x38));
}

