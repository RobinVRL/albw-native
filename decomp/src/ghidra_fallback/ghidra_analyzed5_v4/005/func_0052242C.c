#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0052256c;
extern undefined4 *DAT_00522570;
extern undefined4 DAT_00522574;
extern uint *DAT_00522578;
extern undefined4 *DAT_0052257c;
extern undefined4 DAT_00522580;
extern uint *DAT_00522584;
extern undefined4 *DAT_00522588;
extern undefined4 DAT_0052258c;
extern uint *DAT_00522590;
extern undefined4 *DAT_00522594;
extern undefined4 DAT_00522598;
extern uint *DAT_0052259c;
extern undefined4 *DAT_005225a0;
extern undefined4 DAT_005225a4;

// USA 0052242C <- EU 00522404 (Ghidra, non-matching)
// GLOBAL DAT_0052256c uint *
// GLOBAL DAT_00522570 undefined4 *
// GLOBAL DAT_00522574 undefined4
// GLOBAL DAT_00522578 uint *
// GLOBAL DAT_0052257c undefined4 *
// GLOBAL DAT_00522580 undefined4
// GLOBAL DAT_00522584 uint *
// GLOBAL DAT_00522588 undefined4 *
// GLOBAL DAT_0052258c undefined4
// GLOBAL DAT_00522590 uint *
// GLOBAL DAT_00522594 undefined4 *
// GLOBAL DAT_00522598 undefined4
// GLOBAL DAT_0052259c uint *
// GLOBAL DAT_005225a0 undefined4 *
// GLOBAL DAT_005225a4 undefined4

undefined4 func_0052242C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0052256c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052256c), iVar1 != 0)) {
    *DAT_00522570 = DAT_00522574;
  }
  if (DAT_00522570 != param_2) {
    if (((*DAT_00522578 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00522578), iVar1 != 0)) {
      *DAT_0052257c = DAT_00522580;
    }
    if (DAT_0052257c != param_2) {
      if (((*DAT_00522584 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00522584), iVar1 != 0)) {
        *DAT_00522588 = DAT_0052258c;
      }
      if (DAT_00522588 != param_2) {
        if (((*DAT_00522590 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00522590), iVar1 != 0))
        {
          *DAT_00522594 = DAT_00522598;
        }
        if (DAT_00522594 != param_2) {
          if (((*DAT_0052259c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052259c), iVar1 != 0)
             ) {
            *DAT_005225a0 = DAT_005225a4;
          }
          if (DAT_005225a0 != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}

