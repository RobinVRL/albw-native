#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001E6B34(undefined4 *param_1);
extern uint *DAT_0068d2ac;
extern undefined4 *DAT_0068d2b0;
extern undefined4 DAT_0068d2b4;
extern uint *DAT_0068d2b8;
extern undefined4 *DAT_0068d2bc;
extern undefined4 DAT_0068d2c0;

// USA 0068D234 <- EU 0068D20C (Ghidra, non-matching)
// GLOBAL DAT_0068d2ac uint *
// GLOBAL DAT_0068d2b0 undefined4 *
// GLOBAL DAT_0068d2b4 undefined4
// GLOBAL DAT_0068d2b8 uint *
// GLOBAL DAT_0068d2bc undefined4 *
// GLOBAL DAT_0068d2c0 undefined4

undefined4 func_0068D234(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_0068d2ac & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0068d2ac), iVar1 != 0)) {
    *DAT_0068d2b0 = DAT_0068d2b4;
  }
  if (DAT_0068d2b0 != param_2) {
    if (((*DAT_0068d2b8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0068d2b8), iVar1 != 0)) {
      *DAT_0068d2bc = DAT_0068d2c0;
    }
    if (DAT_0068d2bc != param_2) {
      uVar2 = func_001E6B34(param_2);
      return uVar2;
    }
  }
  return 1;
}

