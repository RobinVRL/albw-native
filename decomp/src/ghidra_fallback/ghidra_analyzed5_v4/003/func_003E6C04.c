#include "ghidra_types.h"

extern int func_003E6894(int param_1,undefined4 *param_2,uint param_3);

// USA 003E6C04 <- EU 003E6BE4 (Ghidra, non-matching)

undefined4 * func_003E6C04(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  if (param_2 == 0) {
    param_2 = 1;
  }
  uVar4 = param_2 + 3U & 0xfffffffc;
  puVar1 = (undefined4 *)0x0;
  if (param_3 < 0) {
    puVar2 = (undefined4 *)(*(int *)(param_1 + 0x2c) - uVar4 & ~(0xffffffffU - param_3));
    if (*(undefined4 **)(param_1 + 0x28) <= puVar2) {
      func_003E6894(param_1,puVar2,*(int *)(param_1 + 0x2c) - (int)puVar2);
      *(undefined4 **)(param_1 + 0x2c) = puVar2;
      puVar1 = puVar2;
    }
  }
  else {
    puVar2 = *(undefined4 **)(param_1 + 0x28);
    puVar3 = (undefined4 *)((int)puVar2 + param_3 + -1 & ~(param_3 - 1U));
    uVar4 = (int)puVar3 + uVar4;
    if (uVar4 <= *(uint *)(param_1 + 0x2c)) {
      func_003E6894(param_1,puVar2,uVar4 - (int)puVar2);
      *(uint *)(param_1 + 0x28) = uVar4;
      puVar1 = puVar3;
    }
  }
  return puVar1;
}

