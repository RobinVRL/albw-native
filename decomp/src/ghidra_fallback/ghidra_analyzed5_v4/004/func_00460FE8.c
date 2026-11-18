#include "ghidra_types.h"

extern undefined4 DAT_00460fe0;

// GLOBAL DAT_00460fe0 undefined4
// USA 00460FE8 <- EU 00460FC0 (Ghidra, function missing from the decomp table)

/* WARNING: Unknown calling convention */

void func_00460FE8(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_00460fe0;
  *(undefined2 *)(param_1 + 0xc) = 0;
  *(undefined2 *)(param_1 + 0xe) = 0xffff;
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}

