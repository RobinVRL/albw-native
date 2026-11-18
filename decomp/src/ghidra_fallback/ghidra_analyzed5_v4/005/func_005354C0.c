#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00535578;
extern undefined4 *DAT_0053557c;
extern undefined4 DAT_00535580;
extern uint *DAT_00535584;
extern undefined4 *DAT_00535588;
extern undefined4 DAT_0053558c;
extern uint *DAT_00535590;
extern undefined4 *DAT_00535594;
extern undefined4 DAT_00535598;

// USA 005354C0 <- EU 00535498 (Ghidra, non-matching)
// GLOBAL DAT_00535578 uint *
// GLOBAL DAT_0053557c undefined4 *
// GLOBAL DAT_00535580 undefined4
// GLOBAL DAT_00535584 uint *
// GLOBAL DAT_00535588 undefined4 *
// GLOBAL DAT_0053558c undefined4
// GLOBAL DAT_00535590 uint *
// GLOBAL DAT_00535594 undefined4 *
// GLOBAL DAT_00535598 undefined4

undefined4 func_005354C0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00535578 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00535578), iVar1 != 0)) {
    *DAT_0053557c = DAT_00535580;
  }
  if (DAT_0053557c != param_2) {
    if (((*DAT_00535584 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00535584), iVar1 != 0)) {
      *DAT_00535588 = DAT_0053558c;
    }
    if (DAT_00535588 != param_2) {
      if (((*DAT_00535590 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00535590), iVar1 != 0)) {
        *DAT_00535594 = DAT_00535598;
      }
      if (DAT_00535594 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

