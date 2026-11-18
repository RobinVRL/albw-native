#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00557a6c;
extern undefined4 *DAT_00557a70;
extern undefined4 DAT_00557a74;
extern uint *DAT_00557a78;
extern undefined4 *DAT_00557a7c;
extern undefined4 DAT_00557a80;
extern uint *DAT_00557a84;
extern undefined4 *DAT_00557a88;
extern undefined4 DAT_00557a8c;
extern uint *DAT_00557a90;
extern undefined4 *DAT_00557a94;
extern undefined4 DAT_00557a98;
extern uint *DAT_00557a9c;
extern undefined4 *DAT_00557aa0;
extern undefined4 DAT_00557aa4;

// USA 0055792C <- EU 00557904 (Ghidra, non-matching)
// GLOBAL DAT_00557a6c uint *
// GLOBAL DAT_00557a70 undefined4 *
// GLOBAL DAT_00557a74 undefined4
// GLOBAL DAT_00557a78 uint *
// GLOBAL DAT_00557a7c undefined4 *
// GLOBAL DAT_00557a80 undefined4
// GLOBAL DAT_00557a84 uint *
// GLOBAL DAT_00557a88 undefined4 *
// GLOBAL DAT_00557a8c undefined4
// GLOBAL DAT_00557a90 uint *
// GLOBAL DAT_00557a94 undefined4 *
// GLOBAL DAT_00557a98 undefined4
// GLOBAL DAT_00557a9c uint *
// GLOBAL DAT_00557aa0 undefined4 *
// GLOBAL DAT_00557aa4 undefined4

undefined4 func_0055792C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00557a6c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00557a6c), iVar1 != 0)) {
    *DAT_00557a70 = DAT_00557a74;
  }
  if (DAT_00557a70 != param_2) {
    if (((*DAT_00557a78 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00557a78), iVar1 != 0)) {
      *DAT_00557a7c = DAT_00557a80;
    }
    if (DAT_00557a7c != param_2) {
      if (((*DAT_00557a84 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00557a84), iVar1 != 0)) {
        *DAT_00557a88 = DAT_00557a8c;
      }
      if (DAT_00557a88 != param_2) {
        if (((*DAT_00557a90 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00557a90), iVar1 != 0))
        {
          *DAT_00557a94 = DAT_00557a98;
        }
        if (DAT_00557a94 != param_2) {
          if (((*DAT_00557a9c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00557a9c), iVar1 != 0)
             ) {
            *DAT_00557aa0 = DAT_00557aa4;
          }
          if (DAT_00557aa0 != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}

