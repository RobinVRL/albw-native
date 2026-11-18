#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00628810(undefined4 *param_1);
extern uint *DAT_0054bf98;
extern undefined4 *DAT_0054bf9c;
extern undefined4 DAT_0054bfa0;
extern uint *DAT_0054bfa4;
extern undefined4 *DAT_0054bfa8;
extern undefined4 DAT_0054bfac;

// USA 0054BF20 <- EU 0054BEF8 (Ghidra, non-matching)
// GLOBAL DAT_0054bf98 uint *
// GLOBAL DAT_0054bf9c undefined4 *
// GLOBAL DAT_0054bfa0 undefined4
// GLOBAL DAT_0054bfa4 uint *
// GLOBAL DAT_0054bfa8 undefined4 *
// GLOBAL DAT_0054bfac undefined4

undefined4 func_0054BF20(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_0054bf98 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054bf98), iVar1 != 0)) {
    *DAT_0054bf9c = DAT_0054bfa0;
  }
  if (DAT_0054bf9c != param_2) {
    if (((*DAT_0054bfa4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054bfa4), iVar1 != 0)) {
      *DAT_0054bfa8 = DAT_0054bfac;
    }
    if (DAT_0054bfa8 != param_2) {
      uVar2 = func_00628810(param_2);
      return uVar2;
    }
  }
  return 1;
}

