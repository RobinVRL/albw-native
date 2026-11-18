#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001E4908(undefined4 *param_1);
extern uint *DAT_00520350;
extern undefined4 *DAT_00520354;
extern undefined4 DAT_00520358;
extern uint *DAT_0052035c;
extern undefined4 *DAT_00520360;
extern undefined4 DAT_00520364;

// USA 005202D8 <- EU 005202B0 (Ghidra, non-matching)
// GLOBAL DAT_00520350 uint *
// GLOBAL DAT_00520354 undefined4 *
// GLOBAL DAT_00520358 undefined4
// GLOBAL DAT_0052035c uint *
// GLOBAL DAT_00520360 undefined4 *
// GLOBAL DAT_00520364 undefined4

undefined4 func_005202D8(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_00520350 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00520350), iVar1 != 0)) {
    *DAT_00520354 = DAT_00520358;
  }
  if (DAT_00520354 != param_2) {
    if (((*DAT_0052035c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052035c), iVar1 != 0)) {
      *DAT_00520360 = DAT_00520364;
    }
    if (DAT_00520360 != param_2) {
      uVar2 = func_001E4908(param_2);
      return uVar2;
    }
  }
  return 1;
}

