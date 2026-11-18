#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00527f74;
extern undefined4 *DAT_00527f78;
extern undefined4 DAT_00527f7c;
extern uint *DAT_00527f80;
extern undefined4 *DAT_00527f84;
extern undefined4 DAT_00527f88;
extern uint *DAT_00527f8c;
extern undefined4 *DAT_00527f90;
extern undefined4 DAT_00527f94;
extern uint *DAT_00527f98;
extern undefined4 *DAT_00527f9c;
extern undefined4 DAT_00527fa0;

// USA 00527E78 <- EU 00527E50 (Ghidra, non-matching)
// GLOBAL DAT_00527f74 uint *
// GLOBAL DAT_00527f78 undefined4 *
// GLOBAL DAT_00527f7c undefined4
// GLOBAL DAT_00527f80 uint *
// GLOBAL DAT_00527f84 undefined4 *
// GLOBAL DAT_00527f88 undefined4
// GLOBAL DAT_00527f8c uint *
// GLOBAL DAT_00527f90 undefined4 *
// GLOBAL DAT_00527f94 undefined4
// GLOBAL DAT_00527f98 uint *
// GLOBAL DAT_00527f9c undefined4 *
// GLOBAL DAT_00527fa0 undefined4

undefined4 func_00527E78(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00527f74 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00527f74), iVar1 != 0)) {
    *DAT_00527f78 = DAT_00527f7c;
  }
  if (DAT_00527f78 != param_2) {
    if (((*DAT_00527f80 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00527f80), iVar1 != 0)) {
      *DAT_00527f84 = DAT_00527f88;
    }
    if (DAT_00527f84 != param_2) {
      if (((*DAT_00527f8c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00527f8c), iVar1 != 0)) {
        *DAT_00527f90 = DAT_00527f94;
      }
      if (DAT_00527f90 != param_2) {
        if (((*DAT_00527f98 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00527f98), iVar1 != 0))
        {
          *DAT_00527f9c = DAT_00527fa0;
        }
        if (DAT_00527f9c != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

