#include "ghidra_types.h"

extern int func_0034CA24(undefined4 *param_1);
extern undefined4 DAT_0034cac8;

// USA 0034CAA0 <- EU 0034CA7C (Ghidra, non-matching)
// GLOBAL DAT_0034cac8 undefined4

undefined4 * func_0034CAA0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 8) = 0xf;
  *(undefined1 *)((int)param_1 + 0x21) = 0xff;
  *(undefined1 *)((int)param_1 + 0x22) = 0xff;
  uVar1 = DAT_0034cac8;
  *(undefined2 *)(param_1 + 0xc) = 0;
  *(undefined2 *)((int)param_1 + 0x32) = 1;
  param_1[0xd] = uVar1;
  func_0034CA24(param_1);
  return param_1;
}

