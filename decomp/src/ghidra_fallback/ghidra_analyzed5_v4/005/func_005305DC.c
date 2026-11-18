#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0053071c;
extern undefined4 *DAT_00530720;
extern undefined4 DAT_00530724;
extern uint *DAT_00530728;
extern undefined4 *DAT_0053072c;
extern undefined4 DAT_00530730;
extern uint *DAT_00530734;
extern undefined4 *DAT_00530738;
extern undefined4 DAT_0053073c;
extern uint *DAT_00530740;
extern undefined4 *DAT_00530744;
extern undefined4 DAT_00530748;
extern uint *DAT_0053074c;
extern undefined4 *DAT_00530750;
extern undefined4 DAT_00530754;

// USA 005305DC <- EU 005305B4 (Ghidra, non-matching)
// GLOBAL DAT_0053071c uint *
// GLOBAL DAT_00530720 undefined4 *
// GLOBAL DAT_00530724 undefined4
// GLOBAL DAT_00530728 uint *
// GLOBAL DAT_0053072c undefined4 *
// GLOBAL DAT_00530730 undefined4
// GLOBAL DAT_00530734 uint *
// GLOBAL DAT_00530738 undefined4 *
// GLOBAL DAT_0053073c undefined4
// GLOBAL DAT_00530740 uint *
// GLOBAL DAT_00530744 undefined4 *
// GLOBAL DAT_00530748 undefined4
// GLOBAL DAT_0053074c uint *
// GLOBAL DAT_00530750 undefined4 *
// GLOBAL DAT_00530754 undefined4

undefined4 func_005305DC(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0053071c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053071c), iVar1 != 0)) {
    *DAT_00530720 = DAT_00530724;
  }
  if (DAT_00530720 != param_2) {
    if (((*DAT_00530728 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00530728), iVar1 != 0)) {
      *DAT_0053072c = DAT_00530730;
    }
    if (DAT_0053072c != param_2) {
      if (((*DAT_00530734 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00530734), iVar1 != 0)) {
        *DAT_00530738 = DAT_0053073c;
      }
      if (DAT_00530738 != param_2) {
        if (((*DAT_00530740 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00530740), iVar1 != 0))
        {
          *DAT_00530744 = DAT_00530748;
        }
        if (DAT_00530744 != param_2) {
          if (((*DAT_0053074c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053074c), iVar1 != 0)
             ) {
            *DAT_00530750 = DAT_00530754;
          }
          if (DAT_00530750 != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}

