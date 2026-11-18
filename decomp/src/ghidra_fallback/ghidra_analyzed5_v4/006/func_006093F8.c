#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_004ED00C(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_006093fc;

// USA 006093F8 <- EU 006093D0 (Ghidra, non-matching)
// GLOBAL DAT_006093fc undefined4

void func_006093F8(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(800);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = func_004ED00C(puVar1,param_1);
    *puVar1 = DAT_006093fc;
  }
  return;
}

