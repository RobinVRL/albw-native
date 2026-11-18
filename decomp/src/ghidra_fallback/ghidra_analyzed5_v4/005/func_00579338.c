#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_004B9748(undefined4 *param_1);
extern uint *DAT_005793f4;
extern undefined4 *DAT_005793f8;
extern undefined4 DAT_005793fc;
extern uint *DAT_00579400;
extern undefined4 *DAT_00579404;
extern undefined4 DAT_00579408;
extern uint *DAT_0057940c;
extern undefined4 *DAT_00579410;
extern undefined4 DAT_00579414;

// USA 00579338 <- EU 00579310 (Ghidra, non-matching)
// GLOBAL DAT_005793f4 uint *
// GLOBAL DAT_005793f8 undefined4 *
// GLOBAL DAT_005793fc undefined4
// GLOBAL DAT_00579400 uint *
// GLOBAL DAT_00579404 undefined4 *
// GLOBAL DAT_00579408 undefined4
// GLOBAL DAT_0057940c uint *
// GLOBAL DAT_00579410 undefined4 *
// GLOBAL DAT_00579414 undefined4

undefined4 func_00579338(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_005793f4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005793f4), iVar1 != 0)) {
    *DAT_005793f8 = DAT_005793fc;
  }
  if (DAT_005793f8 != param_2) {
    if (((*DAT_00579400 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00579400), iVar1 != 0)) {
      *DAT_00579404 = DAT_00579408;
    }
    if (DAT_00579404 != param_2) {
      if (((*DAT_0057940c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057940c), iVar1 != 0)) {
        *DAT_00579410 = DAT_00579414;
      }
      if (DAT_00579410 != param_2) {
        uVar2 = func_004B9748(param_2);
        return uVar2;
      }
    }
  }
  return 1;
}

