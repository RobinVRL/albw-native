#include "ghidra_types.h"

extern undefined4 DAT_00234c2c;

// USA 00234BEC <- EU 00234BEC (Ghidra, non-matching)
// GLOBAL DAT_00234c2c undefined4

undefined4 func_00234BEC(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_00234c2c;
  *param_1 = DAT_00234c2c;
  param_1[1] = uVar1;
  param_1[2] = uVar1;
  param_1[3] = uVar1;
  param_1[4] = uVar1;
  param_1[5] = uVar1;
  param_1[6] = 0;
  *(undefined2 *)(param_1 + 7) = 0;
  *(undefined2 *)((int)param_1 + 0x1e) = 0xffff;
  *(undefined2 *)(param_1 + 8) = 0xffff;
  *(undefined2 *)((int)param_1 + 0x22) = 0xffff;
  param_1[9] = 0;
  return (undefined4)param_1;
}

