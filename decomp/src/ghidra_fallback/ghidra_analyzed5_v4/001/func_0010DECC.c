#include "ghidra_types.h"

extern undefined4 DAT_0010deec;

// USA 0010DECC <- EU 0010DECC (Ghidra, non-matching)
// GLOBAL DAT_0010deec undefined4

undefined4 * func_0010DECC(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_0010deec;
  param_1[1] = 0;
  *param_1 = uVar1;
  *(undefined2 *)(param_1 + 0x82) = 0;
  *(undefined1 *)((int)param_1 + 0x20a) = 0;
  return param_1;
}

