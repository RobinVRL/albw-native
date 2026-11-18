#include "ghidra_types.h"

extern undefined4 DAT_00689038;
extern undefined4 DAT_0068903c;
extern undefined4 DAT_00689040;

// USA 00689024 <- EU 00688FFC (Ghidra, non-matching)
// GLOBAL DAT_00689038 undefined4
// GLOBAL DAT_0068903c undefined4
// GLOBAL DAT_00689040 undefined4

undefined4 * func_00689024(undefined4 *param_1)

{
  param_1[1] = param_1 + 3;
  param_1[2] = 0x40;
  *(undefined1 *)(param_1[1] + 0x3f) = 0;
  *(undefined1 *)param_1[1] = 0;
  *param_1 = DAT_00689040;
  return param_1;
}

