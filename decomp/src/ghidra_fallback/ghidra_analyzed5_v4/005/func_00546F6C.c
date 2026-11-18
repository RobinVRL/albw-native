#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00546fe0;
extern undefined4 *DAT_00546fe4;
extern undefined4 DAT_00546fe8;
extern uint *DAT_00546fec;
extern undefined4 *DAT_00546ff0;
extern undefined4 DAT_00546ff4;

// USA 00546F6C <- EU 00546F44 (Ghidra, non-matching)
// GLOBAL DAT_00546fe0 uint *
// GLOBAL DAT_00546fe4 undefined4 *
// GLOBAL DAT_00546fe8 undefined4
// GLOBAL DAT_00546fec uint *
// GLOBAL DAT_00546ff0 undefined4 *
// GLOBAL DAT_00546ff4 undefined4

undefined4 func_00546F6C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00546fe0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00546fe0), iVar1 != 0)) {
    *DAT_00546fe4 = DAT_00546fe8;
  }
  if (DAT_00546fe4 != param_2) {
    if (((*DAT_00546fec & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00546fec), iVar1 != 0)) {
      *DAT_00546ff0 = DAT_00546ff4;
    }
    if (DAT_00546ff0 != param_2) {
      return 0;
    }
  }
  return 1;
}

