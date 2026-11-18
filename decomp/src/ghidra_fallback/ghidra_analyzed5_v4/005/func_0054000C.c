#include "ghidra_types.h"


// USA 0054000C <- EU 0053FFE4 (Ghidra, non-matching)

undefined4 func_0054000C(uint param_1)

{
  bool bVar1;
  
  if ((*(char *)(param_1 + 0xc3) == '\0') && (*(int *)(*(int *)(param_1 + 0x10) + 0x438) != 0)) {
    bVar1 = *(int *)(*(int *)(param_1 + 0x10) + 0x5b0) == 0x3f800000;
    if (bVar1) {
      param_1 = (uint)*(byte *)(param_1 + 0x84);
    }
    if (bVar1 && param_1 == 0) {
      return 1;
    }
  }
  return 0;
}

