#include "ghidra_types.h"

extern int func_0010C0C0(int *param_1);
extern int *DAT_003e3eec;

// USA 003E3F00 <- EU 003E3EE0 (Ghidra, non-matching)
// GLOBAL DAT_003e3eec int *

undefined4 func_003E3F00(undefined4 param_1)

{
  return func_0010C0C0(DAT_003e3eec);
}

