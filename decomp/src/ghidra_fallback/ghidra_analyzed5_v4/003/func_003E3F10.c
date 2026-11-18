#include "ghidra_types.h"

extern int func_0010C160(int *param_1);
extern int *DAT_003e3efc;

// USA 003E3F10 <- EU 003E3EF0 (Ghidra, non-matching)
// GLOBAL DAT_003e3efc int *

undefined4 func_003E3F10(undefined4 param_1)

{
  return func_0010C160(DAT_003e3efc);
}

