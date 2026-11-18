#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00581634;
extern undefined4 *DAT_00581638;
extern undefined4 DAT_0058163c;
extern uint *DAT_00581640;
extern undefined4 *DAT_00581644;
extern undefined4 DAT_00581648;
extern uint *DAT_0058164c;
extern undefined4 *DAT_00581650;
extern undefined4 DAT_00581654;

// USA 0058157C <- EU 00581554 (Ghidra, non-matching)
// GLOBAL DAT_00581634 uint *
// GLOBAL DAT_00581638 undefined4 *
// GLOBAL DAT_0058163c undefined4
// GLOBAL DAT_00581640 uint *
// GLOBAL DAT_00581644 undefined4 *
// GLOBAL DAT_00581648 undefined4
// GLOBAL DAT_0058164c uint *
// GLOBAL DAT_00581650 undefined4 *
// GLOBAL DAT_00581654 undefined4

undefined4 func_0058157C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00581634 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00581634), iVar1 != 0)) {
    *DAT_00581638 = DAT_0058163c;
  }
  if (DAT_00581638 != param_2) {
    if (((*DAT_00581640 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00581640), iVar1 != 0)) {
      *DAT_00581644 = DAT_00581648;
    }
    if (DAT_00581644 != param_2) {
      if (((*DAT_0058164c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058164c), iVar1 != 0)) {
        *DAT_00581650 = DAT_00581654;
      }
      if (DAT_00581650 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

