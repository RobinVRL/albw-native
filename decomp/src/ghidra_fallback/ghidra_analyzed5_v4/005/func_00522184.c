#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00522280;
extern undefined4 *DAT_00522284;
extern undefined4 DAT_00522288;
extern uint *DAT_0052228c;
extern undefined4 *DAT_00522290;
extern undefined4 DAT_00522294;
extern uint *DAT_00522298;
extern undefined4 *DAT_0052229c;
extern undefined4 DAT_005222a0;
extern uint *DAT_005222a4;
extern undefined4 *DAT_005222a8;
extern undefined4 DAT_005222ac;

// USA 00522184 <- EU 0052215C (Ghidra, non-matching)
// GLOBAL DAT_00522280 uint *
// GLOBAL DAT_00522284 undefined4 *
// GLOBAL DAT_00522288 undefined4
// GLOBAL DAT_0052228c uint *
// GLOBAL DAT_00522290 undefined4 *
// GLOBAL DAT_00522294 undefined4
// GLOBAL DAT_00522298 uint *
// GLOBAL DAT_0052229c undefined4 *
// GLOBAL DAT_005222a0 undefined4
// GLOBAL DAT_005222a4 uint *
// GLOBAL DAT_005222a8 undefined4 *
// GLOBAL DAT_005222ac undefined4

undefined4 func_00522184(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00522280 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00522280), iVar1 != 0)) {
    *DAT_00522284 = DAT_00522288;
  }
  if (DAT_00522284 != param_2) {
    if (((*DAT_0052228c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052228c), iVar1 != 0)) {
      *DAT_00522290 = DAT_00522294;
    }
    if (DAT_00522290 != param_2) {
      if (((*DAT_00522298 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00522298), iVar1 != 0)) {
        *DAT_0052229c = DAT_005222a0;
      }
      if (DAT_0052229c != param_2) {
        if (((*DAT_005222a4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005222a4), iVar1 != 0))
        {
          *DAT_005222a8 = DAT_005222ac;
        }
        if (DAT_005222a8 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

