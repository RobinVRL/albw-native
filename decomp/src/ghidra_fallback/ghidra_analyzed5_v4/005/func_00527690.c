#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00527748;
extern undefined4 *DAT_0052774c;
extern undefined4 DAT_00527750;
extern uint *DAT_00527754;
extern undefined4 *DAT_00527758;
extern undefined4 DAT_0052775c;
extern uint *DAT_00527760;
extern undefined4 *DAT_00527764;
extern undefined4 DAT_00527768;

// USA 00527690 <- EU 00527668 (Ghidra, non-matching)
// GLOBAL DAT_00527748 uint *
// GLOBAL DAT_0052774c undefined4 *
// GLOBAL DAT_00527750 undefined4
// GLOBAL DAT_00527754 uint *
// GLOBAL DAT_00527758 undefined4 *
// GLOBAL DAT_0052775c undefined4
// GLOBAL DAT_00527760 uint *
// GLOBAL DAT_00527764 undefined4 *
// GLOBAL DAT_00527768 undefined4

undefined4 func_00527690(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00527748 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00527748), iVar1 != 0)) {
    *DAT_0052774c = DAT_00527750;
  }
  if (DAT_0052774c != param_2) {
    if (((*DAT_00527754 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00527754), iVar1 != 0)) {
      *DAT_00527758 = DAT_0052775c;
    }
    if (DAT_00527758 != param_2) {
      if (((*DAT_00527760 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00527760), iVar1 != 0)) {
        *DAT_00527764 = DAT_00527768;
      }
      if (DAT_00527764 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

