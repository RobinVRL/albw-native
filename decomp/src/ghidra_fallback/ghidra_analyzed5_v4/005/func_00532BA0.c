#include "ghidra_types.h"

extern float DAT_00532c00;

// USA 00532BA0 <- EU 00532B78 (Ghidra, non-matching)
// GLOBAL DAT_00532c00 float

undefined4 func_00532BA0(int param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 == 0) {
    return 1;
  }
  uVar1 = (uint)*(short *)(param_1 + 2);
  if (-1 < (int)uVar1) {
    if (uVar1 < *(uint *)(iVar2 + 8)) {
      iVar2 = *(int *)(iVar2 + 0xc) + uVar1 * 0x38;
    }
    else {
      iVar2 = *(int *)(iVar2 + 0xc);
    }
    if (*(char *)(iVar2 + 0x28) == '\0') {
      if (*(float *)(iVar2 + 0x1c) < DAT_00532c00) {
        if (*(float *)(iVar2 + 0x14) <= DAT_00532c00) {
          return 1;
        }
      }
      else if (*(float *)(iVar2 + 0x14) == *(float *)(iVar2 + 0x20)) {
        return 1;
      }
    }
    return 0;
  }
  return 1;
}

