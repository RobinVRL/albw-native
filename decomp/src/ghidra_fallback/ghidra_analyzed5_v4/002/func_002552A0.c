#include "ghidra_types.h"


// USA 002552A0 <- EU 002552C8 (Ghidra, non-matching)

bool func_002552A0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = *(int *)(iVar1 + 0x47c);
  bVar3 = iVar2 == 2;
  if (bVar3) {
    iVar2 = *(int *)(iVar1 + 0x4e8);
  }
  if (bVar3 && iVar2 == param_2) {
    iVar2 = 0x12;
  }
  else {
    iVar2 = *(int *)(iVar1 + 0x480);
    bVar3 = iVar2 == 2;
    if (bVar3) {
      iVar2 = *(int *)(iVar1 + 0x4ec);
    }
    if (bVar3 && iVar2 == param_2) {
      iVar2 = 0x13;
    }
    else {
      iVar2 = *(int *)(iVar1 + 0x484);
      bVar3 = iVar2 == 2;
      if (bVar3) {
        iVar2 = *(int *)(iVar1 + 0x4f0);
      }
      if (bVar3 && iVar2 == param_2) {
        iVar2 = 0x14;
      }
      else {
        iVar2 = *(int *)(iVar1 + 0x488);
        bVar3 = iVar2 == 2;
        if (bVar3) {
          iVar2 = *(int *)(iVar1 + 0x4f4);
        }
        if (bVar3 && iVar2 == param_2) {
          iVar2 = 0x15;
        }
        else {
          iVar2 = *(int *)(iVar1 + 0x48c);
          bVar3 = iVar2 == 2;
          if (bVar3) {
            iVar2 = *(int *)(iVar1 + 0x4f8);
          }
          if (!bVar3 || iVar2 != param_2) {
            return false;
          }
          iVar2 = 0x16;
        }
      }
    }
  }
  if (4 < iVar2 - 0x12U) {
    return false;
  }
  iVar2 = iVar1 + 0x40c + iVar2 * 4;
  bVar3 = *(int *)(iVar2 + 0x28) != 0;
  if (bVar3) {
    *(undefined4 *)(iVar2 + 0x94) = 0;
  }
  return bVar3;
}

