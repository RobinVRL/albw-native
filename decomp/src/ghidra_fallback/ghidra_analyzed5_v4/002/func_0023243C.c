#include "ghidra_types.h"


// USA 0023243C <- EU 0023243C (Ghidra, non-matching)

void * func_0023243C(int param_1)

{
  int iVar1;
  ushort *puVar2;
  ushort uVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0x14);
  iVar4 = *(int *)(param_1 + 0x9c);
  *(int *)(iVar1 + 4) = iVar4;
  puVar2 = (ushort *)(iVar1 + 0x16);
  uVar3 = *puVar2;
  if (iVar4 == 0) {
    uVar3 = uVar3 & 0xffbf;
  }
  else {
    uVar3 = uVar3 | 0x40;
  }
  *puVar2 = uVar3;
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xfffffffb;
  return (void *)param_1;
}

