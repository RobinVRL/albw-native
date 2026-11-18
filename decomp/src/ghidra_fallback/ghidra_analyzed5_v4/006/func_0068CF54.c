#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001E6B34(undefined4 *param_1);
extern uint *DAT_0068cfcc;
extern undefined4 *DAT_0068cfd0;
extern undefined4 DAT_0068cfd4;
extern uint *DAT_0068cfd8;
extern undefined4 *DAT_0068cfdc;
extern undefined4 DAT_0068cfe0;

// USA 0068CF54 <- EU 0068CF2C (Ghidra, non-matching)
// GLOBAL DAT_0068cfcc uint *
// GLOBAL DAT_0068cfd0 undefined4 *
// GLOBAL DAT_0068cfd4 undefined4
// GLOBAL DAT_0068cfd8 uint *
// GLOBAL DAT_0068cfdc undefined4 *
// GLOBAL DAT_0068cfe0 undefined4

undefined4 func_0068CF54(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_0068cfcc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0068cfcc), iVar1 != 0)) {
    *DAT_0068cfd0 = DAT_0068cfd4;
  }
  if (DAT_0068cfd0 != param_2) {
    if (((*DAT_0068cfd8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0068cfd8), iVar1 != 0)) {
      *DAT_0068cfdc = DAT_0068cfe0;
    }
    if (DAT_0068cfdc != param_2) {
      uVar2 = func_001E6B34(param_2);
      return uVar2;
    }
  }
  return 1;
}

