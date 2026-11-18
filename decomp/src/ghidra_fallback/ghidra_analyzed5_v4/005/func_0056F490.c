#include "ghidra_types.h"


// USA 0056F490 <- EU 0056F468 (Ghidra, non-matching)

int func_0056F490(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  ushort *puVar3;
  uint uVar4;
  bool bVar5;
  
  puVar3 = *(ushort **)(param_1 + 0x28);
  if (puVar3 != (ushort *)0x0) {
    param_1 = (uint)*(byte *)(param_1 + 4);
  }
  if (puVar3 == (ushort *)0x0 || param_1 == 0) {
    return 0;
  }
  uVar2 = (uint)*puVar3;
  uVar4 = 0;
  do {
    while( true ) {
      uVar1 = uVar4 + uVar2 >> 1;
      if (puVar3[uVar1 * 2 + 1] == param_2) {
        puVar3 = puVar3 + puVar3[uVar1 * 2 + 2];
        uVar2 = (uint)*puVar3;
        uVar4 = 0;
        do {
          while( true ) {
            uVar1 = uVar4 + uVar2 >> 1;
            if (puVar3[uVar1 * 2 + 1] == param_3) {
              return (int)(short)puVar3[uVar1 * 2 + 2];
            }
            if (puVar3[uVar1 * 2 + 1] < param_3) break;
            bVar5 = uVar2 == uVar1;
            uVar2 = uVar1;
            if (bVar5) {
              return 0;
            }
          }
          bVar5 = uVar4 != uVar1;
          uVar4 = uVar1;
        } while (bVar5);
        return 0;
      }
      if (puVar3[uVar1 * 2 + 1] < param_2) break;
      bVar5 = uVar2 == uVar1;
      uVar2 = uVar1;
      if (bVar5) {
        return 0;
      }
    }
    bVar5 = uVar4 != uVar1;
    uVar4 = uVar1;
  } while (bVar5);
  return 0;
}

