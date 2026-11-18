#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00560404;
extern undefined4 *DAT_00560408;
extern undefined4 DAT_0056040c;
extern uint *DAT_00560410;
extern undefined4 *DAT_00560414;
extern undefined4 DAT_00560418;

// USA 00560390 <- EU 00560368 (Ghidra, non-matching)
// GLOBAL DAT_00560404 uint *
// GLOBAL DAT_00560408 undefined4 *
// GLOBAL DAT_0056040c undefined4
// GLOBAL DAT_00560410 uint *
// GLOBAL DAT_00560414 undefined4 *
// GLOBAL DAT_00560418 undefined4

undefined4 func_00560390(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00560404 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00560404), iVar1 != 0)) {
    *DAT_00560408 = DAT_0056040c;
  }
  if (DAT_00560408 != param_2) {
    if (((*DAT_00560410 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00560410), iVar1 != 0)) {
      *DAT_00560414 = DAT_00560418;
    }
    if (DAT_00560414 != param_2) {
      return 0;
    }
  }
  return 1;
}

