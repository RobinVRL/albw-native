#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00546e24;
extern undefined4 *DAT_00546e28;
extern undefined4 DAT_00546e2c;
extern uint *DAT_00546e30;
extern undefined4 *DAT_00546e34;
extern undefined4 DAT_00546e38;

// USA 00546DB0 <- EU 00546D88 (Ghidra, non-matching)
// GLOBAL DAT_00546e24 uint *
// GLOBAL DAT_00546e28 undefined4 *
// GLOBAL DAT_00546e2c undefined4
// GLOBAL DAT_00546e30 uint *
// GLOBAL DAT_00546e34 undefined4 *
// GLOBAL DAT_00546e38 undefined4

undefined4 func_00546DB0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00546e24 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00546e24), iVar1 != 0)) {
    *DAT_00546e28 = DAT_00546e2c;
  }
  if (DAT_00546e28 != param_2) {
    if (((*DAT_00546e30 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00546e30), iVar1 != 0)) {
      *DAT_00546e34 = DAT_00546e38;
    }
    if (DAT_00546e34 != param_2) {
      return 0;
    }
  }
  return 1;
}

