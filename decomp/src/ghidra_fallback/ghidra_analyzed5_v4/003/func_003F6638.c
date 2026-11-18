#include "ghidra_types.h"

extern int func_003ED284(int param_1,uint *param_2);

// USA 003F6638 <- EU 003F6618 (Ghidra, non-matching)

void func_003F6638(undefined4 param_1,int param_2)

{
  uint uVar1;
  uint *unaff_r4;
  int *unaff_r6;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  bVar2 = **(int **)(param_2 + 0xd8) == 1;
  if (bVar2) {
    unaff_r6 = *(int **)(param_2 + 0xd8);
  }
  if (!bVar2) {
    unaff_r6 = (int *)0x0;
  }
  *(undefined4 *)(param_2 + 0x2a0) = 0;
  bVar2 = *(int *)(param_2 + 0x10) != 0;
  if (bVar2) {
    unaff_r4 = *(uint **)(param_2 + 0xe0);
  }
  if (bVar2 && unaff_r4 != (uint *)0x0) {
    do {
      if ((int)*unaff_r4 < (int)unaff_r4[1]) {
        if ((unaff_r6[0x152] & 0x40U) != 0) {
          uVar1 = *(uint *)(param_2 + 0x58);
          uVar3 = *(uint *)(param_2 + 0x5c);
          uVar4 = *(uint *)(param_2 + 0x60);
          uVar5 = *(uint *)(param_2 + 100);
          uVar6 = *(uint *)(param_2 + 0x68);
          uVar7 = *(uint *)(param_2 + 0x6c);
          uVar8 = *(uint *)(param_2 + 0x70);
          unaff_r4[0x40] = *(uint *)(param_2 + 0x54);
          unaff_r4[0x41] = uVar1;
          unaff_r4[0x42] = uVar3;
          unaff_r4[0x43] = uVar4;
          unaff_r4[0x44] = uVar5;
          unaff_r4[0x45] = uVar6;
          unaff_r4[0x46] = uVar7;
          unaff_r4[0x47] = uVar8;
          uVar1 = *(uint *)(param_2 + 0x78);
          uVar3 = *(uint *)(param_2 + 0x7c);
          uVar4 = *(uint *)(param_2 + 0x80);
          unaff_r4[0x48] = *(uint *)(param_2 + 0x74);
          unaff_r4[0x49] = uVar1;
          unaff_r4[0x4a] = uVar3;
          unaff_r4[0x4b] = uVar4;
          uVar1 = *(uint *)(param_2 + 0x28);
          uVar3 = *(uint *)(param_2 + 0x2c);
          uVar4 = *(uint *)(param_2 + 0x30);
          uVar5 = *(uint *)(param_2 + 0x34);
          uVar6 = *(uint *)(param_2 + 0x38);
          uVar7 = *(uint *)(param_2 + 0x3c);
          uVar8 = *(uint *)(param_2 + 0x40);
          unaff_r4[0x34] = *(uint *)(param_2 + 0x24);
          unaff_r4[0x35] = uVar1;
          unaff_r4[0x36] = uVar3;
          unaff_r4[0x37] = uVar4;
          unaff_r4[0x38] = uVar5;
          unaff_r4[0x39] = uVar6;
          unaff_r4[0x3a] = uVar7;
          unaff_r4[0x3b] = uVar8;
          uVar1 = *(uint *)(param_2 + 0x48);
          uVar3 = *(uint *)(param_2 + 0x4c);
          uVar4 = *(uint *)(param_2 + 0x50);
          unaff_r4[0x3c] = *(uint *)(param_2 + 0x44);
          unaff_r4[0x3d] = uVar1;
          unaff_r4[0x3e] = uVar3;
          unaff_r4[0x3f] = uVar4;
        }
        func_003ED284(param_2,unaff_r4);
        *(int *)(param_2 + 0x2a0) = *(int *)(param_2 + 0x2a0) + 1;
        unaff_r4 = (uint *)unaff_r4[0x50];
      }
      else {
        unaff_r4[0x4e] = 0;
        uVar1 = unaff_r4[0x50];
        if (*(uint **)(param_2 + 0xe0) == unaff_r4) {
          *(uint *)(param_2 + 0xe0) = uVar1;
          if (uVar1 != 0) {
            *(undefined4 *)(uVar1 + 0x13c) = 0;
          }
        }
        else {
          if (uVar1 != 0) {
            *(uint *)(uVar1 + 0x13c) = unaff_r4[0x4f];
          }
          *(uint *)(unaff_r4[0x4f] + 0x140) = unaff_r4[0x50];
        }
        unaff_r4 = (uint *)unaff_r4[0x50];
        *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + -1;
      }
    } while (unaff_r4 != (uint *)0x0);
  }
  return;
}

