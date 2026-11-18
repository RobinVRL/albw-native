#include "ghidra_types.h"


// USA 00492D20 <- EU 00492CF8 (Ghidra, non-matching)

undefined4 * func_00492D20(undefined4 *param_1,undefined4 param_2)

{
  param_1[1] = 0;
  *(undefined1 *)((int)param_1 + 0x12) = 0x10;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)((int)param_1 + 0xd) = 0;
  *(undefined1 *)((int)param_1 + 0xe) = 0;
  *(undefined1 *)((int)param_1 + 0xf) = 0;
  *(undefined2 *)(param_1 + 4) = 0;
  *param_1 = param_2;
  return param_1;
}

