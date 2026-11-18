#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00558984;
extern undefined4 *DAT_00558988;
extern undefined4 DAT_0055898c;
extern uint *DAT_00558990;
extern undefined4 *DAT_00558994;
extern undefined4 DAT_00558998;
extern uint *DAT_0055899c;
extern undefined4 *DAT_005589a0;
extern undefined4 DAT_005589a4;

// USA 005588CC <- EU 005588A4 (Ghidra, non-matching)
// GLOBAL DAT_00558984 uint *
// GLOBAL DAT_00558988 undefined4 *
// GLOBAL DAT_0055898c undefined4
// GLOBAL DAT_00558990 uint *
// GLOBAL DAT_00558994 undefined4 *
// GLOBAL DAT_00558998 undefined4
// GLOBAL DAT_0055899c uint *
// GLOBAL DAT_005589a0 undefined4 *
// GLOBAL DAT_005589a4 undefined4

undefined4 func_005588CC(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00558984 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00558984), iVar1 != 0)) {
    *DAT_00558988 = DAT_0055898c;
  }
  if (DAT_00558988 != param_2) {
    if (((*DAT_00558990 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00558990), iVar1 != 0)) {
      *DAT_00558994 = DAT_00558998;
    }
    if (DAT_00558994 != param_2) {
      if (((*DAT_0055899c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055899c), iVar1 != 0)) {
        *DAT_005589a0 = DAT_005589a4;
      }
      if (DAT_005589a0 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

