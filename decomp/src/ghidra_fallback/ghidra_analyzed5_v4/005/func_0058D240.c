#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0058d33c;
extern undefined4 *DAT_0058d340;
extern undefined4 DAT_0058d344;
extern uint *DAT_0058d348;
extern undefined4 *DAT_0058d34c;
extern undefined4 DAT_0058d350;
extern uint *DAT_0058d354;
extern undefined4 *DAT_0058d358;
extern undefined4 DAT_0058d35c;
extern uint *DAT_0058d360;
extern undefined4 *DAT_0058d364;
extern undefined4 DAT_0058d368;

// USA 0058D240 <- EU 0058D218 (Ghidra, non-matching)
// GLOBAL DAT_0058d33c uint *
// GLOBAL DAT_0058d340 undefined4 *
// GLOBAL DAT_0058d344 undefined4
// GLOBAL DAT_0058d348 uint *
// GLOBAL DAT_0058d34c undefined4 *
// GLOBAL DAT_0058d350 undefined4
// GLOBAL DAT_0058d354 uint *
// GLOBAL DAT_0058d358 undefined4 *
// GLOBAL DAT_0058d35c undefined4
// GLOBAL DAT_0058d360 uint *
// GLOBAL DAT_0058d364 undefined4 *
// GLOBAL DAT_0058d368 undefined4

undefined4 func_0058D240(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0058d33c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058d33c), iVar1 != 0)) {
    *DAT_0058d340 = DAT_0058d344;
  }
  if (DAT_0058d340 != param_2) {
    if (((*DAT_0058d348 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058d348), iVar1 != 0)) {
      *DAT_0058d34c = DAT_0058d350;
    }
    if (DAT_0058d34c != param_2) {
      if (((*DAT_0058d354 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058d354), iVar1 != 0)) {
        *DAT_0058d358 = DAT_0058d35c;
      }
      if (DAT_0058d358 != param_2) {
        if (((*DAT_0058d360 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058d360), iVar1 != 0))
        {
          *DAT_0058d364 = DAT_0058d368;
        }
        if (DAT_0058d364 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

