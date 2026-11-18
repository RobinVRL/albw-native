#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0010B380(undefined4 *param_1,int param_2,int *param_3,undefined4 param_4);
extern int func_0010BB14(int param_1);
extern int func_0010CF28(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0010E0E0(int *param_1);
extern int func_0010E15C(int *param_1);
extern int func_00133600(int *param_1,int *param_2,int param_3,int param_4);
extern int func_00133984(undefined4 *param_1);
extern int func_0016DAD0(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4, int param_5);
extern int func_0016E460(int param_1);
extern int func_001B79FC(int param_1,uint param_2,uint param_3,int param_4);
extern int func_003FC460(int param_1,int param_2,undefined4 param_3,undefined4 param_4);
extern int func_003FCCF8(undefined4 *param_1,int *param_2,undefined4 *param_3);
extern int func_00529744(int param_1,uint param_2,uint param_3);
extern int func_00529808(int param_1,uint param_2,uint param_3);
extern int func_00529874(int param_1,uint param_2,uint param_3);
extern int func_005FF314(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern int func_00600660(int param_1);
extern char *DAT_002346dc;
extern int *DAT_002346e0;
extern uint *DAT_002346e4;
extern uint *DAT_002346e8;
extern uint *DAT_002346ec;
extern uint *DAT_002346f0;
extern undefined4 DAT_002346f4;
extern int *DAT_002346f8;
extern undefined4 *DAT_002346fc;

// USA 00233F4C <- EU 00233F4C (Ghidra, non-matching)
// GLOBAL DAT_002346dc char *
// GLOBAL DAT_002346e0 int *
// GLOBAL DAT_002346e4 uint *
// GLOBAL DAT_002346e8 uint *
// GLOBAL DAT_002346ec uint *
// GLOBAL DAT_002346f0 uint *
// GLOBAL DAT_002346f4 undefined4
// GLOBAL DAT_002346f8 int *
// GLOBAL DAT_002346fc undefined4 *

void func_00233F4C(int param_1,int *param_2,undefined4 param_3,int *param_4)

{
  ushort uVar1;
  bool bVar2;
  char *pcVar3;
  uint *puVar4;
  uint *puVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  int *piVar10;
  undefined4 uVar11;
  uint uVar12;
  int *piVar13;
  int *piVar14;
  undefined4 extraout_r1;
  int iVar15;
  uint uVar16;
  undefined4 *puVar17;
  uint uVar18;
  undefined4 *puVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  bool bVar24;
  ulonglong uVar25;
  longlong lVar26;
  
  pcVar3 = DAT_002346dc;
  *(char *)(param_1 + 0x11d) = DAT_002346dc[1];
  iVar9 = func_0010CF28(0x34,param_4,4);
  if (iVar9 != 0) {
    *(undefined4 *)(iVar9 + 0x20) = 0;
    *(undefined4 *)(iVar9 + 0x24) = 0;
    *(undefined4 *)(iVar9 + 0x28) = 0;
    *(undefined4 *)(iVar9 + 0x2c) = 0;
    *(undefined4 *)(iVar9 + 0x30) = 0;
  }
  *(int *)(param_1 + 0xc4) = iVar9;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  iVar9 = 0;
  iVar15 = 6;
  piVar13 = param_2 + 8;
  piVar14 = param_2 + 2;
  do {
    iVar22 = *piVar13;
    piVar13 = piVar13 + 1;
    iVar23 = 0;
    if (iVar22 != 0) {
      iVar23 = *piVar14 + (int)param_2;
    }
    piVar14 = piVar14 + 1;
    ((undefined4 *)(param_1 + 0xe4))[iVar9] = iVar23;
    piVar10 = DAT_002346e0;
    iVar15 = iVar15 + -1;
    iVar9 = iVar9 + 1;
  } while (iVar15 != 0);
  *(undefined4 *)(param_1 + 0xfc) = 0;
  *(undefined4 *)(param_1 + 0x100) = 0;
  piVar10 = (int *)*piVar10;
  *(undefined4 *)(param_1 + 0x110) = 0;
  *(undefined4 *)(param_1 + 0x114) = 0;
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined1 *)(param_1 + 0x11c) = 0;
  uVar11 = (**(code **)(*param_4 + 0x18))(param_4,param_2[0xe],4);
  *(undefined4 *)(param_1 + 0xfc) = uVar11;
  uVar18 = param_2[0xf];
  uVar11 = (**(code **)(*param_4 + 0x18))(param_4,uVar18,0x10);
  *(undefined4 *)(param_1 + 0x108) = uVar11;
  if (((*pcVar3 == '\0') || (uVar18 == 0)) ||
     (bVar6 = func_00529744((int)piVar10,uVar18,0x10), !bVar6)) {
    *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_1 + 0x108);
    *(undefined4 *)(param_1 + 0x108) = 0;
  }
  else {
    iVar9 = func_001B79FC((int)piVar10,uVar18,0x10,2);
    *(int *)(param_1 + 0x100) = iVar9;
    if (*(int *)(param_1 + 0x108) != 0 && iVar9 != 0) {
      *(undefined1 *)(param_1 + 0x11c) = 1;
    }
  }
  if (*DAT_002346dc == '\0') goto LAB_0023436c;
  uVar18 = param_2[10];
  if (uVar18 != 0) {
    bVar6 = func_00529744((int)piVar10,uVar18,0x10);
    if (bVar6) {
      *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(param_1 + 0xec);
      *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(param_1 + 0xec);
      iVar9 = func_001B79FC((int)piVar10,uVar18,0x10,2);
      *(int *)(param_1 + 0xec) = iVar9;
      if (*(int *)(param_1 + 0x104) != 0 && iVar9 != 0) {
        *(undefined1 *)(param_1 + 0x11c) = 1;
      }
    }
    if (*DAT_002346dc == '\0') goto LAB_0023436c;
  }
  uVar18 = param_2[0xb];
  iVar9 = *(int *)(param_1 + 0xf0);
  bVar6 = false;
  bVar24 = false;
  if ((uVar18 != 0 && iVar9 != 0) && (bVar7 = func_00529744((int)piVar10,uVar18,0x80), bVar7)) {
    *(int *)(param_1 + 0x110) = iVar9;
    uVar18 = func_001B79FC((int)piVar10,uVar18,0x80,2);
    *(uint *)(param_1 + 0xf0) = uVar18;
    puVar4 = DAT_002346e4;
    if (uVar18 != 0) {
      bVar6 = true;
      if (((*DAT_002346e8 & 1) == 0) && (iVar9 = func_00100174((int *)DAT_002346e8), iVar9 != 0)) {
        uVar12 = func_00600660(0x20000);
        *puVar4 = uVar12;
      }
      puVar5 = DAT_002346f0;
      if (((*DAT_002346ec & 1) == 0) && (iVar9 = func_00100174((int *)DAT_002346ec), iVar9 != 0)) {
        uVar12 = func_0010BB14(0x20000);
        *puVar5 = uVar12;
      }
      uVar12 = *puVar4;
      bVar7 = uVar18 <= uVar12;
      bVar24 = uVar12 == uVar18;
      if (!bVar7 || bVar24) {
        uVar12 = *puVar5;
        bVar7 = uVar12 <= uVar18;
        bVar24 = uVar18 == uVar12;
      }
      bVar24 = !bVar7 || bVar24;
      *(undefined1 *)(param_1 + 0x11c) = 1;
    }
  }
  uVar18 = param_2[0xc];
  bVar8 = false;
  bVar2 = false;
  bVar7 = false;
  uVar12 = 0x80;
  if (uVar18 == 0) goto LAB_0023436c;
  if (bVar6) {
    if (bVar24) {
      bVar6 = func_00529874((int)piVar10,uVar18,0x80);
      if (bVar6) {
LAB_002342d4:
        bVar8 = true;
      }
      else {
        bVar6 = func_00529808((int)piVar10,uVar18,uVar12);
        if (bVar6) goto LAB_002342ac;
      }
    }
    else {
      bVar6 = func_00529808((int)piVar10,uVar18,0x80);
      if (bVar6) {
LAB_002342ac:
        bVar2 = true;
        bVar8 = true;
      }
      else {
        bVar6 = func_00529874((int)piVar10,uVar18,uVar12);
        if (bVar6) goto LAB_002342d4;
      }
    }
  }
  else {
    bVar8 = func_00529744((int)piVar10,uVar18,0x80);
    bVar7 = true;
  }
  if (*(int *)(param_1 + 0xf4) != 0 && bVar8 != false) {
    *(int *)(param_1 + 0x114) = *(int *)(param_1 + 0xf4);
    if (bVar7) {
      iVar9 = func_001B79FC((int)piVar10,uVar18,uVar12,2);
    }
    else {
      if (bVar2) {
        uVar11 = 0x20000;
      }
      else {
        uVar11 = 0x30000;
      }
      iVar9 = (**(code **)(*piVar10 + 8))(piVar10,uVar11,DAT_002346f4,0,uVar18);
    }
    *(int *)(param_1 + 0xf4) = iVar9;
    if (iVar9 != 0) {
      *(undefined1 *)(param_1 + 0x11c) = 1;
    }
  }
LAB_0023436c:
  func_003FCCF8(*(undefined4 **)(param_1 + 0xc4),param_2,(undefined4 *)(param_1 + 0xe4));
  piVar14 = DAT_002346f8;
  pcVar3 = DAT_002346dc;
  uVar18 = 0;
  while( true ) {
    puVar19 = DAT_002346fc;
    piVar13 = *(int **)(*(int *)(param_1 + 0xc4) + 0x30);
    if (*(ushort *)(piVar13 + 1) <= uVar18) break;
    iVar9 = *(int *)(*piVar13 + uVar18 * 4);
    uVar12 = func_003FC460(iVar9,*(int *)(param_1 + 0xc4),*(undefined4 *)(param_1 + 0x104),
                           *(undefined4 *)(param_1 + 0xec));
    if ((((int)uVar12 < 0) &&
        (uVar12 = func_003FC460(iVar9,*(int *)(*(int *)(*(int *)(pcVar3 + 8) + 0xb0) + 0xc4),
                                *(undefined4 *)(param_1 + 0x104),*(undefined4 *)(param_1 + 0xec)),
        (int)uVar12 < 0)) &&
       (uVar12 = func_003FC460(iVar9,*(int *)(*(int *)(*(int *)(pcVar3 + 8) + 0xb4) + 0xc4),
                               *(undefined4 *)(param_1 + 0x104),*(undefined4 *)(param_1 + 0xec)),
       (int)uVar12 < 0)) {
      iVar15 = *(int *)(pcVar3 + 4);
      if (iVar15 == 0) {
        if (*piVar14 == 0) goto LAB_00234430;
        iVar15 = *(int *)(*piVar14 + 0x7728);
      }
      if (iVar15 != 0) {
        *(int *)(param_1 + 0xe0) = iVar15;
        func_003FC460(iVar9,*(int *)(iVar15 + 0xc4),*(undefined4 *)(param_1 + 0x104),
                      *(undefined4 *)(param_1 + 0xec));
      }
    }
LAB_00234430:
    uVar18 = uVar18 + 1;
  }
  if (*(char *)(param_1 + 0x11c) != '\0') {
    iVar15 = *(int *)(*(int *)(param_1 + 0xc4) + 0x2c);
    uVar18 = func_0010E0E0((int *)*DAT_002346fc);
    iVar9 = *(int *)(iVar15 + 0x28);
    if (iVar9 != 0) {
      uVar18 = *(uint *)(param_1 + 0x104);
    }
    uVar25 = CONCAT44(extraout_r1,uVar18);
    if (iVar9 != 0 && uVar18 != 0) {
      uVar25 = (ulonglong)uVar18;
      if (*(int *)(param_1 + 0xec) != 0) {
        uVar25 = func_005FF314(uVar18,*(int *)(param_1 + 0xec),iVar9);
      }
    }
    uVar18 = (uint)(uVar25 >> 0x20);
    iVar9 = *(int *)(iVar15 + 0x2c);
    if (iVar9 != 0) {
      uVar18 = *(uint *)(param_1 + 0xf0);
    }
    lVar26 = CONCAT44(uVar18,(int)uVar25);
    if (iVar9 != 0 && uVar18 != 0) {
      lVar26 = (ulonglong)uVar18 << 0x20;
      if (*(int *)(param_1 + 0x110) != 0) {
        lVar26 = func_005FF314(*(int *)(param_1 + 0x110),uVar18,iVar9);
      }
    }
    iVar9 = (int)((ulonglong)lVar26 >> 0x20);
    iVar23 = (int)lVar26;
    iVar22 = *(int *)(iVar15 + 0x30);
    if (iVar22 != 0) {
      iVar9 = *(int *)(param_1 + 0xf4);
    }
    if (iVar22 != 0 && iVar9 != 0) {
      iVar23 = 0;
      if (*(int *)(param_1 + 0x114) != 0) {
        iVar23 = func_005FF314(*(int *)(param_1 + 0x114),iVar9,iVar22);
      }
    }
    iVar9 = *(int *)(iVar15 + 0x3c);
    if (iVar9 != 0) {
      iVar23 = *(int *)(param_1 + 0x108);
    }
    if ((iVar9 != 0 && iVar23 != 0) && (*(int *)(param_1 + 0x100) != 0)) {
      func_005FF314(iVar23,*(int *)(param_1 + 0x100),iVar9);
    }
    func_0010E15C((int *)*puVar19);
  }
  iVar9 = *(int *)(*(int *)(param_1 + 0xc4) + 0x30);
  uVar1 = *(ushort *)(iVar9 + 0x70);
  uVar18 = (uint)*(ushort *)(iVar9 + 100);
  uVar12 = (uint)*(ushort *)(iVar9 + 4);
  uVar21 = uVar18 + uVar1;
  uVar20 = uVar21 + *(ushort *)(iVar9 + 0x7c);
  if (uVar12 != 0) {
    func_0010B380((undefined4 *)(param_1 + 200),uVar12,param_4,4);
  }
  if (uVar20 != 0) {
    func_0010B380((undefined4 *)(param_1 + 0xd4),uVar20,param_4,4);
  }
  puVar19 = (undefined4 *)0x0;
  uVar16 = 0;
  if (uVar12 != 0) {
    do {
      iVar9 = func_0010CF28(0x104,param_4,4);
      if (iVar9 == 0) {
        puVar17 = (undefined4 *)0x0;
      }
      else {
        puVar17 = (undefined4 *)func_0016E460(iVar9);
      }
      func_0016DAD0(puVar17,param_4,param_1,*(int *)(param_1 + 0xc4),
                    *(int *)(**(int **)(*(int *)(param_1 + 0xc4) + 0x30) + uVar16 * 4));
      if (*(int *)(param_1 + 200) < *(int *)(param_1 + 0xcc)) {
        *(undefined4 **)(*(int *)(param_1 + 0xd0) + *(int *)(param_1 + 200) * 4) = puVar17;
        *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 1;
      }
      if (puVar19 == (undefined4 *)0x0) {
        puVar19 = puVar17;
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 < uVar12);
  }
  uVar12 = 0;
  if (uVar20 != 0) {
    do {
      if (uVar12 < uVar18) {
        piVar14 = (int *)(*(int *)(*(int *)(*(int *)(param_1 + 0xc4) + 0x30) + 0x60) + uVar12 * 4);
LAB_00234648:
        iVar9 = *piVar14;
      }
      else {
        if (uVar12 < uVar21) {
          piVar14 = (int *)(*(int *)(*(int *)(*(int *)(param_1 + 0xc4) + 0x30) + 0x6c) +
                           (uVar12 - uVar18) * 4);
          goto LAB_00234648;
        }
        iVar9 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0xc4) + 0x30) + 0x78) +
                        ((uVar12 - uVar18) - (uint)uVar1) * 4);
      }
      puVar17 = (undefined4 *)func_0010CF28(0x18,param_4,4);
      if (puVar17 == (undefined4 *)0x0) {
        piVar14 = (int *)0x0;
      }
      else {
        piVar14 = func_00133984(puVar17);
      }
      func_00133600(piVar14,param_4,(int)puVar19,iVar9);
      piVar13 = (int *)(param_1 + 0xd4);
      if (*piVar13 < *(int *)(param_1 + 0xd8)) {
        *(int **)(*(int *)(param_1 + 0xdc) + *piVar13 * 4) = piVar14;
        *piVar13 = *piVar13 + 1;
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < uVar20);
  }
  return;
}

