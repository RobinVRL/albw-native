#include "ghidra_types.h"

extern undefined4 DAT_0026f148;

// USA 0026F0F0 <- EU 0026F118 (Ghidra, non-matching)
// GLOBAL DAT_0026f148 undefined4

undefined4 func_0026F0F0(undefined1 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0xff;
  param_1[2] = 1;
  uVar1 = DAT_0026f148;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  return (undefined4)param_1;
}

