#include "ghidra_types.h"


// USA 004CB9BC <- EU 004CB994 (Ghidra, non-matching)

uint func_004CB9BC(int param_1)

{
  uint uVar1;
  
  if ((*(char *)(param_1 + 0x98e) == '\0') && (*(char *)(param_1 + 0x8e5) != '\x02')) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1 ^ 1;
}

