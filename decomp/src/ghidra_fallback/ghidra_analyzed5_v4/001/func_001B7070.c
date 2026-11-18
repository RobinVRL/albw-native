#include "ghidra_types.h"

extern int func_0010CF28(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0039ABB8(int param_1,int param_2,int *param_3,undefined4 param_4);
extern int func_0039AE10(undefined4 *param_1);
extern int *DAT_001b7374;
extern int DAT_001b7378;
extern int *DAT_001b737c;

// USA 001B7070 <- EU 001B7070 (Ghidra, non-matching)
// GLOBAL DAT_001b7374 int *
// GLOBAL DAT_001b7378 int
// GLOBAL DAT_001b737c int *

void func_001B7070(int param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  ushort *puVar7;
  undefined2 *puVar8;
  int *piVar9;
  uint uVar10;
  byte *pbVar11;
  int iVar12;
  int iVar13;
  ushort *puVar14;
  uint uVar15;
  int *piVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    puVar2 = (undefined4 *)func_0010CF28(0x168,param_3,4);
    iVar1 = 0;
    if (puVar2 != (undefined4 *)0x0) {
      iVar1 = func_0039AE10(puVar2);
    }
    *(int *)(param_1 + 0x20) = iVar1;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x20);
  }
  iVar3 = func_0039ABB8(iVar1,param_2,param_3,0);
  (**(code **)(**(int **)(param_1 + 0x20) + 0x14))(*(int **)(param_1 + 0x20));
  iVar1 = DAT_001b7378;
  piVar9 = DAT_001b7374;
  iVar13 = 0;
  iVar12 = *DAT_001b7374;
  do {
    uVar15 = 0;
    if (iVar13 == 1) {
      uVar15 = 2;
    }
    piVar16 = (int *)(param_1 + 8);
    iVar4 = *piVar9;
    uVar10 = uVar15 + *(short *)(param_1 + 4) * 6;
    if (uVar15 < 6) {
      piVar16 = piVar16 + uVar15;
    }
    iVar5 = iVar4 + 0x284;
    if (uVar10 < 0x33) {
      iVar5 = iVar4 + 0x284 + uVar10 * 0x38;
    }
    *piVar16 = iVar5;
    piVar16 = DAT_001b737c;
    puVar2 = (undefined4 *)(param_1 + 8);
    if (uVar15 < 6) {
      puVar2 = puVar2 + uVar15;
    }
    piVar6 = (int *)*puVar2;
    uVar15 = 0;
    *(undefined1 *)((int)piVar6 + 0x15) = 1;
    *(undefined1 *)((int)piVar6 + 0x16) = 1;
    *(undefined1 *)((int)piVar6 + 0x17) = 1;
    piVar6[2] = iVar1;
    piVar6[3] = iVar1;
    piVar6[4] = iVar1;
    *piVar6 = iVar3;
    *(undefined1 *)(piVar6 + 5) = 1;
    iVar4 = *piVar16;
    iVar5 = piVar16[1];
    iVar18 = piVar16[2];
    iVar19 = piVar16[3];
    piVar6[10] = iVar4;
    piVar6[0xb] = iVar5;
    piVar6[0xc] = iVar18;
    piVar6[0xd] = iVar19;
    piVar6[6] = iVar4;
    piVar6[7] = iVar5;
    piVar6[8] = iVar18;
    piVar6[9] = iVar19;
    piVar6[1] = uVar10;
    pbVar11 = (byte *)(*(int *)(iVar12 + 0x10) + (uVar10 & 0xffff) * 0x278);
    *pbVar11 = *pbVar11 | 1;
    iVar4 = *(int *)(param_1 + 0x20);
    uVar10 = piVar6[1];
    if (0 < *(int *)(iVar4 + 4)) {
      puVar7 = *(ushort **)(iVar4 + 0xc);
      uVar17 = *(uint *)(iVar4 + 4);
      do {
        puVar14 = puVar7;
        if (uVar15 < uVar17) {
          puVar14 = puVar7 + uVar15 * 2;
        }
        if ((uint)*puVar14 == (uVar10 & 0xffff)) {
          puVar14 = puVar7;
          if (uVar15 < uVar17) {
            puVar14 = puVar7 + uVar15 * 2;
          }
          if ((char)puVar14[1] == '\0') goto LAB_001b7228;
        }
        uVar15 = uVar15 + 1;
      } while ((int)uVar15 < (int)uVar17);
    }
    iVar5 = *(int *)(iVar4 + 4);
    if (iVar5 < *(int *)(iVar4 + 8)) {
      *(int *)(iVar4 + 4) = iVar5 + 1;
      puVar8 = (undefined2 *)(*(int *)(iVar4 + 0xc) + iVar5 * 4);
    }
    else {
      puVar8 = (undefined2 *)0x0;
    }
    *puVar8 = (short)uVar10;
    *(undefined1 *)((int)puVar8 + 3) = 0;
    *(undefined1 *)(puVar8 + 1) = 0;
LAB_001b7228:
    iVar13 = iVar13 + 1;
  } while (iVar13 < 2);
  piVar9 = (int *)(*piVar9 + 0x284);
  uVar15 = *(short *)(param_1 + 4) * 6 + 3;
  if (uVar15 < 0x33) {
    piVar9 = piVar9 + uVar15 * 0xe;
  }
  *(int **)(param_1 + 0x14) = piVar9;
  *(undefined1 *)((int)piVar9 + 0x15) = 1;
  *(undefined1 *)((int)piVar9 + 0x16) = 1;
  *(undefined1 *)((int)piVar9 + 0x17) = 1;
  piVar9[2] = iVar1;
  piVar9[3] = iVar1;
  piVar9[4] = iVar1;
  *piVar9 = iVar3;
  *(undefined1 *)(piVar9 + 5) = 1;
  iVar13 = *DAT_001b737c;
  iVar4 = DAT_001b737c[1];
  iVar3 = DAT_001b737c[2];
  iVar1 = DAT_001b737c[3];
  piVar9[0xd] = iVar1;
  piVar9[0xc] = iVar3;
  piVar9[10] = iVar13;
  piVar9[0xb] = iVar4;
  piVar9[9] = iVar1;
  piVar9[1] = uVar15;
  piVar9[8] = iVar3;
  piVar9[6] = iVar13;
  piVar9[7] = iVar4;
  pbVar11 = (byte *)(*(int *)(iVar12 + 0x10) + (uVar15 & 0xffff) * 0x278);
  *pbVar11 = *pbVar11 | 1;
  iVar1 = *(int *)(param_1 + 0x20);
  uVar15 = piVar9[1];
  uVar17 = *(uint *)(iVar1 + 4);
  uVar10 = 0;
  if (0 < (int)uVar17) {
    puVar7 = *(ushort **)(iVar1 + 0xc);
    do {
      puVar14 = puVar7;
      if (uVar10 < uVar17) {
        puVar14 = puVar7 + uVar10 * 2;
      }
      if ((uint)*puVar14 == (uVar15 & 0xffff)) {
        puVar14 = puVar7;
        if (uVar10 < uVar17) {
          puVar14 = puVar7 + uVar10 * 2;
        }
        if ((char)puVar14[1] == '\0') goto LAB_001b7360;
      }
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < (int)uVar17);
  }
  if ((int)uVar17 < *(int *)(iVar1 + 8)) {
    *(uint *)(iVar1 + 4) = uVar17 + 1;
    puVar8 = (undefined2 *)(*(int *)(iVar1 + 0xc) + uVar17 * 4);
  }
  else {
    puVar8 = (undefined2 *)0x0;
  }
  *puVar8 = (short)uVar15;
  *(undefined1 *)((int)puVar8 + 3) = 0;
  *(undefined1 *)(puVar8 + 1) = 0;
LAB_001b7360:
  *(ushort *)(*(int *)(param_1 + 0x20) + 0xa0) = *(ushort *)(*(int *)(param_1 + 0x20) + 0xa0) | 2;
  return;
}

