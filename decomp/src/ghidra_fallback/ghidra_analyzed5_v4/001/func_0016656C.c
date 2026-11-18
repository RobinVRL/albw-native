#include "ghidra_types.h"


// USA 0016656C <- EU 00166570 (Ghidra, non-matching)

void * func_0016656C(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int unaff_r4;
  uint uVar3;
  
  uVar3 = *(uint *)(param_1 + 0x18);
  if ((int)uVar3 < 1) {
    uVar2 = 0;
  }
  else {
    uVar2 = uVar3 & 1;
    if (uVar2 != 0) {
      unaff_r4 = *(int *)(param_1 + 0x20);
    }
    uVar1 = 0;
    if (uVar2 != 0) {
      do {
        if (*(int *)(unaff_r4 + uVar1 * 4) == param_2) goto LAB_001665e4;
        uVar1 = uVar1 + 1;
      } while ((int)uVar1 < (int)uVar2);
    }
  }
  uVar1 = uVar2;
  if ((int)uVar1 < (int)uVar3) {
    do {
      if (*(int *)(*(int *)(param_1 + 0x20) + uVar1 * 4) == param_2) goto LAB_001665e4;
      if (*(int *)(*(int *)(param_1 + 0x20) + uVar1 * 4 + 4) == param_2) {
        uVar1 = uVar1 + 1;
        goto LAB_001665e4;
      }
      uVar1 = uVar1 + 2;
    } while ((int)uVar1 < (int)uVar3);
  }
LAB_001665ec:
  if ((int)uVar3 < *(int *)(param_1 + 0x1c)) {
    *(int *)(*(int *)(param_1 + 0x20) + uVar3 * 4) = param_2;
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  }
  return (void *)param_1;
LAB_001665e4:
  if (-1 < (int)uVar1) {
    return (void *)param_1;
  }
  goto LAB_001665ec;
}

