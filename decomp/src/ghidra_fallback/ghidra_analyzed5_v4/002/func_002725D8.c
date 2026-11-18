#include "ghidra_types.h"

extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_00272128(int param_1,int *param_2,int param_3,undefined4 param_4);

// USA 002725D8 <- EU 00272600 (Ghidra, non-matching)

void func_002725D8(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  uint *puVar10;
  undefined4 *puVar11;
  uint *puVar12;
  undefined4 uVar13;
  uint local_30;
  
  local_30 = 0;
  puVar12 = (uint *)(param_1 + 0x3d74);
  if (0 < (int)*puVar12) {
    do {
      if (local_30 < *puVar12) {
        iVar2 = *(int *)(param_1 + 0x3d7c) + local_30 * 0x620;
      }
      else {
        iVar2 = *(int *)(param_1 + 0x3d7c);
      }
      iVar4 = *(int *)(param_1 + 0x3d7c);
      if (local_30 < *puVar12) {
        iVar4 = iVar4 + local_30 * 0x620;
      }
      puVar3 = func_00272128(param_1,(int *)(iVar2 + 4),iVar4,0);
      uVar1 = *(undefined2 *)((int)puVar3 + 0x582);
      if (local_30 < *puVar12) {
        iVar2 = *(int *)(param_1 + 0x3d7c) + local_30 * 0x620;
      }
      else {
        iVar2 = *(int *)(param_1 + 0x3d7c);
      }
      piVar6 = (int *)(iVar2 + 4);
      puVar10 = (uint *)puVar3[2];
      (**(code **)(*(int *)(iVar2 + 4) + 8))(piVar6);
      uVar8 = 0;
      do {
        if (*(char *)(*(int *)(iVar2 + 8) + uVar8) == '\0') {
          if ((int)uVar8 < 0x40001) goto LAB_002726fc;
          break;
        }
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < 0x40001);
      uVar8 = 0;
LAB_002726fc:
      if ((int)puVar3[3] <= (int)uVar8) {
        uVar8 = puVar3[3] - 1;
      }
      (**(code **)(*piVar6 + 8))(piVar6);
      func_0010E3C4(puVar10,*(uint **)(iVar2 + 8),uVar8);
      uVar7 = 0;
      *(undefined1 *)((int)puVar10 + uVar8) = 0;
      do {
        puVar11 = puVar3 + 0x14;
        piVar6 = (int *)(iVar2 + 0x50);
        if (uVar7 < 3) {
          puVar11 = puVar11 + uVar7 * 0x13;
          piVar6 = (int *)(iVar2 + 0x50 + uVar7 * 0x4c);
        }
        puVar10 = (uint *)puVar11[1];
        (**(code **)(*piVar6 + 8))(piVar6);
        uVar8 = 0;
        do {
          if (*(char *)(piVar6[1] + uVar8) == '\0') {
            if ((int)uVar8 < 0x40001) goto LAB_002727ac;
            break;
          }
          uVar8 = uVar8 + 1;
        } while ((int)uVar8 < 0x40001);
        uVar8 = 0;
LAB_002727ac:
        if ((int)puVar11[2] <= (int)uVar8) {
          uVar8 = puVar11[2] - 1;
        }
        (**(code **)(*piVar6 + 8))(piVar6);
        func_0010E3C4(puVar10,(uint *)piVar6[1],uVar8);
        uVar7 = uVar7 + 1;
        *(undefined1 *)((int)puVar10 + uVar8) = 0;
      } while ((int)uVar7 < 3);
      uVar8 = 0;
      do {
        puVar11 = puVar3 + 0x4d;
        piVar6 = (int *)(iVar2 + 0x134);
        if (uVar8 < 3) {
          puVar11 = puVar11 + uVar8 * 0x13;
          piVar6 = (int *)(iVar2 + 0x134 + uVar8 * 0x4c);
        }
        puVar10 = (uint *)puVar11[1];
        (**(code **)(*piVar6 + 8))(piVar6);
        uVar7 = 0;
        do {
          if (*(char *)(piVar6[1] + uVar7) == '\0') {
            if ((int)uVar7 < 0x40001) goto LAB_00272868;
            break;
          }
          uVar7 = uVar7 + 1;
        } while ((int)uVar7 < 0x40001);
        uVar7 = 0;
LAB_00272868:
        if ((int)puVar11[2] <= (int)uVar7) {
          uVar7 = puVar11[2] - 1;
        }
        (**(code **)(*piVar6 + 8))(piVar6);
        func_0010E3C4(puVar10,(uint *)piVar6[1],uVar7);
        uVar8 = uVar8 + 1;
        *(undefined1 *)((int)puVar10 + uVar7) = 0;
      } while ((int)uVar8 < 3);
      uVar8 = 0;
      do {
        puVar11 = puVar3 + 0x86;
        piVar6 = (int *)(iVar2 + 0x218);
        if (uVar8 < 2) {
          puVar11 = puVar11 + uVar8 * 0x13;
          piVar6 = (int *)(iVar2 + 0x218 + uVar8 * 0x4c);
        }
        puVar10 = (uint *)puVar11[1];
        (**(code **)(*piVar6 + 8))(piVar6);
        uVar7 = 0;
        do {
          if (*(char *)(piVar6[1] + uVar7) == '\0') {
            if ((int)uVar7 < 0x40001) goto LAB_00272924;
            break;
          }
          uVar7 = uVar7 + 1;
        } while ((int)uVar7 < 0x40001);
        uVar7 = 0;
LAB_00272924:
        if ((int)puVar11[2] <= (int)uVar7) {
          uVar7 = puVar11[2] - 1;
        }
        (**(code **)(*piVar6 + 8))(piVar6);
        func_0010E3C4(puVar10,(uint *)piVar6[1],uVar7);
        uVar8 = uVar8 + 1;
        *(undefined1 *)((int)puVar10 + uVar7) = 0;
      } while ((int)uVar8 < 2);
      piVar6 = (int *)(iVar2 + 0x2b0);
      puVar10 = (uint *)puVar3[0xad];
      (**(code **)(*(int *)(iVar2 + 0x2b0) + 8))(piVar6);
      uVar8 = 0;
      do {
        if (*(char *)(*(int *)(iVar2 + 0x2b4) + uVar8) == '\0') {
          if ((int)uVar8 < 0x40001) goto LAB_002729b0;
          break;
        }
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < 0x40001);
      uVar8 = 0;
LAB_002729b0:
      if ((int)puVar3[0xae] <= (int)uVar8) {
        uVar8 = puVar3[0xae] - 1;
      }
      (**(code **)(*piVar6 + 8))(piVar6);
      func_0010E3C4(puVar10,*(uint **)(iVar2 + 0x2b4),uVar8);
      *(undefined1 *)((int)puVar10 + uVar8) = 0;
      uVar9 = *(undefined4 *)(iVar2 + 0x35c);
      uVar13 = *(undefined4 *)(iVar2 + 0x360);
      uVar5 = *(undefined4 *)(iVar2 + 0x364);
      puVar3[0xd6] = *(undefined4 *)(iVar2 + 0x358);
      puVar3[0xd7] = uVar9;
      puVar3[0xd8] = uVar13;
      puVar3[0xd9] = uVar5;
      func_0010E3C4(puVar3 + 0xda,(uint *)(iVar2 + 0x368),0x18);
      iVar4 = 0;
      do {
        func_0010E3C4((uint *)(puVar3 + iVar4 * 2 + 0xe0)[1],*(uint **)(iVar2 + iVar4 * 8 + 900),
                      puVar3[iVar4 * 2 + 0xe0] << 2);
        iVar4 = iVar4 + 1;
      } while (iVar4 < 4);
      piVar6 = (int *)(iVar2 + 0x2fc);
      puVar10 = (uint *)puVar3[0xc0];
      (**(code **)(*(int *)(iVar2 + 0x2fc) + 8))(piVar6);
      uVar8 = 0;
      do {
        if (*(char *)(*(int *)(iVar2 + 0x300) + uVar8) == '\0') {
          if ((int)uVar8 < 0x40001) goto LAB_00272a8c;
          break;
        }
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < 0x40001);
      uVar8 = 0;
LAB_00272a8c:
      if ((int)puVar3[0xc1] <= (int)uVar8) {
        uVar8 = puVar3[0xc1] - 1;
      }
      (**(code **)(*piVar6 + 8))(piVar6);
      func_0010E3C4(puVar10,*(uint **)(iVar2 + 0x300),uVar8);
      *(undefined1 *)((int)puVar10 + uVar8) = 0;
      uVar5 = *(undefined4 *)(iVar2 + 0x34c);
      uVar9 = *(undefined4 *)(iVar2 + 0x350);
      uVar13 = *(undefined4 *)(iVar2 + 0x354);
      puVar3[0xd2] = *(undefined4 *)(iVar2 + 0x348);
      puVar3[0xd3] = uVar5;
      puVar3[0xd4] = uVar9;
      puVar3[0xd5] = uVar13;
      piVar6 = (int *)(iVar2 + 0x588);
      *(undefined1 *)((int)puVar3 + 0x57a) = *(undefined1 *)(iVar2 + 0x57a);
      *(undefined1 *)((int)puVar3 + 0x57b) = *(undefined1 *)(iVar2 + 0x57b);
      *(undefined1 *)(puVar3 + 0x15f) = *(undefined1 *)(iVar2 + 0x57c);
      *(undefined1 *)(puVar3 + 0x160) = *(undefined1 *)(iVar2 + 0x580);
      puVar3[0x15a] = *(undefined4 *)(iVar2 + 0x568);
      puVar3[0x15b] = *(undefined4 *)(iVar2 + 0x56c);
      puVar3[0x15c] = *(undefined4 *)(iVar2 + 0x570);
      *(undefined2 *)(puVar3 + 0x15d) = *(undefined2 *)(iVar2 + 0x574);
      *(undefined1 *)((int)puVar3 + 0x579) = *(undefined1 *)(iVar2 + 0x579);
      *(undefined1 *)(puVar3 + 0x15e) = *(undefined1 *)(iVar2 + 0x578);
      *(undefined2 *)((int)puVar3 + 0x576) = *(undefined2 *)(iVar2 + 0x576);
      *(undefined1 *)((int)puVar3 + 0x57d) = *(undefined1 *)(iVar2 + 0x57d);
      *(undefined1 *)((int)puVar3 + 0x57e) = *(undefined1 *)(iVar2 + 0x57e);
      *(undefined1 *)((int)puVar3 + 0x581) = *(undefined1 *)(iVar2 + 0x581);
      *(undefined2 *)((int)puVar3 + 0x582) = *(undefined2 *)(iVar2 + 0x582);
      *(undefined1 *)(puVar3 + 0x161) = *(undefined1 *)(iVar2 + 0x584);
      puVar10 = (uint *)puVar3[0x163];
      (**(code **)(*piVar6 + 8))(piVar6);
      uVar8 = 0;
      do {
        if (*(char *)(*(int *)(iVar2 + 0x58c) + uVar8) == '\0') {
          if ((int)uVar8 < 0x40001) goto LAB_00272bb8;
          break;
        }
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < 0x40001);
      uVar8 = 0;
LAB_00272bb8:
      if ((int)puVar3[0x164] <= (int)uVar8) {
        uVar8 = puVar3[0x164] - 1;
      }
      (**(code **)(*piVar6 + 8))(piVar6);
      func_0010E3C4(puVar10,*(uint **)(iVar2 + 0x58c),uVar8);
      *(undefined1 *)((int)puVar10 + uVar8) = 0;
      *(undefined1 *)((int)puVar3 + 0x57f) = *(undefined1 *)(iVar2 + 0x57f);
      uVar8 = *(uint *)(iVar2 + 0x5d4);
      func_0010E3C4((uint *)puVar3[0x177],*(uint **)(iVar2 + 0x5dc),uVar8 << 1);
      if (uVar8 <= (uint)puVar3[0x176]) {
        puVar3[0x175] = uVar8;
      }
      *(undefined2 *)((int)puVar3 + 0x582) = uVar1;
      *(undefined1 *)(puVar3 + 0x161) = 0;
      local_30 = local_30 + 1;
    } while ((int)local_30 < (int)*puVar12);
  }
  return;
}

