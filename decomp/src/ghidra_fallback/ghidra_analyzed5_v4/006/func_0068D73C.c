#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001E6B34(undefined4 *param_1);
extern uint *DAT_0068d7b4;
extern undefined4 *DAT_0068d7b8;
extern undefined4 DAT_0068d7bc;
extern uint *DAT_0068d7c0;
extern undefined4 *DAT_0068d7c4;
extern undefined4 DAT_0068d7c8;

// USA 0068D73C <- EU 0068D714 (Ghidra, non-matching)
// GLOBAL DAT_0068d7b4 uint *
// GLOBAL DAT_0068d7b8 undefined4 *
// GLOBAL DAT_0068d7bc undefined4
// GLOBAL DAT_0068d7c0 uint *
// GLOBAL DAT_0068d7c4 undefined4 *
// GLOBAL DAT_0068d7c8 undefined4

undefined4 func_0068D73C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_0068d7b4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0068d7b4), iVar1 != 0)) {
    *DAT_0068d7b8 = DAT_0068d7bc;
  }
  if (DAT_0068d7b8 != param_2) {
    if (((*DAT_0068d7c0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0068d7c0), iVar1 != 0)) {
      *DAT_0068d7c4 = DAT_0068d7c8;
    }
    if (DAT_0068d7c4 != param_2) {
      uVar2 = func_001E6B34(param_2);
      return uVar2;
    }
  }
  return 1;
}

