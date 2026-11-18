#include "ghidra_types.h"


// USA 00110848 <- EU 00110848 (Ghidra, non-matching)

void * func_00110848(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *(int *)(param_1 + 0xc);
  cVar1 = '\0';
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + 0x34);
  }
  if (iVar2 == 0 || cVar1 == '\0') {
    uVar3 = *(uint *)(param_1 + 0x3c);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x20);
    if (((iVar2 != 0) && (*(int *)(param_1 + 0x24) == *(int *)(iVar2 + 0xc))) &&
       (0 < *(int *)(iVar2 + 4))) {
      *(undefined1 *)(iVar2 + 0x280) = 1;
    }
    uVar3 = *(uint *)(param_1 + 0x3c) & 0xfffffffb | 8;
    *(uint *)(param_1 + 0x3c) = uVar3;
  }
  *(uint *)(param_1 + 0x3c) = uVar3 & 0xfffffffb | 8;
  return (void *)param_1;
}

