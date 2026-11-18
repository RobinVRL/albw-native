#include "ghidra_types.h"


// USA 004073FC <- EU 004073DC (Ghidra, non-matching)

void * func_004073FC(int param_1,int param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  bVar1 = *(byte *)(param_1 + 1);
  if (bVar1 < param_3) {
    bVar1 = (byte)param_3;
  }
  *(byte *)(param_1 + 1) = bVar1;
  iVar2 = 0;
  if (0 < (int)param_3) {
    do {
      puVar5 = (undefined4 *)(param_2 + iVar2 * 0x20);
      uVar3 = puVar5[1];
      puVar4 = (undefined4 *)(*(int *)(param_1 + 4) + iVar2 * 0x20);
      *puVar4 = *puVar5;
      puVar4[1] = uVar3;
      uVar3 = puVar5[3];
      puVar4 = (undefined4 *)(iVar2 * 0x20 + 8 + *(int *)(param_1 + 4));
      *puVar4 = puVar5[2];
      puVar4[1] = uVar3;
      uVar3 = puVar5[5];
      puVar4 = (undefined4 *)(iVar2 * 0x20 + 0x10 + *(int *)(param_1 + 4));
      *puVar4 = puVar5[4];
      puVar4[1] = uVar3;
      uVar3 = puVar5[7];
      puVar4 = (undefined4 *)(iVar2 * 0x20 + 0x18 + *(int *)(param_1 + 4));
      iVar2 = iVar2 + 1;
      *puVar4 = puVar5[6];
      puVar4[1] = uVar3;
    } while (iVar2 < (int)param_3);
    return (void *)param_1;
  }
  return (void *)param_1;
}

