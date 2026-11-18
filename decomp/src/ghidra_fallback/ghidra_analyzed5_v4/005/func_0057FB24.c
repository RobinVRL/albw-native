#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0057fb98;
extern undefined4 *DAT_0057fb9c;
extern undefined4 DAT_0057fba0;
extern uint *DAT_0057fba4;
extern undefined4 *DAT_0057fba8;
extern undefined4 DAT_0057fbac;

// USA 0057FB24 <- EU 0057FAFC (Ghidra, non-matching)
// GLOBAL DAT_0057fb98 uint *
// GLOBAL DAT_0057fb9c undefined4 *
// GLOBAL DAT_0057fba0 undefined4
// GLOBAL DAT_0057fba4 uint *
// GLOBAL DAT_0057fba8 undefined4 *
// GLOBAL DAT_0057fbac undefined4

undefined4 func_0057FB24(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0057fb98 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057fb98), iVar1 != 0)) {
    *DAT_0057fb9c = DAT_0057fba0;
  }
  if (DAT_0057fb9c != param_2) {
    if (((*DAT_0057fba4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057fba4), iVar1 != 0)) {
      *DAT_0057fba8 = DAT_0057fbac;
    }
    if (DAT_0057fba8 != param_2) {
      return 0;
    }
  }
  return 1;
}

