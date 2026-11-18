#include "ghidra_types.h"

extern undefined4 DAT_0012ca00;

// USA 0012C9C4 <- EU 0012C9C4 (Ghidra, non-matching)
// GLOBAL DAT_0012ca00 undefined4

undefined4 * func_0012C9C4(undefined4 *param_1)

{
  *param_1 = DAT_0012ca00;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)((int)param_1 + 0xd) = 0;
  *(undefined1 *)((int)param_1 + 0xe) = 0;
  *(undefined1 *)((int)param_1 + 0xf) = 0x80;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 3;
  return param_1;
}

