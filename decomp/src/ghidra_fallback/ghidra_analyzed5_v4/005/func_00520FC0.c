#include "ghidra_types.h"

extern int *DAT_00520fa8;

// USA 00520FC0 <- EU 00520F98 (Ghidra, non-matching)
// GLOBAL DAT_00520fa8 int *

undefined4 func_00520FC0(void)

{
  return *(undefined4 *)(*DAT_00520fa8 + 0x1c);
}

