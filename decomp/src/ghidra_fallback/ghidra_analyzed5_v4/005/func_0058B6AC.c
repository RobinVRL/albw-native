#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0058b6d4;
extern undefined4 *DAT_0058b6d8;
extern undefined4 DAT_0058b6dc;

// USA 0058B6AC <- EU 0058B684 (Ghidra, non-matching)
// GLOBAL DAT_0058b6d4 uint *
// GLOBAL DAT_0058b6d8 undefined4 *
// GLOBAL DAT_0058b6dc undefined4

bool func_0058B6AC(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0058b6d4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058b6d4), iVar1 != 0)) {
    *DAT_0058b6d8 = DAT_0058b6dc;
  }
  return DAT_0058b6d8 == param_2;
}

