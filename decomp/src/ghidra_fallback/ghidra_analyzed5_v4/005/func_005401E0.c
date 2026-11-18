#include "ghidra_types.h"

extern int DAT_00540204;

// USA 005401E0 <- EU 005401B8 (Ghidra, non-matching)
// GLOBAL DAT_00540204 int

undefined4 func_005401E0(int param_1)

{
  int iVar1;
  
  iVar1 = (int)*(short *)(*(int *)(param_1 + 0x14) + 0x42);
  if ((iVar1 != 0x23 && iVar1 != 0x26) &&
     ((*(int *)(*(int *)(*(int *)(param_1 + 0x14) + 0x10) + 0x5b0) != 0x3f800000 ||
      ((*(uint *)(DAT_00540204 + iVar1 * 0x10 + 4) & 0x100) != 0)))) {
    return 0;
  }
  return 1;
}

