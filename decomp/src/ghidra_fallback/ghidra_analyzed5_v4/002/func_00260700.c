#include "ghidra_types.h"

extern int DAT_002607d0;

// USA 00260700 <- EU 00260728 (Ghidra, non-matching)
// GLOBAL DAT_002607d0 int

void * func_00260700(int param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int unaff_r4;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar3 = *(int *)(param_1 + 0x34);
  iVar7 = *(int *)(param_1 + 4);
  if (((uint)*(byte *)(param_1 + 0x38) & 1 << (*(uint *)(param_1 + 8) & 0xff)) == 0) {
    iVar4 = iVar3 + -1;
  }
  else {
    iVar4 = iVar3 + 1;
  }
  if (0 < iVar7) {
    unaff_r4 = DAT_002607d0;
  }
  uVar5 = 0;
  if (0 < iVar7) {
    do {
      iVar8 = (int)((ulonglong)((longlong)unaff_r4 * (longlong)iVar3) >> 0x20);
      iVar6 = (int)((ulonglong)((longlong)unaff_r4 * (longlong)iVar4) >> 0x20);
      iVar8 = (iVar8 >> 2) - (iVar8 >> 0x1f);
      iVar6 = (iVar6 >> 2) - (iVar6 >> 0x1f);
      bVar1 = *(byte *)(param_1 + 0x38);
      bVar2 = (byte)(1 << (uVar5 & 0xff));
      uVar5 = uVar5 + 1;
      if (iVar3 + iVar8 * -10 == iVar4 + iVar6 * -10) {
        bVar2 = bVar1 & ~bVar2;
      }
      else {
        bVar2 = bVar2 | bVar1;
      }
      *(byte *)(param_1 + 0x38) = bVar2;
      iVar3 = iVar8;
      iVar4 = iVar6;
    } while ((int)uVar5 < iVar7);
  }
  return (void *)param_1;
}

