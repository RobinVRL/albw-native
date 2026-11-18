#include "ghidra_types.h"

extern int func_0010C4E4(undefined4 *param_1);
extern int func_005902C0(void *param_1);
extern undefined4 *DAT_005edf10;
extern undefined4 DAT_005edf14;
extern undefined4 DAT_005edf18;

// USA 005EDF1C <- EU 005EDEF4 (Ghidra, non-matching)
// GLOBAL DAT_005edf10 undefined4 *
// GLOBAL DAT_005edf14 undefined4
// GLOBAL DAT_005edf18 undefined4

undefined4 func_005EDF1C(void)

{
  undefined4 uVar1;
  
  uVar1 = func_0010C4E4(DAT_005edf10);
  return func_005902C0(uVar1);
}

