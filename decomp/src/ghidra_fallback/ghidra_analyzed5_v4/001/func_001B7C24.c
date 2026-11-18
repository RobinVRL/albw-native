#include "ghidra_types.h"

extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0010DB90(void);
extern longlong func_001104E4(int param_1,int param_2);
extern undefined4 DAT_001b7d34;

// USA 001B7C24 <- EU 001B7C24 (Ghidra, non-matching)
// PARAM param_4 Stack[0x0]:4 int
// GLOBAL DAT_001b7d34 undefined4

int func_001B7C24(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  
  uVar4 = 0x80;
  switch(param_3) {
  case 0x100:
    uVar4 = 4;
    break;
  case 0x102:
    uVar4 = 0x20;
    break;
  case 0x103:
    uVar4 = 0xc0;
    break;
  case 0x104:
  case 0x105:
    uVar4 = 0x10;
  }
  if (param_2 != 0x10000) {
    if (param_2 == 0x20000) {
      iVar3 = *(int *)(param_1 + 0x20);
      iVar1 = *(int *)(iVar3 + 8);
    }
    else {
      if (param_2 != 0x30000) {
        return 0;
      }
      iVar3 = *(int *)(param_1 + 0x24);
      iVar1 = *(int *)(iVar3 + 8);
    }
    if (iVar1 < 0) {
      lVar5 = func_001104E4((iVar1 - uVar4) + 1,uVar4);
      iVar1 = (int)lVar5;
    }
    else {
      lVar5 = func_001104E4((iVar1 + uVar4) - 1,uVar4);
      iVar1 = (int)lVar5;
    }
    *(uint *)(iVar3 + 8) = iVar1 * uVar4 + param_4;
    return iVar1 * uVar4;
  }
  if (0 < param_4) {
    piVar2 = *(int **)(param_1 + 0x28);
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)func_0010DB90();
    }
    iVar3 = func_0010CEE0(param_4,piVar2,uVar4);
    return iVar3;
  }
  return 0;
}

