#include "ghidra_types.h"


// USA 003687C4 <- EU 003687A0 (Ghidra, non-matching)

void func_003687C4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  
  iVar3 = *(int *)(param_1 + 0xac);
  iVar1 = *(int *)(param_1 + 0xb0);
  iVar2 = 0;
  if (iVar3 != 0) {
    do {
      bVar7 = iVar2 == param_2;
      iVar6 = iVar1 + iVar2 * 0x148;
      iVar4 = *(int *)(iVar1 + iVar2 * 0x148 + 0x14);
      iVar2 = iVar2 + 1;
      if (bVar7) {
        *(undefined4 *)(iVar4 + 0x10) = 2;
      }
      else {
        *(undefined4 *)(iVar4 + 0x10) = 0;
      }
      uVar5 = *(uint *)(iVar6 + 0x18);
      if (bVar7) {
        uVar5 = uVar5 | 0x40;
      }
      else {
        uVar5 = uVar5 & 0xffffffbf;
      }
      *(uint *)(iVar6 + 0x18) = uVar5;
    } while (iVar2 != iVar3);
  }
  return;
}

