#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0057e470;
extern undefined4 *DAT_0057e474;
extern undefined4 DAT_0057e478;

// USA 0057E448 <- EU 0057E420 (Ghidra, non-matching)
// GLOBAL DAT_0057e470 uint *
// GLOBAL DAT_0057e474 undefined4 *
// GLOBAL DAT_0057e478 undefined4

bool func_0057E448(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0057e470 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057e470), iVar1 != 0)) {
    *DAT_0057e474 = DAT_0057e478;
  }
  return DAT_0057e474 == param_2;
}

