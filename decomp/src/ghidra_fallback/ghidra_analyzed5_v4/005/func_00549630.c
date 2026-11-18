#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_005496e8;
extern undefined4 *DAT_005496ec;
extern undefined4 DAT_005496f0;
extern uint *DAT_005496f4;
extern undefined4 *DAT_005496f8;
extern undefined4 DAT_005496fc;
extern uint *DAT_00549700;
extern undefined4 *DAT_00549704;
extern undefined4 DAT_00549708;

// USA 00549630 <- EU 00549608 (Ghidra, non-matching)
// GLOBAL DAT_005496e8 uint *
// GLOBAL DAT_005496ec undefined4 *
// GLOBAL DAT_005496f0 undefined4
// GLOBAL DAT_005496f4 uint *
// GLOBAL DAT_005496f8 undefined4 *
// GLOBAL DAT_005496fc undefined4
// GLOBAL DAT_00549700 uint *
// GLOBAL DAT_00549704 undefined4 *
// GLOBAL DAT_00549708 undefined4

undefined4 func_00549630(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_005496e8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005496e8), iVar1 != 0)) {
    *DAT_005496ec = DAT_005496f0;
  }
  if (DAT_005496ec != param_2) {
    if (((*DAT_005496f4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005496f4), iVar1 != 0)) {
      *DAT_005496f8 = DAT_005496fc;
    }
    if (DAT_005496f8 != param_2) {
      if (((*DAT_00549700 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00549700), iVar1 != 0)) {
        *DAT_00549704 = DAT_00549708;
      }
      if (DAT_00549704 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

