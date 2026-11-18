#include "ghidra_types.h"

extern int *DAT_00556ca4;

// GLOBAL DAT_00556ca4 int *
// USA 00556CF4 <- EU 00556C90 (Ghidra, function missing from the decomp table)

undefined4 func_00556CF4(void)

{
  return *(undefined4 *)(*(int *)(*DAT_00556ca4 + 0x10) + 0x414);
}

