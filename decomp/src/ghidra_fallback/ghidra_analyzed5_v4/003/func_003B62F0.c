#include "ghidra_types.h"


// USA 003B62F0 <- EU 003B62CC (Ghidra, non-matching)

void func_003B62F0(int param_1,uint param_2)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  
  piVar3 = *(int **)(param_1 + 0x1c);
  iVar2 = *(int *)(*piVar3 + 0x10);
  if (iVar2 != 0) {
    bVar1 = *(byte *)(iVar2 + 0x44);
    uVar4 = bVar1 & 1;
    if ((bVar1 & 1) != 0) {
      uVar4 = 1;
    }
    if ((uVar4 != param_2) && (*(byte *)(iVar2 + 0x44) = bVar1 & 0xfe | (byte)param_2, param_2 != 0)
       ) {
      *(byte *)(piVar3 + 0x1c) = *(byte *)(piVar3 + 0x1c) | 2;
    }
  }
  return;
}

