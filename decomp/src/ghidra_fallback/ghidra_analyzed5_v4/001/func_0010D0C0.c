#include "ghidra_types.h"

extern undefined4 *DAT_0010d0e4;
extern undefined4 DAT_0010d0e8;

// USA 0010D0C0 <- EU 0010D0C0 (Ghidra, non-matching)
// GLOBAL DAT_0010d0e4 undefined4 *
// GLOBAL DAT_0010d0e8 undefined4

undefined4 * func_0010D0C0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = DAT_0010d0e4;
  param_1[1] = 0;
  uVar2 = puVar1[1];
  param_1[2] = *puVar1;
  param_1[3] = uVar2;
  *param_1 = DAT_0010d0e8;
  return param_1;
}

