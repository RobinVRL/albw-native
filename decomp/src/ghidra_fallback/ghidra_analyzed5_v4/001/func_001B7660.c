#include "ghidra_types.h"

extern int func_0010CF28(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_001B78E0(int param_1,uint param_2,undefined4 param_3,undefined4 *param_4);
extern int DAT_001b78c0;
extern int *DAT_001b78c4;
extern int DAT_001b78c8;
extern undefined4 DAT_001b78cc;
extern int DAT_001b78d0;
extern int *DAT_001b78d4;
extern int *DAT_001b78d8;
extern int *DAT_001b78dc;

// USA 001B7660 <- EU 001B7660 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int *
// GLOBAL DAT_001b78c0 int
// GLOBAL DAT_001b78c4 int *
// GLOBAL DAT_001b78c8 int
// GLOBAL DAT_001b78cc undefined4
// GLOBAL DAT_001b78d0 int
// GLOBAL DAT_001b78d4 int *
// GLOBAL DAT_001b78d8 int *
// GLOBAL DAT_001b78dc int *
// GLOBAL EXT_00000004 undefined

void func_001B7660(int param_1,uint param_2,ushort *param_3,undefined4 *param_4,int *param_5)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined2 *puVar6;
  byte *pbVar7;
  uint uVar8;
  ushort *puVar9;
  undefined1 uVar10;
  int iVar11;
  ushort *puVar12;
  
  puVar9 = param_3;
  func_001B78E0(param_1,param_2,param_3,param_4);
  piVar2 = (int *)(param_1 + 8);
  if (param_2 < 6) {
    piVar2 = piVar2 + param_2;
  }
  iVar11 = *piVar2;
  if (*(int *)param_3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = **(int **)(param_3 + 4);
  }
  if (*(char *)(iVar3 + 0x28) != '\n') goto LAB_001b7858;
  piVar2 = *(int **)(param_1 + 0x24);
  if (piVar2 == (int *)0x0) {
    puVar9 = (ushort *)&UndefinedInstruction;
    piVar2 = (int *)func_0010CF28(0xa4,param_5,4);
    if (piVar2 != (int *)0x0) {
      *piVar2 = DAT_001b78c0;
      piVar2[1] = 0;
      piVar2[2] = 0x12;
      piVar2[3] = 0;
      if (piVar2 + 4 != (int *)0x0) {
        piVar2[3] = (int)(piVar2 + 4);
      }
      iVar3 = DAT_001b78d0;
      piVar1 = DAT_001b78c4;
      puVar9 = (ushort *)0x0;
      piVar2[0x16] = *DAT_001b78c4;
      piVar2[0x17] = piVar1[1];
      piVar2[0x18] = piVar1[2];
      piVar2[0x19] = *piVar1;
      piVar2[0x1a] = piVar1[1];
      piVar2[0x1b] = piVar1[2];
      piVar2[0x1c] = *piVar1;
      piVar2[0x1d] = piVar1[1];
      piVar2[0x1e] = piVar1[2];
      *piVar2 = DAT_001b78c8;
      piVar2[0x22] = 0;
      piVar1 = DAT_001b78d4;
      *(undefined2 *)(piVar2 + 0x28) = 0;
      piVar2[0x23] = 0;
      piVar2[0x24] = iVar3;
      *(undefined1 *)((int)piVar2 + 0xa2) = 0;
      piVar2[0x25] = *piVar1;
      piVar2[0x26] = piVar1[1];
      piVar2[0x27] = piVar1[2];
      piVar2[0x21] = iVar3;
      piVar2[0x20] = iVar3;
      piVar2[0x1f] = iVar3;
    }
    *(int **)(param_1 + 0x24) = piVar2;
  }
  uVar10 = 1;
  if (param_2 == 4) {
    iVar3 = *DAT_001b78dc;
    if (((iVar3 == 0) || (*(char *)(iVar3 + 0x18) != '\x03')) || (*(int *)(iVar3 + 0x1c) != 4))
    goto LAB_001b78b0;
LAB_001b78b8:
    uVar10 = 2;
  }
  else if (param_2 == 5) {
LAB_001b78b0:
    uVar10 = 0;
  }
  else if (param_2 == 3) goto LAB_001b78b8;
  (**(code **)(*piVar2 + 0x14))(piVar2);
  uVar8 = piVar2[1];
  uVar4 = *(uint *)(iVar11 + 4);
  if (0 < (int)uVar8) {
    puVar9 = (ushort *)piVar2[3];
  }
  uVar5 = 0;
  if (0 < (int)uVar8) {
    do {
      puVar12 = puVar9;
      if (uVar5 < uVar8) {
        puVar12 = puVar9 + uVar5 * 2;
      }
      if ((uint)*puVar12 == (uVar4 & 0xffff)) {
        puVar12 = puVar9;
        if (uVar5 < uVar8) {
          puVar12 = puVar9 + uVar5 * 2;
        }
        if ((char)puVar12[1] == '\0') goto LAB_001b784c;
      }
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < (int)uVar8);
  }
  if ((int)uVar8 < piVar2[2]) {
    piVar2[1] = uVar8 + 1;
    puVar6 = (undefined2 *)(piVar2[3] + uVar8 * 4);
  }
  else {
    puVar6 = (undefined2 *)0x0;
  }
  *puVar6 = (short)uVar4;
  *(undefined1 *)((int)puVar6 + 3) = uVar10;
  *(undefined1 *)(puVar6 + 1) = 0;
LAB_001b784c:
  *(ushort *)(piVar2 + 0x28) = *(ushort *)(piVar2 + 0x28) | 2;
LAB_001b7858:
  pbVar7 = (byte *)(*(int *)(*DAT_001b78d8 + 0x10) + (*(uint *)(iVar11 + 4) & 0xffff) * 0x278);
  *pbVar7 = *pbVar7 | 1;
  return;
}

