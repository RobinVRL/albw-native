#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00537a7c;
extern undefined4 *DAT_00537a80;
extern undefined4 DAT_00537a84;
extern uint *DAT_00537a88;
extern undefined4 *DAT_00537a8c;
extern undefined4 DAT_00537a90;
extern uint *DAT_00537a94;
extern undefined4 *DAT_00537a98;
extern undefined4 DAT_00537a9c;
extern uint *DAT_00537aa0;
extern undefined4 *DAT_00537aa4;
extern undefined4 DAT_00537aa8;

// USA 00537980 <- EU 00537958 (Ghidra, non-matching)
// GLOBAL DAT_00537a7c uint *
// GLOBAL DAT_00537a80 undefined4 *
// GLOBAL DAT_00537a84 undefined4
// GLOBAL DAT_00537a88 uint *
// GLOBAL DAT_00537a8c undefined4 *
// GLOBAL DAT_00537a90 undefined4
// GLOBAL DAT_00537a94 uint *
// GLOBAL DAT_00537a98 undefined4 *
// GLOBAL DAT_00537a9c undefined4
// GLOBAL DAT_00537aa0 uint *
// GLOBAL DAT_00537aa4 undefined4 *
// GLOBAL DAT_00537aa8 undefined4

undefined4 func_00537980(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00537a7c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00537a7c), iVar1 != 0)) {
    *DAT_00537a80 = DAT_00537a84;
  }
  if (DAT_00537a80 != param_2) {
    if (((*DAT_00537a88 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00537a88), iVar1 != 0)) {
      *DAT_00537a8c = DAT_00537a90;
    }
    if (DAT_00537a8c != param_2) {
      if (((*DAT_00537a94 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00537a94), iVar1 != 0)) {
        *DAT_00537a98 = DAT_00537a9c;
      }
      if (DAT_00537a98 != param_2) {
        if (((*DAT_00537aa0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00537aa0), iVar1 != 0))
        {
          *DAT_00537aa4 = DAT_00537aa8;
        }
        if (DAT_00537aa4 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

