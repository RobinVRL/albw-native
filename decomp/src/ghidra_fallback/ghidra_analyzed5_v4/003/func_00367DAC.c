#include "ghidra_types.h"

extern int func_003B5FF8(int *param_1);

// USA 00367DAC <- EU 00367D88 (Ghidra, non-matching)

void func_00367DAC(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = *(int *)(param_1 + 0xe0);
  iVar2 = 0;
  iVar3 = 0;
  iVar4 = *(int *)(iVar1 + 0xa4);
  iVar5 = *(int *)(iVar1 + 0xa8);
  if (iVar4 != 0) {
    do {
      func_003B5FF8((int *)(iVar5 + iVar3 * 0x148));
      iVar3 = iVar3 + 1;
    } while (iVar3 != iVar4);
  }
  iVar3 = *(int *)(iVar1 + 0xac);
  iVar1 = *(int *)(iVar1 + 0xb0);
  if (iVar3 != 0) {
    do {
      func_003B5FF8((int *)(iVar1 + iVar2 * 0x148));
      iVar2 = iVar2 + 1;
    } while (iVar2 != iVar3);
  }
  return;
}

