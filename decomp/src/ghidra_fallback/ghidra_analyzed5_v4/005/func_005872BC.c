#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_005873b8;
extern undefined4 *DAT_005873bc;
extern undefined4 DAT_005873c0;
extern uint *DAT_005873c4;
extern undefined4 *DAT_005873c8;
extern undefined4 DAT_005873cc;
extern uint *DAT_005873d0;
extern undefined4 *DAT_005873d4;
extern undefined4 DAT_005873d8;
extern uint *DAT_005873dc;
extern undefined4 *DAT_005873e0;
extern undefined4 DAT_005873e4;

// USA 005872BC <- EU 00587294 (Ghidra, non-matching)
// GLOBAL DAT_005873b8 uint *
// GLOBAL DAT_005873bc undefined4 *
// GLOBAL DAT_005873c0 undefined4
// GLOBAL DAT_005873c4 uint *
// GLOBAL DAT_005873c8 undefined4 *
// GLOBAL DAT_005873cc undefined4
// GLOBAL DAT_005873d0 uint *
// GLOBAL DAT_005873d4 undefined4 *
// GLOBAL DAT_005873d8 undefined4
// GLOBAL DAT_005873dc uint *
// GLOBAL DAT_005873e0 undefined4 *
// GLOBAL DAT_005873e4 undefined4

undefined4 func_005872BC(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_005873b8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005873b8), iVar1 != 0)) {
    *DAT_005873bc = DAT_005873c0;
  }
  if (DAT_005873bc != param_2) {
    if (((*DAT_005873c4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005873c4), iVar1 != 0)) {
      *DAT_005873c8 = DAT_005873cc;
    }
    if (DAT_005873c8 != param_2) {
      if (((*DAT_005873d0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005873d0), iVar1 != 0)) {
        *DAT_005873d4 = DAT_005873d8;
      }
      if (DAT_005873d4 != param_2) {
        if (((*DAT_005873dc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005873dc), iVar1 != 0))
        {
          *DAT_005873e0 = DAT_005873e4;
        }
        if (DAT_005873e0 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

