#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0065366C(undefined4 *param_1);
extern uint *DAT_005564cc;
extern undefined4 *DAT_005564d0;
extern undefined4 DAT_005564d4;
extern uint *DAT_005564d8;
extern undefined4 *DAT_005564dc;
extern undefined4 DAT_005564e0;

// USA 00556454 <- EU 0055642C (Ghidra, non-matching)
// GLOBAL DAT_005564cc uint *
// GLOBAL DAT_005564d0 undefined4 *
// GLOBAL DAT_005564d4 undefined4
// GLOBAL DAT_005564d8 uint *
// GLOBAL DAT_005564dc undefined4 *
// GLOBAL DAT_005564e0 undefined4

undefined4 func_00556454(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_005564cc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005564cc), iVar1 != 0)) {
    *DAT_005564d0 = DAT_005564d4;
  }
  if (DAT_005564d0 != param_2) {
    if (((*DAT_005564d8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005564d8), iVar1 != 0)) {
      *DAT_005564dc = DAT_005564e0;
    }
    if (DAT_005564dc != param_2) {
      uVar2 = func_0065366C(param_2);
      return uVar2;
    }
  }
  return 1;
}

