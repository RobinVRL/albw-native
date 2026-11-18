#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0055d640;
extern undefined4 *DAT_0055d644;
extern undefined4 DAT_0055d648;
extern uint *DAT_0055d64c;
extern undefined4 *DAT_0055d650;
extern undefined4 DAT_0055d654;

// USA 0055D5CC <- EU 0055D5A4 (Ghidra, non-matching)
// GLOBAL DAT_0055d640 uint *
// GLOBAL DAT_0055d644 undefined4 *
// GLOBAL DAT_0055d648 undefined4
// GLOBAL DAT_0055d64c uint *
// GLOBAL DAT_0055d650 undefined4 *
// GLOBAL DAT_0055d654 undefined4

undefined4 func_0055D5CC(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0055d640 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055d640), iVar1 != 0)) {
    *DAT_0055d644 = DAT_0055d648;
  }
  if (DAT_0055d644 != param_2) {
    if (((*DAT_0055d64c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055d64c), iVar1 != 0)) {
      *DAT_0055d650 = DAT_0055d654;
    }
    if (DAT_0055d650 != param_2) {
      return 0;
    }
  }
  return 1;
}

