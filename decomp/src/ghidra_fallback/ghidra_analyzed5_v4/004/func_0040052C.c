#include "ghidra_types.h"

extern undefined4 DAT_0040051c;

// USA 0040052C <- EU 0040050C (Ghidra, non-matching)
// GLOBAL DAT_0040051c undefined4

undefined4 func_0040052C(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_0040051c;
  *param_1 = DAT_0040051c;
  param_1[1] = uVar1;
  return (undefined4)param_1;
}

