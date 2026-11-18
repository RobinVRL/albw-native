#include "ghidra_types.h"


// USA 00537B80 <- EU 00537B58 (Ghidra, non-matching)

undefined4 func_00537B80(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = iVar1 + 0x40c;
  iVar3 = *(int *)(iVar1 + 0x47c);
  bVar4 = iVar3 == 2;
  if (bVar4) {
    iVar3 = *(int *)(iVar1 + 0x4e8);
  }
  if (!bVar4 || iVar3 != 0) {
    iVar3 = *(int *)(iVar1 + 0x480);
    bVar4 = iVar3 == 2;
    if (bVar4) {
      iVar3 = *(int *)(iVar1 + 0x4ec);
    }
    if (!bVar4 || iVar3 != 0) {
      iVar3 = *(int *)(iVar1 + 0x484);
      bVar4 = iVar3 == 2;
      if (bVar4) {
        iVar3 = *(int *)(iVar1 + 0x4f0);
      }
      if (!bVar4 || iVar3 != 0) {
        iVar3 = *(int *)(iVar1 + 0x488);
        bVar4 = iVar3 == 2;
        if (bVar4) {
          iVar3 = *(int *)(iVar1 + 0x4f4);
        }
        if (!bVar4 || iVar3 != 0) {
          bVar4 = *(int *)(iVar1 + 0x48c) == 2;
          if (bVar4) {
            iVar2 = *(int *)(iVar1 + 0x4f8);
          }
          if (!bVar4 || iVar2 != 0) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}

