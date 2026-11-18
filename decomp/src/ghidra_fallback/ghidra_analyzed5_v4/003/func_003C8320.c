#include "ghidra_types.h"


// USA 003C8320 <- EU 003C82FC (Ghidra, non-matching)

int func_003C8320(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int * *)(albw_frame + 0x0))
  #define local_1c ((undefined4 *)(albw_frame + 0x4))
  piVar2 = *(int **)(param_1 + 4);
  iVar1 = param_1;
  if (param_2 == 0) {
    iVar1 = 2;
  }
  if (param_2 < 0) {
    if (param_2 < -8) {
      iVar1 = 0;
    }
    else {
      iVar1 = 1;
    }
  }
  else if (0 < param_2) {
    if (param_2 < 9) {
      iVar1 = 3;
    }
    else {
      iVar1 = 4;
    }
  }
  if (piVar2[iVar1 + 3] == 0) {
    local_1c[0] = 0;
    iVar1 = (**(code **)(*piVar2 + 0x44))(piVar2,local_1c);
    if (iVar1 < 0) goto LAB_003c83f8;
    local_20 = (int *)0x0;
    iVar1 = (**(code **)(*piVar2 + 0x3c))(piVar2,&local_20,local_1c[0]);
    if (iVar1 < 0) goto LAB_003c83f8;
    iVar1 = (**(code **)(*local_20 + 0x18))(local_20,param_2);
    if (iVar1 < 0) {
      (**(code **)(*local_20 + 0x30))(local_20);
      goto LAB_003c83f8;
    }
    iVar1 = 0;
    if (param_2 == 0) {
      iVar1 = 2;
    }
    if (param_2 < 0) {
      if (param_2 < -8) {
        iVar1 = 0;
      }
      else {
        iVar1 = 1;
      }
    }
    else if (0 < param_2) {
      if (param_2 < 9) {
        iVar1 = 3;
      }
      else {
        iVar1 = 4;
      }
    }
    piVar2[iVar1 + 3] = (int)local_20;
  }
  iVar1 = 0;
LAB_003c83f8:
  if (-1 < iVar1) {
    *(int *)(param_1 + 0x18) = param_2;
    iVar1 = 0;
  }
  return iVar1;
}

