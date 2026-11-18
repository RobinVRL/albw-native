#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00652970(undefined4 *param_1);
extern uint *DAT_0053d260;
extern undefined4 *DAT_0053d264;
extern undefined4 DAT_0053d268;
extern uint *DAT_0053d26c;
extern undefined4 *DAT_0053d270;
extern undefined4 DAT_0053d274;

// USA 0053D1E8 <- EU 0053D1C0 (Ghidra, non-matching)
// GLOBAL DAT_0053d260 uint *
// GLOBAL DAT_0053d264 undefined4 *
// GLOBAL DAT_0053d268 undefined4
// GLOBAL DAT_0053d26c uint *
// GLOBAL DAT_0053d270 undefined4 *
// GLOBAL DAT_0053d274 undefined4

undefined4 func_0053D1E8(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_0053d260 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053d260), iVar1 != 0)) {
    *DAT_0053d264 = DAT_0053d268;
  }
  if (DAT_0053d264 != param_2) {
    if (((*DAT_0053d26c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053d26c), iVar1 != 0)) {
      *DAT_0053d270 = DAT_0053d274;
    }
    if (DAT_0053d270 != param_2) {
      uVar2 = func_00652970(param_2);
      return uVar2;
    }
  }
  return 1;
}

