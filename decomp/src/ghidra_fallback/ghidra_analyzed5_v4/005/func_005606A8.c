#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0056071c;
extern undefined4 *DAT_00560720;
extern undefined4 DAT_00560724;
extern uint *DAT_00560728;
extern undefined4 *DAT_0056072c;
extern undefined4 DAT_00560730;

// USA 005606A8 <- EU 00560680 (Ghidra, non-matching)
// GLOBAL DAT_0056071c uint *
// GLOBAL DAT_00560720 undefined4 *
// GLOBAL DAT_00560724 undefined4
// GLOBAL DAT_00560728 uint *
// GLOBAL DAT_0056072c undefined4 *
// GLOBAL DAT_00560730 undefined4

undefined4 func_005606A8(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0056071c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0056071c), iVar1 != 0)) {
    *DAT_00560720 = DAT_00560724;
  }
  if (DAT_00560720 != param_2) {
    if (((*DAT_00560728 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00560728), iVar1 != 0)) {
      *DAT_0056072c = DAT_00560730;
    }
    if (DAT_0056072c != param_2) {
      return 0;
    }
  }
  return 1;
}

