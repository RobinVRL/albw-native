#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_005527ac;
extern undefined4 *DAT_005527b0;
extern undefined4 DAT_005527b4;
extern uint *DAT_005527b8;
extern undefined4 *DAT_005527bc;
extern undefined4 DAT_005527c0;
extern uint *DAT_005527c4;
extern undefined4 *DAT_005527c8;
extern undefined4 DAT_005527cc;

// USA 005526F4 <- EU 005526CC (Ghidra, non-matching)
// GLOBAL DAT_005527ac uint *
// GLOBAL DAT_005527b0 undefined4 *
// GLOBAL DAT_005527b4 undefined4
// GLOBAL DAT_005527b8 uint *
// GLOBAL DAT_005527bc undefined4 *
// GLOBAL DAT_005527c0 undefined4
// GLOBAL DAT_005527c4 uint *
// GLOBAL DAT_005527c8 undefined4 *
// GLOBAL DAT_005527cc undefined4

undefined4 func_005526F4(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_005527ac & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005527ac), iVar1 != 0)) {
    *DAT_005527b0 = DAT_005527b4;
  }
  if (DAT_005527b0 != param_2) {
    if (((*DAT_005527b8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005527b8), iVar1 != 0)) {
      *DAT_005527bc = DAT_005527c0;
    }
    if (DAT_005527bc != param_2) {
      if (((*DAT_005527c4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005527c4), iVar1 != 0)) {
        *DAT_005527c8 = DAT_005527cc;
      }
      if (DAT_005527c8 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

