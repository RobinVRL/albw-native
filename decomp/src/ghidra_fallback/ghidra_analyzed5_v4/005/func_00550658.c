#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001E5578(undefined4 *param_1);
extern uint *DAT_005506d0;
extern undefined4 *DAT_005506d4;
extern undefined4 DAT_005506d8;
extern uint *DAT_005506dc;
extern undefined4 *DAT_005506e0;
extern undefined4 DAT_005506e4;

// USA 00550658 <- EU 00550630 (Ghidra, non-matching)
// GLOBAL DAT_005506d0 uint *
// GLOBAL DAT_005506d4 undefined4 *
// GLOBAL DAT_005506d8 undefined4
// GLOBAL DAT_005506dc uint *
// GLOBAL DAT_005506e0 undefined4 *
// GLOBAL DAT_005506e4 undefined4

undefined4 func_00550658(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_005506d0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005506d0), iVar1 != 0)) {
    *DAT_005506d4 = DAT_005506d8;
  }
  if (DAT_005506d4 != param_2) {
    if (((*DAT_005506dc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005506dc), iVar1 != 0)) {
      *DAT_005506e0 = DAT_005506e4;
    }
    if (DAT_005506e0 != param_2) {
      uVar2 = func_001E5578(param_2);
      return uVar2;
    }
  }
  return 1;
}

