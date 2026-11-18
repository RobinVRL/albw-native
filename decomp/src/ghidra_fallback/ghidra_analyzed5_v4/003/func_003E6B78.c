#include "ghidra_types.h"

extern int func_003E6894(int param_1,undefined4 *param_2,uint param_3);

// USA 003E6B78 <- EU 003E6B58 (Ghidra, non-matching)

undefined4 func_003E6B78(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar1 = *(undefined4 **)(param_1 + 0x28);
  puVar3 = (undefined4 *)((int)puVar1 + 3U & 0xfffffffc);
  puVar2 = puVar3 + 4;
  if (puVar2 <= *(undefined4 **)(param_1 + 0x2c)) {
    func_003E6894(param_1,puVar1,(int)puVar2 - (int)puVar1);
    *(undefined4 **)(param_1 + 0x28) = puVar2;
    if (puVar3 != (undefined4 *)0x0) {
      puVar3[2] = 0;
      puVar3[1] = puVar1;
      *puVar3 = param_2;
      puVar3[3] = 0;
      puVar3[2] = *(undefined4 *)(param_1 + 0x2c);
      puVar3[3] = *(undefined4 *)(param_1 + 0x30);
      *(undefined4 **)(param_1 + 0x30) = puVar3;
      return 1;
    }
  }
  return 0;
}

