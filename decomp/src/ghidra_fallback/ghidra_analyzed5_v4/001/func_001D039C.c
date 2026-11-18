#include "ghidra_types.h"

extern int func_0051C15C(int param_1,int *param_2);
extern int func_00523860(int param_1);
extern int func_00523934(int param_1);
extern int func_00523B24(int param_1);
extern int func_00523C78(int param_1);
extern int *DAT_001d0520;
extern int *DAT_001d0524;

// USA 001D039C <- EU 001D039C (Ghidra, non-matching)
// GLOBAL DAT_001d0520 int *
// GLOBAL DAT_001d0524 int *

undefined1 func_001D039C(int param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  piVar1 = DAT_001d0520;
  if (param_3 == 0) {
    return *(undefined1 *)(param_1 + 0x5d7);
  }
  if (param_3 == 1) {
    iVar3 = (**(code **)(**(int **)(param_1 + 0x5e4) + 0x40))(*(int **)(param_1 + 0x5e4));
    uVar4 = *(undefined4 *)(param_1 + 0x5e8);
    *(undefined4 *)(iVar3 + 0x24) = uVar4;
    if (*(int *)(iVar3 + 0x20) == 0) {
      *(undefined4 *)(iVar3 + 0x20) = uVar4;
    }
    *(undefined4 *)(iVar3 + 0x1c) = uVar4;
    iVar5 = *(int *)(param_1 + 0x5e8);
    iVar3 = func_00523860(*piVar1);
    *(int *)(iVar5 + 0x1c) = iVar3;
    iVar5 = *(int *)(param_1 + 0x5e8);
    iVar3 = func_00523B24(*piVar1);
    *(int *)(iVar5 + 0x20) = iVar3;
    if (*(char *)(*piVar1 + 0x2d4) != '\x01') {
      return 1;
    }
  }
  else {
    iVar3 = *DAT_001d0520;
    if (param_3 == 2) {
      if (*(char *)(iVar3 + 0x2d4) != '\x01') {
        return 1;
      }
      *(undefined1 *)(iVar3 + 0x2f5) = 1;
    }
    else if (param_3 == 4) {
      iVar3 = (**(code **)(**(int **)(param_1 + 0x5e4) + 0x40))(*(int **)(param_1 + 0x5e4));
      uVar4 = *(undefined4 *)(param_1 + 0x5e8);
      *(undefined4 *)(iVar3 + 0x24) = uVar4;
      if (*(int *)(iVar3 + 0x20) == 0) {
        *(undefined4 *)(iVar3 + 0x20) = uVar4;
      }
      *(undefined4 *)(iVar3 + 0x1c) = uVar4;
      iVar5 = *(int *)(param_1 + 0x5e8);
      iVar3 = func_00523934(*piVar1);
      *(int *)(iVar5 + 0x1c) = iVar3;
      iVar5 = *(int *)(param_1 + 0x5e8);
      iVar3 = func_00523C78(*piVar1);
      *(int *)(iVar5 + 0x20) = iVar3;
      if (*(char *)(param_1 + 0x63e) == '\x01') {
        return 1;
      }
      *(undefined4 *)(*(int *)(param_1 + 0x5e8) + 0x24) = *(undefined4 *)(param_1 + 0x60c);
      func_0051C15C(*DAT_001d0524,(int *)(param_1 + 0x610));
    }
    else if (param_3 == 0xb) {
      iVar3 = func_00523934(iVar3);
      if (99 < iVar3) {
        return 1;
      }
    }
    else if ((param_3 == 10) && (iVar3 = func_00523934(iVar3), 299 < iVar3)) {
      if (iVar3 < 500) {
        return 1;
      }
      if (iVar3 < 700) {
        uVar2 = 2;
      }
      else {
        uVar2 = 3;
      }
      return uVar2;
    }
  }
  return 0;
}

