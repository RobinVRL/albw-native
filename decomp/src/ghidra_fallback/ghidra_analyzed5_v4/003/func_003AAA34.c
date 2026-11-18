#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00588BE4(int param_1);
extern uint *DAT_003aaad8;
extern undefined4 *DAT_003aaadc;
extern undefined4 DAT_003aaae0;

// USA 003AAA34 <- EU 003AAA10 (Ghidra, non-matching)
// GLOBAL DAT_003aaad8 uint *
// GLOBAL DAT_003aaadc undefined4 *
// GLOBAL DAT_003aaae0 undefined4

undefined4 func_003AAA34(int param_1,undefined4 *param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  iVar1 = func_00588BE4((int)param_2);
  if (iVar1 == *(int *)(param_1 + 4)) {
    if (((*DAT_003aaad8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_003aaad8), iVar1 != 0)) {
      *DAT_003aaadc = DAT_003aaae0;
    }
    iVar1 = (**(code **)*param_2)(param_2,DAT_003aaadc);
    if (iVar1 == 0) {
      param_2 = (undefined4 *)0x0;
    }
    if ((param_2 != (undefined4 *)0x0) &&
       (fVar2 = *(float *)(param_1 + 8) - ALBW_AS_F32(param_2[0xf4]),
       fVar4 = *(float *)(param_1 + 0xc) - ALBW_AS_F32(param_2[0xf5]),
       fVar3 = *(float *)(param_1 + 0x10) - ALBW_AS_F32(param_2[0xf6]),
       fVar2 * fVar2 + fVar4 * fVar4 + fVar3 * fVar3 <
       *(float *)(param_1 + 0x14) * *(float *)(param_1 + 0x14))) {
      return 1;
    }
  }
  return 0;
}

