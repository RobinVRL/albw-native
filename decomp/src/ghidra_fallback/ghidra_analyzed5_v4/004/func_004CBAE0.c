#include "ghidra_types.h"


// USA 004CBAE0 <- EU 004CBAB8 (Ghidra, non-matching)

uint func_004CBAE0(int param_1)

{
  uint uVar1;
  
  if ((*(char *)(param_1 + 0x98f) == '\0') && (*(char *)(param_1 + 0x8e5) != '\x04')) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1 ^ 1;
}

