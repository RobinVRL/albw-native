#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_005445ac;
extern undefined4 *DAT_005445b0;
extern undefined4 DAT_005445b4;
extern uint *DAT_005445b8;
extern undefined4 *DAT_005445bc;
extern undefined4 DAT_005445c0;
extern uint *DAT_005445c4;
extern undefined4 *DAT_005445c8;
extern undefined4 DAT_005445cc;

// USA 005444F4 <- EU 005444CC (Ghidra, non-matching)
// GLOBAL DAT_005445ac uint *
// GLOBAL DAT_005445b0 undefined4 *
// GLOBAL DAT_005445b4 undefined4
// GLOBAL DAT_005445b8 uint *
// GLOBAL DAT_005445bc undefined4 *
// GLOBAL DAT_005445c0 undefined4
// GLOBAL DAT_005445c4 uint *
// GLOBAL DAT_005445c8 undefined4 *
// GLOBAL DAT_005445cc undefined4

undefined4 func_005444F4(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_005445ac & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005445ac), iVar1 != 0)) {
    *DAT_005445b0 = DAT_005445b4;
  }
  if (DAT_005445b0 != param_2) {
    if (((*DAT_005445b8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005445b8), iVar1 != 0)) {
      *DAT_005445bc = DAT_005445c0;
    }
    if (DAT_005445bc != param_2) {
      if (((*DAT_005445c4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005445c4), iVar1 != 0)) {
        *DAT_005445c8 = DAT_005445cc;
      }
      if (DAT_005445c8 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

