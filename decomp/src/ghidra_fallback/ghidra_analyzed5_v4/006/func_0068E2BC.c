#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001E6B34(undefined4 *param_1);
extern uint *DAT_0068e334;
extern undefined4 *DAT_0068e338;
extern undefined4 DAT_0068e33c;
extern uint *DAT_0068e340;
extern undefined4 *DAT_0068e344;
extern undefined4 DAT_0068e348;

// USA 0068E2BC <- EU 0068E294 (Ghidra, non-matching)
// GLOBAL DAT_0068e334 uint *
// GLOBAL DAT_0068e338 undefined4 *
// GLOBAL DAT_0068e33c undefined4
// GLOBAL DAT_0068e340 uint *
// GLOBAL DAT_0068e344 undefined4 *
// GLOBAL DAT_0068e348 undefined4

undefined4 func_0068E2BC(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_0068e334 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0068e334), iVar1 != 0)) {
    *DAT_0068e338 = DAT_0068e33c;
  }
  if (DAT_0068e338 != param_2) {
    if (((*DAT_0068e340 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0068e340), iVar1 != 0)) {
      *DAT_0068e344 = DAT_0068e348;
    }
    if (DAT_0068e344 != param_2) {
      uVar2 = func_001E6B34(param_2);
      return uVar2;
    }
  }
  return 1;
}

