#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0052854c;
extern undefined4 *DAT_00528550;
extern undefined4 DAT_00528554;
extern uint *DAT_00528558;
extern undefined4 *DAT_0052855c;
extern undefined4 DAT_00528560;
extern uint *DAT_00528564;
extern undefined4 *DAT_00528568;
extern undefined4 DAT_0052856c;
extern uint *DAT_00528570;
extern undefined4 *DAT_00528574;
extern undefined4 DAT_00528578;

// USA 00528450 <- EU 00528428 (Ghidra, non-matching)
// GLOBAL DAT_0052854c uint *
// GLOBAL DAT_00528550 undefined4 *
// GLOBAL DAT_00528554 undefined4
// GLOBAL DAT_00528558 uint *
// GLOBAL DAT_0052855c undefined4 *
// GLOBAL DAT_00528560 undefined4
// GLOBAL DAT_00528564 uint *
// GLOBAL DAT_00528568 undefined4 *
// GLOBAL DAT_0052856c undefined4
// GLOBAL DAT_00528570 uint *
// GLOBAL DAT_00528574 undefined4 *
// GLOBAL DAT_00528578 undefined4

undefined4 func_00528450(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0052854c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052854c), iVar1 != 0)) {
    *DAT_00528550 = DAT_00528554;
  }
  if (DAT_00528550 != param_2) {
    if (((*DAT_00528558 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00528558), iVar1 != 0)) {
      *DAT_0052855c = DAT_00528560;
    }
    if (DAT_0052855c != param_2) {
      if (((*DAT_00528564 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00528564), iVar1 != 0)) {
        *DAT_00528568 = DAT_0052856c;
      }
      if (DAT_00528568 != param_2) {
        if (((*DAT_00528570 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00528570), iVar1 != 0))
        {
          *DAT_00528574 = DAT_00528578;
        }
        if (DAT_00528574 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

