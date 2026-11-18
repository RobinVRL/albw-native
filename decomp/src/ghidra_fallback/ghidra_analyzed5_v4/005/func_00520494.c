#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0052054c;
extern undefined4 *DAT_00520550;
extern undefined4 DAT_00520554;
extern uint *DAT_00520558;
extern undefined4 *DAT_0052055c;
extern undefined4 DAT_00520560;
extern uint *DAT_00520564;
extern undefined4 *DAT_00520568;
extern undefined4 DAT_0052056c;

// USA 00520494 <- EU 0052046C (Ghidra, non-matching)
// GLOBAL DAT_0052054c uint *
// GLOBAL DAT_00520550 undefined4 *
// GLOBAL DAT_00520554 undefined4
// GLOBAL DAT_00520558 uint *
// GLOBAL DAT_0052055c undefined4 *
// GLOBAL DAT_00520560 undefined4
// GLOBAL DAT_00520564 uint *
// GLOBAL DAT_00520568 undefined4 *
// GLOBAL DAT_0052056c undefined4

undefined4 func_00520494(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0052054c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052054c), iVar1 != 0)) {
    *DAT_00520550 = DAT_00520554;
  }
  if (DAT_00520550 != param_2) {
    if (((*DAT_00520558 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00520558), iVar1 != 0)) {
      *DAT_0052055c = DAT_00520560;
    }
    if (DAT_0052055c != param_2) {
      if (((*DAT_00520564 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00520564), iVar1 != 0)) {
        *DAT_00520568 = DAT_0052056c;
      }
      if (DAT_00520568 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

