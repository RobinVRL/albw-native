#include "ghidra_types.h"


// USA 0043738C <- EU 0043736C (Ghidra, non-matching)

undefined1 func_0043738C(undefined4 param_1,int param_2)

{
  undefined1 uVar1;
  
  if (((*(byte *)(param_2 + 0x44) & 2) == 0) || (uVar1 = 0, *(char *)(param_2 + 0x45) != '\0')) {
    uVar1 = 1;
  }
  return uVar1;
}

