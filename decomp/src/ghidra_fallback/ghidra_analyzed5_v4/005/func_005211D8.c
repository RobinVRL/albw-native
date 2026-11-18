#include "ghidra_types.h"

extern uint DAT_00521190;

// GLOBAL DAT_00521190 uint
// USA 005211D8 <- EU 00521178 (Ghidra, function missing from the decomp table)

bool func_005211D8(int param_1)

{
  return DAT_00521190 < *(uint *)(param_1 + 0x3d4);
}

