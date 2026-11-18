#include "ghidra_types.h"

extern int func_001672F8(int param_1,uint param_2,float fparam_0,float fparam_1);
extern float DAT_00231948;

// USA 002317C0 <- EU 002317C0 (Ghidra, non-matching)
// GLOBAL DAT_00231948 float

float func_002317C0(undefined2 *param_1,float fparam_0)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  
  iVar2 = *(int *)(param_1 + 4);
  fVar7 = fparam_0;
  if ((iVar2 != 0) && (uVar5 = (uint)(short)param_1[1], -1 < (int)uVar5)) {
    fVar7 = DAT_00231948;
    switch(*param_1) {
    case 0:
      func_001672F8(iVar2,uVar5,DAT_00231948,fparam_0);
      return fVar7;
    case 1:
      fVar8 = DAT_00231948;
      func_001672F8(iVar2,uVar5,DAT_00231948,DAT_00231948);
      iVar2 = *(int *)(*(int *)(param_1 + 4) + 0xc);
      if ((uint)(int)(short)param_1[1] < *(uint *)(*(int *)(param_1 + 4) + 8)) {
        iVar2 = iVar2 + (short)param_1[1] * 0x38;
      }
      *(float *)(iVar2 + 0x14) = fVar8;
      *(float *)(*(int *)(iVar2 + 0x10) + 0x10) = fVar8;
      break;
    case 2:
      if (uVar5 < *(uint *)(iVar2 + 8)) {
        iVar6 = *(int *)(iVar2 + 0xc) + uVar5 * 0x38;
      }
      else {
        iVar6 = *(int *)(iVar2 + 0xc);
      }
      fVar7 = *(float *)(iVar6 + 0x20);
      func_001672F8(iVar2,uVar5,fVar7,-fparam_0);
      return fVar7;
    case 3:
      func_001672F8(iVar2,uVar5,DAT_00231948,DAT_00231948);
      iVar2 = *(int *)(param_1 + 4);
      uVar5 = (uint)(short)param_1[1];
      if (uVar5 < *(uint *)(iVar2 + 8)) {
        iVar6 = *(int *)(iVar2 + 0xc) + uVar5 * 0x38;
        uVar1 = uVar5 * 7;
      }
      else {
        iVar6 = *(int *)(iVar2 + 0xc);
        uVar1 = uVar5;
      }
      iVar3 = *(int *)(iVar2 + 0xc);
      uVar4 = *(undefined4 *)(iVar6 + 0x20);
      if (uVar5 < *(uint *)(iVar2 + 8)) {
        iVar3 = iVar3 + uVar1 * 8;
      }
      *(undefined4 *)(iVar3 + 0x14) = uVar4;
      *(undefined4 *)(*(int *)(iVar3 + 0x10) + 0x10) = uVar4;
      return fVar7;
    case 4:
      if (fparam_0 < DAT_00231948) {
        if (uVar5 < *(uint *)(iVar2 + 8)) {
          iVar6 = *(int *)(iVar2 + 0xc) + uVar5 * 0x38;
        }
        else {
          iVar6 = *(int *)(iVar2 + 0xc);
        }
        fVar7 = *(float *)(iVar6 + 0x20);
        func_001672F8(iVar2,uVar5,fVar7,-fparam_0);
      }
      else {
        func_001672F8(iVar2,uVar5,DAT_00231948,fparam_0);
      }
      uVar4 = *(undefined4 *)(param_1 + 2);
      iVar2 = *(int *)(param_1 + 4);
      if ((uint)(int)(short)param_1[1] < *(uint *)(iVar2 + 8)) {
        iVar2 = *(int *)(iVar2 + 0xc) + (short)param_1[1] * 0x38;
      }
      else {
        iVar2 = *(int *)(iVar2 + 0xc);
      }
      *(undefined4 *)(iVar2 + 0x14) = uVar4;
      *(undefined4 *)(*(int *)(iVar2 + 0x10) + 0x10) = uVar4;
      return fVar7;
    }
  }
  return fVar7;
}

