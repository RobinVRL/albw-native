#include "ghidra_types.h"

extern int func_0056AF9C(int param_1,uint param_2);
extern int func_0056B52C(int param_1);
extern int func_0056B538(int param_1);
extern int func_0056B554(int param_1);
extern int func_0056B794(int param_1);
extern int func_0056B7BC(int param_1);
extern int func_0056B8D4(int param_1);
extern int func_0056B9F8(int param_1);
extern int func_0056BA10(int param_1);
extern uint DAT_0056d0f4;
extern uint DAT_0056d0f8;
extern undefined4 DAT_0056d0fc;

// USA 0056CEB4 <- EU 0056CE8C (Ghidra, non-matching)
// GLOBAL DAT_0056d0f4 uint
// GLOBAL DAT_0056d0f8 uint
// GLOBAL DAT_0056d0fc undefined4

undefined4 func_0056CEB4(int param_1,uint param_2,undefined2 *param_3)

{
  uint uVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined2 *puVar6;
  undefined4 *puVar7;
  uint *puVar8;
  undefined1 *puVar9;
  uint uVar10;
  undefined1 *puVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  
  iVar3 = func_0056AF9C(*(int *)(param_1 + 0x3c),param_2);
  uVar5 = 0;
  if (iVar3 != 0) {
    iVar4 = func_0056B8D4(iVar3);
    uVar1 = DAT_0056d0f4;
    if (iVar4 == 2) {
      if (*(uint *)(param_1 + 8) < DAT_0056d0f4) {
        puVar6 = (undefined2 *)func_0056BA10(iVar3);
        *param_3 = *puVar6;
        param_3[1] = puVar6[1];
        uVar10 = func_0056B794((int)puVar6);
        uVar5 = DAT_0056d0fc;
        *(char *)((int)param_3 + 0x3f) = (char)uVar10;
        *(undefined4 *)(param_3 + 0x1c) = uVar5;
        *(undefined1 *)(param_3 + 0x1e) = 0x7f;
        *(undefined1 *)((int)param_3 + 0x3d) = 0;
        *(undefined1 *)(param_3 + 0x1f) = 0;
        puVar8 = (uint *)func_0056B7BC((int)puVar6);
      }
      else {
        puVar6 = (undefined2 *)func_0056B9F8(iVar3);
        *param_3 = *puVar6;
        param_3[1] = puVar6[1];
        puVar7 = (undefined4 *)func_0056B554((int)puVar6);
        if (puVar7 == (undefined4 *)0x0) {
          uVar2 = 1;
        }
        else {
          uVar2 = (undefined1)*puVar7;
        }
        *(undefined1 *)((int)param_3 + 0x3f) = uVar2;
        *(undefined4 *)(param_3 + 0x1c) = *(undefined4 *)(puVar6 + 6);
        puVar7 = (undefined4 *)func_0056B52C((int)puVar6);
        uVar5 = *puVar7;
        *(char *)(param_3 + 0x1e) = (char)uVar5;
        *(char *)((int)param_3 + 0x3d) = (char)((uint)uVar5 >> 8);
        *(char *)(param_3 + 0x1f) = (char)((uint)uVar5 >> 0x10);
        puVar8 = (uint *)func_0056B538((int)puVar6);
      }
      uVar10 = DAT_0056d0f8;
      if (puVar8 != (uint *)0x0) {
        uVar15 = *puVar8;
        uVar14 = 0;
        do {
          if (uVar15 <= uVar14) break;
          puVar11 = (undefined1 *)((int)param_3 + uVar14 * 0xd + 4);
          if ((uVar14 < *puVar8) && ((ushort)puVar8[uVar14 * 2 + 1] == uVar10)) {
            puVar9 = (undefined1 *)(puVar8[uVar14 * 2 + 2] + (int)puVar8);
          }
          else {
            puVar9 = (undefined1 *)0x0;
          }
          *puVar11 = *puVar9;
          *(undefined1 *)((int)param_3 + uVar14 * 0xd + 5) = puVar9[1];
          *(undefined1 *)((int)param_3 + uVar14 * 0xd + 6) = puVar9[2];
          *(undefined1 *)((int)param_3 + uVar14 * 0xd + 7) = puVar9[3];
          *(char *)((int)param_3 + uVar14 * 0xd + 0xe) =
               (char)*(undefined4 *)(puVar9 + *(int *)(puVar9 + 8));
          if (*(uint *)(param_1 + 8) < uVar1) {
            *(undefined1 *)((int)param_3 + uVar14 * 0xd + 8) = 0x7f;
            *(undefined1 *)((int)param_3 + uVar14 * 0xd + 9) = 0;
            *(undefined1 *)((int)param_3 + uVar14 * 0xd + 10) = 0;
          }
          else {
            *(undefined1 *)((int)param_3 + uVar14 * 0xd + 8) = puVar9[*(int *)(puVar9 + 0x10)];
            uVar16 = 0;
            do {
              uVar12 = uVar16 + 1;
              puVar11[uVar16 + 5] = puVar9[uVar16 + *(int *)(puVar9 + 0x10) + 1];
              uVar16 = uVar12;
            } while (uVar12 < 2);
          }
          if (*(uint *)(param_1 + 8) < uVar1) {
            *(undefined1 *)((int)param_3 + uVar14 * 0xd + 0xb) = 0x40;
            *(undefined1 *)((int)param_3 + uVar14 * 0xd + 0xc) = 0;
            *(undefined1 *)((int)param_3 + uVar14 * 0xd + 0xd) = 0;
          }
          else {
            *(undefined1 *)((int)param_3 + uVar14 * 0xd + 0xb) = puVar9[0x14];
            *(undefined1 *)((int)param_3 + uVar14 * 0xd + 0xc) = puVar9[0x15];
            *(undefined1 *)((int)param_3 + uVar14 * 0xd + 0xd) = puVar9[0x16];
          }
          uVar16 = (uint)*(byte *)((int)param_3 + uVar14 * 0xd + 0xe);
          if (uVar16 < 3) {
            uVar12 = 0;
            if (uVar16 != 0) goto LAB_0056d0bc;
          }
          else {
            uVar16 = 2;
            uVar12 = 0;
LAB_0056d0bc:
            do {
              uVar13 = uVar12 + 1;
              puVar11[uVar12 + 0xb] = puVar9[uVar12 + *(int *)(puVar9 + 8) + 4];
              uVar12 = uVar13;
            } while (uVar13 < uVar16);
          }
          uVar14 = uVar14 + 1;
        } while (uVar14 < 4);
      }
      uVar5 = 1;
    }
    else {
      uVar5 = 0;
    }
  }
  return uVar5;
}

