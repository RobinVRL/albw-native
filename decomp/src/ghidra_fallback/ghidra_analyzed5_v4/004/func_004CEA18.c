#include "ghidra_types.h"


// USA 004CEA18 <- EU 004CE9F0 (Ghidra, non-matching)

int func_004CEA18(int param_1,int param_2,uint param_3)

{
  ushort uVar1;
  ushort uVar2;
  byte bVar3;
  byte bVar4;
  ushort *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  if (param_3 < *(uint *)(param_1 + 0x5c)) {
    iVar6 = *(int *)(*(int *)(param_1 + 100) + param_3 * 4);
  }
  else {
    iVar6 = 0;
  }
  uVar1 = *(ushort *)(*(int *)(iVar6 + 0x90) + 4);
  if ((param_2 != 0) &&
     (((uint)*(byte *)(*(int *)(param_1 + 0x28) + (uint)(uVar1 >> 3)) & 1 << (uVar1 & 7)) == 0)) {
    uVar7 = *(uint *)(param_1 + 0x5c);
    uVar8 = uVar7;
    if (param_3 < uVar7) {
      uVar8 = *(uint *)(param_1 + 100);
    }
    if (param_3 < uVar7) {
      iVar6 = *(int *)(uVar8 + param_3 * 4);
    }
    else {
      iVar6 = 0;
    }
    puVar5 = (ushort *)(**(int **)(param_1 + 0x20) + (uint)**(ushort **)(iVar6 + 0x90) * 0x154);
    uVar2 = *puVar5;
    if ((uVar2 & 1) != 0) {
      *puVar5 = uVar2 | 0x100;
    }
  }
  iVar6 = *(int *)(param_1 + 0x28);
  bVar4 = *(byte *)(iVar6 + (uint)(uVar1 >> 3));
  bVar3 = (byte)(1 << (uVar1 & 7));
  if (param_2 == 0) {
    bVar4 = bVar4 & ~bVar3;
  }
  else {
    bVar4 = bVar4 | bVar3;
  }
  *(byte *)(iVar6 + (uint)(uVar1 >> 3)) = bVar4;
  return iVar6;
}

