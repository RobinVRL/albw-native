#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00531c94;
extern undefined4 *DAT_00531c98;
extern undefined4 DAT_00531c9c;
extern uint *DAT_00531ca0;
extern undefined4 *DAT_00531ca4;
extern undefined4 DAT_00531ca8;
extern uint *DAT_00531cac;
extern undefined4 *DAT_00531cb0;
extern undefined4 DAT_00531cb4;
extern uint *DAT_00531cb8;
extern undefined4 *DAT_00531cbc;
extern undefined4 DAT_00531cc0;

// USA 00531B98 <- EU 00531B70 (Ghidra, non-matching)
// GLOBAL DAT_00531c94 uint *
// GLOBAL DAT_00531c98 undefined4 *
// GLOBAL DAT_00531c9c undefined4
// GLOBAL DAT_00531ca0 uint *
// GLOBAL DAT_00531ca4 undefined4 *
// GLOBAL DAT_00531ca8 undefined4
// GLOBAL DAT_00531cac uint *
// GLOBAL DAT_00531cb0 undefined4 *
// GLOBAL DAT_00531cb4 undefined4
// GLOBAL DAT_00531cb8 uint *
// GLOBAL DAT_00531cbc undefined4 *
// GLOBAL DAT_00531cc0 undefined4

undefined4 func_00531B98(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00531c94 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00531c94), iVar1 != 0)) {
    *DAT_00531c98 = DAT_00531c9c;
  }
  if (DAT_00531c98 != param_2) {
    if (((*DAT_00531ca0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00531ca0), iVar1 != 0)) {
      *DAT_00531ca4 = DAT_00531ca8;
    }
    if (DAT_00531ca4 != param_2) {
      if (((*DAT_00531cac & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00531cac), iVar1 != 0)) {
        *DAT_00531cb0 = DAT_00531cb4;
      }
      if (DAT_00531cb0 != param_2) {
        if (((*DAT_00531cb8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00531cb8), iVar1 != 0))
        {
          *DAT_00531cbc = DAT_00531cc0;
        }
        if (DAT_00531cbc != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

