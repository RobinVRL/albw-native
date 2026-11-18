#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00687e6c;
extern undefined4 *DAT_00687e70;
extern undefined4 DAT_00687e74;

// USA 00687E28 <- EU 00687E00 (Ghidra, non-matching)
// GLOBAL DAT_00687e6c uint *
// GLOBAL DAT_00687e70 undefined4 *
// GLOBAL DAT_00687e74 undefined4

undefined4 * func_00687E28(undefined4 *param_1)

{
  int iVar1;
  
  if (((*DAT_00687e6c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00687e6c), iVar1 != 0)) {
    *DAT_00687e70 = DAT_00687e74;
  }
  if ((param_1 == (undefined4 *)0x0) ||
     (iVar1 = (**(code **)*param_1)(param_1,DAT_00687e70), iVar1 == 0)) {
    param_1 = (undefined4 *)0x0;
  }
  return param_1;
}

