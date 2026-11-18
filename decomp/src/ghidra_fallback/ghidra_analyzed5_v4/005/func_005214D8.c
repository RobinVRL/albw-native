#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00521590;
extern undefined4 *DAT_00521594;
extern undefined4 DAT_00521598;
extern uint *DAT_0052159c;
extern undefined4 *DAT_005215a0;
extern undefined4 DAT_005215a4;
extern uint *DAT_005215a8;
extern undefined4 *DAT_005215ac;
extern undefined4 DAT_005215b0;

// USA 005214D8 <- EU 005214B0 (Ghidra, non-matching)
// GLOBAL DAT_00521590 uint *
// GLOBAL DAT_00521594 undefined4 *
// GLOBAL DAT_00521598 undefined4
// GLOBAL DAT_0052159c uint *
// GLOBAL DAT_005215a0 undefined4 *
// GLOBAL DAT_005215a4 undefined4
// GLOBAL DAT_005215a8 uint *
// GLOBAL DAT_005215ac undefined4 *
// GLOBAL DAT_005215b0 undefined4

undefined4 func_005214D8(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00521590 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00521590), iVar1 != 0)) {
    *DAT_00521594 = DAT_00521598;
  }
  if (DAT_00521594 != param_2) {
    if (((*DAT_0052159c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052159c), iVar1 != 0)) {
      *DAT_005215a0 = DAT_005215a4;
    }
    if (DAT_005215a0 != param_2) {
      if (((*DAT_005215a8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005215a8), iVar1 != 0)) {
        *DAT_005215ac = DAT_005215b0;
      }
      if (DAT_005215ac != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

