#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00546454;
extern undefined4 *DAT_00546458;
extern undefined4 DAT_0054645c;

// USA 0054642C <- EU 00546404 (Ghidra, non-matching)
// GLOBAL DAT_00546454 uint *
// GLOBAL DAT_00546458 undefined4 *
// GLOBAL DAT_0054645c undefined4

bool func_0054642C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00546454 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00546454), iVar1 != 0)) {
    *DAT_00546458 = DAT_0054645c;
  }
  return DAT_00546458 == param_2;
}

