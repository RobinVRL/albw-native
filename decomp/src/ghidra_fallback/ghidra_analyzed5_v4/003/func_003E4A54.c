#include "ghidra_types.h"


// USA 003E4A54 <- EU 003E4A34 (Ghidra, non-matching)

undefined4 * func_003E4A54(undefined4 *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  iVar2 = 4;
  do {
    iVar1 = iVar2 * 4;
    iVar2 = iVar2 + -1;
    puVar5 = (undefined4 *)(param_2 + *(int *)(param_4 + iVar1) * 4);
    puVar3 = puVar5 + param_3;
    *param_1 = *puVar5;
    param_1[1] = puVar5[1] & 0xffff | *puVar3 << 0x10;
    param_1[2] = *puVar3 >> 0x10 | puVar3[1] << 0x10;
    param_1[3] = (uint)puVar5[1] >> 0x10 | puVar5[2] << 0x10;
    puVar6 = puVar5 + param_3 * 2;
    param_1[4] = ((uint)puVar5[2] >> 0x10) + (puVar3[1] & 0xffff0000);
    puVar4 = puVar6 + param_3;
    param_1[5] = puVar3[2];
    param_1[6] = *puVar6;
    param_1[7] = puVar6[1] & 0xffff | *puVar4 << 0x10;
    param_1[8] = *puVar4 >> 0x10 | puVar4[1] << 0x10;
    param_1[9] = (uint)puVar6[1] >> 0x10 | puVar6[2] << 0x10;
    puVar3 = param_1 + 0xb;
    param_1[10] = ((uint)puVar6[2] >> 0x10) + (puVar4[1] & 0xffff0000);
    param_1 = param_1 + 0xc;
    *puVar3 = puVar4[2];
  } while (0 < iVar2);
  return param_1;
}

