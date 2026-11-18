#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00628810(undefined4 *param_1);
extern uint *DAT_00545350;
extern undefined4 *DAT_00545354;
extern undefined4 DAT_00545358;
extern uint *DAT_0054535c;
extern undefined4 *DAT_00545360;
extern undefined4 DAT_00545364;

// USA 005452D8 <- EU 005452B0 (Ghidra, non-matching)
// GLOBAL DAT_00545350 uint *
// GLOBAL DAT_00545354 undefined4 *
// GLOBAL DAT_00545358 undefined4
// GLOBAL DAT_0054535c uint *
// GLOBAL DAT_00545360 undefined4 *
// GLOBAL DAT_00545364 undefined4

undefined4 func_005452D8(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_00545350 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00545350), iVar1 != 0)) {
    *DAT_00545354 = DAT_00545358;
  }
  if (DAT_00545354 != param_2) {
    if (((*DAT_0054535c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054535c), iVar1 != 0)) {
      *DAT_00545360 = DAT_00545364;
    }
    if (DAT_00545360 != param_2) {
      uVar2 = func_00628810(param_2);
      return uVar2;
    }
  }
  return 1;
}

