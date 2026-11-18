#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001E6B34(undefined4 *param_1);
extern uint *DAT_0068d364;
extern undefined4 *DAT_0068d368;
extern undefined4 DAT_0068d36c;
extern uint *DAT_0068d370;
extern undefined4 *DAT_0068d374;
extern undefined4 DAT_0068d378;

// USA 0068D2EC <- EU 0068D2C4 (Ghidra, non-matching)
// GLOBAL DAT_0068d364 uint *
// GLOBAL DAT_0068d368 undefined4 *
// GLOBAL DAT_0068d36c undefined4
// GLOBAL DAT_0068d370 uint *
// GLOBAL DAT_0068d374 undefined4 *
// GLOBAL DAT_0068d378 undefined4

undefined4 func_0068D2EC(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_0068d364 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0068d364), iVar1 != 0)) {
    *DAT_0068d368 = DAT_0068d36c;
  }
  if (DAT_0068d368 != param_2) {
    if (((*DAT_0068d370 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0068d370), iVar1 != 0)) {
      *DAT_0068d374 = DAT_0068d378;
    }
    if (DAT_0068d374 != param_2) {
      uVar2 = func_001E6B34(param_2);
      return uVar2;
    }
  }
  return 1;
}

