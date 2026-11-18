#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0055ff24;
extern undefined4 *DAT_0055ff28;
extern undefined4 DAT_0055ff2c;
extern uint *DAT_0055ff30;
extern undefined4 *DAT_0055ff34;
extern undefined4 DAT_0055ff38;

// USA 0055FEB0 <- EU 0055FE88 (Ghidra, non-matching)
// GLOBAL DAT_0055ff24 uint *
// GLOBAL DAT_0055ff28 undefined4 *
// GLOBAL DAT_0055ff2c undefined4
// GLOBAL DAT_0055ff30 uint *
// GLOBAL DAT_0055ff34 undefined4 *
// GLOBAL DAT_0055ff38 undefined4

undefined4 func_0055FEB0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0055ff24 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055ff24), iVar1 != 0)) {
    *DAT_0055ff28 = DAT_0055ff2c;
  }
  if (DAT_0055ff28 != param_2) {
    if (((*DAT_0055ff30 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055ff30), iVar1 != 0)) {
      *DAT_0055ff34 = DAT_0055ff38;
    }
    if (DAT_0055ff34 != param_2) {
      return 0;
    }
  }
  return 1;
}

