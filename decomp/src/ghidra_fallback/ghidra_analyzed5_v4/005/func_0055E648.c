#include "ghidra_types.h"

extern int func_005467C0(int param_1,undefined4 *param_2);

// USA 0055E648 <- EU 0055E620 (Ghidra, non-matching)

undefined4 func_0055E648(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  switch(*(undefined2 *)(*(int *)(param_1 + 0x2c) + 0x42)) {
  case 0x58:
    if (*(char *)(param_1 + 0xe4) != '\0') {
      uVar2 = *(undefined4 *)(param_1 + 0x70);
      uVar3 = *(undefined4 *)(param_1 + 0x74);
      param_2[2] = *(undefined4 *)(param_1 + 0x78);
      *param_2 = uVar2;
      param_2[1] = uVar3;
      return 3;
    }
    break;
  case 0x5c:
  case 0x5d:
  case 0x5e:
    puVar1 = *(undefined4 **)(param_1 + 0x30);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    param_2[2] = puVar1[2];
    *param_2 = uVar2;
    param_2[1] = uVar3;
    return 2;
  }
  uVar2 = func_005467C0(param_1,param_2);
  return uVar2;
}

