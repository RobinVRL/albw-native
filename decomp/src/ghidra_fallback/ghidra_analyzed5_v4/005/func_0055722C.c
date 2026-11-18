#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_005572a0;
extern undefined4 *DAT_005572a4;
extern undefined4 DAT_005572a8;
extern uint *DAT_005572ac;
extern undefined4 *DAT_005572b0;
extern undefined4 DAT_005572b4;

// USA 0055722C <- EU 00557204 (Ghidra, non-matching)
// GLOBAL DAT_005572a0 uint *
// GLOBAL DAT_005572a4 undefined4 *
// GLOBAL DAT_005572a8 undefined4
// GLOBAL DAT_005572ac uint *
// GLOBAL DAT_005572b0 undefined4 *
// GLOBAL DAT_005572b4 undefined4

undefined4 func_0055722C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_005572a0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005572a0), iVar1 != 0)) {
    *DAT_005572a4 = DAT_005572a8;
  }
  if (DAT_005572a4 != param_2) {
    if (((*DAT_005572ac & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005572ac), iVar1 != 0)) {
      *DAT_005572b0 = DAT_005572b4;
    }
    if (DAT_005572b0 != param_2) {
      return 0;
    }
  }
  return 1;
}

