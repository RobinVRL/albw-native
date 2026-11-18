#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001E6B34(undefined4 *param_1);
extern uint *DAT_0068d644;
extern undefined4 *DAT_0068d648;
extern undefined4 DAT_0068d64c;
extern uint *DAT_0068d650;
extern undefined4 *DAT_0068d654;
extern undefined4 DAT_0068d658;

// USA 0068D5CC <- EU 0068D5A4 (Ghidra, non-matching)
// GLOBAL DAT_0068d644 uint *
// GLOBAL DAT_0068d648 undefined4 *
// GLOBAL DAT_0068d64c undefined4
// GLOBAL DAT_0068d650 uint *
// GLOBAL DAT_0068d654 undefined4 *
// GLOBAL DAT_0068d658 undefined4

undefined4 func_0068D5CC(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_0068d644 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0068d644), iVar1 != 0)) {
    *DAT_0068d648 = DAT_0068d64c;
  }
  if (DAT_0068d648 != param_2) {
    if (((*DAT_0068d650 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0068d650), iVar1 != 0)) {
      *DAT_0068d654 = DAT_0068d658;
    }
    if (DAT_0068d654 != param_2) {
      uVar2 = func_001E6B34(param_2);
      return uVar2;
    }
  }
  return 1;
}

