#include "ghidra_types.h"

extern undefined4 DAT_00420ed8;

// USA 00420EE0 <- EU 00420EC0 (Ghidra, non-matching)
// GLOBAL DAT_00420ed8 undefined4

undefined4 * func_00420EE0(undefined4 *param_1)

{
  *param_1 = DAT_00420ed8;
  *(undefined1 *)(param_1 + 1) = 1;
  *(undefined1 *)((int)param_1 + 5) = 1;
  return param_1;
}

