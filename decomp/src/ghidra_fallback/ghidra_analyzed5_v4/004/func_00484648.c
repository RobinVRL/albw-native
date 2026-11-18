#include "ghidra_types.h"


// USA 00484648 <- EU 00484620 (Ghidra, non-matching)

void func_00484648(int param_1,uint param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  iVar2 = *(int *)(param_1 + 0xec);
  iVar5 = *(int *)(param_1 + 0x1c);
  uVar3 = param_2 ^ 1;
  if (iVar2 != 0) {
    bVar1 = *(byte *)(iVar2 + 0x44);
    uVar4 = bVar1 & 1;
    if ((bVar1 & 1) != 0) {
      uVar4 = 1;
    }
    if ((uVar4 != uVar3) && (*(byte *)(iVar2 + 0x44) = bVar1 & 0xfe | (byte)uVar3, uVar3 != 0)) {
      *(byte *)(iVar5 + 0x70) = *(byte *)(iVar5 + 0x70) | 2;
    }
  }
  iVar5 = *(int *)(param_1 + 0xf0);
  iVar2 = *(int *)(param_1 + 0x1c);
  if (iVar5 != 0) {
    bVar1 = *(byte *)(iVar5 + 0x44);
    uVar3 = bVar1 & 1;
    if ((bVar1 & 1) != 0) {
      uVar3 = 1;
    }
    if ((uVar3 != param_2) && (*(byte *)(iVar5 + 0x44) = bVar1 & 0xfe | (byte)param_2, param_2 != 0)
       ) {
      *(byte *)(iVar2 + 0x70) = *(byte *)(iVar2 + 0x70) | 2;
    }
  }
  return;
}

