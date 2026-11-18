#include "ghidra_types.h"

extern int func_003E6868(int param_1,undefined4 *param_2,uint param_3);

// USA 003E6AD4 <- EU 003E6AB4 (Ghidra, function missing from the decomp table)

undefined4 func_003E6AD4(int param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  
  piVar1 = *(int **)(param_1 + 0x30);
  if (param_2 == 0) {
LAB_003e6af4:
    if (piVar1 != (int *)0x0) {
      puVar2 = (undefined4 *)piVar1[1];
      iVar3 = *(int *)(param_1 + 0x28);
      puVar4 = *(undefined4 **)(param_1 + 0x2c);
      *(undefined4 **)(param_1 + 0x28) = puVar2;
      *(int *)(param_1 + 0x2c) = piVar1[2];
      *(int *)(param_1 + 0x30) = piVar1[3];
      func_003E6868(param_1,puVar2,iVar3 - (int)puVar2);
      func_003E6868(param_1,puVar4,*(int *)(param_1 + 0x2c) - (int)puVar4);
      return 1;
    }
  }
  else {
    for (; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[3]) {
      if (*piVar1 == param_2) goto LAB_003e6af4;
    }
  }
  return 0;
}

