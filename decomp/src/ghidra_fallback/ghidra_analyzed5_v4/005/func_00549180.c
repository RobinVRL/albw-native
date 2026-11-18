#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0054927c;
extern undefined4 *DAT_00549280;
extern undefined4 DAT_00549284;
extern uint *DAT_00549288;
extern undefined4 *DAT_0054928c;
extern undefined4 DAT_00549290;
extern uint *DAT_00549294;
extern undefined4 *DAT_00549298;
extern undefined4 DAT_0054929c;
extern uint *DAT_005492a0;
extern undefined4 *DAT_005492a4;
extern undefined4 DAT_005492a8;

// USA 00549180 <- EU 00549158 (Ghidra, non-matching)
// GLOBAL DAT_0054927c uint *
// GLOBAL DAT_00549280 undefined4 *
// GLOBAL DAT_00549284 undefined4
// GLOBAL DAT_00549288 uint *
// GLOBAL DAT_0054928c undefined4 *
// GLOBAL DAT_00549290 undefined4
// GLOBAL DAT_00549294 uint *
// GLOBAL DAT_00549298 undefined4 *
// GLOBAL DAT_0054929c undefined4
// GLOBAL DAT_005492a0 uint *
// GLOBAL DAT_005492a4 undefined4 *
// GLOBAL DAT_005492a8 undefined4

undefined4 func_00549180(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0054927c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054927c), iVar1 != 0)) {
    *DAT_00549280 = DAT_00549284;
  }
  if (DAT_00549280 != param_2) {
    if (((*DAT_00549288 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00549288), iVar1 != 0)) {
      *DAT_0054928c = DAT_00549290;
    }
    if (DAT_0054928c != param_2) {
      if (((*DAT_00549294 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00549294), iVar1 != 0)) {
        *DAT_00549298 = DAT_0054929c;
      }
      if (DAT_00549298 != param_2) {
        if (((*DAT_005492a0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005492a0), iVar1 != 0))
        {
          *DAT_005492a4 = DAT_005492a8;
        }
        if (DAT_005492a4 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

