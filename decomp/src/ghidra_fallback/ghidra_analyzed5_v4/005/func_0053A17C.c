#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0053a1a4;
extern undefined4 *DAT_0053a1a8;
extern undefined4 DAT_0053a1ac;

// USA 0053A17C <- EU 0053A154 (Ghidra, non-matching)
// GLOBAL DAT_0053a1a4 uint *
// GLOBAL DAT_0053a1a8 undefined4 *
// GLOBAL DAT_0053a1ac undefined4

bool func_0053A17C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0053a1a4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053a1a4), iVar1 != 0)) {
    *DAT_0053a1a8 = DAT_0053a1ac;
  }
  return DAT_0053a1a8 == param_2;
}

