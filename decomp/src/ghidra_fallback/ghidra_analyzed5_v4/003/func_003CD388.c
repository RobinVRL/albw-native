#include "ghidra_types.h"

extern undefined4 DAT_003cd3b4;

// USA 003CD388 <- EU 003CD364 (Ghidra, non-matching)
// GLOBAL DAT_003cd3b4 undefined4

undefined4 func_003CD388(undefined4 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = 0;
  *(undefined2 *)(param_1 + 1) = 0;
  *(undefined2 *)((int)param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 2) = 0xc;
  *(undefined1 *)((int)param_1 + 9) = 2;
  *(undefined1 *)((int)param_1 + 10) = 2;
  uVar1 = DAT_003cd3b4;
  *(undefined1 *)((int)param_1 + 0xb) = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[4] = uVar1;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)((int)param_1 + 0x15) = 0;
  *(undefined1 *)((int)param_1 + 0x16) = 0;
  *(undefined1 *)((int)param_1 + 0x17) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)((int)param_1 + 0x19) = 0;
  return (undefined4)param_1;
}

