#include "ghidra_types.h"

extern int func_0041D840(int *param_1);
extern undefined4 DAT_0058e9c4;

// USA 0058E99C <- EU 0058E974 (Ghidra, non-matching)
// GLOBAL DAT_0058e9c4 undefined4

void func_0058E99C(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((param_2 == 0x2c) && (iVar2 = func_0041D840((int *)(param_1 + 4)), iVar2 != 0)) {
    *(undefined4 *)(iVar2 + 0x18) = 0;
    uVar1 = DAT_0058e9c4;
    *(undefined4 *)(iVar2 + 0x1c) = 0;
    *(undefined4 *)(iVar2 + 0x20) = 0;
    *(undefined4 *)(iVar2 + 0x24) = uVar1;
    *(undefined1 *)(iVar2 + 0x28) = 1;
    *(undefined1 *)(iVar2 + 0x29) = 0;
  }
  return;
}

