#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00628810(undefined4 *param_1);
extern uint *DAT_005521dc;
extern undefined4 *DAT_005521e0;
extern undefined4 DAT_005521e4;
extern uint *DAT_005521e8;
extern undefined4 *DAT_005521ec;
extern undefined4 DAT_005521f0;

// USA 00552164 <- EU 0055213C (Ghidra, non-matching)
// GLOBAL DAT_005521dc uint *
// GLOBAL DAT_005521e0 undefined4 *
// GLOBAL DAT_005521e4 undefined4
// GLOBAL DAT_005521e8 uint *
// GLOBAL DAT_005521ec undefined4 *
// GLOBAL DAT_005521f0 undefined4

undefined4 func_00552164(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_005521dc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005521dc), iVar1 != 0)) {
    *DAT_005521e0 = DAT_005521e4;
  }
  if (DAT_005521e0 != param_2) {
    if (((*DAT_005521e8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005521e8), iVar1 != 0)) {
      *DAT_005521ec = DAT_005521f0;
    }
    if (DAT_005521ec != param_2) {
      uVar2 = func_00628810(param_2);
      return uVar2;
    }
  }
  return 1;
}

