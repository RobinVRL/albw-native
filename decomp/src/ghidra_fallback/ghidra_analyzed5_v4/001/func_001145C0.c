#include "ghidra_types.h"

extern uint DAT_001145fc;

// USA 001145C0 <- EU 001145C0 (Ghidra, non-matching)
// GLOBAL DAT_001145fc uint

uint func_001145C0(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0 || (param_2 & 0xfffff) != 0) {
    uVar1 = 4;
  }
  if ((param_2 << 1) >> 0x15 != 0) {
    uVar1 = uVar1 | 1;
  }
  if (DAT_001145fc == (param_2 << 1) >> 0x15) {
    uVar1 = uVar1 | 2;
  }
  if (uVar1 == 1) {
    uVar1 = 5;
  }
  return uVar1;
}

