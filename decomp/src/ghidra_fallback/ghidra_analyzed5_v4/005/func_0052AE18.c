#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001E41C4(undefined4 *param_1);
extern uint *DAT_0052ae90;
extern undefined4 *DAT_0052ae94;
extern undefined4 DAT_0052ae98;
extern uint *DAT_0052ae9c;
extern undefined4 *DAT_0052aea0;
extern undefined4 DAT_0052aea4;

// USA 0052AE18 <- EU 0052ADF0 (Ghidra, non-matching)
// GLOBAL DAT_0052ae90 uint *
// GLOBAL DAT_0052ae94 undefined4 *
// GLOBAL DAT_0052ae98 undefined4
// GLOBAL DAT_0052ae9c uint *
// GLOBAL DAT_0052aea0 undefined4 *
// GLOBAL DAT_0052aea4 undefined4

undefined4 func_0052AE18(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_0052ae90 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052ae90), iVar1 != 0)) {
    *DAT_0052ae94 = DAT_0052ae98;
  }
  if (DAT_0052ae94 != param_2) {
    if (((*DAT_0052ae9c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052ae9c), iVar1 != 0)) {
      *DAT_0052aea0 = DAT_0052aea4;
    }
    if (DAT_0052aea0 != param_2) {
      uVar2 = func_001E41C4(param_2);
      return uVar2;
    }
  }
  return 1;
}

