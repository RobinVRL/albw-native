#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00537354;
extern undefined4 *DAT_00537358;
extern undefined4 DAT_0053735c;
extern uint *DAT_00537360;
extern undefined4 *DAT_00537364;
extern undefined4 DAT_00537368;
extern uint *DAT_0053736c;
extern undefined4 *DAT_00537370;
extern undefined4 DAT_00537374;

// USA 0053729C <- EU 00537274 (Ghidra, non-matching)
// GLOBAL DAT_00537354 uint *
// GLOBAL DAT_00537358 undefined4 *
// GLOBAL DAT_0053735c undefined4
// GLOBAL DAT_00537360 uint *
// GLOBAL DAT_00537364 undefined4 *
// GLOBAL DAT_00537368 undefined4
// GLOBAL DAT_0053736c uint *
// GLOBAL DAT_00537370 undefined4 *
// GLOBAL DAT_00537374 undefined4

undefined4 func_0053729C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00537354 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00537354), iVar1 != 0)) {
    *DAT_00537358 = DAT_0053735c;
  }
  if (DAT_00537358 != param_2) {
    if (((*DAT_00537360 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00537360), iVar1 != 0)) {
      *DAT_00537364 = DAT_00537368;
    }
    if (DAT_00537364 != param_2) {
      if (((*DAT_0053736c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053736c), iVar1 != 0)) {
        *DAT_00537370 = DAT_00537374;
      }
      if (DAT_00537370 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

