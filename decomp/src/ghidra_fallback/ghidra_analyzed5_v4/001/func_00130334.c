#include "ghidra_types.h"

extern int DAT_001303c4;

// USA 00130334 <- EU 00130334 (Ghidra, non-matching)
// GLOBAL DAT_001303c4 int

void * func_00130334(int param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  piVar1 = (int *)(param_1 + 0x28d0);
  if (param_2 < 3) {
    piVar1 = piVar1 + param_2;
  }
  iVar2 = *piVar1;
  if ((*(uint *)(iVar2 + 0x2c8) & 1) == 0) {
    iVar2 = iVar2 + 0x10;
  }
  else {
    iVar2 = iVar2 + 400;
  }
  *(int *)(param_1 + 0x20) = iVar2 + 4;
  if (param_2 == 0) {
    *(int *)(DAT_001303c4 + param_1) = param_1 + 0x1870;
  }
  else {
    if (param_2 == 1) {
      iVar2 = param_1 + 0x28a4;
    }
    else {
      if (param_2 != 2) goto LAB_001303ac;
      iVar2 = param_1 + 0x28b0;
    }
    *(int *)(param_1 + 0x28c8) = iVar2;
  }
LAB_001303ac:
  puVar3 = (undefined4 *)(param_1 + 0x40);
  if (param_2 < 3) {
    puVar3 = puVar3 + param_2;
  }
  *(undefined4 *)(param_1 + 0x4c) = *puVar3;
  return (void *)param_1;
}

