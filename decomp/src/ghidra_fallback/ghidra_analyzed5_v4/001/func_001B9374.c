#include "ghidra_types.h"


// USA 001B9374 <- EU 001B9374 (Ghidra, non-matching)

undefined4 func_001B9374(int param_1,uint param_2,int param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  
  piVar2 = (int *)(param_1 + 0x10);
  if (param_2 < 8) {
    piVar2 = piVar2 + param_2;
  }
  if ((*piVar2 == 0) && (0 < *(int *)(param_3 + 200))) {
    if (*(int *)(param_3 + 200) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = **(undefined4 **)(param_3 + 0xd0);
    }
    puVar1 = (undefined4 *)(param_1 + 0x10);
    if (param_2 < 8) {
      puVar1 = puVar1 + param_2;
    }
    *puVar1 = uVar3;
  }
  puVar1 = (undefined4 *)(param_1 + 0x10);
  if (param_2 < 8) {
    puVar1 = (undefined4 *)(param_1 + 0x10 + param_2 * 4);
  }
  return *puVar1;
}

