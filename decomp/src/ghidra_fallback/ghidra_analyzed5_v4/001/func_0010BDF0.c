#include "ghidra_types.h"

extern undefined4 DAT_0010be2c;
extern undefined4 DAT_0010be30;
extern undefined4 DAT_0010be34;

// USA 0010BDF0 <- EU 0010BDF0 (Ghidra, non-matching)
// GLOBAL DAT_0010be2c undefined4
// GLOBAL DAT_0010be30 undefined4
// GLOBAL DAT_0010be34 undefined4

undefined4 * func_0010BDF0(undefined4 *param_1)

{
  param_1[1] = param_1 + 3;
  param_1[2] = 0x18;
  *(undefined1 *)(param_1[1] + 0x17) = 0;
  *(undefined1 *)param_1[1] = 0;
  *param_1 = DAT_0010be34;
  return param_1;
}

