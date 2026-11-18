#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_005335ec;
extern undefined4 *DAT_005335f0;
extern undefined4 DAT_005335f4;
extern uint *DAT_005335f8;
extern undefined4 *DAT_005335fc;
extern undefined4 DAT_00533600;
extern uint *DAT_00533604;
extern undefined4 *DAT_00533608;
extern undefined4 DAT_0053360c;
extern uint *DAT_00533610;
extern undefined4 *DAT_00533614;
extern undefined4 DAT_00533618;

// USA 005334F0 <- EU 005334C8 (Ghidra, non-matching)
// GLOBAL DAT_005335ec uint *
// GLOBAL DAT_005335f0 undefined4 *
// GLOBAL DAT_005335f4 undefined4
// GLOBAL DAT_005335f8 uint *
// GLOBAL DAT_005335fc undefined4 *
// GLOBAL DAT_00533600 undefined4
// GLOBAL DAT_00533604 uint *
// GLOBAL DAT_00533608 undefined4 *
// GLOBAL DAT_0053360c undefined4
// GLOBAL DAT_00533610 uint *
// GLOBAL DAT_00533614 undefined4 *
// GLOBAL DAT_00533618 undefined4

undefined4 func_005334F0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_005335ec & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005335ec), iVar1 != 0)) {
    *DAT_005335f0 = DAT_005335f4;
  }
  if (DAT_005335f0 != param_2) {
    if (((*DAT_005335f8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005335f8), iVar1 != 0)) {
      *DAT_005335fc = DAT_00533600;
    }
    if (DAT_005335fc != param_2) {
      if (((*DAT_00533604 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00533604), iVar1 != 0)) {
        *DAT_00533608 = DAT_0053360c;
      }
      if (DAT_00533608 != param_2) {
        if (((*DAT_00533610 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00533610), iVar1 != 0))
        {
          *DAT_00533614 = DAT_00533618;
        }
        if (DAT_00533614 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

