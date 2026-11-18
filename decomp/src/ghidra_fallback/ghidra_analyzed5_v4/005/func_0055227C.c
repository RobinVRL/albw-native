#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00653E44(undefined4 *param_1);
extern uint *DAT_005522f4;
extern undefined4 *DAT_005522f8;
extern undefined4 DAT_005522fc;
extern uint *DAT_00552300;
extern undefined4 *DAT_00552304;
extern undefined4 DAT_00552308;

// USA 0055227C <- EU 00552254 (Ghidra, non-matching)
// GLOBAL DAT_005522f4 uint *
// GLOBAL DAT_005522f8 undefined4 *
// GLOBAL DAT_005522fc undefined4
// GLOBAL DAT_00552300 uint *
// GLOBAL DAT_00552304 undefined4 *
// GLOBAL DAT_00552308 undefined4

undefined4 func_0055227C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_005522f4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005522f4), iVar1 != 0)) {
    *DAT_005522f8 = DAT_005522fc;
  }
  if (DAT_005522f8 != param_2) {
    if (((*DAT_00552300 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00552300), iVar1 != 0)) {
      *DAT_00552304 = DAT_00552308;
    }
    if (DAT_00552304 != param_2) {
      uVar2 = func_00653E44(param_2);
      return uVar2;
    }
  }
  return 1;
}

