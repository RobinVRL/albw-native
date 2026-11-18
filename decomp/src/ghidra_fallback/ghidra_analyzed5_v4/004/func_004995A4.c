#include "ghidra_types.h"

extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern longlong func_001104E4(int param_1,int param_2);

// USA 004995A4 <- EU 0049957C (Ghidra, non-matching)
// PARAM param_4 Stack[0x0]:4 int

int func_004995A4(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  
  uVar4 = 0x80;
  switch(param_3) {
  case 0x100:
    uVar4 = 4;
    break;
  case 0x102:
  case 0x104:
  case 0x105:
    uVar4 = 0x10;
    break;
  case 0x103:
    uVar4 = 0xc0;
  }
  if (param_3 == 0x101) {
    if (param_2 == 0x10000) goto LAB_00499650;
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + param_4;
  }
  else if (param_3 == 0x102) {
    if (param_2 == 0x10000) goto LAB_00499650;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + param_4;
  }
  if (param_2 != 0x10000) {
    if (param_2 == 0x20000) {
      iVar2 = *(int *)(param_1 + 0xc);
      if (iVar2 < 0) {
        lVar5 = func_001104E4((iVar2 - uVar4) + 1,uVar4);
        iVar2 = (int)lVar5;
      }
      else {
        lVar5 = func_001104E4((iVar2 + uVar4) - 1,uVar4);
        iVar2 = (int)lVar5;
      }
      iVar2 = iVar2 * uVar4;
      uVar3 = *(uint *)(param_1 + 0x14);
      uVar4 = iVar2 + param_4;
      iVar1 = -(uint)(uVar4 < uVar3);
      if ((int)-(iVar1 + (uint)(uVar4 != uVar3)) < 0 ==
          (SBORROW4(0,iVar1) != SBORROW4((uint)(uVar4 < uVar3),(uint)(uVar4 != uVar3)))) {
        *(int *)(param_1 + 0xc) = iVar2 + param_4;
        return iVar2;
      }
    }
    else {
      if (param_2 != 0x30000) {
        return 0;
      }
      iVar2 = *(int *)(param_1 + 0x10);
      if (iVar2 < 0) {
        lVar5 = func_001104E4((iVar2 - uVar4) + 1,uVar4);
        iVar2 = (int)lVar5;
      }
      else {
        lVar5 = func_001104E4((iVar2 + uVar4) - 1,uVar4);
        iVar2 = (int)lVar5;
      }
      iVar2 = iVar2 * uVar4;
      uVar3 = *(uint *)(param_1 + 0x18);
      uVar4 = iVar2 + param_4;
      iVar1 = -(uint)(uVar4 < uVar3);
      if ((int)-(iVar1 + (uint)(uVar4 != uVar3)) < 0 ==
          (SBORROW4(0,iVar1) != SBORROW4((uint)(uVar4 < uVar3),(uint)(uVar4 != uVar3)))) {
        *(int *)(param_1 + 0x10) = iVar2 + param_4;
        return iVar2;
      }
    }
    return 0;
  }
LAB_00499650:
  iVar2 = func_0010CEE0(param_4,*(int **)(param_1 + 8),uVar4);
  return iVar2;
}

