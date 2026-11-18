#include "ghidra_types.h"


// USA 00527E38 <- EU 00527E10 (Ghidra, non-matching)

undefined4 func_00527E38(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(char *)(param_1 + 4 + iVar1 * 0x40 + 6) == param_2) {
      if (param_1 + 4 + iVar1 * 0x40 == 0) {
        return 0;
      }
      return 1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x14);
  return 0;
}

