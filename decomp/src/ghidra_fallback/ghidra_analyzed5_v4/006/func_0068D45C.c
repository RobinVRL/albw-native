#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001E6B34(undefined4 *param_1);
extern uint *DAT_0068d4d4;
extern undefined4 *DAT_0068d4d8;
extern undefined4 DAT_0068d4dc;
extern uint *DAT_0068d4e0;
extern undefined4 *DAT_0068d4e4;
extern undefined4 DAT_0068d4e8;

// USA 0068D45C <- EU 0068D434 (Ghidra, non-matching)
// GLOBAL DAT_0068d4d4 uint *
// GLOBAL DAT_0068d4d8 undefined4 *
// GLOBAL DAT_0068d4dc undefined4
// GLOBAL DAT_0068d4e0 uint *
// GLOBAL DAT_0068d4e4 undefined4 *
// GLOBAL DAT_0068d4e8 undefined4

undefined4 func_0068D45C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_0068d4d4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0068d4d4), iVar1 != 0)) {
    *DAT_0068d4d8 = DAT_0068d4dc;
  }
  if (DAT_0068d4d8 != param_2) {
    if (((*DAT_0068d4e0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0068d4e0), iVar1 != 0)) {
      *DAT_0068d4e4 = DAT_0068d4e8;
    }
    if (DAT_0068d4e4 != param_2) {
      uVar2 = func_001E6B34(param_2);
      return uVar2;
    }
  }
  return 1;
}

