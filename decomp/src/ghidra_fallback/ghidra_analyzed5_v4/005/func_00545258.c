#include "ghidra_types.h"


// USA 00545258 <- EU 00545230 (Ghidra, non-matching)

uint func_00545258(uint param_1,uint param_2)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  
  piVar2 = *(int **)(param_1 + 0x1c);
  if ((piVar2 != (int *)0x0) && (iVar3 = *(int *)(*piVar2 + 0x10), iVar3 != 0)) {
    bVar1 = *(byte *)(iVar3 + 0x44);
    uVar4 = bVar1 & 1;
    if ((bVar1 & 1) != 0) {
      uVar4 = 1;
    }
    if (uVar4 != param_2) {
      *(byte *)(iVar3 + 0x44) = bVar1 & 0xfe | (byte)param_2;
      if (param_2 != 0) {
        bVar1 = *(byte *)(piVar2 + 0x1c);
        *(char *)(piVar2 + 0x1c) = (char)(bVar1 | 2);
        return bVar1 | 2;
      }
      goto LAB_00545294;
    }
  }
  if (param_2 != 0) {
    return param_1;
  }
LAB_00545294:
  if (*(int *)(param_1 + 0x80) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 0x80) + 0x114;
}

