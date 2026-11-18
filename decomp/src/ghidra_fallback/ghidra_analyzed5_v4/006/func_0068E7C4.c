#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001E6B34(undefined4 *param_1);
extern uint *DAT_0068e83c;
extern undefined4 *DAT_0068e840;
extern undefined4 DAT_0068e844;
extern uint *DAT_0068e848;
extern undefined4 *DAT_0068e84c;
extern undefined4 DAT_0068e850;

// USA 0068E7C4 <- EU 0068E79C (Ghidra, non-matching)
// GLOBAL DAT_0068e83c uint *
// GLOBAL DAT_0068e840 undefined4 *
// GLOBAL DAT_0068e844 undefined4
// GLOBAL DAT_0068e848 uint *
// GLOBAL DAT_0068e84c undefined4 *
// GLOBAL DAT_0068e850 undefined4

undefined4 func_0068E7C4(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_0068e83c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0068e83c), iVar1 != 0)) {
    *DAT_0068e840 = DAT_0068e844;
  }
  if (DAT_0068e840 != param_2) {
    if (((*DAT_0068e848 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0068e848), iVar1 != 0)) {
      *DAT_0068e84c = DAT_0068e850;
    }
    if (DAT_0068e84c != param_2) {
      uVar2 = func_001E6B34(param_2);
      return uVar2;
    }
  }
  return 1;
}

