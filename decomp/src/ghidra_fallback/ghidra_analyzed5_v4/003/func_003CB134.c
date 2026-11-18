#include "ghidra_types.h"


// USA 003CB134 <- EU 003CB110 (Ghidra, non-matching)

void * func_003CB134(int param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  **(undefined4 **)(param_1 + 0xc0) = 0;
  if (*(byte *)(param_1 + 0xc) < 2) {
    uVar2 = 0;
  }
  else {
    uVar2 = ~(uint)*(byte *)(param_1 + 0xc) & 1;
    if (uVar2 == 1) {
      *(undefined4 *)(*(int *)(param_1 + 0xc0) + 4) = **(undefined4 **)(param_1 + 0xb8);
    }
  }
  uVar2 = uVar2 + 1;
  if (uVar2 < *(byte *)(param_1 + 0xc)) {
    do {
      iVar5 = uVar2 * 4 + -4;
      iVar4 = uVar2 * 4;
      iVar6 = *(int *)(*(int *)(param_1 + 0xc0) + iVar5) +
              *(int *)(*(int *)(param_1 + 0xb8) + iVar5);
      *(int *)(*(int *)(param_1 + 0xc0) + uVar2 * 4) = iVar6;
      iVar5 = uVar2 * 4;
      uVar2 = uVar2 + 2;
      *(int *)(*(int *)(param_1 + 0xc0) + iVar4 + 4) =
           iVar6 + *(int *)(*(int *)(param_1 + 0xb8) + iVar5);
    } while ((int)uVar2 < (int)(uint)*(byte *)(param_1 + 0xc));
  }
  uVar2 = 1;
  uVar7 = 0;
  **(undefined4 **)(param_1 + 0xc4) = 0;
  uVar3 = 1;
  if (1 < *(byte *)(param_1 + 0xc) + 1) {
    do {
      if (*(char *)(*(int *)(param_1 + uVar3 * 4 + 0xc) + 6) == '\0') {
        *(uint *)(*(int *)(param_1 + 0xc4) + uVar3 * 4) = uVar7;
        uVar7 = *(int *)(param_1 + 0xbc) + uVar7 + 1 & 0xff;
      }
      else {
        *(uint *)(*(int *)(param_1 + 0xc4) + uVar3 * 4) = uVar2;
        uVar2 = uVar2 + 1 & 0xff;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(byte *)(param_1 + 0xc) + 1);
  }
  bVar1 = *(byte *)(param_1 + 0xc);
  iVar4 = *(int *)(param_1 + 0xbc);
  **(undefined4 **)(param_1 + 200) = 0;
  uVar2 = ((uint)bVar1 - iVar4) * (iVar4 + 1);
  if (1 < uVar2) {
    if ((~uVar2 & 1) == 1) {
      *(undefined4 *)(*(int *)(param_1 + 200) + 4) = **(undefined4 **)(param_1 + 0xb0);
    }
    for (uVar3 = (~uVar2 & 1) + 1; uVar3 < uVar2; uVar3 = uVar3 + 2) {
      iVar4 = uVar3 * 4 + -4;
      iVar4 = *(int *)(*(int *)(param_1 + 200) + iVar4) + *(int *)(*(int *)(param_1 + 0xb0) + iVar4)
      ;
      *(int *)(*(int *)(param_1 + 200) + uVar3 * 4) = iVar4;
      *(int *)(*(int *)(param_1 + 200) + uVar3 * 4 + 4) =
           iVar4 + *(int *)(*(int *)(param_1 + 0xb0) + uVar3 * 4);
    }
  }
  return (void *)param_1;
}

