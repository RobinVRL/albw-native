#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00652970(undefined4 *param_1);
extern uint *DAT_0055afec;
extern undefined4 *DAT_0055aff0;
extern undefined4 DAT_0055aff4;
extern uint *DAT_0055aff8;
extern undefined4 *DAT_0055affc;
extern undefined4 DAT_0055b000;

// USA 0055AF74 <- EU 0055AF4C (Ghidra, non-matching)
// GLOBAL DAT_0055afec uint *
// GLOBAL DAT_0055aff0 undefined4 *
// GLOBAL DAT_0055aff4 undefined4
// GLOBAL DAT_0055aff8 uint *
// GLOBAL DAT_0055affc undefined4 *
// GLOBAL DAT_0055b000 undefined4

undefined4 func_0055AF74(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_0055afec & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055afec), iVar1 != 0)) {
    *DAT_0055aff0 = DAT_0055aff4;
  }
  if (DAT_0055aff0 != param_2) {
    if (((*DAT_0055aff8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055aff8), iVar1 != 0)) {
      *DAT_0055affc = DAT_0055b000;
    }
    if (DAT_0055affc != param_2) {
      uVar2 = func_00652970(param_2);
      return uVar2;
    }
  }
  return 1;
}

