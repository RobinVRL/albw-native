#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00628810(undefined4 *param_1);
extern uint *DAT_00524ba4;
extern undefined4 *DAT_00524ba8;
extern undefined4 DAT_00524bac;
extern uint *DAT_00524bb0;
extern undefined4 *DAT_00524bb4;
extern undefined4 DAT_00524bb8;

// USA 00524B2C <- EU 00524B04 (Ghidra, non-matching)
// GLOBAL DAT_00524ba4 uint *
// GLOBAL DAT_00524ba8 undefined4 *
// GLOBAL DAT_00524bac undefined4
// GLOBAL DAT_00524bb0 uint *
// GLOBAL DAT_00524bb4 undefined4 *
// GLOBAL DAT_00524bb8 undefined4

undefined4 func_00524B2C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_00524ba4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00524ba4), iVar1 != 0)) {
    *DAT_00524ba8 = DAT_00524bac;
  }
  if (DAT_00524ba8 != param_2) {
    if (((*DAT_00524bb0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00524bb0), iVar1 != 0)) {
      *DAT_00524bb4 = DAT_00524bb8;
    }
    if (DAT_00524bb4 != param_2) {
      uVar2 = func_00628810(param_2);
      return uVar2;
    }
  }
  return 1;
}

