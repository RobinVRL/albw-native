#include "ghidra_types.h"

extern int func_0010DEB0(undefined4 *param_1);
extern int func_0041DCF4(undefined4 *param_1);
extern undefined4 DAT_0041e210;

// USA 0041E1F4 <- EU 0041E1D4 (Ghidra, non-matching)
// GLOBAL DAT_0041e210 undefined4

int func_0041E1F4(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  *param_1 = DAT_0041e210;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xffffffff;
  puVar1 = func_0041DCF4(param_1 + 4);
  func_0010DEB0(puVar1 + -3);
  return (int)(puVar1 + -4);
}

