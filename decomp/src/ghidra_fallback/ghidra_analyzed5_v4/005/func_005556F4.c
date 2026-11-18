#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_005557f0;
extern undefined4 *DAT_005557f4;
extern undefined4 DAT_005557f8;
extern uint *DAT_005557fc;
extern undefined4 *DAT_00555800;
extern undefined4 DAT_00555804;
extern uint *DAT_00555808;
extern undefined4 *DAT_0055580c;
extern undefined4 DAT_00555810;
extern uint *DAT_00555814;
extern undefined4 *DAT_00555818;
extern undefined4 DAT_0055581c;

// USA 005556F4 <- EU 005556CC (Ghidra, non-matching)
// GLOBAL DAT_005557f0 uint *
// GLOBAL DAT_005557f4 undefined4 *
// GLOBAL DAT_005557f8 undefined4
// GLOBAL DAT_005557fc uint *
// GLOBAL DAT_00555800 undefined4 *
// GLOBAL DAT_00555804 undefined4
// GLOBAL DAT_00555808 uint *
// GLOBAL DAT_0055580c undefined4 *
// GLOBAL DAT_00555810 undefined4
// GLOBAL DAT_00555814 uint *
// GLOBAL DAT_00555818 undefined4 *
// GLOBAL DAT_0055581c undefined4

undefined4 func_005556F4(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_005557f0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005557f0), iVar1 != 0)) {
    *DAT_005557f4 = DAT_005557f8;
  }
  if (DAT_005557f4 != param_2) {
    if (((*DAT_005557fc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005557fc), iVar1 != 0)) {
      *DAT_00555800 = DAT_00555804;
    }
    if (DAT_00555800 != param_2) {
      if (((*DAT_00555808 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00555808), iVar1 != 0)) {
        *DAT_0055580c = DAT_00555810;
      }
      if (DAT_0055580c != param_2) {
        if (((*DAT_00555814 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00555814), iVar1 != 0))
        {
          *DAT_00555818 = DAT_0055581c;
        }
        if (DAT_00555818 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

