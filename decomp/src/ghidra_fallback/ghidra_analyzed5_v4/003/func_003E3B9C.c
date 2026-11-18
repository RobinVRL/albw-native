#include "ghidra_types.h"

extern int DAT_003e3b90;

// USA 003E3B9C <- EU 003E3B7C (Ghidra, non-matching)
// GLOBAL DAT_003e3b90 int

int func_003E3B9C(undefined4 param_1)

{
  return (int)*(char *)(*(int *)(DAT_003e3b90 + 0x1c) + 0x75);
}

