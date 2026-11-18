#include "ghidra_types.h"


// USA 005742C4 <- EU 0057429C (Ghidra, non-matching)

undefined4 func_005742C4(uint param_1)

{
  bool bVar1;
  
  if (*(char *)(param_1 + 0xd8) == '\x01') {
    bVar1 = *(char *)(param_1 + 0xd) == '\0';
    if (bVar1) {
      param_1 = (uint)*(byte *)(param_1 + 0xe);
    }
    if (bVar1 && param_1 == 0) {
      return 1;
    }
  }
  else if (*(char *)(param_1 + 0x78) == '\x02') {
    return 1;
  }
  return 0;
}

