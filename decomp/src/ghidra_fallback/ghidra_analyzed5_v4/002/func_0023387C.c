#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_0010BB14(int param_1);
extern int func_0010C0B8(int param_1);
extern int func_0010E0E0(int *param_1);
extern int func_0010E15C(int *param_1);
extern int func_0010EEE0(int param_1);
extern int func_0016E354(int param_1,int *param_2);
extern int func_001B79FC(int param_1,uint param_2,uint param_3,int param_4);
extern int func_003FC460(int param_1,int param_2,undefined4 param_3,undefined4 param_4);
extern int func_003FCCF8(undefined4 *param_1,int *param_2,undefined4 *param_3);
extern int func_00529744(int param_1,uint param_2,uint param_3);
extern int func_00529808(int param_1,uint param_2,uint param_3);
extern int func_00529874(int param_1,uint param_2,uint param_3);
extern int func_005FF314(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern int func_00600660(int param_1);
extern int *DAT_00233f18;
extern undefined4 *DAT_00233f1c;
extern char *DAT_00233f20;
extern int *DAT_00233f24;
extern uint *DAT_00233f28;
extern uint *DAT_00233f2c;
extern uint *DAT_00233f30;
extern uint *DAT_00233f34;
extern undefined4 DAT_00233f38;
extern int *DAT_00233f3c;
extern undefined4 *DAT_00233f40;
extern int DAT_00233f44;
extern undefined DAT_00233f48;

// USA 0023387C <- EU 0023387C (Ghidra, non-matching)
// GLOBAL DAT_00233f18 int *
// GLOBAL DAT_00233f1c undefined4 *
// GLOBAL DAT_00233f20 char *
// GLOBAL DAT_00233f24 int *
// GLOBAL DAT_00233f28 uint *
// GLOBAL DAT_00233f2c uint *
// GLOBAL DAT_00233f30 uint *
// GLOBAL DAT_00233f34 uint *
// GLOBAL DAT_00233f38 undefined4
// GLOBAL DAT_00233f3c int *
// GLOBAL DAT_00233f40 undefined4 *
// GLOBAL DAT_00233f44 int
// GLOBAL DAT_00233f48 undefined

undefined4 func_0023387C(int *param_1,int *param_2)

{
  bool bVar1;
  bool bVar2;
  char *pcVar3;
  uint *puVar4;
  uint *puVar5;
  undefined4 *puVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  uint uVar13;
  int *piVar14;
  undefined4 uVar15;
  undefined4 extraout_r1;
  int *piVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  ulonglong uVar22;
  longlong lVar23;
  
  if ((char)param_1[0x47] == '\0') {
    return 0;
  }
  iVar10 = *DAT_00233f18;
  func_0010C0B8(iVar10 + 0xb8cc);
  (**(code **)(*param_1 + 0x20))(param_1);
  if (param_2 == (int *)0x0) {
    iVar11 = 1;
  }
  else {
    iVar11 = func_0010983C(*DAT_00233f1c,param_2);
  }
  pcVar3 = DAT_00233f20;
  iVar17 = 0;
  iVar18 = 6;
  *DAT_00233f20 = '\0';
  *(int *)(pcVar3 + 4) = param_1[0x38];
  *(int *)(pcVar3 + 0x24) = param_1[10];
  piVar14 = (int *)param_1[5];
  piVar16 = piVar14 + 8;
  piVar12 = piVar14 + 2;
  do {
    iVar20 = *piVar16;
    piVar16 = piVar16 + 1;
    iVar21 = 0;
    if (iVar20 != 0) {
      iVar21 = *piVar12 + (int)piVar14;
    }
    piVar12 = piVar12 + 1;
    (param_1 + 0x39)[iVar17] = iVar21;
    iVar18 = iVar18 + -1;
    iVar17 = iVar17 + 1;
  } while (iVar18 != 0);
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  piVar12 = (int *)*DAT_00233f24;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  *(undefined1 *)(param_1 + 0x47) = 0;
  iVar17 = (**(code **)(*param_2 + 0x18))(param_2,piVar14[0xe],4);
  param_1[0x3f] = iVar17;
  uVar19 = piVar14[0xf];
  iVar17 = (**(code **)(*param_2 + 0x18))(param_2,uVar19,0x10);
  pcVar3 = DAT_00233f20;
  param_1[0x42] = iVar17;
  if (((*pcVar3 == '\0') || (uVar19 == 0)) ||
     (bVar7 = func_00529744((int)piVar12,uVar19,0x10), !bVar7)) {
    iVar17 = param_1[0x42];
    param_1[0x42] = 0;
    param_1[0x40] = iVar17;
  }
  else {
    iVar17 = func_001B79FC((int)piVar12,uVar19,0x10,2);
    param_1[0x40] = iVar17;
    if (param_1[0x42] != 0 && iVar17 != 0) {
      *(undefined1 *)(param_1 + 0x47) = 1;
    }
  }
  if (*DAT_00233f20 == '\0') goto LAB_00233cec;
  uVar19 = piVar14[10];
  if (uVar19 != 0) {
    bVar7 = func_00529744((int)piVar12,uVar19,0x10);
    if (bVar7) {
      param_1[0x41] = param_1[0x3b];
      param_1[0x46] = param_1[0x3b];
      iVar17 = func_001B79FC((int)piVar12,uVar19,0x10,2);
      param_1[0x3b] = iVar17;
      if (param_1[0x41] != 0 && iVar17 != 0) {
        *(undefined1 *)(param_1 + 0x47) = 1;
      }
    }
    if (*DAT_00233f20 == '\0') goto LAB_00233cec;
  }
  bVar2 = false;
  uVar19 = piVar14[0xb];
  iVar17 = param_1[0x3c];
  bVar7 = false;
  if ((uVar19 != 0 && iVar17 != 0) && (bVar8 = func_00529744((int)piVar12,uVar19,0x80), bVar8)) {
    param_1[0x44] = iVar17;
    uVar19 = func_001B79FC((int)piVar12,uVar19,0x80,2);
    param_1[0x3c] = uVar19;
    puVar4 = DAT_00233f28;
    if (uVar19 != 0) {
      bVar2 = true;
      if (((*DAT_00233f2c & 1) == 0) && (iVar17 = func_00100174((int *)DAT_00233f2c), iVar17 != 0))
      {
        uVar13 = func_00600660(0x20000);
        *puVar4 = uVar13;
      }
      puVar5 = DAT_00233f34;
      if (((*DAT_00233f30 & 1) == 0) && (iVar17 = func_00100174((int *)DAT_00233f30), iVar17 != 0))
      {
        uVar13 = func_0010BB14(0x20000);
        *puVar5 = uVar13;
      }
      uVar13 = *puVar4;
      bVar8 = uVar19 <= uVar13;
      bVar7 = uVar13 == uVar19;
      if (!bVar8 || bVar7) {
        uVar13 = *puVar5;
        bVar8 = uVar13 <= uVar19;
        bVar7 = uVar19 == uVar13;
      }
      bVar7 = !bVar8 || bVar7;
      *(undefined1 *)(param_1 + 0x47) = 1;
    }
  }
  uVar19 = piVar14[0xc];
  bVar9 = false;
  bVar1 = false;
  bVar8 = false;
  uVar13 = 0x80;
  if (uVar19 == 0) goto LAB_00233cec;
  if (bVar2) {
    if (bVar7) {
      bVar7 = func_00529874((int)piVar12,uVar19,0x80);
      if (bVar7) {
LAB_00233c54:
        bVar9 = true;
      }
      else {
        bVar7 = func_00529808((int)piVar12,uVar19,uVar13);
        if (bVar7) goto LAB_00233c2c;
      }
    }
    else {
      bVar7 = func_00529808((int)piVar12,uVar19,0x80);
      if (bVar7) {
LAB_00233c2c:
        bVar1 = true;
        bVar9 = true;
      }
      else {
        bVar7 = func_00529874((int)piVar12,uVar19,uVar13);
        if (bVar7) goto LAB_00233c54;
      }
    }
  }
  else {
    bVar9 = func_00529744((int)piVar12,uVar19,0x80);
    bVar8 = true;
  }
  if (param_1[0x3d] != 0 && bVar9 != false) {
    param_1[0x45] = param_1[0x3d];
    if (bVar8) {
      iVar17 = func_001B79FC((int)piVar12,uVar19,uVar13,2);
    }
    else {
      if (bVar1) {
        uVar15 = 0x20000;
      }
      else {
        uVar15 = 0x30000;
      }
      iVar17 = (**(code **)(*piVar12 + 8))(piVar12,uVar15,DAT_00233f38,0,uVar19);
    }
    param_1[0x3d] = iVar17;
    if (iVar17 != 0) {
      *(undefined1 *)(param_1 + 0x47) = 1;
    }
  }
LAB_00233cec:
  func_003FCCF8((undefined4 *)param_1[0x31],piVar14,param_1 + 0x39);
  piVar12 = DAT_00233f3c;
  pcVar3 = DAT_00233f20;
  uVar19 = 0;
  do {
    puVar6 = DAT_00233f40;
    piVar14 = *(int **)(param_1[0x31] + 0x30);
    if (*(ushort *)(piVar14 + 1) <= uVar19) {
      if ((char)param_1[0x47] != '\0') {
        iVar18 = *(int *)(param_1[0x31] + 0x2c);
        uVar19 = func_0010E0E0((int *)*DAT_00233f40);
        iVar17 = *(int *)(iVar18 + 0x28);
        if (iVar17 != 0) {
          uVar19 = param_1[0x41];
        }
        uVar22 = CONCAT44(extraout_r1,uVar19);
        if (iVar17 != 0 && uVar19 != 0) {
          uVar22 = (ulonglong)uVar19;
          if (param_1[0x3b] != 0) {
            uVar22 = func_005FF314(uVar19,param_1[0x3b],iVar17);
          }
        }
        uVar19 = (uint)(uVar22 >> 0x20);
        iVar17 = *(int *)(iVar18 + 0x2c);
        if (iVar17 != 0) {
          uVar19 = param_1[0x3c];
        }
        lVar23 = CONCAT44(uVar19,(int)uVar22);
        if (iVar17 != 0 && uVar19 != 0) {
          lVar23 = (ulonglong)uVar19 << 0x20;
          if (param_1[0x44] != 0) {
            lVar23 = func_005FF314(param_1[0x44],uVar19,iVar17);
          }
        }
        iVar17 = (int)((ulonglong)lVar23 >> 0x20);
        iVar21 = (int)lVar23;
        iVar20 = *(int *)(iVar18 + 0x30);
        if (iVar20 != 0) {
          iVar17 = param_1[0x3d];
        }
        if (iVar20 != 0 && iVar17 != 0) {
          iVar21 = 0;
          if (param_1[0x45] != 0) {
            iVar21 = func_005FF314(param_1[0x45],iVar17,iVar20);
          }
        }
        iVar17 = *(int *)(iVar18 + 0x3c);
        if (iVar17 != 0) {
          iVar21 = param_1[0x42];
        }
        if ((iVar17 != 0 && iVar21 != 0) && (param_1[0x40] != 0)) {
          func_005FF314(iVar21,param_1[0x40],iVar17);
        }
        func_0010E15C((int *)*puVar6);
      }
      uVar19 = 0;
      *(undefined **)(DAT_00233f44 + 4) = &DAT_00233f48;
      if (0 < param_1[0x32]) {
        do {
          if (uVar19 < (uint)param_1[0x32]) {
            iVar17 = *(int *)(param_1[0x34] + uVar19 * 4);
          }
          else {
            iVar17 = 0;
          }
          func_0016E354(iVar17,param_2);
          uVar19 = uVar19 + 1;
        } while ((int)uVar19 < param_1[0x32]);
      }
      pcVar3[4] = '\0';
      pcVar3[5] = '\0';
      pcVar3[6] = '\0';
      pcVar3[7] = '\0';
      if (iVar11 != 1) {
        func_0010983C(*DAT_00233f1c,iVar11);
      }
      return func_0010EEE0(iVar10 + 0xb8cc);
    }
    iVar17 = *(int *)(*piVar14 + uVar19 * 4);
    uVar13 = func_003FC460(iVar17,param_1[0x31],param_1[0x41],param_1[0x3b]);
    if ((((int)uVar13 < 0) &&
        (uVar13 = func_003FC460(iVar17,*(int *)(*(int *)(*(int *)(pcVar3 + 8) + 0xb0) + 0xc4),
                                param_1[0x41],param_1[0x3b]), (int)uVar13 < 0)) &&
       (uVar13 = func_003FC460(iVar17,*(int *)(*(int *)(*(int *)(pcVar3 + 8) + 0xb4) + 0xc4),
                               param_1[0x41],param_1[0x3b]), (int)uVar13 < 0)) {
      iVar18 = *(int *)(pcVar3 + 4);
      if (iVar18 == 0) {
        if (*piVar12 == 0) goto LAB_00233db0;
        iVar18 = *(int *)(*piVar12 + 0x7728);
      }
      if (iVar18 != 0) {
        param_1[0x38] = iVar18;
        func_003FC460(iVar17,*(int *)(iVar18 + 0xc4),param_1[0x41],param_1[0x3b]);
      }
    }
LAB_00233db0:
    uVar19 = uVar19 + 1;
  } while( true );
}

