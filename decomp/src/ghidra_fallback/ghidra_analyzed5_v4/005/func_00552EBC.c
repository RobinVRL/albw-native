#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00552f74;
extern undefined4 *DAT_00552f78;
extern undefined4 DAT_00552f7c;
extern uint *DAT_00552f80;
extern undefined4 *DAT_00552f84;
extern undefined4 DAT_00552f88;
extern uint *DAT_00552f8c;
extern undefined4 *DAT_00552f90;
extern undefined4 DAT_00552f94;

// USA 00552EBC <- EU 00552E94 (Ghidra, non-matching)
// GLOBAL DAT_00552f74 uint *
// GLOBAL DAT_00552f78 undefined4 *
// GLOBAL DAT_00552f7c undefined4
// GLOBAL DAT_00552f80 uint *
// GLOBAL DAT_00552f84 undefined4 *
// GLOBAL DAT_00552f88 undefined4
// GLOBAL DAT_00552f8c uint *
// GLOBAL DAT_00552f90 undefined4 *
// GLOBAL DAT_00552f94 undefined4

undefined4 func_00552EBC(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00552f74 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00552f74), iVar1 != 0)) {
    *DAT_00552f78 = DAT_00552f7c;
  }
  if (DAT_00552f78 != param_2) {
    if (((*DAT_00552f80 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00552f80), iVar1 != 0)) {
      *DAT_00552f84 = DAT_00552f88;
    }
    if (DAT_00552f84 != param_2) {
      if (((*DAT_00552f8c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00552f8c), iVar1 != 0)) {
        *DAT_00552f90 = DAT_00552f94;
      }
      if (DAT_00552f90 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

