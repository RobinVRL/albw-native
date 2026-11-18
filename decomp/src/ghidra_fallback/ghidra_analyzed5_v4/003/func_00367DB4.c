#include "ghidra_types.h"

extern int func_003B5FF8(int *param_1);

// USA 00367DB4 <- EU 00367D90 (Ghidra, non-matching)

void func_00367DB4(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = 0;
  iVar2 = 0;
  iVar3 = *(int *)(param_1 + 0xa4);
  iVar4 = *(int *)(param_1 + 0xa8);
  if (iVar3 != 0) {
    do {
      func_003B5FF8((int *)(iVar4 + iVar2 * 0x148));
      iVar2 = iVar2 + 1;
    } while (iVar2 != iVar3);
  }
  iVar2 = *(int *)(param_1 + 0xac);
  iVar3 = *(int *)(param_1 + 0xb0);
  if (iVar2 != 0) {
    do {
      func_003B5FF8((int *)(iVar3 + iVar1 * 0x148));
      iVar1 = iVar1 + 1;
    } while (iVar1 != iVar2);
  }
  return;
}

