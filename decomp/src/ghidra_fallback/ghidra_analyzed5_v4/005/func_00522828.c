#include "ghidra_types.h"

extern int *DAT_00522878;

// USA 00522828 <- EU 00522800 (Ghidra, non-matching)
// GLOBAL DAT_00522878 int *

bool func_00522828(int param_1,int param_2)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = *(uint *)(param_1 + 0x18);
  if (uVar2 == 0) {
    return false;
  }
  if (param_2 != 0) {
    if (uVar2 - 1 < uVar2) {
      iVar3 = *(int *)(*(int *)(param_1 + 0x20) + (uVar2 - 1) * 4);
    }
    else {
      iVar3 = 0;
    }
    if (iVar3 != param_2) {
      return false;
    }
  }
  if (uVar2 - 1 < uVar2) {
    iVar3 = *(int *)(*(int *)(param_1 + 0x20) + (uVar2 - 1) * 4);
  }
  else {
    iVar3 = 0;
  }
  uVar2 = *(uint *)(*DAT_00522878 + (uint)*(byte *)(iVar3 + 0x70) * 400 + 0x2c) & 2;
  uVar1 = (undefined1)uVar2;
  if (uVar2 != 0) {
    uVar1 = 1;
  }
  return (bool)uVar1;
}

