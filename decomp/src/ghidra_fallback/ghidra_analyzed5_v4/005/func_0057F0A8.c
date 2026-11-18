#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0057f11c;
extern undefined4 *DAT_0057f120;
extern undefined4 DAT_0057f124;
extern uint *DAT_0057f128;
extern undefined4 *DAT_0057f12c;
extern undefined4 DAT_0057f130;

// USA 0057F0A8 <- EU 0057F080 (Ghidra, non-matching)
// GLOBAL DAT_0057f11c uint *
// GLOBAL DAT_0057f120 undefined4 *
// GLOBAL DAT_0057f124 undefined4
// GLOBAL DAT_0057f128 uint *
// GLOBAL DAT_0057f12c undefined4 *
// GLOBAL DAT_0057f130 undefined4

undefined4 func_0057F0A8(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0057f11c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057f11c), iVar1 != 0)) {
    *DAT_0057f120 = DAT_0057f124;
  }
  if (DAT_0057f120 != param_2) {
    if (((*DAT_0057f128 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057f128), iVar1 != 0)) {
      *DAT_0057f12c = DAT_0057f130;
    }
    if (DAT_0057f12c != param_2) {
      return 0;
    }
  }
  return 1;
}

