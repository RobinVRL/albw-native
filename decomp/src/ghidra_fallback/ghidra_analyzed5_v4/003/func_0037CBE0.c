#include "ghidra_types.h"

extern undefined4 DAT_0037cbe0;
extern undefined4 DAT_0037cbe4;

// USA 0037CBE0 <- EU 0037CBBC (Ghidra, non-matching)
// GLOBAL DAT_0037cbe0 undefined4
// GLOBAL DAT_0037cbe4 undefined4

undefined4 func_0037CBE0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_0037cbe0;
  *(uint *)(param_1 + 0x2e0) = *(uint *)(param_1 + 0x2e0) | 4;
  *(undefined4 *)(param_1 + 0x3dc) = uVar1;
  *(undefined4 *)(param_1 + 0x3e4) = uVar1;
  *(undefined4 *)(param_1 + 0x3e0) = DAT_0037cbe4;
  return (undefined4)param_1;
}

