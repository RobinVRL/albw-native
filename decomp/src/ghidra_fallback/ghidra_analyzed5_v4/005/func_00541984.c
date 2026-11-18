#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00541a80;
extern undefined4 *DAT_00541a84;
extern undefined4 DAT_00541a88;
extern uint *DAT_00541a8c;
extern undefined4 *DAT_00541a90;
extern undefined4 DAT_00541a94;
extern uint *DAT_00541a98;
extern undefined4 *DAT_00541a9c;
extern undefined4 DAT_00541aa0;
extern uint *DAT_00541aa4;
extern undefined4 *DAT_00541aa8;
extern undefined4 DAT_00541aac;

// USA 00541984 <- EU 0054195C (Ghidra, non-matching)
// GLOBAL DAT_00541a80 uint *
// GLOBAL DAT_00541a84 undefined4 *
// GLOBAL DAT_00541a88 undefined4
// GLOBAL DAT_00541a8c uint *
// GLOBAL DAT_00541a90 undefined4 *
// GLOBAL DAT_00541a94 undefined4
// GLOBAL DAT_00541a98 uint *
// GLOBAL DAT_00541a9c undefined4 *
// GLOBAL DAT_00541aa0 undefined4
// GLOBAL DAT_00541aa4 uint *
// GLOBAL DAT_00541aa8 undefined4 *
// GLOBAL DAT_00541aac undefined4

undefined4 func_00541984(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00541a80 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00541a80), iVar1 != 0)) {
    *DAT_00541a84 = DAT_00541a88;
  }
  if (DAT_00541a84 != param_2) {
    if (((*DAT_00541a8c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00541a8c), iVar1 != 0)) {
      *DAT_00541a90 = DAT_00541a94;
    }
    if (DAT_00541a90 != param_2) {
      if (((*DAT_00541a98 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00541a98), iVar1 != 0)) {
        *DAT_00541a9c = DAT_00541aa0;
      }
      if (DAT_00541a9c != param_2) {
        if (((*DAT_00541aa4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00541aa4), iVar1 != 0))
        {
          *DAT_00541aa8 = DAT_00541aac;
        }
        if (DAT_00541aa8 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

