#include "ghidra_types.h"

extern int DAT_00554d90;
extern undefined4 DAT_00554d94;

// USA 00554D78 <- EU 00554D50 (Ghidra, non-matching)
// GLOBAL DAT_00554d90 int
// GLOBAL DAT_00554d94 undefined4

void func_00554D78(int param_1)

{
  short sVar1;
  
  sVar1 = *(short *)(DAT_00554d90 + *(int *)(param_1 + 0x1c));
  if ((-1 < sVar1) && (sVar1 < 1)) {
    return;
  }
  return;
}

