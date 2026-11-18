#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00520448;
extern undefined4 *DAT_0052044c;
extern undefined4 DAT_00520450;
extern uint *DAT_00520454;
extern undefined4 *DAT_00520458;
extern undefined4 DAT_0052045c;
extern uint *DAT_00520460;
extern undefined4 *DAT_00520464;
extern undefined4 DAT_00520468;

// USA 00520390 <- EU 00520368 (Ghidra, non-matching)
// GLOBAL DAT_00520448 uint *
// GLOBAL DAT_0052044c undefined4 *
// GLOBAL DAT_00520450 undefined4
// GLOBAL DAT_00520454 uint *
// GLOBAL DAT_00520458 undefined4 *
// GLOBAL DAT_0052045c undefined4
// GLOBAL DAT_00520460 uint *
// GLOBAL DAT_00520464 undefined4 *
// GLOBAL DAT_00520468 undefined4

undefined4 func_00520390(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00520448 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00520448), iVar1 != 0)) {
    *DAT_0052044c = DAT_00520450;
  }
  if (DAT_0052044c != param_2) {
    if (((*DAT_00520454 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00520454), iVar1 != 0)) {
      *DAT_00520458 = DAT_0052045c;
    }
    if (DAT_00520458 != param_2) {
      if (((*DAT_00520460 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00520460), iVar1 != 0)) {
        *DAT_00520464 = DAT_00520468;
      }
      if (DAT_00520464 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

