#include "ghidra_types.h"


// USA 0051D50C <- EU 0051D4E4 (Ghidra, non-matching)

bool func_0051D50C(int param_1)

{
  return *(char *)(*(int *)(*(int *)(param_1 + 0x18) + 0x184) + 0x10) != '\0';
}

