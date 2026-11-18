#include "ghidra_types.h"

extern int func_0056B3E0(int param_1,uint param_2);

// USA 0056CE2C <- EU 0056CE04 (Ghidra, non-matching)

bool func_0056CE2C(int param_1,uint param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0056B3E0(*(int *)(param_1 + 0x3c),param_2);
  if (puVar1 != (undefined4 *)0x0) {
    *param_3 = *puVar1;
    param_3[1] = puVar1[1];
    param_3[2] = (int)puVar1 + puVar1[3];
  }
  return puVar1 != (undefined4 *)0x0;
}

