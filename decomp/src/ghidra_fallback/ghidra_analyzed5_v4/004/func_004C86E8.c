#include "ghidra_types.h"

extern undefined4 DAT_004c86dc;
extern undefined4 DAT_004c86e0;

// GLOBAL DAT_004c86dc undefined4
// GLOBAL DAT_004c86e0 undefined4
// USA 004C86E8 <- EU 004C86C0 (Ghidra, function missing from the decomp table)

/* WARNING: Unknown calling convention */

void func_004C86E8(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = DAT_004c86e0;
  uVar1 = DAT_004c86dc;
  *(undefined4 *)(param_1 + 8) = DAT_004c86dc;
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  return;
}

