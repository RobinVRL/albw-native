#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00558f7c;
extern undefined4 *DAT_00558f80;
extern undefined4 DAT_00558f84;
extern uint *DAT_00558f88;
extern undefined4 *DAT_00558f8c;
extern undefined4 DAT_00558f90;
extern uint *DAT_00558f94;
extern undefined4 *DAT_00558f98;
extern undefined4 DAT_00558f9c;

// USA 00558EC4 <- EU 00558E9C (Ghidra, non-matching)
// GLOBAL DAT_00558f7c uint *
// GLOBAL DAT_00558f80 undefined4 *
// GLOBAL DAT_00558f84 undefined4
// GLOBAL DAT_00558f88 uint *
// GLOBAL DAT_00558f8c undefined4 *
// GLOBAL DAT_00558f90 undefined4
// GLOBAL DAT_00558f94 uint *
// GLOBAL DAT_00558f98 undefined4 *
// GLOBAL DAT_00558f9c undefined4

undefined4 func_00558EC4(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00558f7c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00558f7c), iVar1 != 0)) {
    *DAT_00558f80 = DAT_00558f84;
  }
  if (DAT_00558f80 != param_2) {
    if (((*DAT_00558f88 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00558f88), iVar1 != 0)) {
      *DAT_00558f8c = DAT_00558f90;
    }
    if (DAT_00558f8c != param_2) {
      if (((*DAT_00558f94 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00558f94), iVar1 != 0)) {
        *DAT_00558f98 = DAT_00558f9c;
      }
      if (DAT_00558f98 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

