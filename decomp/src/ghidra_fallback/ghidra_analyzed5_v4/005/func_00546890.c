#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_005468b8;
extern undefined4 *DAT_005468bc;
extern undefined4 DAT_005468c0;

// USA 00546890 <- EU 00546868 (Ghidra, non-matching)
// GLOBAL DAT_005468b8 uint *
// GLOBAL DAT_005468bc undefined4 *
// GLOBAL DAT_005468c0 undefined4

bool func_00546890(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_005468b8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005468b8), iVar1 != 0)) {
    *DAT_005468bc = DAT_005468c0;
  }
  return DAT_005468bc == param_2;
}

