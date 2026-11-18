#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00527540;
extern undefined4 *DAT_00527544;
extern undefined4 DAT_00527548;
extern uint *DAT_0052754c;
extern undefined4 *DAT_00527550;
extern undefined4 DAT_00527554;
extern uint *DAT_00527558;
extern undefined4 *DAT_0052755c;
extern undefined4 DAT_00527560;

// USA 00527488 <- EU 00527460 (Ghidra, non-matching)
// GLOBAL DAT_00527540 uint *
// GLOBAL DAT_00527544 undefined4 *
// GLOBAL DAT_00527548 undefined4
// GLOBAL DAT_0052754c uint *
// GLOBAL DAT_00527550 undefined4 *
// GLOBAL DAT_00527554 undefined4
// GLOBAL DAT_00527558 uint *
// GLOBAL DAT_0052755c undefined4 *
// GLOBAL DAT_00527560 undefined4

undefined4 func_00527488(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00527540 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00527540), iVar1 != 0)) {
    *DAT_00527544 = DAT_00527548;
  }
  if (DAT_00527544 != param_2) {
    if (((*DAT_0052754c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052754c), iVar1 != 0)) {
      *DAT_00527550 = DAT_00527554;
    }
    if (DAT_00527550 != param_2) {
      if (((*DAT_00527558 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00527558), iVar1 != 0)) {
        *DAT_0052755c = DAT_00527560;
      }
      if (DAT_0052755c != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

