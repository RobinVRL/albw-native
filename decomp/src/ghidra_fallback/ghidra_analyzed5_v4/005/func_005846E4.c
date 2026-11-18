#include "ghidra_types.h"


// USA 005846E4 <- EU 005846BC (Ghidra, non-matching)

undefined4 func_005846E4(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  while ((*(char *)(param_1 + 4 + iVar1 * 0x40 + 6) < '\0' ||
         (*(char *)(param_1 + 4 + iVar1 * 0x40 + 5) == '\0'))) {
    iVar1 = iVar1 + 1;
    if (iVar1 == 0x14) {
      return 0;
    }
  }
  return 1;
}

