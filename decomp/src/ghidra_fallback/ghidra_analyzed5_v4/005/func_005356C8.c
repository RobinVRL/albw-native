#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00628810(undefined4 *param_1);
extern uint *DAT_00535740;
extern undefined4 *DAT_00535744;
extern undefined4 DAT_00535748;
extern uint *DAT_0053574c;
extern undefined4 *DAT_00535750;
extern undefined4 DAT_00535754;

// USA 005356C8 <- EU 005356A0 (Ghidra, non-matching)
// GLOBAL DAT_00535740 uint *
// GLOBAL DAT_00535744 undefined4 *
// GLOBAL DAT_00535748 undefined4
// GLOBAL DAT_0053574c uint *
// GLOBAL DAT_00535750 undefined4 *
// GLOBAL DAT_00535754 undefined4

undefined4 func_005356C8(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_00535740 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00535740), iVar1 != 0)) {
    *DAT_00535744 = DAT_00535748;
  }
  if (DAT_00535744 != param_2) {
    if (((*DAT_0053574c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053574c), iVar1 != 0)) {
      *DAT_00535750 = DAT_00535754;
    }
    if (DAT_00535750 != param_2) {
      uVar2 = func_00628810(param_2);
      return uVar2;
    }
  }
  return 1;
}

