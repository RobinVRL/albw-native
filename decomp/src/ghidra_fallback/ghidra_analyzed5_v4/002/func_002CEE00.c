#include "ghidra_types.h"

extern int func_001212EC(int param_1,int *param_2,int param_3,int param_4);
extern int func_002CECA0(int param_1);
extern int func_0036720C(int param_1,int param_2,undefined2 param_3,int param_4,int param_5, undefined1 param_6,int param_7);
extern int func_00663954(undefined4 *param_1,undefined1 param_2);
extern int *DAT_002cef14;

// USA 002CEE00 <- EU 002CEDDC (Ghidra, non-matching)
// GLOBAL DAT_002cef14 int *

void func_002CEE00(int param_1)

{
  int iVar1;
  undefined1 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x4e8);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x49c) == 0) {
      *(int *)(param_1 + 0x49c) = 1;
    }
    else {
      *(undefined4 *)(param_1 + 0x49c) = 0;
      *(int *)(param_1 + 0x4e8) = 1;
    }
    return;
  }
  if (iVar1 == 1) {
    iVar1 = func_002CECA0(param_1);
    if (iVar1 != 0) {
LAB_002cee74:
      *(int *)(param_1 + 0x4e8) = *(int *)(param_1 + 0x4e8) + 1;
      return;
    }
  }
  else if (iVar1 == 2) {
    if (*(int *)(param_1 + 0x49c) == 0) {
      func_0036720C(param_1 + 0x4a8,0x3c,0x82,0x3c,0,3,1);
      *(int *)(param_1 + 0x49c) = *(int *)(param_1 + 0x49c) + 1;
      return;
    }
    if ((*(short *)(param_1 + 0x4b8) == 0) && (*(short *)(param_1 + 0x4ba) != 0)) {
      if (*(int *)(*DAT_002cef14 + 0x18) != 0) {
        func_001212EC(*(int *)(*DAT_002cef14 + 0x18),(int *)(param_1 + 0x4e0),0,0);
      }
      goto LAB_002cee74;
    }
  }
  else if (iVar1 == 3) {
    uVar2 = 0;
    if (*(int *)(param_1 + 0x43c) != 0) {
      uVar2 = 7;
    }
    func_00663954((undefined4 *)(param_1 + 0x40c),uVar2);
  }
  return;
}

