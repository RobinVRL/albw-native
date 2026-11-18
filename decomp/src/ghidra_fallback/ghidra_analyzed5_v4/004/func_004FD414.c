#include "ghidra_types.h"

extern undefined4 DAT_004fd408;

// USA 004FD414 <- EU 004FD3EC (Ghidra, non-matching)
// GLOBAL DAT_004fd408 undefined4

undefined4 func_004FD414(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_004fd408;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0xb;
  param_1[2] = uVar1;
  return (undefined4)param_1;
}

