#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00559660;
extern undefined4 *DAT_00559664;
extern undefined4 DAT_00559668;
extern uint *DAT_0055966c;
extern undefined4 *DAT_00559670;
extern undefined4 DAT_00559674;

// USA 005595EC <- EU 005595C4 (Ghidra, non-matching)
// GLOBAL DAT_00559660 uint *
// GLOBAL DAT_00559664 undefined4 *
// GLOBAL DAT_00559668 undefined4
// GLOBAL DAT_0055966c uint *
// GLOBAL DAT_00559670 undefined4 *
// GLOBAL DAT_00559674 undefined4

undefined4 func_005595EC(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00559660 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00559660), iVar1 != 0)) {
    *DAT_00559664 = DAT_00559668;
  }
  if (DAT_00559664 != param_2) {
    if (((*DAT_0055966c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055966c), iVar1 != 0)) {
      *DAT_00559670 = DAT_00559674;
    }
    if (DAT_00559670 != param_2) {
      return 0;
    }
  }
  return 1;
}

