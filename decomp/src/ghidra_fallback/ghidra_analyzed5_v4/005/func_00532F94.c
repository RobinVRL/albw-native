#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00533008;
extern undefined4 *DAT_0053300c;
extern undefined4 DAT_00533010;
extern uint *DAT_00533014;
extern undefined4 *DAT_00533018;
extern undefined4 DAT_0053301c;

// USA 00532F94 <- EU 00532F6C (Ghidra, non-matching)
// GLOBAL DAT_00533008 uint *
// GLOBAL DAT_0053300c undefined4 *
// GLOBAL DAT_00533010 undefined4
// GLOBAL DAT_00533014 uint *
// GLOBAL DAT_00533018 undefined4 *
// GLOBAL DAT_0053301c undefined4

undefined4 func_00532F94(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00533008 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00533008), iVar1 != 0)) {
    *DAT_0053300c = DAT_00533010;
  }
  if (DAT_0053300c != param_2) {
    if (((*DAT_00533014 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00533014), iVar1 != 0)) {
      *DAT_00533018 = DAT_0053301c;
    }
    if (DAT_00533018 != param_2) {
      return 0;
    }
  }
  return 1;
}

