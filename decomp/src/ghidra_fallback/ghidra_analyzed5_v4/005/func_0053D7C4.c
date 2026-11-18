#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00628810(undefined4 *param_1);
extern uint *DAT_0053d83c;
extern undefined4 *DAT_0053d840;
extern undefined4 DAT_0053d844;
extern uint *DAT_0053d848;
extern undefined4 *DAT_0053d84c;
extern undefined4 DAT_0053d850;

// USA 0053D7C4 <- EU 0053D79C (Ghidra, non-matching)
// GLOBAL DAT_0053d83c uint *
// GLOBAL DAT_0053d840 undefined4 *
// GLOBAL DAT_0053d844 undefined4
// GLOBAL DAT_0053d848 uint *
// GLOBAL DAT_0053d84c undefined4 *
// GLOBAL DAT_0053d850 undefined4

undefined4 func_0053D7C4(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_0053d83c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053d83c), iVar1 != 0)) {
    *DAT_0053d840 = DAT_0053d844;
  }
  if (DAT_0053d840 != param_2) {
    if (((*DAT_0053d848 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053d848), iVar1 != 0)) {
      *DAT_0053d84c = DAT_0053d850;
    }
    if (DAT_0053d84c != param_2) {
      uVar2 = func_00628810(param_2);
      return uVar2;
    }
  }
  return 1;
}

