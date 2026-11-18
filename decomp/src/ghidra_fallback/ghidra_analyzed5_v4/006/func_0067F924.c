#include "ghidra_types.h"

extern undefined4 DAT_0067f918;

// USA 0067F924 <- EU 0067F8FC (Ghidra, non-matching)
// GLOBAL DAT_0067f918 undefined4

undefined4 func_0067F924(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_0067f918;
  *param_1 = DAT_0067f918;
  param_1[1] = uVar1;
  param_1[2] = 0;
  param_1[3] = 0;
  return (undefined4)param_1;
}

