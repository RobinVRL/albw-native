#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001E6B34(undefined4 *param_1);
extern uint *DAT_0068e614;
extern undefined4 *DAT_0068e618;
extern undefined4 DAT_0068e61c;
extern uint *DAT_0068e620;
extern undefined4 *DAT_0068e624;
extern undefined4 DAT_0068e628;

// USA 0068E59C <- EU 0068E574 (Ghidra, non-matching)
// GLOBAL DAT_0068e614 uint *
// GLOBAL DAT_0068e618 undefined4 *
// GLOBAL DAT_0068e61c undefined4
// GLOBAL DAT_0068e620 uint *
// GLOBAL DAT_0068e624 undefined4 *
// GLOBAL DAT_0068e628 undefined4

undefined4 func_0068E59C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_0068e614 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0068e614), iVar1 != 0)) {
    *DAT_0068e618 = DAT_0068e61c;
  }
  if (DAT_0068e618 != param_2) {
    if (((*DAT_0068e620 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0068e620), iVar1 != 0)) {
      *DAT_0068e624 = DAT_0068e628;
    }
    if (DAT_0068e624 != param_2) {
      uVar2 = func_001E6B34(param_2);
      return uVar2;
    }
  }
  return 1;
}

