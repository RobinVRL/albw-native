#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00557f7c;
extern undefined4 *DAT_00557f80;
extern undefined4 DAT_00557f84;
extern uint *DAT_00557f88;
extern undefined4 *DAT_00557f8c;
extern undefined4 DAT_00557f90;
extern uint *DAT_00557f94;
extern undefined4 *DAT_00557f98;
extern undefined4 DAT_00557f9c;
extern uint *DAT_00557fa0;
extern undefined4 *DAT_00557fa4;
extern undefined4 DAT_00557fa8;

// USA 00557E80 <- EU 00557E58 (Ghidra, non-matching)
// GLOBAL DAT_00557f7c uint *
// GLOBAL DAT_00557f80 undefined4 *
// GLOBAL DAT_00557f84 undefined4
// GLOBAL DAT_00557f88 uint *
// GLOBAL DAT_00557f8c undefined4 *
// GLOBAL DAT_00557f90 undefined4
// GLOBAL DAT_00557f94 uint *
// GLOBAL DAT_00557f98 undefined4 *
// GLOBAL DAT_00557f9c undefined4
// GLOBAL DAT_00557fa0 uint *
// GLOBAL DAT_00557fa4 undefined4 *
// GLOBAL DAT_00557fa8 undefined4

undefined4 func_00557E80(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00557f7c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00557f7c), iVar1 != 0)) {
    *DAT_00557f80 = DAT_00557f84;
  }
  if (DAT_00557f80 != param_2) {
    if (((*DAT_00557f88 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00557f88), iVar1 != 0)) {
      *DAT_00557f8c = DAT_00557f90;
    }
    if (DAT_00557f8c != param_2) {
      if (((*DAT_00557f94 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00557f94), iVar1 != 0)) {
        *DAT_00557f98 = DAT_00557f9c;
      }
      if (DAT_00557f98 != param_2) {
        if (((*DAT_00557fa0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00557fa0), iVar1 != 0))
        {
          *DAT_00557fa4 = DAT_00557fa8;
        }
        if (DAT_00557fa4 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

