#include "ghidra_types.h"


// USA 003FF6E0 <- EU 003FF6C0 (Ghidra, non-matching)

undefined1 func_003FF6E0(undefined4 param_1,int param_2)

{
  undefined1 uVar1;
  
  if (((*(byte *)(param_2 + 0x44) & 2) == 0) || (uVar1 = 0, *(char *)(param_2 + 0x45) != '\0')) {
    uVar1 = 1;
  }
  return uVar1;
}

