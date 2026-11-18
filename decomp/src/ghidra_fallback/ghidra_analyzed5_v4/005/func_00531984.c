#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00531a80;
extern undefined4 *DAT_00531a84;
extern undefined4 DAT_00531a88;
extern uint *DAT_00531a8c;
extern undefined4 *DAT_00531a90;
extern undefined4 DAT_00531a94;
extern uint *DAT_00531a98;
extern undefined4 *DAT_00531a9c;
extern undefined4 DAT_00531aa0;
extern uint *DAT_00531aa4;
extern undefined4 *DAT_00531aa8;
extern undefined4 DAT_00531aac;

// USA 00531984 <- EU 0053195C (Ghidra, non-matching)
// GLOBAL DAT_00531a80 uint *
// GLOBAL DAT_00531a84 undefined4 *
// GLOBAL DAT_00531a88 undefined4
// GLOBAL DAT_00531a8c uint *
// GLOBAL DAT_00531a90 undefined4 *
// GLOBAL DAT_00531a94 undefined4
// GLOBAL DAT_00531a98 uint *
// GLOBAL DAT_00531a9c undefined4 *
// GLOBAL DAT_00531aa0 undefined4
// GLOBAL DAT_00531aa4 uint *
// GLOBAL DAT_00531aa8 undefined4 *
// GLOBAL DAT_00531aac undefined4

undefined4 func_00531984(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00531a80 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00531a80), iVar1 != 0)) {
    *DAT_00531a84 = DAT_00531a88;
  }
  if (DAT_00531a84 != param_2) {
    if (((*DAT_00531a8c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00531a8c), iVar1 != 0)) {
      *DAT_00531a90 = DAT_00531a94;
    }
    if (DAT_00531a90 != param_2) {
      if (((*DAT_00531a98 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00531a98), iVar1 != 0)) {
        *DAT_00531a9c = DAT_00531aa0;
      }
      if (DAT_00531a9c != param_2) {
        if (((*DAT_00531aa4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00531aa4), iVar1 != 0))
        {
          *DAT_00531aa8 = DAT_00531aac;
        }
        if (DAT_00531aa8 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

