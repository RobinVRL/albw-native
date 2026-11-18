#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0052468c;
extern undefined4 *DAT_00524690;
extern undefined4 DAT_00524694;
extern uint *DAT_00524698;
extern undefined4 *DAT_0052469c;
extern undefined4 DAT_005246a0;
extern uint *DAT_005246a4;
extern undefined4 *DAT_005246a8;
extern undefined4 DAT_005246ac;

// USA 005245D4 <- EU 005245AC (Ghidra, non-matching)
// GLOBAL DAT_0052468c uint *
// GLOBAL DAT_00524690 undefined4 *
// GLOBAL DAT_00524694 undefined4
// GLOBAL DAT_00524698 uint *
// GLOBAL DAT_0052469c undefined4 *
// GLOBAL DAT_005246a0 undefined4
// GLOBAL DAT_005246a4 uint *
// GLOBAL DAT_005246a8 undefined4 *
// GLOBAL DAT_005246ac undefined4

undefined4 func_005245D4(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0052468c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052468c), iVar1 != 0)) {
    *DAT_00524690 = DAT_00524694;
  }
  if (DAT_00524690 != param_2) {
    if (((*DAT_00524698 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00524698), iVar1 != 0)) {
      *DAT_0052469c = DAT_005246a0;
    }
    if (DAT_0052469c != param_2) {
      if (((*DAT_005246a4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005246a4), iVar1 != 0)) {
        *DAT_005246a8 = DAT_005246ac;
      }
      if (DAT_005246a8 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

