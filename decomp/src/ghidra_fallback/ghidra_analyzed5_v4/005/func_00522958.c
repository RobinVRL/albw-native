#include "ghidra_types.h"

extern int *DAT_00522980;

// USA 00522958 <- EU 00522930 (Ghidra, non-matching)
// GLOBAL DAT_00522980 int *

undefined4 func_00522958(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(param_1 + 0x18);
  if (uVar3 == 0) {
    uVar1 = 0;
  }
  else {
    if (uVar3 - 1 < uVar3) {
      iVar2 = *(int *)(*(int *)(param_1 + 0x20) + (uVar3 - 1) * 4);
    }
    else {
      iVar2 = 0;
    }
    uVar1 = 0;
    if ((*(uint *)(*DAT_00522980 + (uint)*(byte *)(iVar2 + 0x70) * 400 + 0x2c) & 1) != 0) {
      uVar1 = 1;
    }
  }
  return uVar1;
}

