#include "ghidra_types.h"

extern int *DAT_00122c74;

// USA 00122C40 <- EU 00122C40 (Ghidra, non-matching)
// GLOBAL DAT_00122c74 int *

void func_00122C40(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(*DAT_00122c74 + 0x18);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0xa4) = *(undefined4 *)(param_1 + 0xc);
    *(undefined1 *)(iVar1 + 0x14) = 1;
  }
  return;
}

