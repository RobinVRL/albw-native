#include "ghidra_types.h"


// USA 00581F54 <- EU 00581F2C (Ghidra, non-matching)

undefined4 func_00581F54(int param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x38) == 0) {
    return 0;
  }
  if (param_2 != (undefined4 *)0x0) {
    iVar3 = *(int *)(param_1 + 0x38) + 0xe3c;
    iVar1 = 0;
    do {
      if (*(short *)(iVar3 + iVar1 * 0x28 + 0x20) == param_3) {
        puVar2 = (undefined4 *)(iVar3 + iVar1 * 0x28);
        *param_2 = *puVar2;
        param_2[1] = puVar2[1];
        param_2[2] = puVar2[2];
        param_2[3] = puVar2[3];
        param_2[4] = puVar2[4];
        param_2[5] = puVar2[5];
        param_2[6] = puVar2[6];
        *(undefined2 *)(param_2 + 7) = *(undefined2 *)(puVar2 + 7);
        *(undefined2 *)((int)param_2 + 0x1e) = *(undefined2 *)((int)puVar2 + 0x1e);
        *(undefined2 *)(param_2 + 8) = *(undefined2 *)(puVar2 + 8);
        *(undefined2 *)((int)param_2 + 0x22) = *(undefined2 *)((int)puVar2 + 0x22);
        param_2[9] = puVar2[9];
        return 1;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 != 0x40);
  }
  return 0;
}

