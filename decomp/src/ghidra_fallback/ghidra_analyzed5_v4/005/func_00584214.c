#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00584310;
extern undefined4 *DAT_00584314;
extern undefined4 DAT_00584318;
extern uint *DAT_0058431c;
extern undefined4 *DAT_00584320;
extern undefined4 DAT_00584324;
extern uint *DAT_00584328;
extern undefined4 *DAT_0058432c;
extern undefined4 DAT_00584330;
extern uint *DAT_00584334;
extern undefined4 *DAT_00584338;
extern undefined4 DAT_0058433c;

// USA 00584214 <- EU 005841EC (Ghidra, non-matching)
// GLOBAL DAT_00584310 uint *
// GLOBAL DAT_00584314 undefined4 *
// GLOBAL DAT_00584318 undefined4
// GLOBAL DAT_0058431c uint *
// GLOBAL DAT_00584320 undefined4 *
// GLOBAL DAT_00584324 undefined4
// GLOBAL DAT_00584328 uint *
// GLOBAL DAT_0058432c undefined4 *
// GLOBAL DAT_00584330 undefined4
// GLOBAL DAT_00584334 uint *
// GLOBAL DAT_00584338 undefined4 *
// GLOBAL DAT_0058433c undefined4

undefined4 func_00584214(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00584310 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00584310), iVar1 != 0)) {
    *DAT_00584314 = DAT_00584318;
  }
  if (DAT_00584314 != param_2) {
    if (((*DAT_0058431c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058431c), iVar1 != 0)) {
      *DAT_00584320 = DAT_00584324;
    }
    if (DAT_00584320 != param_2) {
      if (((*DAT_00584328 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00584328), iVar1 != 0)) {
        *DAT_0058432c = DAT_00584330;
      }
      if (DAT_0058432c != param_2) {
        if (((*DAT_00584334 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00584334), iVar1 != 0))
        {
          *DAT_00584338 = DAT_0058433c;
        }
        if (DAT_00584338 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

