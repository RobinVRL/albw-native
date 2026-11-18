#include "ghidra_types.h"


// USA 00527E00 <- EU 00527DD8 (Ghidra, non-matching)

int func_00527E00(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(char *)(param_1 + 4 + iVar1 * 0x40 + 6) == param_2) {
      return param_1 + 4 + iVar1 * 0x40;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x14);
  return 0;
}

