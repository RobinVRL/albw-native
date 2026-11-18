#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00628810(undefined4 *param_1);
extern uint *DAT_0052caf4;
extern undefined4 *DAT_0052caf8;
extern undefined4 DAT_0052cafc;
extern uint *DAT_0052cb00;
extern undefined4 *DAT_0052cb04;
extern undefined4 DAT_0052cb08;

// USA 0052CA7C <- EU 0052CA54 (Ghidra, non-matching)
// GLOBAL DAT_0052caf4 uint *
// GLOBAL DAT_0052caf8 undefined4 *
// GLOBAL DAT_0052cafc undefined4
// GLOBAL DAT_0052cb00 uint *
// GLOBAL DAT_0052cb04 undefined4 *
// GLOBAL DAT_0052cb08 undefined4

undefined4 func_0052CA7C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_0052caf4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052caf4), iVar1 != 0)) {
    *DAT_0052caf8 = DAT_0052cafc;
  }
  if (DAT_0052caf8 != param_2) {
    if (((*DAT_0052cb00 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052cb00), iVar1 != 0)) {
      *DAT_0052cb04 = DAT_0052cb08;
    }
    if (DAT_0052cb04 != param_2) {
      uVar2 = func_00628810(param_2);
      return uVar2;
    }
  }
  return 1;
}

