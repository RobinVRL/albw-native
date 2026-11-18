#include "ghidra_types.h"


// USA 0058073C <- EU 00580714 (Ghidra, non-matching)

uint func_0058073C(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  
  uVar2 = *(uint *)(param_1 + 0x1c);
  iVar4 = *(int *)(param_1 + 0x20);
  if (*(char *)(param_1 + 0x50) == '\x01') {
    uVar3 = uVar2 + 0x98;
  }
  else {
    iVar4 = iVar4 + -0x98;
    uVar3 = uVar2;
  }
  uVar2 = iVar4 + uVar2;
  bVar5 = uVar3 <= param_2;
  uVar1 = uVar3;
  if (bVar5) {
    uVar1 = uVar2;
  }
  if ((!bVar5 || uVar2 < param_2) || param_2 == uVar1) {
    uVar3 = 0;
  }
  if ((bVar5 && uVar2 >= param_2) && param_2 != uVar1) {
    uVar3 = 1;
  }
  return uVar3;
}

