#include "ghidra_types.h"

extern int func_0056F600(int param_1,uint param_2);

// USA 0056F588 <- EU 0056F560 (Ghidra, non-matching)

uint func_0056F588(int param_1,uint param_2)

{
  uint uVar1;
  ushort *puVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  
  uVar1 = func_0056F600(param_1,param_2);
  iVar3 = *(int *)(param_1 + 0xc);
  bVar4 = uVar1 == 0xffff;
  if (bVar4) {
    uVar1 = *(uint *)(param_1 + 0xc);
  }
  puVar2 = *(ushort **)(iVar3 + 0x10);
  if (bVar4) {
    uVar1 = (uint)*(ushort *)(uVar1 + 6);
  }
  do {
    if (puVar2 == (ushort *)0x0) {
LAB_0056f5c8:
      return (uint)*(uint3 *)(iVar3 + 8);
    }
    bVar5 = uVar1 <= *puVar2;
    bVar4 = *puVar2 == uVar1;
    if (!bVar5 || bVar4) {
      bVar5 = puVar2[1] <= uVar1;
      bVar4 = uVar1 == puVar2[1];
    }
    if (!bVar5 || bVar4) {
      iVar3 = (uVar1 - *puVar2) * 3 + (int)puVar2;
      goto LAB_0056f5c8;
    }
    puVar2 = *(ushort **)(puVar2 + 2);
  } while( true );
}

