#include "ghidra_types.h"

extern undefined4 DAT_0048d880;
extern undefined4 DAT_0048d884;
extern undefined4 DAT_0048d888;
extern undefined4 DAT_0048d88c;

// USA 0048D854 <- EU 0048D82C (Ghidra, non-matching)
// GLOBAL DAT_0048d880 undefined4
// GLOBAL DAT_0048d884 undefined4
// GLOBAL DAT_0048d888 undefined4
// GLOBAL DAT_0048d88c undefined4

undefined4 * func_0048D854(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_0048d880;
  param_1[1] = 0xffffffff;
  *param_1 = uVar1;
  param_1[2] = 0xffffffff;
  param_1[3] = 0;
  param_1[5] = param_1 + 7;
  param_1[6] = 0x40;
  *(undefined1 *)(param_1[5] + 0x3f) = 0;
  *(undefined1 *)param_1[5] = 0;
  param_1[4] = DAT_0048d88c;
  return param_1;
}

