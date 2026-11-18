#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00628810(undefined4 *param_1);
extern uint *DAT_0052cd1c;
extern undefined4 *DAT_0052cd20;
extern undefined4 DAT_0052cd24;
extern uint *DAT_0052cd28;
extern undefined4 *DAT_0052cd2c;
extern undefined4 DAT_0052cd30;

// USA 0052CCA4 <- EU 0052CC7C (Ghidra, non-matching)
// GLOBAL DAT_0052cd1c uint *
// GLOBAL DAT_0052cd20 undefined4 *
// GLOBAL DAT_0052cd24 undefined4
// GLOBAL DAT_0052cd28 uint *
// GLOBAL DAT_0052cd2c undefined4 *
// GLOBAL DAT_0052cd30 undefined4

undefined4 func_0052CCA4(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_0052cd1c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052cd1c), iVar1 != 0)) {
    *DAT_0052cd20 = DAT_0052cd24;
  }
  if (DAT_0052cd20 != param_2) {
    if (((*DAT_0052cd28 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052cd28), iVar1 != 0)) {
      *DAT_0052cd2c = DAT_0052cd30;
    }
    if (DAT_0052cd2c != param_2) {
      uVar2 = func_00628810(param_2);
      return uVar2;
    }
  }
  return 1;
}

