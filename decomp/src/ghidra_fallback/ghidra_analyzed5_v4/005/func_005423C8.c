#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_005424c4;
extern undefined4 *DAT_005424c8;
extern undefined4 DAT_005424cc;
extern uint *DAT_005424d0;
extern undefined4 *DAT_005424d4;
extern undefined4 DAT_005424d8;
extern uint *DAT_005424dc;
extern undefined4 *DAT_005424e0;
extern undefined4 DAT_005424e4;
extern uint *DAT_005424e8;
extern undefined4 *DAT_005424ec;
extern undefined4 DAT_005424f0;

// USA 005423C8 <- EU 005423A0 (Ghidra, non-matching)
// GLOBAL DAT_005424c4 uint *
// GLOBAL DAT_005424c8 undefined4 *
// GLOBAL DAT_005424cc undefined4
// GLOBAL DAT_005424d0 uint *
// GLOBAL DAT_005424d4 undefined4 *
// GLOBAL DAT_005424d8 undefined4
// GLOBAL DAT_005424dc uint *
// GLOBAL DAT_005424e0 undefined4 *
// GLOBAL DAT_005424e4 undefined4
// GLOBAL DAT_005424e8 uint *
// GLOBAL DAT_005424ec undefined4 *
// GLOBAL DAT_005424f0 undefined4

undefined4 func_005423C8(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_005424c4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005424c4), iVar1 != 0)) {
    *DAT_005424c8 = DAT_005424cc;
  }
  if (DAT_005424c8 != param_2) {
    if (((*DAT_005424d0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005424d0), iVar1 != 0)) {
      *DAT_005424d4 = DAT_005424d8;
    }
    if (DAT_005424d4 != param_2) {
      if (((*DAT_005424dc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005424dc), iVar1 != 0)) {
        *DAT_005424e0 = DAT_005424e4;
      }
      if (DAT_005424e0 != param_2) {
        if (((*DAT_005424e8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005424e8), iVar1 != 0))
        {
          *DAT_005424ec = DAT_005424f0;
        }
        if (DAT_005424ec != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

