#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001E6B34(undefined4 *param_1);
extern uint *DAT_0068d1f4;
extern undefined4 *DAT_0068d1f8;
extern undefined4 DAT_0068d1fc;
extern uint *DAT_0068d200;
extern undefined4 *DAT_0068d204;
extern undefined4 DAT_0068d208;

// USA 0068D17C <- EU 0068D154 (Ghidra, non-matching)
// GLOBAL DAT_0068d1f4 uint *
// GLOBAL DAT_0068d1f8 undefined4 *
// GLOBAL DAT_0068d1fc undefined4
// GLOBAL DAT_0068d200 uint *
// GLOBAL DAT_0068d204 undefined4 *
// GLOBAL DAT_0068d208 undefined4

undefined4 func_0068D17C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_0068d1f4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0068d1f4), iVar1 != 0)) {
    *DAT_0068d1f8 = DAT_0068d1fc;
  }
  if (DAT_0068d1f8 != param_2) {
    if (((*DAT_0068d200 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0068d200), iVar1 != 0)) {
      *DAT_0068d204 = DAT_0068d208;
    }
    if (DAT_0068d204 != param_2) {
      uVar2 = func_001E6B34(param_2);
      return uVar2;
    }
  }
  return 1;
}

