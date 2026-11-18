#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0052da08;
extern undefined4 *DAT_0052da0c;
extern undefined4 DAT_0052da10;
extern uint *DAT_0052da14;
extern undefined4 *DAT_0052da18;
extern undefined4 DAT_0052da1c;
extern uint *DAT_0052da20;
extern undefined4 *DAT_0052da24;
extern undefined4 DAT_0052da28;

// USA 0052D950 <- EU 0052D928 (Ghidra, non-matching)
// GLOBAL DAT_0052da08 uint *
// GLOBAL DAT_0052da0c undefined4 *
// GLOBAL DAT_0052da10 undefined4
// GLOBAL DAT_0052da14 uint *
// GLOBAL DAT_0052da18 undefined4 *
// GLOBAL DAT_0052da1c undefined4
// GLOBAL DAT_0052da20 uint *
// GLOBAL DAT_0052da24 undefined4 *
// GLOBAL DAT_0052da28 undefined4

undefined4 func_0052D950(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0052da08 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052da08), iVar1 != 0)) {
    *DAT_0052da0c = DAT_0052da10;
  }
  if (DAT_0052da0c != param_2) {
    if (((*DAT_0052da14 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052da14), iVar1 != 0)) {
      *DAT_0052da18 = DAT_0052da1c;
    }
    if (DAT_0052da18 != param_2) {
      if (((*DAT_0052da20 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052da20), iVar1 != 0)) {
        *DAT_0052da24 = DAT_0052da28;
      }
      if (DAT_0052da24 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

