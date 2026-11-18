#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0058546c;
extern undefined4 *DAT_00585470;
extern undefined4 DAT_00585474;
extern uint *DAT_00585478;
extern undefined4 *DAT_0058547c;
extern undefined4 DAT_00585480;
extern uint *DAT_00585484;
extern undefined4 *DAT_00585488;
extern undefined4 DAT_0058548c;
extern uint *DAT_00585490;
extern undefined4 *DAT_00585494;
extern undefined4 DAT_00585498;
extern uint *DAT_0058549c;
extern undefined4 *DAT_005854a0;
extern undefined4 DAT_005854a4;

// USA 0058532C <- EU 00585304 (Ghidra, non-matching)
// GLOBAL DAT_0058546c uint *
// GLOBAL DAT_00585470 undefined4 *
// GLOBAL DAT_00585474 undefined4
// GLOBAL DAT_00585478 uint *
// GLOBAL DAT_0058547c undefined4 *
// GLOBAL DAT_00585480 undefined4
// GLOBAL DAT_00585484 uint *
// GLOBAL DAT_00585488 undefined4 *
// GLOBAL DAT_0058548c undefined4
// GLOBAL DAT_00585490 uint *
// GLOBAL DAT_00585494 undefined4 *
// GLOBAL DAT_00585498 undefined4
// GLOBAL DAT_0058549c uint *
// GLOBAL DAT_005854a0 undefined4 *
// GLOBAL DAT_005854a4 undefined4

undefined4 func_0058532C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0058546c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058546c), iVar1 != 0)) {
    *DAT_00585470 = DAT_00585474;
  }
  if (DAT_00585470 != param_2) {
    if (((*DAT_00585478 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00585478), iVar1 != 0)) {
      *DAT_0058547c = DAT_00585480;
    }
    if (DAT_0058547c != param_2) {
      if (((*DAT_00585484 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00585484), iVar1 != 0)) {
        *DAT_00585488 = DAT_0058548c;
      }
      if (DAT_00585488 != param_2) {
        if (((*DAT_00585490 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00585490), iVar1 != 0))
        {
          *DAT_00585494 = DAT_00585498;
        }
        if (DAT_00585494 != param_2) {
          if (((*DAT_0058549c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058549c), iVar1 != 0)
             ) {
            *DAT_005854a0 = DAT_005854a4;
          }
          if (DAT_005854a0 != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}

