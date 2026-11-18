#include "ghidra_types.h"

extern int func_003ED284(int param_1,uint *param_2);
extern undefined8 func_003EF244(int param_1);
extern int func_003EF31C(uint *param_1);
extern int func_003F0080(int param_1,uint *param_2,int param_3,int param_4);
extern int func_003F11EC(int param_1);
extern int func_003F1234(int param_1);
extern int DAT_003f58c4;

// USA 003F5734 <- EU 003F5714 (Ghidra, non-matching)
// GLOBAL DAT_003f58c4 int

undefined8 func_003F5734(int param_1,uint *param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 extraout_r1;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined8 uVar12;
  
  piVar1 = *(int **)(param_3 + 0xd8);
  iVar4 = *piVar1;
  *(undefined4 *)(param_3 + 0x2a0) = 0;
  if (iVar4 != 1) {
    piVar1 = (int *)0x0;
  }
  func_003F11EC(param_1 + 4);
  if (*(int *)(param_3 + 0x10) == 0) {
    return CONCAT44(extraout_r1,param_2);
  }
  puVar5 = *(uint **)(param_3 + 0xe0);
  iVar2 = func_003F0080(param_1 + 4,param_2,param_3,1);
  iVar4 = DAT_003f58c4;
  if (param_4 == 0) {
    while (puVar5 != (uint *)0x0) {
      if ((int)*puVar5 < (int)puVar5[1]) {
        if ((piVar1[0x152] & 0x40U) != 0) {
          uVar3 = *(uint *)(param_3 + 0x58);
          uVar6 = *(uint *)(param_3 + 0x5c);
          uVar7 = *(uint *)(param_3 + 0x60);
          uVar8 = *(uint *)(param_3 + 100);
          uVar9 = *(uint *)(param_3 + 0x68);
          uVar10 = *(uint *)(param_3 + 0x6c);
          uVar11 = *(uint *)(param_3 + 0x70);
          puVar5[0x40] = *(uint *)(param_3 + 0x54);
          puVar5[0x41] = uVar3;
          puVar5[0x42] = uVar6;
          puVar5[0x43] = uVar7;
          puVar5[0x44] = uVar8;
          puVar5[0x45] = uVar9;
          puVar5[0x46] = uVar10;
          puVar5[0x47] = uVar11;
          uVar3 = *(uint *)(param_3 + 0x78);
          uVar6 = *(uint *)(param_3 + 0x7c);
          uVar7 = *(uint *)(param_3 + 0x80);
          puVar5[0x48] = *(uint *)(param_3 + 0x74);
          puVar5[0x49] = uVar3;
          puVar5[0x4a] = uVar6;
          puVar5[0x4b] = uVar7;
          uVar3 = *(uint *)(param_3 + 0x28);
          uVar6 = *(uint *)(param_3 + 0x2c);
          uVar7 = *(uint *)(param_3 + 0x30);
          uVar8 = *(uint *)(param_3 + 0x34);
          uVar9 = *(uint *)(param_3 + 0x38);
          uVar10 = *(uint *)(param_3 + 0x3c);
          uVar11 = *(uint *)(param_3 + 0x40);
          puVar5[0x34] = *(uint *)(param_3 + 0x24);
          puVar5[0x35] = uVar3;
          puVar5[0x36] = uVar6;
          puVar5[0x37] = uVar7;
          puVar5[0x38] = uVar8;
          puVar5[0x39] = uVar9;
          puVar5[0x3a] = uVar10;
          puVar5[0x3b] = uVar11;
          uVar3 = *(uint *)(param_3 + 0x48);
          uVar6 = *(uint *)(param_3 + 0x4c);
          uVar7 = *(uint *)(param_3 + 0x50);
          puVar5[0x3c] = *(uint *)(param_3 + 0x44);
          puVar5[0x3d] = uVar3;
          puVar5[0x3e] = uVar6;
          puVar5[0x3f] = uVar7;
        }
        if (iVar2 < 0) {
          func_003ED284(param_3,puVar5);
        }
        else {
          func_003EF31C(puVar5);
          (**(code **)(iVar4 + iVar2 * 4))(puVar5);
        }
        *(int *)(param_3 + 0x2a0) = *(int *)(param_3 + 0x2a0) + 1;
        puVar5 = (uint *)puVar5[0x50];
      }
      else {
        puVar5[0x4e] = 0;
        uVar3 = puVar5[0x50];
        if (*(uint **)(param_3 + 0xe0) == puVar5) {
          *(uint *)(param_3 + 0xe0) = uVar3;
          if (uVar3 != 0) {
            *(undefined4 *)(uVar3 + 0x13c) = 0;
          }
        }
        else {
          if (uVar3 != 0) {
            *(uint *)(uVar3 + 0x13c) = puVar5[0x4f];
          }
          *(uint *)(puVar5[0x4f] + 0x140) = puVar5[0x50];
        }
        puVar5 = (uint *)puVar5[0x50];
        *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) + -1;
      }
    }
  }
  else {
    while ((puVar5 != (uint *)0x0 && (-1 < iVar2))) {
      func_003F1234((int)puVar5);
      (**(code **)(iVar4 + iVar2 * 4))(puVar5);
      *(int *)(param_3 + 0x2a0) = *(int *)(param_3 + 0x2a0) + 1;
      puVar5 = (uint *)puVar5[0x50];
    }
  }
  uVar12 = func_003EF244(param_1 + 4);
  return uVar12;
}

