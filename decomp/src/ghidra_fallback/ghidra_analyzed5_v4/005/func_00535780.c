#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00628810(undefined4 *param_1);
extern uint *DAT_005357f8;
extern undefined4 *DAT_005357fc;
extern undefined4 DAT_00535800;
extern uint *DAT_00535804;
extern undefined4 *DAT_00535808;
extern undefined4 DAT_0053580c;

// USA 00535780 <- EU 00535758 (Ghidra, non-matching)
// GLOBAL DAT_005357f8 uint *
// GLOBAL DAT_005357fc undefined4 *
// GLOBAL DAT_00535800 undefined4
// GLOBAL DAT_00535804 uint *
// GLOBAL DAT_00535808 undefined4 *
// GLOBAL DAT_0053580c undefined4

undefined4 func_00535780(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_005357f8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005357f8), iVar1 != 0)) {
    *DAT_005357fc = DAT_00535800;
  }
  if (DAT_005357fc != param_2) {
    if (((*DAT_00535804 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00535804), iVar1 != 0)) {
      *DAT_00535808 = DAT_0053580c;
    }
    if (DAT_00535808 != param_2) {
      uVar2 = func_00628810(param_2);
      return uVar2;
    }
  }
  return 1;
}

