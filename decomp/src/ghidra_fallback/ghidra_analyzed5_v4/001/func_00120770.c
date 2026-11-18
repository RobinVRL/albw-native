#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00509FA0(int param_1);
extern uint *DAT_001207e8;
extern undefined4 *DAT_001207ec;
extern undefined4 DAT_001207f0;

// USA 00120770 <- EU 00120770 (Ghidra, non-matching)
// GLOBAL DAT_001207e8 uint *
// GLOBAL DAT_001207ec undefined4 *
// GLOBAL DAT_001207f0 undefined4

undefined4 func_00120770(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_001207e8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_001207e8), iVar1 != 0)) {
    *DAT_001207ec = DAT_001207f0;
  }
  if ((param_1 == (undefined4 *)0x0) ||
     (iVar1 = (**(code **)*param_1)(param_1,DAT_001207ec), iVar1 == 0)) {
    param_1 = (undefined4 *)0x0;
  }
  if (param_1 != (undefined4 *)0x0) {
    uVar2 = func_00509FA0((int)param_1);
    return uVar2;
  }
  return 0;
}

