#include "ghidra_types.h"


// USA 00537C50 <- EU 00537C28 (Ghidra, non-matching)

int func_00537C50(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = iVar1 + 0x40c;
  iVar3 = *(int *)(iVar1 + 0x47c);
  bVar4 = iVar3 == 0;
  if (bVar4) {
    iVar3 = *(int *)(iVar1 + 0x480);
  }
  if (bVar4 && iVar3 == 0) {
    iVar3 = *(int *)(iVar1 + 0x484);
    bVar4 = iVar3 == 0;
    if (bVar4) {
      iVar3 = *(int *)(iVar1 + 0x488);
    }
    bVar5 = bVar4 && iVar3 == 0;
    if (bVar4 && iVar3 == 0) {
      iVar2 = *(int *)(iVar1 + 0x48c);
      bVar5 = iVar2 == 0;
    }
    if (bVar5) {
      return iVar2;
    }
  }
  return 1;
}

