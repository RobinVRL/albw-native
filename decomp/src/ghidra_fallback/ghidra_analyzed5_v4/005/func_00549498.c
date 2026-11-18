#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00549594;
extern undefined4 *DAT_00549598;
extern undefined4 DAT_0054959c;
extern uint *DAT_005495a0;
extern undefined4 *DAT_005495a4;
extern undefined4 DAT_005495a8;
extern uint *DAT_005495ac;
extern undefined4 *DAT_005495b0;
extern undefined4 DAT_005495b4;
extern uint *DAT_005495b8;
extern undefined4 *DAT_005495bc;
extern undefined4 DAT_005495c0;

// USA 00549498 <- EU 00549470 (Ghidra, non-matching)
// GLOBAL DAT_00549594 uint *
// GLOBAL DAT_00549598 undefined4 *
// GLOBAL DAT_0054959c undefined4
// GLOBAL DAT_005495a0 uint *
// GLOBAL DAT_005495a4 undefined4 *
// GLOBAL DAT_005495a8 undefined4
// GLOBAL DAT_005495ac uint *
// GLOBAL DAT_005495b0 undefined4 *
// GLOBAL DAT_005495b4 undefined4
// GLOBAL DAT_005495b8 uint *
// GLOBAL DAT_005495bc undefined4 *
// GLOBAL DAT_005495c0 undefined4

undefined4 func_00549498(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00549594 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00549594), iVar1 != 0)) {
    *DAT_00549598 = DAT_0054959c;
  }
  if (DAT_00549598 != param_2) {
    if (((*DAT_005495a0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005495a0), iVar1 != 0)) {
      *DAT_005495a4 = DAT_005495a8;
    }
    if (DAT_005495a4 != param_2) {
      if (((*DAT_005495ac & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005495ac), iVar1 != 0)) {
        *DAT_005495b0 = DAT_005495b4;
      }
      if (DAT_005495b0 != param_2) {
        if (((*DAT_005495b8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005495b8), iVar1 != 0))
        {
          *DAT_005495bc = DAT_005495c0;
        }
        if (DAT_005495bc != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

