// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00361658();
extern int *DAT_002fcb14;

// USA 002FCB1C <- EU 002FCAF8 (Ghidra, non-matching)
// GLOBAL DAT_002fcb14 int *

undefined4 func_002FCB1C(int param_1)

{
  if (*(char *)(param_1 + 0x119) != '\0') {
    return func_00361658(*DAT_002fcb14);
  }
  return 0;
}

