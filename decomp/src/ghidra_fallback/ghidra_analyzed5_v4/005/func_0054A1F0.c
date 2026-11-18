#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0054a330;
extern undefined4 *DAT_0054a334;
extern undefined4 DAT_0054a338;
extern uint *DAT_0054a33c;
extern undefined4 *DAT_0054a340;
extern undefined4 DAT_0054a344;
extern uint *DAT_0054a348;
extern undefined4 *DAT_0054a34c;
extern undefined4 DAT_0054a350;
extern uint *DAT_0054a354;
extern undefined4 *DAT_0054a358;
extern undefined4 DAT_0054a35c;
extern uint *DAT_0054a360;
extern undefined4 *DAT_0054a364;
extern undefined4 DAT_0054a368;

// USA 0054A1F0 <- EU 0054A1C8 (Ghidra, non-matching)
// GLOBAL DAT_0054a330 uint *
// GLOBAL DAT_0054a334 undefined4 *
// GLOBAL DAT_0054a338 undefined4
// GLOBAL DAT_0054a33c uint *
// GLOBAL DAT_0054a340 undefined4 *
// GLOBAL DAT_0054a344 undefined4
// GLOBAL DAT_0054a348 uint *
// GLOBAL DAT_0054a34c undefined4 *
// GLOBAL DAT_0054a350 undefined4
// GLOBAL DAT_0054a354 uint *
// GLOBAL DAT_0054a358 undefined4 *
// GLOBAL DAT_0054a35c undefined4
// GLOBAL DAT_0054a360 uint *
// GLOBAL DAT_0054a364 undefined4 *
// GLOBAL DAT_0054a368 undefined4

undefined4 func_0054A1F0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0054a330 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054a330), iVar1 != 0)) {
    *DAT_0054a334 = DAT_0054a338;
  }
  if (DAT_0054a334 != param_2) {
    if (((*DAT_0054a33c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054a33c), iVar1 != 0)) {
      *DAT_0054a340 = DAT_0054a344;
    }
    if (DAT_0054a340 != param_2) {
      if (((*DAT_0054a348 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054a348), iVar1 != 0)) {
        *DAT_0054a34c = DAT_0054a350;
      }
      if (DAT_0054a34c != param_2) {
        if (((*DAT_0054a354 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054a354), iVar1 != 0))
        {
          *DAT_0054a358 = DAT_0054a35c;
        }
        if (DAT_0054a358 != param_2) {
          if (((*DAT_0054a360 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054a360), iVar1 != 0)
             ) {
            *DAT_0054a364 = DAT_0054a368;
          }
          if (DAT_0054a364 != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}

