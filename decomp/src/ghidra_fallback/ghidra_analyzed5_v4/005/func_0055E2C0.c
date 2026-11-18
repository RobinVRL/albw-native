#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00631550(undefined4 *param_1);
extern uint *DAT_0055e338;
extern undefined4 *DAT_0055e33c;
extern undefined4 DAT_0055e340;
extern uint *DAT_0055e344;
extern undefined4 *DAT_0055e348;
extern undefined4 DAT_0055e34c;

// USA 0055E2C0 <- EU 0055E298 (Ghidra, non-matching)
// GLOBAL DAT_0055e338 uint *
// GLOBAL DAT_0055e33c undefined4 *
// GLOBAL DAT_0055e340 undefined4
// GLOBAL DAT_0055e344 uint *
// GLOBAL DAT_0055e348 undefined4 *
// GLOBAL DAT_0055e34c undefined4

undefined4 func_0055E2C0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_0055e338 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055e338), iVar1 != 0)) {
    *DAT_0055e33c = DAT_0055e340;
  }
  if (DAT_0055e33c != param_2) {
    if (((*DAT_0055e344 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055e344), iVar1 != 0)) {
      *DAT_0055e348 = DAT_0055e34c;
    }
    if (DAT_0055e348 != param_2) {
      uVar2 = func_00631550(param_2);
      return uVar2;
    }
  }
  return 1;
}

