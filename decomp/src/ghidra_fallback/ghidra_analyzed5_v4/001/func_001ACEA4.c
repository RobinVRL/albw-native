#include "ghidra_types.h"

extern undefined4 DAT_001acf00;
extern undefined4 DAT_001acf04;

// USA 001ACEA4 <- EU 001ACEA4 (Ghidra, non-matching)
// GLOBAL DAT_001acf00 undefined4
// GLOBAL DAT_001acf04 undefined4

void func_001ACEA4(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_001acf00;
  *(undefined4 *)(param_1 + 0x3dc) = DAT_001acf00;
  *(undefined4 *)(param_1 + 0x3e0) = uVar1;
  *(undefined4 *)(param_1 + 0x3e4) = uVar1;
  uVar1 = DAT_001acf04;
  *(int *)(param_1 + 0x8f4) =
       *(int *)(param_1 + 0x95c + *(short *)(param_1 + 0x32) * 4) * 0x20000000 + 0x40000000 +
       *(int *)(param_1 + 0x954);
  *(undefined4 *)(param_1 + 0x93c) = 0x1e;
  *(undefined4 *)(param_1 + 0x940) = uVar1;
  *(undefined4 *)(param_1 + 0x938) = 0;
  return;
}

