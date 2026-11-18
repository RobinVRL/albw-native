#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00560350;
extern undefined4 *DAT_00560354;
extern undefined4 DAT_00560358;
extern uint *DAT_0056035c;
extern undefined4 *DAT_00560360;
extern undefined4 DAT_00560364;

// USA 005602DC <- EU 005602B4 (Ghidra, non-matching)
// GLOBAL DAT_00560350 uint *
// GLOBAL DAT_00560354 undefined4 *
// GLOBAL DAT_00560358 undefined4
// GLOBAL DAT_0056035c uint *
// GLOBAL DAT_00560360 undefined4 *
// GLOBAL DAT_00560364 undefined4

undefined4 func_005602DC(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00560350 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00560350), iVar1 != 0)) {
    *DAT_00560354 = DAT_00560358;
  }
  if (DAT_00560354 != param_2) {
    if (((*DAT_0056035c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0056035c), iVar1 != 0)) {
      *DAT_00560360 = DAT_00560364;
    }
    if (DAT_00560360 != param_2) {
      return 0;
    }
  }
  return 1;
}

