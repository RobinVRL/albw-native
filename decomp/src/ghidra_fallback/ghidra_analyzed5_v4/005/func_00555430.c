#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_005554e8;
extern undefined4 *DAT_005554ec;
extern undefined4 DAT_005554f0;
extern uint *DAT_005554f4;
extern undefined4 *DAT_005554f8;
extern undefined4 DAT_005554fc;
extern uint *DAT_00555500;
extern undefined4 *DAT_00555504;
extern undefined4 DAT_00555508;

// USA 00555430 <- EU 00555408 (Ghidra, non-matching)
// GLOBAL DAT_005554e8 uint *
// GLOBAL DAT_005554ec undefined4 *
// GLOBAL DAT_005554f0 undefined4
// GLOBAL DAT_005554f4 uint *
// GLOBAL DAT_005554f8 undefined4 *
// GLOBAL DAT_005554fc undefined4
// GLOBAL DAT_00555500 uint *
// GLOBAL DAT_00555504 undefined4 *
// GLOBAL DAT_00555508 undefined4

undefined4 func_00555430(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_005554e8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005554e8), iVar1 != 0)) {
    *DAT_005554ec = DAT_005554f0;
  }
  if (DAT_005554ec != param_2) {
    if (((*DAT_005554f4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005554f4), iVar1 != 0)) {
      *DAT_005554f8 = DAT_005554fc;
    }
    if (DAT_005554f8 != param_2) {
      if (((*DAT_00555500 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00555500), iVar1 != 0)) {
        *DAT_00555504 = DAT_00555508;
      }
      if (DAT_00555504 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

