#include "ghidra_types.h"

extern int func_001B6C04(int param_1);
extern int func_0045072C(int param_1,int param_2);
extern int func_00450F34(int param_1);
extern int func_004A5D28(int param_1);
extern int func_004B948C(int param_1,int param_2);
extern int func_004B9528(int param_1,int param_2);
extern int func_00584B94(int param_1,int param_2);
extern int func_0066CEE0(undefined4 *param_1,undefined1 param_2);
extern int DAT_004506f0;
extern int *DAT_004506f4;
extern int DAT_004506f8;
extern int DAT_004506fc;
extern int *DAT_00450700;

// USA 004503C8 <- EU 004503A0 (Ghidra, non-matching)
// GLOBAL DAT_004506f0 int
// GLOBAL DAT_004506f4 int *
// GLOBAL DAT_004506f8 int
// GLOBAL DAT_004506fc int
// GLOBAL DAT_00450700 int *

/* WARNING: Removing unreachable block (ram,0x00450644) */
/* WARNING: Removing unreachable block (ram,0x004506e0) */

undefined4 func_004503C8(int param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  code *pcVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int *piVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  int iVar13;
  int *piVar14;
  int iVar15;
  int iVar16;
  bool bVar17;
  
  func_001B6C04(param_1);
  *(undefined2 *)(DAT_004506f0 + param_1) = 0xffff;
  piVar9 = *(int **)(param_1 + 0xf0);
  piVar14 = piVar9 + *(int *)(param_1 + 0xe8);
  piVar11 = DAT_004506f4;
  for (; DAT_004506f4 = piVar11, piVar9 != piVar14; piVar9 = piVar9 + 1) {
    func_004B9528(param_1,*piVar9);
    piVar11 = DAT_004506f4;
  }
  iVar15 = 0;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  iVar3 = DAT_004506f8;
  piVar9 = *(int **)(param_1 + 0xd0);
  iVar16 = *piVar11;
  piVar11 = *(int **)(param_1 + 0x110);
  iVar13 = -1;
  iVar10 = 0;
  *(undefined1 *)(param_1 + 0x154) = 0;
  do {
    pcVar5 = (code *)(iVar3 + iVar10 * 8);
    pcVar1 = pcVar5 + 4;
    bVar17 = (*(uint *)pcVar1 & 1) == 0;
    if (bVar17) {
      pcVar5 = *(code **)pcVar5;
    }
    if (!bVar17) {
      pcVar5 = *(code **)(*(int *)(iVar16 + ((int)*(uint *)pcVar1 >> 1)) + *(int *)pcVar5);
    }
    iVar2 = (*pcVar5)();
    *(char *)(*piVar11 + 0x86) = (char)iVar2;
    if ((0 < iVar2) ||
       (bVar17 = func_00584B94(*DAT_00450700,(uint)*(ushort *)(DAT_004506fc + iVar10 * 2)), bVar17))
    {
      if (iVar13 == -1) {
        iVar13 = iVar10;
      }
      *(char *)(param_1 + 0x154) = *(char *)(param_1 + 0x154) + '\x01';
    }
    iVar10 = iVar10 + 1;
    piVar11 = piVar11 + 1;
  } while (iVar10 < 3);
  iVar13 = 0;
  uVar6 = *(byte *)(param_1 + 0x154) - 1;
  iVar3 = param_1 + 0x98;
  if (uVar6 < 3) {
    iVar3 = iVar3 + uVar6 * 8;
  }
  iVar3 = *(int *)(iVar3 + 4);
  piVar11 = *(int **)(param_1 + 0xb8);
  piVar14 = *(int **)(param_1 + 0x110);
  do {
    piVar12 = piVar9;
    func_004A5D28(*piVar14);
    pcVar5 = (code *)(DAT_004506f8 + iVar13 * 8);
    pcVar1 = pcVar5 + 4;
    bVar17 = (*(uint *)pcVar1 & 1) == 0;
    if (bVar17) {
      pcVar5 = *(code **)pcVar5;
    }
    if (!bVar17) {
      pcVar5 = *(code **)(*(int *)(iVar16 + ((int)*(uint *)pcVar1 >> 1)) + *(int *)pcVar5);
    }
    iVar10 = (*pcVar5)();
    if ((0 < iVar10) ||
       (bVar17 = func_00584B94(*DAT_00450700,(uint)*(ushort *)(DAT_004506fc + iVar13 * 2)), bVar17))
    {
      iVar10 = iVar15 + 1;
      puVar4 = (undefined4 *)(iVar3 + iVar15 * 0xc);
      uVar7 = puVar4[1];
      uVar8 = puVar4[2];
      iVar15 = *piVar11;
      *(undefined4 *)(iVar15 + 0x1c) = *puVar4;
      *(undefined4 *)(iVar15 + 0x20) = uVar7;
      *(undefined4 *)(iVar15 + 0x24) = uVar8;
      *(byte *)(iVar15 + 0x44) = *(byte *)(iVar15 + 0x44) & 0xef | 0x10;
      *(byte *)(*piVar11 + 0x44) = *(byte *)(*piVar11 + 0x44) & 0xfe | 1;
      iVar2 = *piVar12;
      func_004B948C(param_1,iVar2);
      iVar15 = iVar10;
      if (*(int *)(param_1 + 0xe8) < *(int *)(param_1 + 0xec)) {
        *(int *)(*(int *)(param_1 + 0xf0) + *(int *)(param_1 + 0xe8) * 4) = iVar2;
        *(int *)(param_1 + 0xe8) = *(int *)(param_1 + 0xe8) + 1;
      }
    }
    else {
      *(byte *)(*piVar11 + 0x44) = *(byte *)(*piVar11 + 0x44) & 0xfe;
    }
    iVar13 = iVar13 + 1;
    piVar11 = piVar11 + 1;
    piVar14 = piVar14 + 1;
    piVar9 = piVar12 + 1;
  } while (iVar13 < 3);
  iVar3 = piVar12[1];
  func_004B948C(param_1,iVar3);
  if (*(int *)(param_1 + 0xe8) < *(int *)(param_1 + 0xec)) {
    *(int *)(*(int *)(param_1 + 0xf0) + *(int *)(param_1 + 0xe8) * 4) = iVar3;
    *(int *)(param_1 + 0xe8) = *(int *)(param_1 + 0xe8) + 1;
  }
  iVar3 = piVar12[2];
  func_004B948C(param_1,iVar3);
  if (*(int *)(param_1 + 0xe8) < *(int *)(param_1 + 0xec)) {
    *(int *)(*(int *)(param_1 + 0xf0) + *(int *)(param_1 + 0xe8) * 4) = iVar3;
    *(int *)(param_1 + 0xe8) = *(int *)(param_1 + 0xe8) + 1;
  }
  iVar3 = 0;
  *(byte *)(param_1 + 0x155) = *(byte *)(param_1 + 0x155) & 0x30 | 4;
  puVar4 = *(undefined4 **)(param_1 + 0xf0);
  if (*(char *)(param_1 + 0x154) != '\0') {
    do {
      (**(code **)(*(int *)*puVar4 + 0x44))((int *)*puVar4,iVar3 == 0);
      iVar3 = iVar3 + 1;
      puVar4 = puVar4 + 1;
    } while (iVar3 < (int)(uint)*(byte *)(param_1 + 0x154));
  }
  iVar3 = 0;
  do {
    (**(code **)(*(int *)*puVar4 + 0x44))((int *)*puVar4,iVar3 == 4);
    iVar3 = iVar3 + 1;
    puVar4 = puVar4 + 1;
  } while (iVar3 < 2);
  func_00450F34(param_1);
  func_0045072C(param_1,-1);
  return func_0066CEE0((undefined4 *)(param_1 + 0x74),0);
}

