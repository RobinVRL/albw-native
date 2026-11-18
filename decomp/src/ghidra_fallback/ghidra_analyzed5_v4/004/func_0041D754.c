#include "ghidra_types.h"

extern int func_0040FA80(undefined4 *param_1);
extern undefined4 DAT_0041d768;
extern undefined4 DAT_0041d76c;

// USA 0041D754 <- EU 0041D734 (Ghidra, non-matching)
// GLOBAL DAT_0041d768 undefined4
// GLOBAL DAT_0041d76c undefined4

undefined4 * func_0041D754(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  func_0040FA80(param_1);
  uVar2 = DAT_0041d76c;
  uVar1 = DAT_0041d768;
  param_1[4] = 0;
  param_1[5] = uVar1;
  param_1[6] = uVar2;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined1 *)((int)param_1 + 0x1d) = 0;
  return param_1;
}

