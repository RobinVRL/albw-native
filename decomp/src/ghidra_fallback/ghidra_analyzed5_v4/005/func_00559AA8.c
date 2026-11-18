#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0034B7A0(undefined4 *param_1);
extern uint *DAT_00559ad4;
extern undefined4 *DAT_00559ad8;
extern undefined4 DAT_00559adc;

// USA 00559AA8 <- EU 00559A80 (Ghidra, non-matching)
// GLOBAL DAT_00559ad4 uint *
// GLOBAL DAT_00559ad8 undefined4 *
// GLOBAL DAT_00559adc undefined4

void func_00559AA8(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00559ad4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00559ad4), iVar1 != 0)) {
    *DAT_00559ad8 = DAT_00559adc;
  }
  if (DAT_00559ad8 != param_2) {
    func_0034B7A0(param_2);
  }
  return;
}

