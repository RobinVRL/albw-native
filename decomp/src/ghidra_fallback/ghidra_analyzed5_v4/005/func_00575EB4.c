#include "ghidra_types.h"

extern int *DAT_00575f20;

// USA 00575EB4 <- EU 00575E8C (Ghidra, non-matching)
// GLOBAL DAT_00575f20 int *

undefined4 func_00575EB4(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  
  iVar1 = *(int *)(*DAT_00575f20 + 0x1c);
  iVar2 = (int)*(char *)(*DAT_00575f20 + 0x18);
  uVar3 = iVar2 - 2;
  bVar5 = 2 < uVar3;
  bVar4 = uVar3 == 3;
  if (3 < uVar3) {
    bVar5 = iVar2 != 0x16;
    bVar4 = iVar2 == 0x17;
  }
  if (bVar5 && !bVar4) {
    bVar5 = 1 < iVar2 - 0x18U;
    bVar4 = iVar2 - 0x18U == 2;
  }
  if (bVar5 && !bVar4) {
    if (iVar2 == 0) {
      if (iVar1 == 0x21 || iVar1 == 0x25) {
        return 0;
      }
      if (iVar1 == 0x26 || iVar1 == 0x28) {
        return 0;
      }
      if (iVar1 == 0x29 || iVar1 == 0x2a) {
        return 0;
      }
      if (iVar1 == 0x2b || iVar1 == 0x2c) {
        return 0;
      }
    }
    else if ((iVar2 == 1) && (iVar1 == 0x26)) {
      return 0;
    }
    if (*(char *)(param_1 + 0xd9) == '\0') {
      return 1;
    }
  }
  return 0;
}

