#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0058d640;
extern undefined4 *DAT_0058d644;
extern undefined4 DAT_0058d648;
extern uint *DAT_0058d64c;
extern undefined4 *DAT_0058d650;
extern undefined4 DAT_0058d654;

// USA 0058D5CC <- EU 0058D5A4 (Ghidra, non-matching)
// GLOBAL DAT_0058d640 uint *
// GLOBAL DAT_0058d644 undefined4 *
// GLOBAL DAT_0058d648 undefined4
// GLOBAL DAT_0058d64c uint *
// GLOBAL DAT_0058d650 undefined4 *
// GLOBAL DAT_0058d654 undefined4

undefined4 func_0058D5CC(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0058d640 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058d640), iVar1 != 0)) {
    *DAT_0058d644 = DAT_0058d648;
  }
  if (DAT_0058d644 != param_2) {
    if (((*DAT_0058d64c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058d64c), iVar1 != 0)) {
      *DAT_0058d650 = DAT_0058d654;
    }
    if (DAT_0058d650 != param_2) {
      return 0;
    }
  }
  return 1;
}

