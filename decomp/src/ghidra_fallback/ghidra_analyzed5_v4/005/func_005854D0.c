#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001E5578(undefined4 *param_1);
extern uint *DAT_00585548;
extern undefined4 *DAT_0058554c;
extern undefined4 DAT_00585550;
extern uint *DAT_00585554;
extern undefined4 *DAT_00585558;
extern undefined4 DAT_0058555c;

// USA 005854D0 <- EU 005854A8 (Ghidra, non-matching)
// GLOBAL DAT_00585548 uint *
// GLOBAL DAT_0058554c undefined4 *
// GLOBAL DAT_00585550 undefined4
// GLOBAL DAT_00585554 uint *
// GLOBAL DAT_00585558 undefined4 *
// GLOBAL DAT_0058555c undefined4

undefined4 func_005854D0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_00585548 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00585548), iVar1 != 0)) {
    *DAT_0058554c = DAT_00585550;
  }
  if (DAT_0058554c != param_2) {
    if (((*DAT_00585554 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00585554), iVar1 != 0)) {
      *DAT_00585558 = DAT_0058555c;
    }
    if (DAT_00585558 != param_2) {
      uVar2 = func_001E5578(param_2);
      return uVar2;
    }
  }
  return 1;
}

