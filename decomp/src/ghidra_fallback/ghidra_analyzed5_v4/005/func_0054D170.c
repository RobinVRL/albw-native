#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0054d1e4;
extern undefined4 *DAT_0054d1e8;
extern undefined4 DAT_0054d1ec;
extern uint *DAT_0054d1f0;
extern undefined4 *DAT_0054d1f4;
extern undefined4 DAT_0054d1f8;

// USA 0054D170 <- EU 0054D148 (Ghidra, non-matching)
// GLOBAL DAT_0054d1e4 uint *
// GLOBAL DAT_0054d1e8 undefined4 *
// GLOBAL DAT_0054d1ec undefined4
// GLOBAL DAT_0054d1f0 uint *
// GLOBAL DAT_0054d1f4 undefined4 *
// GLOBAL DAT_0054d1f8 undefined4

undefined4 func_0054D170(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0054d1e4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054d1e4), iVar1 != 0)) {
    *DAT_0054d1e8 = DAT_0054d1ec;
  }
  if (DAT_0054d1e8 != param_2) {
    if (((*DAT_0054d1f0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054d1f0), iVar1 != 0)) {
      *DAT_0054d1f4 = DAT_0054d1f8;
    }
    if (DAT_0054d1f4 != param_2) {
      return 0;
    }
  }
  return 1;
}

