#include "ghidra_types.h"


// USA 00255708 <- EU 00255730 (Ghidra, non-matching)

undefined4 func_00255708(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = *(int *)(param_1 + 0x70);
  bVar3 = iVar2 == 2;
  if (bVar3) {
    iVar2 = *(int *)(param_1 + 0xdc);
  }
  if (bVar3 && iVar2 == 0) {
    *(undefined4 *)(param_1 + 0xdc) = 6;
    uVar1 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x74);
    bVar3 = iVar2 == 2;
    if (bVar3) {
      iVar2 = *(int *)(param_1 + 0xe0);
    }
    if (bVar3 && iVar2 == 0) {
      *(undefined4 *)(param_1 + 0xe0) = 6;
      uVar1 = 1;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x78);
      bVar3 = iVar2 == 2;
      if (bVar3) {
        iVar2 = *(int *)(param_1 + 0xe4);
      }
      if (bVar3 && iVar2 == 0) {
        *(undefined4 *)(param_1 + 0xe4) = 6;
        uVar1 = 2;
      }
      else {
        iVar2 = *(int *)(param_1 + 0x7c);
        bVar3 = iVar2 == 2;
        if (bVar3) {
          iVar2 = *(int *)(param_1 + 0xe8);
        }
        if (bVar3 && iVar2 == 0) {
          *(undefined4 *)(param_1 + 0xe8) = 6;
          uVar1 = 3;
        }
        else {
          iVar2 = *(int *)(param_1 + 0x80);
          bVar3 = iVar2 == 2;
          if (bVar3) {
            iVar2 = *(int *)(param_1 + 0xec);
          }
          if (bVar3 && iVar2 == 0) {
            *(undefined4 *)(param_1 + 0xec) = 6;
            uVar1 = 4;
          }
          else {
            uVar1 = 0xffffffff;
          }
        }
      }
    }
  }
  return uVar1;
}

