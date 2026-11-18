#include "ghidra_types.h"


// USA 003AB9D8 <- EU 003AB9B4 (Ghidra, non-matching)

void func_003AB9D8(undefined4 param_1,int param_2,int param_3)

{
  ushort *puVar1;
  int iVar2;
  ushort uVar3;
  int iVar4;
  
  iVar2 = 0;
  iVar4 = *(int *)(*(int *)(param_2 + 0x20) + 4);
  if (0 < iVar4) {
    do {
      puVar1 = (ushort *)(**(int **)(param_2 + 0x20) + iVar2 * 0x154);
      if (puVar1 != (ushort *)0x0) {
        if (param_3 == 0) {
          uVar3 = *puVar1 & 0xfbff;
        }
        else {
          uVar3 = *puVar1 | 0x400;
        }
        *puVar1 = uVar3;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar4);
  }
  return;
}

