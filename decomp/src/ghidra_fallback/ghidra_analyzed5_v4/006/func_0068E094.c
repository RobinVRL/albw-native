#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001E6B34(undefined4 *param_1);
extern uint *DAT_0068e10c;
extern undefined4 *DAT_0068e110;
extern undefined4 DAT_0068e114;
extern uint *DAT_0068e118;
extern undefined4 *DAT_0068e11c;
extern undefined4 DAT_0068e120;

// USA 0068E094 <- EU 0068E06C (Ghidra, non-matching)
// GLOBAL DAT_0068e10c uint *
// GLOBAL DAT_0068e110 undefined4 *
// GLOBAL DAT_0068e114 undefined4
// GLOBAL DAT_0068e118 uint *
// GLOBAL DAT_0068e11c undefined4 *
// GLOBAL DAT_0068e120 undefined4

undefined4 func_0068E094(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_0068e10c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0068e10c), iVar1 != 0)) {
    *DAT_0068e110 = DAT_0068e114;
  }
  if (DAT_0068e110 != param_2) {
    if (((*DAT_0068e118 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0068e118), iVar1 != 0)) {
      *DAT_0068e11c = DAT_0068e120;
    }
    if (DAT_0068e11c != param_2) {
      uVar2 = func_001E6B34(param_2);
      return uVar2;
    }
  }
  return 1;
}

