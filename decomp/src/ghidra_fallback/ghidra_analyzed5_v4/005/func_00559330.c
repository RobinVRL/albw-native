#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_005593a4;
extern undefined4 *DAT_005593a8;
extern undefined4 DAT_005593ac;
extern uint *DAT_005593b0;
extern undefined4 *DAT_005593b4;
extern undefined4 DAT_005593b8;

// USA 00559330 <- EU 00559308 (Ghidra, non-matching)
// GLOBAL DAT_005593a4 uint *
// GLOBAL DAT_005593a8 undefined4 *
// GLOBAL DAT_005593ac undefined4
// GLOBAL DAT_005593b0 uint *
// GLOBAL DAT_005593b4 undefined4 *
// GLOBAL DAT_005593b8 undefined4

undefined4 func_00559330(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_005593a4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005593a4), iVar1 != 0)) {
    *DAT_005593a8 = DAT_005593ac;
  }
  if (DAT_005593a8 != param_2) {
    if (((*DAT_005593b0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005593b0), iVar1 != 0)) {
      *DAT_005593b4 = DAT_005593b8;
    }
    if (DAT_005593b4 != param_2) {
      return 0;
    }
  }
  return 1;
}

