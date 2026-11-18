#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00653E44(undefined4 *param_1);
extern uint *DAT_00556414;
extern undefined4 *DAT_00556418;
extern undefined4 DAT_0055641c;
extern uint *DAT_00556420;
extern undefined4 *DAT_00556424;
extern undefined4 DAT_00556428;

// USA 0055639C <- EU 00556374 (Ghidra, non-matching)
// GLOBAL DAT_00556414 uint *
// GLOBAL DAT_00556418 undefined4 *
// GLOBAL DAT_0055641c undefined4
// GLOBAL DAT_00556420 uint *
// GLOBAL DAT_00556424 undefined4 *
// GLOBAL DAT_00556428 undefined4

undefined4 func_0055639C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_00556414 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00556414), iVar1 != 0)) {
    *DAT_00556418 = DAT_0055641c;
  }
  if (DAT_00556418 != param_2) {
    if (((*DAT_00556420 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00556420), iVar1 != 0)) {
      *DAT_00556424 = DAT_00556428;
    }
    if (DAT_00556424 != param_2) {
      uVar2 = func_00653E44(param_2);
      return uVar2;
    }
  }
  return 1;
}

