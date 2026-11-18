// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00361658();
extern int *DAT_002fcaf4;

// USA 002FCAF8 <- EU 002FCAD4 (Ghidra, non-matching)
// GLOBAL DAT_002fcaf4 int *

void func_002FCAF8(int param_1)

{
  func_00361658(*DAT_002fcaf4);
  *(undefined1 *)(param_1 + 0x119) = 0;
  return;
}

