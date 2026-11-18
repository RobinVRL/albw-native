#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_004B9748(undefined4 *param_1);
extern uint *DAT_00576a84;
extern undefined4 *DAT_00576a88;
extern undefined4 DAT_00576a8c;
extern uint *DAT_00576a90;
extern undefined4 *DAT_00576a94;
extern undefined4 DAT_00576a98;
extern uint *DAT_00576a9c;
extern undefined4 *DAT_00576aa0;
extern undefined4 DAT_00576aa4;

// USA 005769C8 <- EU 005769A0 (Ghidra, non-matching)
// GLOBAL DAT_00576a84 uint *
// GLOBAL DAT_00576a88 undefined4 *
// GLOBAL DAT_00576a8c undefined4
// GLOBAL DAT_00576a90 uint *
// GLOBAL DAT_00576a94 undefined4 *
// GLOBAL DAT_00576a98 undefined4
// GLOBAL DAT_00576a9c uint *
// GLOBAL DAT_00576aa0 undefined4 *
// GLOBAL DAT_00576aa4 undefined4

undefined4 func_005769C8(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_00576a84 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00576a84), iVar1 != 0)) {
    *DAT_00576a88 = DAT_00576a8c;
  }
  if (DAT_00576a88 != param_2) {
    if (((*DAT_00576a90 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00576a90), iVar1 != 0)) {
      *DAT_00576a94 = DAT_00576a98;
    }
    if (DAT_00576a94 != param_2) {
      if (((*DAT_00576a9c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00576a9c), iVar1 != 0)) {
        *DAT_00576aa0 = DAT_00576aa4;
      }
      if (DAT_00576aa0 != param_2) {
        uVar2 = func_004B9748(param_2);
        return uVar2;
      }
    }
  }
  return 1;
}

