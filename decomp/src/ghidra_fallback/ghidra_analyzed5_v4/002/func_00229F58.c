#include "ghidra_types.h"


// USA 00229F58 <- EU 00229F58 (Ghidra, non-matching)

void * func_00229F58(int param_1,uint param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  
  puVar2 = (undefined4 *)(param_1 + 0x8c0);
  if (param_2 < 0xf) {
    puVar2 = puVar2 + param_2;
  }
  uVar1 = 0;
  *puVar2 = 0;
  iVar5 = 0;
  *(int *)(param_1 + 0xcb4) = *(int *)(param_1 + 0xcb4) + -1;
  piVar3 = (int *)(param_1 + 0xc78);
  do {
    piVar4 = (int *)(param_1 + 0x8c0);
    if (uVar1 < 0xf) {
      piVar4 = piVar4 + uVar1;
    }
    if (*piVar4 == 0) {
      piVar4 = piVar3;
      if (uVar1 < 0xf) {
        piVar4 = piVar3 + uVar1;
      }
      *piVar4 = -1;
    }
    else {
      piVar4 = piVar3;
      if (uVar1 < 0xf) {
        piVar4 = piVar3 + uVar1;
      }
      *piVar4 = iVar5;
      iVar5 = iVar5 + 1;
    }
    uVar1 = uVar1 + 1;
  } while ((int)uVar1 < 0xf);
  return (void *)param_1;
}

