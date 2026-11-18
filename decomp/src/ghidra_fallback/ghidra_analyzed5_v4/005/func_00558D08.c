#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00628810(undefined4 *param_1);
extern uint *DAT_00558d80;
extern undefined4 *DAT_00558d84;
extern undefined4 DAT_00558d88;
extern uint *DAT_00558d8c;
extern undefined4 *DAT_00558d90;
extern undefined4 DAT_00558d94;

// USA 00558D08 <- EU 00558CE0 (Ghidra, non-matching)
// GLOBAL DAT_00558d80 uint *
// GLOBAL DAT_00558d84 undefined4 *
// GLOBAL DAT_00558d88 undefined4
// GLOBAL DAT_00558d8c uint *
// GLOBAL DAT_00558d90 undefined4 *
// GLOBAL DAT_00558d94 undefined4

undefined4 func_00558D08(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_00558d80 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00558d80), iVar1 != 0)) {
    *DAT_00558d84 = DAT_00558d88;
  }
  if (DAT_00558d84 != param_2) {
    if (((*DAT_00558d8c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00558d8c), iVar1 != 0)) {
      *DAT_00558d90 = DAT_00558d94;
    }
    if (DAT_00558d90 != param_2) {
      uVar2 = func_00628810(param_2);
      return uVar2;
    }
  }
  return 1;
}

