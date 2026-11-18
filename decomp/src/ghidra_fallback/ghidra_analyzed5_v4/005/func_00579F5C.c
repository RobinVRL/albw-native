#include "ghidra_types.h"

extern int DAT_00579fb0;

// USA 00579F5C <- EU 00579F34 (Ghidra, non-matching)
// GLOBAL DAT_00579fb0 int

undefined4 func_00579F5C(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0xd0) != '\x01' && *(char *)(param_1 + 0xd0) != '\x03') {
    return 0;
  }
  uVar2 = (uint)*(short *)(DAT_00579fb0 + param_1);
  iVar1 = *(int *)(param_1 + 0x1c);
  if (-1 < (int)uVar2) {
    if (uVar2 < *(uint *)(iVar1 + 8)) {
      iVar3 = *(int *)(iVar1 + 0xc) + uVar2 * 0x38;
    }
    else {
      iVar3 = *(int *)(iVar1 + 0xc);
    }
    if (*(char *)(iVar3 + 0x35) != '\0') {
      iVar3 = *(int *)(iVar1 + 0xc);
      if (uVar2 < *(uint *)(iVar1 + 8)) {
        iVar3 = iVar3 + uVar2 * 0x38;
      }
      if (*(float *)(iVar3 + 0x18) != *(float *)(iVar3 + 0x14)) {
        return 0;
      }
    }
  }
  return 1;
}

