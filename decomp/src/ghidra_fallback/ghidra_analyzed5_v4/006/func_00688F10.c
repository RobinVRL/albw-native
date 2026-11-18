#include "ghidra_types.h"

extern undefined4 DAT_00688f24;
extern undefined4 DAT_00688f28;
extern undefined4 DAT_00688f2c;

// USA 00688F10 <- EU 00688EE8 (Ghidra, non-matching)
// GLOBAL DAT_00688f24 undefined4
// GLOBAL DAT_00688f28 undefined4
// GLOBAL DAT_00688f2c undefined4

undefined4 * func_00688F10(undefined4 *param_1)

{
  param_1[1] = param_1 + 3;
  param_1[2] = 0x20;
  *(undefined1 *)(param_1[1] + 0x1f) = 0;
  *(undefined1 *)param_1[1] = 0;
  *param_1 = DAT_00688f2c;
  return param_1;
}

