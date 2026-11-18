#include "ghidra_types.h"

extern undefined4 func_002316CC(int param_1,float fparam_0);
extern int func_0038A4C8(int param_1,uint param_2);
extern int func_004A4860(int param_1,uint param_2,int param_3,int param_4);
extern int func_004A4980(int param_1,uint param_2,float fparam_0);
extern int func_004A523C(int param_1,uint param_2);
extern int func_00532BA0(int param_1);
extern float DAT_0038a2a8;
extern float DAT_0038a2ac;

// USA 00389F74 <- EU 00389F50 (Ghidra, non-matching)
// GLOBAL DAT_0038a2a8 float
// GLOBAL DAT_0038a2ac float

void func_00389F74(int *param_1)

{
  float fparam_0;
  float fparam_0_00;
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  
  iVar1 = func_00532BA0(param_1[0x1d] + 0x5c);
  fparam_0_00 = DAT_0038a2ac;
  fparam_0 = DAT_0038a2a8;
  if (iVar1 == 0) {
    return;
  }
  uVar2 = param_1[0x1e];
  uVar4 = param_1[0x1f];
  if ((int)uVar2 < (int)uVar4) {
    if (uVar2 < (uint)param_1[7]) {
      iVar1 = *(int *)(param_1[9] + uVar2 * 4);
    }
    else {
      iVar1 = 0;
    }
    piVar6 = param_1 + 0x23;
    if (uVar2 < 0x14) {
      piVar6 = piVar6 + uVar2 * 3;
    }
    iVar5 = *piVar6;
    iVar7 = piVar6[1];
    iVar3 = *(int *)(**(int **)(iVar1 + 0x1c) + 0x10);
    *(int *)(iVar3 + 0x24) = piVar6[2];
    *(int *)(iVar3 + 0x1c) = iVar5;
    *(int *)(iVar3 + 0x20) = iVar7;
    *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xef | 0x10;
    *(byte *)(*(int *)(iVar1 + 0x1c) + 0x70) = *(byte *)(*(int *)(iVar1 + 0x1c) + 0x70) | 2;
    if ((uint)param_1[0x1e] < (uint)param_1[7]) {
      iVar1 = *(int *)(param_1[9] + param_1[0x1e] * 4);
    }
    else {
      iVar1 = 0;
    }
    *(undefined1 *)(iVar1 + 0x30) = 1;
    func_002316CC(iVar1 + 0x24,fparam_0);
    if ((uint)param_1[0x1e] < (uint)param_1[7]) {
      iVar1 = *(int *)(param_1[9] + param_1[0x1e] * 4);
    }
    else {
      iVar1 = 0;
    }
    func_004A523C(iVar1,1);
    piVar6 = param_1 + 0x23;
    if ((uint)param_1[0x1f] < 0x14) {
      piVar6 = piVar6 + param_1[0x1f] * 3;
    }
    iVar3 = piVar6[1];
    iVar5 = piVar6[2];
    iVar1 = *(int *)(**(int **)(param_1[0x1d] + 0x1c) + 0x10);
    *(int *)(iVar1 + 0x1c) = *piVar6;
    *(int *)(iVar1 + 0x20) = iVar3;
    *(int *)(iVar1 + 0x24) = iVar5;
    *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xef | 0x10;
    param_1[0x1e] = param_1[0x1f];
    if (param_1[0x1f] < (int)(param_1[0x62] + ((uint)(param_1[0x62] >> 0x1f) >> 0x1e)) >> 2) {
      func_004A4860(param_1[0x1d],0,0,0);
      func_004A4980(param_1[0x1d],1,ALBW_AS_F32(param_1[100]));
      iVar1 = (**(code **)(*param_1 + 0x3c))(param_1);
      if (iVar1 <= param_1[0x62]) goto LAB_0038a298;
    }
    else {
      piVar6 = (int *)param_1[0x1d];
      (**(code **)(*piVar6 + 0x34))(piVar6);
      *(undefined1 *)((int)piVar6 + 0xe) = 0;
      *(undefined1 *)((int)piVar6 + 0xd) = 0;
      func_004A4860(param_1[0x1d],4,1,1);
      *(undefined1 *)(param_1[0x1d] + 0xe) = 1;
      param_1[99] = param_1[99] + 4;
      param_1[0x62] = param_1[0x62] + 4;
    }
    func_0038A4C8((int)param_1,param_1[0x1e]);
  }
  else if ((int)uVar4 < (int)uVar2) {
    if ((int)uVar4 < 0) {
      iVar1 = (**(code **)(*param_1 + 0x38))(param_1);
      if (iVar1 == 0) {
        return;
      }
      func_004A4980(param_1[0x1d],1,ALBW_AS_F32(param_1[100]));
      param_1[0x1f] = 0;
    }
    else {
      if (uVar4 < (uint)param_1[7]) {
        iVar1 = *(int *)(param_1[9] + uVar4 * 4);
      }
      else {
        iVar1 = 0;
      }
      piVar6 = param_1 + 0x23;
      if (uVar2 < 0x14) {
        piVar6 = param_1 + uVar2 * 3 + 0x23;
      }
      iVar5 = *piVar6;
      iVar7 = piVar6[1];
      iVar3 = *(int *)(**(int **)(iVar1 + 0x1c) + 0x10);
      *(int *)(iVar3 + 0x24) = piVar6[2];
      *(int *)(iVar3 + 0x1c) = iVar5;
      *(int *)(iVar3 + 0x20) = iVar7;
      *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xef | 0x10;
      *(byte *)(*(int *)(iVar1 + 0x1c) + 0x70) = *(byte *)(*(int *)(iVar1 + 0x1c) + 0x70) | 2;
      if ((uint)param_1[0x1f] < (uint)param_1[7]) {
        iVar1 = *(int *)(param_1[9] + param_1[0x1f] * 4);
      }
      else {
        iVar1 = 0;
      }
      *(undefined1 *)(iVar1 + 0x30) = 0;
      func_002316CC(iVar1 + 0x24,fparam_0_00);
      if ((uint)param_1[0x1f] < (uint)param_1[7]) {
        iVar1 = *(int *)(param_1[9] + param_1[0x1f] * 4);
      }
      else {
        iVar1 = 0;
      }
      func_004A523C(iVar1,1);
      piVar6 = param_1 + 0x23;
      if ((uint)param_1[0x1f] < 0x14) {
        piVar6 = piVar6 + param_1[0x1f] * 3;
      }
      iVar3 = piVar6[1];
      iVar5 = piVar6[2];
      iVar1 = *(int *)(**(int **)(param_1[0x1d] + 0x1c) + 0x10);
      *(int *)(iVar1 + 0x1c) = *piVar6;
      *(int *)(iVar1 + 0x20) = iVar3;
      *(int *)(iVar1 + 0x24) = iVar5;
      *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xef | 0x10;
      func_004A4860(param_1[0x1d],4,0,0);
      func_004A4980(param_1[0x1d],1,ALBW_AS_F32(param_1[100]));
      param_1[0x1e] = param_1[0x1f];
    }
  }
LAB_0038a298:
  *(byte *)(param_1 + 0x65) = *(byte *)(param_1 + 0x65) & 0xfd;
  return;
}

