#include "ghidra_types.h"


// USA 005843F0 <- EU 005843C8 (Ghidra, non-matching)

undefined4 func_005843F0(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (-1 < *(char *)(param_1 + iVar1 * 0x40 + 10)) {
      return 1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x14);
  return 0;
}

