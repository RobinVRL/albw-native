#include "ghidra_types.h"

extern undefined4 DAT_0010c92c;

// USA 0010C908 <- EU 0010C908 (Ghidra, non-matching)
// GLOBAL DAT_0010c92c undefined4

undefined4 * func_0010C908(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_0010c92c;
  param_1[1] = 0;
  *param_1 = uVar1;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  return param_1;
}

