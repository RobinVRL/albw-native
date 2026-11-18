#include "ghidra_types.h"


// USA 00580F4C <- EU 00580F24 (Ghidra, non-matching)

uint func_00580F4C(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  
  uVar2 = *(uint *)(param_1 + 0x1c);
  iVar1 = *(int *)(param_1 + 0x20);
  if (*(char *)(param_1 + 0x50) == '\x01') {
    uVar3 = uVar2 + 0x7c;
  }
  else {
    iVar1 = iVar1 + -0x7c;
    uVar3 = uVar2;
  }
  uVar2 = iVar1 + uVar2;
  bVar4 = uVar3 <= param_2;
  if (bVar4) {
    uVar3 = uVar2;
  }
  bVar5 = uVar2 < param_2;
  if ((!bVar4 || bVar5) || param_2 == uVar3) {
    uVar2 = 0;
  }
  if ((bVar4 && !bVar5) && param_2 != uVar3) {
    uVar2 = 1;
  }
  return uVar2;
}

