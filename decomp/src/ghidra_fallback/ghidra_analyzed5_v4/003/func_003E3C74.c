#include "ghidra_types.h"

extern int DAT_003e3c64;

// USA 003E3C74 <- EU 003E3C54 (Ghidra, non-matching)
// GLOBAL DAT_003e3c64 int

undefined4 func_003E3C74(undefined4 param_1)

{
  return *(undefined4 *)(DAT_003e3c64 + 0xc);
}

