#include "ghidra_types.h"

extern int *DAT_00521028;

// GLOBAL DAT_00521028 int *
// USA 00521058 <- EU 00521018 (Ghidra, function missing from the decomp table)

undefined4 func_00521058(void)

{
  return *(undefined4 *)(*DAT_00521028 + 0x1c);
}

