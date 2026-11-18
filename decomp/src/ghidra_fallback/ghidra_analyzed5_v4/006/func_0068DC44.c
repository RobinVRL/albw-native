#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001E6B34(undefined4 *param_1);
extern uint *DAT_0068dcbc;
extern undefined4 *DAT_0068dcc0;
extern undefined4 DAT_0068dcc4;
extern uint *DAT_0068dcc8;
extern undefined4 *DAT_0068dccc;
extern undefined4 DAT_0068dcd0;

// USA 0068DC44 <- EU 0068DC1C (Ghidra, non-matching)
// GLOBAL DAT_0068dcbc uint *
// GLOBAL DAT_0068dcc0 undefined4 *
// GLOBAL DAT_0068dcc4 undefined4
// GLOBAL DAT_0068dcc8 uint *
// GLOBAL DAT_0068dccc undefined4 *
// GLOBAL DAT_0068dcd0 undefined4

undefined4 func_0068DC44(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_0068dcbc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0068dcbc), iVar1 != 0)) {
    *DAT_0068dcc0 = DAT_0068dcc4;
  }
  if (DAT_0068dcc0 != param_2) {
    if (((*DAT_0068dcc8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0068dcc8), iVar1 != 0)) {
      *DAT_0068dccc = DAT_0068dcd0;
    }
    if (DAT_0068dccc != param_2) {
      uVar2 = func_001E6B34(param_2);
      return uVar2;
    }
  }
  return 1;
}

