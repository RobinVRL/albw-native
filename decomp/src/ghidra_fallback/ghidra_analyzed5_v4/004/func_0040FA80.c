#include "ghidra_types.h"

extern undefined4 DAT_0040fa88;
extern undefined4 DAT_0040fa8c;

// USA 0040FA80 <- EU 0040FA60 (Ghidra, non-matching)
// GLOBAL DAT_0040fa88 undefined4
// GLOBAL DAT_0040fa8c undefined4

undefined4 func_0040FA80(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_0040fa8c;
  *param_1 = DAT_0040fa88;
  param_1[1] = uVar1;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  *(undefined1 *)((int)param_1 + 0xd) = 0;
  *(undefined1 *)((int)param_1 + 0xe) = 0;
  return (undefined4)param_1;
}

