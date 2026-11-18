#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0057e01c;
extern undefined4 *DAT_0057e020;
extern undefined4 DAT_0057e024;

// USA 0057DFF4 <- EU 0057DFCC (Ghidra, non-matching)
// GLOBAL DAT_0057e01c uint *
// GLOBAL DAT_0057e020 undefined4 *
// GLOBAL DAT_0057e024 undefined4

bool func_0057DFF4(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0057e01c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057e01c), iVar1 != 0)) {
    *DAT_0057e020 = DAT_0057e024;
  }
  return DAT_0057e020 == param_2;
}

