#include "ghidra_types.h"

extern int func_003FC784(undefined4 param_1,int param_2,uint param_3,int param_4);

// USA 003FD0C8 <- EU 003FD0A8 (Ghidra, non-matching)

undefined4 func_003FD0C8(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  
  uVar2 = 0;
  bVar1 = *(byte *)(*(int *)(param_1 + 0x2c) + 0x40);
  if ((bVar1 & 2) != 0) {
    if ((bVar1 & 4) == 0) {
      piVar5 = (int *)**(undefined4 **)(param_1 + 0x30);
      piVar7 = piVar5 + *(ushort *)(*(undefined4 **)(param_1 + 0x30) + 1);
      for (; piVar5 != piVar7; piVar5 = piVar5 + 1) {
        piVar3 = *(int **)(*piVar5 + 0x34);
        piVar6 = piVar3 + (uint)*(ushort *)(*piVar5 + 0x38) * 0xb;
        for (; piVar3 != piVar6; piVar3 = piVar3 + 0xb) {
          iVar4 = *piVar3;
          if (iVar4 != 0) {
            *(undefined4 *)(iVar4 + 8) = 0;
            *(undefined4 *)(iVar4 + 0x8c) = 0;
            *(undefined4 *)(iVar4 + 0x90) = 0;
            *(undefined4 *)(iVar4 + 0x94) = 0;
            *(undefined4 *)(iVar4 + 0x98) = 0;
            *(undefined4 *)(iVar4 + 0x9c) = 0;
            *(undefined4 *)(iVar4 + 0xa0) = 0;
          }
          piVar3[1] = 0;
          piVar3[2] = 0;
          piVar3[3] = 0;
        }
      }
      piVar5 = *(int **)(*(int *)(param_1 + 0x30) + 0x3c);
      piVar7 = piVar5 + *(ushort *)(*(int *)(param_1 + 0x30) + 0x40);
      while (piVar5 != piVar7) {
        iVar4 = *piVar5;
        piVar5 = piVar5 + 1;
        if ((*(byte *)(iVar4 + 0x28) & 8) != 0) {
          *(undefined4 *)(iVar4 + 0x4c) = 0;
          *(undefined4 *)(iVar4 + 0x50) = 0;
        }
      }
      uVar2 = func_003FC784(param_1,*(int *)(param_1 + 0x14),
                            *(uint *)(*(int *)(param_1 + 0x2c) + 0x34) >> 2,param_1);
      *(byte *)(*(int *)(param_1 + 0x2c) + 0x40) = *(byte *)(*(int *)(param_1 + 0x2c) + 0x40) & 0xfd
      ;
      *(undefined4 *)(param_1 + 0x2c) = 0;
    }
    else {
      uVar2 = 0x80000010;
    }
  }
  return uVar2;
}

