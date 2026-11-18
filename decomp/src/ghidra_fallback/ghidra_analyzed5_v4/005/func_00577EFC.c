#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_004B9748(undefined4 *param_1);
extern uint *DAT_00577f74;
extern undefined4 *DAT_00577f78;
extern undefined4 DAT_00577f7c;
extern uint *DAT_00577f80;
extern undefined4 *DAT_00577f84;
extern undefined4 DAT_00577f88;

// USA 00577EFC <- EU 00577ED4 (Ghidra, non-matching)
// GLOBAL DAT_00577f74 uint *
// GLOBAL DAT_00577f78 undefined4 *
// GLOBAL DAT_00577f7c undefined4
// GLOBAL DAT_00577f80 uint *
// GLOBAL DAT_00577f84 undefined4 *
// GLOBAL DAT_00577f88 undefined4

undefined4 func_00577EFC(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_00577f74 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00577f74), iVar1 != 0)) {
    *DAT_00577f78 = DAT_00577f7c;
  }
  if (DAT_00577f78 != param_2) {
    if (((*DAT_00577f80 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00577f80), iVar1 != 0)) {
      *DAT_00577f84 = DAT_00577f88;
    }
    if (DAT_00577f84 != param_2) {
      uVar2 = func_004B9748(param_2);
      return uVar2;
    }
  }
  return 1;
}

