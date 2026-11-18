#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_005449b4;
extern undefined4 *DAT_005449b8;
extern undefined4 DAT_005449bc;
extern uint *DAT_005449c0;
extern undefined4 *DAT_005449c4;
extern undefined4 DAT_005449c8;
extern uint *DAT_005449cc;
extern undefined4 *DAT_005449d0;
extern undefined4 DAT_005449d4;

// USA 005448FC <- EU 005448D4 (Ghidra, non-matching)
// GLOBAL DAT_005449b4 uint *
// GLOBAL DAT_005449b8 undefined4 *
// GLOBAL DAT_005449bc undefined4
// GLOBAL DAT_005449c0 uint *
// GLOBAL DAT_005449c4 undefined4 *
// GLOBAL DAT_005449c8 undefined4
// GLOBAL DAT_005449cc uint *
// GLOBAL DAT_005449d0 undefined4 *
// GLOBAL DAT_005449d4 undefined4

undefined4 func_005448FC(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_005449b4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005449b4), iVar1 != 0)) {
    *DAT_005449b8 = DAT_005449bc;
  }
  if (DAT_005449b8 != param_2) {
    if (((*DAT_005449c0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005449c0), iVar1 != 0)) {
      *DAT_005449c4 = DAT_005449c8;
    }
    if (DAT_005449c4 != param_2) {
      if (((*DAT_005449cc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005449cc), iVar1 != 0)) {
        *DAT_005449d0 = DAT_005449d4;
      }
      if (DAT_005449d0 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

