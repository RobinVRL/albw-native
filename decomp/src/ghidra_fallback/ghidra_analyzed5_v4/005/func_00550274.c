#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001ACF30(undefined4 *param_1);
extern uint *DAT_005502a0;
extern undefined4 *DAT_005502a4;
extern undefined4 DAT_005502a8;

// USA 00550274 <- EU 0055024C (Ghidra, non-matching)
// GLOBAL DAT_005502a0 uint *
// GLOBAL DAT_005502a4 undefined4 *
// GLOBAL DAT_005502a8 undefined4

void func_00550274(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_005502a0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005502a0), iVar1 != 0)) {
    *DAT_005502a4 = DAT_005502a8;
  }
  if (DAT_005502a4 != param_2) {
    func_001ACF30(param_2);
  }
  return;
}

