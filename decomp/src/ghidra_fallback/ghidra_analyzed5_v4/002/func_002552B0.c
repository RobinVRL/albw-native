#include "ghidra_types.h"


// USA 002552B0 <- EU 002552D8 (Ghidra, non-matching)

bool func_002552B0(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = *(int *)(param_1 + 0x70);
  bVar2 = iVar1 == 2;
  if (bVar2) {
    iVar1 = *(int *)(param_1 + 0xdc);
  }
  if (bVar2 && iVar1 == param_2) {
    iVar1 = 0x12;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x74);
    bVar2 = iVar1 == 2;
    if (bVar2) {
      iVar1 = *(int *)(param_1 + 0xe0);
    }
    if (bVar2 && iVar1 == param_2) {
      iVar1 = 0x13;
    }
    else {
      iVar1 = *(int *)(param_1 + 0x78);
      bVar2 = iVar1 == 2;
      if (bVar2) {
        iVar1 = *(int *)(param_1 + 0xe4);
      }
      if (bVar2 && iVar1 == param_2) {
        iVar1 = 0x14;
      }
      else {
        iVar1 = *(int *)(param_1 + 0x7c);
        bVar2 = iVar1 == 2;
        if (bVar2) {
          iVar1 = *(int *)(param_1 + 0xe8);
        }
        if (bVar2 && iVar1 == param_2) {
          iVar1 = 0x15;
        }
        else {
          iVar1 = *(int *)(param_1 + 0x80);
          bVar2 = iVar1 == 2;
          if (bVar2) {
            iVar1 = *(int *)(param_1 + 0xec);
          }
          if (!bVar2 || iVar1 != param_2) {
            return false;
          }
          iVar1 = 0x16;
        }
      }
    }
  }
  if (4 < iVar1 - 0x12U) {
    return false;
  }
  iVar1 = param_1 + iVar1 * 4;
  bVar2 = *(int *)(iVar1 + 0x28) != 0;
  if (bVar2) {
    *(undefined4 *)(iVar1 + 0x94) = 0;
  }
  return bVar2;
}

