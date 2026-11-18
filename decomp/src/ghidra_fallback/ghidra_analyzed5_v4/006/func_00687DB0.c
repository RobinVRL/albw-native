#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00687df4;
extern undefined4 *DAT_00687df8;
extern undefined4 DAT_00687dfc;

// USA 00687DB0 <- EU 00687D88 (Ghidra, non-matching)
// GLOBAL DAT_00687df4 uint *
// GLOBAL DAT_00687df8 undefined4 *
// GLOBAL DAT_00687dfc undefined4

undefined4 * func_00687DB0(undefined4 *param_1)

{
  int iVar1;
  
  if (((*DAT_00687df4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00687df4), iVar1 != 0)) {
    *DAT_00687df8 = DAT_00687dfc;
  }
  if ((param_1 == (undefined4 *)0x0) ||
     (iVar1 = (**(code **)*param_1)(param_1,DAT_00687df8), iVar1 == 0)) {
    param_1 = (undefined4 *)0x0;
  }
  return param_1;
}

