#include "ghidra_types.h"

extern undefined4 DAT_004e2220;

// USA 004E2224 <- EU 004E21FC (Ghidra, non-matching)
// GLOBAL DAT_004e2220 undefined4

void func_004E2224(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_004e2220;
  *(undefined4 *)(param_1 + 0x518) = 8;
  *(undefined4 *)(param_1 + 0x51c) = uVar1;
  *(undefined4 *)(param_1 + 0x514) = 0;
  return;
}

