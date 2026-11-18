#include "ghidra_types.h"

extern undefined4 *DAT_001baa88;
extern undefined4 *DAT_001baa8c;

// USA 001BAA38 <- EU 001BAA38 (Ghidra, non-matching)
// GLOBAL DAT_001baa88 undefined4 *
// GLOBAL DAT_001baa8c undefined4 *

undefined4 func_001BAA38(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = DAT_001baa88[1];
  uVar2 = DAT_001baa88[2];
  *param_1 = *DAT_001baa88;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  uVar1 = DAT_001baa8c[1];
  param_1[3] = *DAT_001baa8c;
  param_1[4] = uVar1;
  param_1[5] = 0x40000000;
  *(undefined2 *)(param_1 + 6) = 0;
  *(undefined2 *)((int)param_1 + 0x1a) = 0;
  param_1[8] = 0;
  param_1[7] = 0xffffffff;
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  *(undefined2 *)(param_1 + 0xb) = 0;
  *(undefined1 *)((int)param_1 + 0x2e) = 0;
  return (undefined4)param_1;
}

