#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001E5578(undefined4 *param_1);
extern uint *DAT_00549fa4;
extern undefined4 *DAT_00549fa8;
extern undefined4 DAT_00549fac;
extern uint *DAT_00549fb0;
extern undefined4 *DAT_00549fb4;
extern undefined4 DAT_00549fb8;

// USA 00549F2C <- EU 00549F04 (Ghidra, non-matching)
// GLOBAL DAT_00549fa4 uint *
// GLOBAL DAT_00549fa8 undefined4 *
// GLOBAL DAT_00549fac undefined4
// GLOBAL DAT_00549fb0 uint *
// GLOBAL DAT_00549fb4 undefined4 *
// GLOBAL DAT_00549fb8 undefined4

undefined4 func_00549F2C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_00549fa4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00549fa4), iVar1 != 0)) {
    *DAT_00549fa8 = DAT_00549fac;
  }
  if (DAT_00549fa8 != param_2) {
    if (((*DAT_00549fb0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00549fb0), iVar1 != 0)) {
      *DAT_00549fb4 = DAT_00549fb8;
    }
    if (DAT_00549fb4 != param_2) {
      uVar2 = func_001E5578(param_2);
      return uVar2;
    }
  }
  return 1;
}

