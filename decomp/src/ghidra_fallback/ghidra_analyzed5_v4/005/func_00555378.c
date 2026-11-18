#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001E5578(undefined4 *param_1);
extern uint *DAT_005553f0;
extern undefined4 *DAT_005553f4;
extern undefined4 DAT_005553f8;
extern uint *DAT_005553fc;
extern undefined4 *DAT_00555400;
extern undefined4 DAT_00555404;

// USA 00555378 <- EU 00555350 (Ghidra, non-matching)
// GLOBAL DAT_005553f0 uint *
// GLOBAL DAT_005553f4 undefined4 *
// GLOBAL DAT_005553f8 undefined4
// GLOBAL DAT_005553fc uint *
// GLOBAL DAT_00555400 undefined4 *
// GLOBAL DAT_00555404 undefined4

undefined4 func_00555378(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_005553f0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005553f0), iVar1 != 0)) {
    *DAT_005553f4 = DAT_005553f8;
  }
  if (DAT_005553f4 != param_2) {
    if (((*DAT_005553fc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005553fc), iVar1 != 0)) {
      *DAT_00555400 = DAT_00555404;
    }
    if (DAT_00555400 != param_2) {
      uVar2 = func_001E5578(param_2);
      return uVar2;
    }
  }
  return 1;
}

