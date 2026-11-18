#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0055e830;
extern undefined4 *DAT_0055e834;
extern undefined4 DAT_0055e838;
extern uint *DAT_0055e83c;
extern undefined4 *DAT_0055e840;
extern undefined4 DAT_0055e844;
extern uint *DAT_0055e848;
extern undefined4 *DAT_0055e84c;
extern undefined4 DAT_0055e850;

// USA 0055E778 <- EU 0055E750 (Ghidra, non-matching)
// GLOBAL DAT_0055e830 uint *
// GLOBAL DAT_0055e834 undefined4 *
// GLOBAL DAT_0055e838 undefined4
// GLOBAL DAT_0055e83c uint *
// GLOBAL DAT_0055e840 undefined4 *
// GLOBAL DAT_0055e844 undefined4
// GLOBAL DAT_0055e848 uint *
// GLOBAL DAT_0055e84c undefined4 *
// GLOBAL DAT_0055e850 undefined4

undefined4 func_0055E778(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0055e830 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055e830), iVar1 != 0)) {
    *DAT_0055e834 = DAT_0055e838;
  }
  if (DAT_0055e834 != param_2) {
    if (((*DAT_0055e83c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055e83c), iVar1 != 0)) {
      *DAT_0055e840 = DAT_0055e844;
    }
    if (DAT_0055e840 != param_2) {
      if (((*DAT_0055e848 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055e848), iVar1 != 0)) {
        *DAT_0055e84c = DAT_0055e850;
      }
      if (DAT_0055e84c != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

