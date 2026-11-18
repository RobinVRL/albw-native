#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern uint *DAT_001119f0;

// USA 001118F8 <- EU 001118F8 (Ghidra, non-matching)
// GLOBAL DAT_001119f0 uint *

undefined8 func_001118F8(int param_1,uint *param_2)

{
  short sVar1;
  short sVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  uVar5 = (uint)*(byte *)(param_1 + 0x10);
  if (param_2 == (uint *)0x0) {
    param_2 = DAT_001119f0;
  }
  iVar4 = 0;
  if (uVar5 == 1) {
    iVar4 = *(int *)(param_1 + 4);
    sVar1 = *(short *)(iVar4 + 0x3a);
    if (sVar1 != 0) {
      sVar2 = *(short *)(iVar4 + 0x38);
      uVar5 = func_00111A64(param_2);
      lVar3 = (ulonglong)(uint)((int)sVar1 - (int)sVar2) * (ulonglong)uVar5;
      return CONCAT44((int)lVar3,(int)((ulonglong)lVar3 >> 0x20) + (int)sVar2);
    }
    iVar4 = (int)*(short *)(iVar4 + 0x38);
    uVar5 = 0;
  }
  else if (uVar5 == 2) {
    iVar4 = *(int *)(param_1 + 8);
    sVar1 = *(short *)(iVar4 + 0x36);
    if (sVar1 != 0) {
      sVar2 = *(short *)(iVar4 + 0x34);
      uVar5 = func_00111A64(param_2);
      lVar3 = (ulonglong)(uint)((int)sVar1 - (int)sVar2) * (ulonglong)uVar5;
      return CONCAT44((int)lVar3,(int)((ulonglong)lVar3 >> 0x20) + (int)sVar2);
    }
    iVar4 = (int)*(short *)(iVar4 + 0x34);
    uVar5 = 0;
  }
  else if (uVar5 == 3) {
    iVar4 = *(int *)(param_1 + 4);
    sVar1 = *(short *)(iVar4 + 0x3a);
    if (sVar1 == 0) {
      iVar6 = (int)*(short *)(iVar4 + 0x38);
    }
    else {
      sVar2 = *(short *)(iVar4 + 0x38);
      uVar5 = func_00111A64(param_2);
      iVar6 = (int)((ulonglong)(uint)((int)sVar1 - (int)sVar2) * (ulonglong)uVar5 >> 0x20) +
              (int)sVar2;
    }
    iVar4 = *(int *)(param_1 + 8);
    sVar1 = *(short *)(iVar4 + 0x36);
    if (sVar1 == 0) {
      iVar4 = (int)*(short *)(iVar4 + 0x34);
      uVar5 = 0;
    }
    else {
      sVar2 = *(short *)(iVar4 + 0x34);
      uVar5 = func_00111A64(param_2);
      lVar3 = (ulonglong)(uint)((int)sVar1 - (int)sVar2) * (ulonglong)uVar5;
      uVar5 = (uint)lVar3;
      iVar4 = (int)((ulonglong)lVar3 >> 0x20) + (int)sVar2;
    }
    iVar4 = iVar4 + iVar6;
    if (iVar4 < 0) {
      iVar4 = 0;
    }
  }
  return CONCAT44(uVar5,iVar4);
}

