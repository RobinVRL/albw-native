#include "ghidra_types.h"

extern int func_003FC784(undefined4 param_1,int param_2,uint param_3,int param_4);

// USA 003FD0C0 <- EU 003FD0A0 (Ghidra, non-matching)

undefined4 func_003FD0C0(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  
  iVar2 = *(int *)(param_1 + 0xc4);
  uVar3 = 0;
  bVar1 = *(byte *)(*(int *)(iVar2 + 0x2c) + 0x40);
  if ((bVar1 & 2) != 0) {
    if ((bVar1 & 4) == 0) {
      piVar6 = (int *)**(undefined4 **)(iVar2 + 0x30);
      piVar8 = piVar6 + *(ushort *)(*(undefined4 **)(iVar2 + 0x30) + 1);
      for (; piVar6 != piVar8; piVar6 = piVar6 + 1) {
        piVar4 = *(int **)(*piVar6 + 0x34);
        piVar7 = piVar4 + (uint)*(ushort *)(*piVar6 + 0x38) * 0xb;
        for (; piVar4 != piVar7; piVar4 = piVar4 + 0xb) {
          iVar5 = *piVar4;
          if (iVar5 != 0) {
            *(undefined4 *)(iVar5 + 8) = 0;
            *(undefined4 *)(iVar5 + 0x8c) = 0;
            *(undefined4 *)(iVar5 + 0x90) = 0;
            *(undefined4 *)(iVar5 + 0x94) = 0;
            *(undefined4 *)(iVar5 + 0x98) = 0;
            *(undefined4 *)(iVar5 + 0x9c) = 0;
            *(undefined4 *)(iVar5 + 0xa0) = 0;
          }
          piVar4[1] = 0;
          piVar4[2] = 0;
          piVar4[3] = 0;
        }
      }
      piVar6 = *(int **)(*(int *)(iVar2 + 0x30) + 0x3c);
      piVar8 = piVar6 + *(ushort *)(*(int *)(iVar2 + 0x30) + 0x40);
      while (piVar6 != piVar8) {
        iVar5 = *piVar6;
        piVar6 = piVar6 + 1;
        if ((*(byte *)(iVar5 + 0x28) & 8) != 0) {
          *(undefined4 *)(iVar5 + 0x4c) = 0;
          *(undefined4 *)(iVar5 + 0x50) = 0;
        }
      }
      uVar3 = func_003FC784(iVar2,*(int *)(iVar2 + 0x14),
                            *(uint *)(*(int *)(iVar2 + 0x2c) + 0x34) >> 2,iVar2);
      *(byte *)(*(int *)(iVar2 + 0x2c) + 0x40) = *(byte *)(*(int *)(iVar2 + 0x2c) + 0x40) & 0xfd;
      *(undefined4 *)(iVar2 + 0x2c) = 0;
    }
    else {
      uVar3 = 0x80000010;
    }
  }
  return uVar3;
}

