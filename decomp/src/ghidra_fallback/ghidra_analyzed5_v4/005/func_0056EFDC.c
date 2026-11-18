#include "ghidra_types.h"


// USA 0056EFDC <- EU 0056EFB4 (Ghidra, non-matching)

byte * func_0056EFDC(short *param_1,uint param_2)

{
  short sVar1;
  byte *pbVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  
  sVar1 = *param_1;
  puVar4 = (uint *)((int)param_1 + *(int *)(param_1 + 2));
  if (sVar1 == 0x6000) {
    pbVar2 = (byte *)(puVar4[1] + (int)puVar4);
  }
  else {
    if (sVar1 == 0x6001) {
      uVar5 = *puVar4;
      uVar3 = 0;
      if (uVar5 != 0) {
        do {
          if (param_2 <= *(byte *)((int)puVar4 + uVar3 + 4)) {
            uVar3 = *(uint *)((int)puVar4 + (uVar5 + 3 & 0xfffffffc) + uVar3 * 8 + 8);
            goto LAB_0056f060;
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < uVar5);
      }
    }
    else {
      if (sVar1 != 0x6002) {
        return (byte *)0x0;
      }
      uVar3 = (uint)(byte)*puVar4;
      bVar7 = param_2 <= uVar3;
      bVar6 = uVar3 == param_2;
      if (!bVar7 || bVar6) {
        bVar7 = *(byte *)((int)puVar4 + 1) <= param_2;
        bVar6 = param_2 == *(byte *)((int)puVar4 + 1);
      }
      if (!bVar7 || bVar6) {
        uVar3 = puVar4[(param_2 - uVar3) * 2 + 2];
LAB_0056f060:
        return (byte *)(uVar3 + (int)puVar4);
      }
    }
    pbVar2 = (byte *)0x0;
  }
  return pbVar2;
}

