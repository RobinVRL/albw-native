#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00553df4;
extern undefined4 *DAT_00553df8;
extern undefined4 DAT_00553dfc;
extern uint *DAT_00553e00;
extern undefined4 *DAT_00553e04;
extern undefined4 DAT_00553e08;
extern uint *DAT_00553e0c;
extern undefined4 *DAT_00553e10;
extern undefined4 DAT_00553e14;
extern uint *DAT_00553e18;
extern undefined4 *DAT_00553e1c;
extern undefined4 DAT_00553e20;

// USA 00553CF8 <- EU 00553CD0 (Ghidra, non-matching)
// GLOBAL DAT_00553df4 uint *
// GLOBAL DAT_00553df8 undefined4 *
// GLOBAL DAT_00553dfc undefined4
// GLOBAL DAT_00553e00 uint *
// GLOBAL DAT_00553e04 undefined4 *
// GLOBAL DAT_00553e08 undefined4
// GLOBAL DAT_00553e0c uint *
// GLOBAL DAT_00553e10 undefined4 *
// GLOBAL DAT_00553e14 undefined4
// GLOBAL DAT_00553e18 uint *
// GLOBAL DAT_00553e1c undefined4 *
// GLOBAL DAT_00553e20 undefined4

undefined4 func_00553CF8(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00553df4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00553df4), iVar1 != 0)) {
    *DAT_00553df8 = DAT_00553dfc;
  }
  if (DAT_00553df8 != param_2) {
    if (((*DAT_00553e00 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00553e00), iVar1 != 0)) {
      *DAT_00553e04 = DAT_00553e08;
    }
    if (DAT_00553e04 != param_2) {
      if (((*DAT_00553e0c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00553e0c), iVar1 != 0)) {
        *DAT_00553e10 = DAT_00553e14;
      }
      if (DAT_00553e10 != param_2) {
        if (((*DAT_00553e18 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00553e18), iVar1 != 0))
        {
          *DAT_00553e1c = DAT_00553e20;
        }
        if (DAT_00553e1c != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

