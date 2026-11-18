#include "ghidra_types.h"

extern int DAT_0029275c;

// USA 002926D4 <- EU 002926FC (Ghidra, non-matching)
// GLOBAL DAT_0029275c int

undefined4 func_002926D4(int param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  
  if ((*(char *)(DAT_0029275c + *(short *)(*(int *)(param_1 + 0x14) + 0x42) * 0x10) == '\x14') &&
     (iVar1 = *(int *)(*(int *)(param_1 + 0x14) + 0x48), iVar1 != 0)) {
    *(undefined1 *)(iVar1 + 0x76) = 1;
    *(undefined4 *)(iVar1 + 0x94) = *param_2;
    *(undefined4 *)(iVar1 + 0x98) = param_2[1];
    *(undefined4 *)(iVar1 + 0x9c) = param_2[2];
    *(undefined4 *)(iVar1 + 0x58) = param_3;
    return 1;
  }
  return 0;
}

