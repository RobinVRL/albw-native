#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010BB00(undefined4 *param_1,undefined4 *param_2);
extern int func_00404CC8(int param_1,uint param_2,uint param_3);
extern int func_00404F24(undefined4 *param_1,undefined4 *param_2);
extern int func_00404F88(int param_1,uint param_2,uint param_3);
extern int func_00404FBC(undefined4 *param_1);
extern int func_004060E0(int param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6, uint param_7,uint param_8,uint param_9,uint param_10);
extern int func_00406674(int param_1);
extern undefined4 DAT_004073d4;
extern undefined *DAT_004073d8;

// USA 004066B4 <- EU 00406694 (Ghidra, non-matching)
// GLOBAL DAT_004073d4 undefined4
// GLOBAL DAT_004073d8 undefined *

int func_004066B4(undefined4 *param_1,char *param_2,int *param_3)

{
  char cVar1;
  byte bVar2;
  undefined1 uVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  char *pcVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined4 *puVar18;
  char *pcVar19;
  uint uVar20;
  uint uVar21;
  undefined1 *puVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  char *pcVar26;
  int iVar27;
  undefined4 uVar28;
  uint uVar29;
  int iVar30;
  ushort *puVar31;
  uint uVar32;
  undefined4 uVar33;
  uint uVar34;
  uint uVar35;
  undefined4 uVar36;
  char *pcVar37;
  undefined4 uVar38;
  bool bVar39;
  bool bVar40;
  
  *param_1 = DAT_004073d4;
  iVar4 = func_00100118((int)(param_1 + 0x1b),DAT_004073d8,4,2);
  iVar30 = iVar4 + -0x6c;
  func_00406674(iVar30);
  uVar20 = 0;
  pcVar5 = param_2;
  pcVar26 = (char *)(iVar4 + 0x15);
  do {
    uVar20 = uVar20 + 1;
    pcVar11 = pcVar26 + 1;
    *pcVar26 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    bVar39 = *pcVar5 == '\0';
    uVar35 = 0;
    if (!bVar39) {
      uVar35 = 0x1c;
    }
    pcVar26 = pcVar11;
  } while ((bVar39 || uVar20 <= uVar35) && (!bVar39 && uVar35 != uVar20));
  iVar6 = 0;
  *pcVar11 = '\0';
  do {
    iVar23 = iVar6 * 4;
    iVar12 = iVar6 * 4;
    iVar6 = iVar6 + 1;
    *(undefined4 *)(iVar30 + iVar12 + 0x6c) = *(undefined4 *)(param_2 + iVar23 + 0x1c);
  } while (iVar6 < 2);
  uVar7 = *(uint *)(param_2 + 0x24);
  uVar34 = uVar7 & 3;
  iVar6 = uVar34 * 4;
  iVar12 = iVar6 + 0x28;
  uVar20 = (uVar7 << 0x1c) >> 0x1e;
  iVar13 = iVar12 + uVar20 * 0x14;
  uVar35 = (uVar7 << 0x1a) >> 0x1e;
  iVar14 = iVar13 + uVar35 * 8;
  pcVar5 = param_2 + iVar14;
  uVar29 = (uVar7 << 0x17) >> 0x1d;
  iVar14 = iVar14 + uVar29 * 4;
  iVar23 = 0;
  if ((uVar7 & 0x200) != 0) {
    iVar23 = 8;
  }
  iVar23 = iVar14 + iVar23;
  iVar24 = 0;
  if ((uVar7 & 0x400) != 0) {
    iVar24 = 4;
  }
  iVar24 = iVar23 + iVar24;
  iVar25 = 0;
  if ((uVar7 & 0x1000) != 0) {
    iVar25 = 4;
  }
  iVar25 = iVar24 + iVar25;
  pcVar26 = param_2 + iVar25;
  iVar27 = 0;
  if ((uVar7 & 0x4000) != 0) {
    iVar27 = 0xc;
  }
  iVar27 = iVar27 + iVar25;
  pcVar11 = param_2 + iVar27;
  uVar15 = (uVar7 << 0xf) >> 0x1e;
  iVar25 = uVar15 * 0x14;
  if (3 < uVar34) {
    uVar34 = 3;
  }
  if (3 < uVar20) {
    uVar20 = 3;
  }
  uVar21 = 3;
  if (uVar35 < 4) {
    uVar21 = uVar35;
  }
  uVar35 = 6;
  if (uVar29 < 7) {
    uVar35 = uVar29;
  }
  if (6 < uVar15) {
    uVar15 = 6;
  }
  uVar16 = (uint)((uVar7 & 0x200) != 0);
  bVar39 = (uVar7 & 0x400) != 0;
  bVar40 = (uVar7 & 0x1000) != 0;
  uVar17 = (uint)((uVar7 & 0x4000) != 0);
  uVar29 = (uint)((uVar7 & 0x20000) != 0);
  if (bVar40) {
    uVar7 = 2;
  }
  else {
    uVar7 = 0;
    if (bVar39) {
      uVar7 = 1;
    }
  }
  func_004060E0(iVar30,uVar34,uVar20,uVar21,uVar35,uVar16,uVar7,uVar17,uVar15,uVar29);
  *(byte *)(iVar4 + 0x32) =
       *(byte *)(iVar4 + 0x32) & 0xfd | ((*(uint *)(param_2 + 0x24) & 0x800) != 0) << 1;
  if (*(int *)(iVar4 + 0x10) != 0) {
    uVar7 = 0;
    if ((*(uint *)(iVar4 + 8) & 3) != 0) {
      do {
        puVar8 = (undefined4 *)(*(int *)(iVar4 + 0x10) + uVar7 * 0x20);
        if (puVar8 != (undefined4 *)0x0) {
          func_00404FBC(puVar8);
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < (*(uint *)(iVar4 + 8) & 3));
    }
    *(uint *)(iVar4 + 0xc) = uVar34 | *(uint *)(iVar4 + 0xc) & 0xfffffffc;
    *(byte *)(iVar4 + 0x32) = *(byte *)(iVar4 + 0x32) & 0xfb;
    if (uVar34 != 0) {
      iVar9 = *param_3;
      uVar32 = 0;
      uVar7 = 0;
      iVar10 = *(int *)(iVar4 + 0x10);
      do {
        puVar31 = (ushort *)(param_2 + uVar7 * 4 + 0x28);
        puVar8 = (undefined4 *)
                 (**(code **)(*(int *)param_3[3] + 0x14))
                           ((int *)param_3[3],
                            iVar9 + 0xc + *(int *)(iVar9 + 0xc + (uint)*puVar31 * 4));
        puVar18 = (undefined4 *)(iVar10 + uVar32 * 0x20);
        func_00404F24(puVar18,puVar8);
        func_00404CC8((int)puVar18,(byte)puVar31[1] & 3,*(byte *)((int)puVar31 + 3) & 3);
        func_00404F88((int)puVar18,(byte)((byte)puVar31[1] >> 2) & 3,
                      *(byte *)((int)puVar31 + 3) >> 2 & 3);
        uVar32 = uVar32 + 1 & 0xff;
        uVar7 = uVar7 + 1 & 0xff;
      } while (uVar7 < uVar34);
    }
    iVar9 = *(int *)(iVar4 + 0x10) + ((uint)(*(int *)(iVar4 + 8) << 0x1e) >> 0x19);
    uVar7 = 0;
    if ((uint)(*(int *)(iVar4 + 8) << 0x1c) >> 0x1e != 0) {
      do {
        puVar8 = (undefined4 *)(iVar9 + uVar7 * 0x14);
        if (puVar8 != (undefined4 *)0x0) {
          *puVar8 = 0;
          puVar8[1] = 0;
          puVar8[2] = 0;
          puVar8[3] = 0;
          puVar8[4] = 0;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < (uint)(*(int *)(iVar4 + 8) << 0x1c) >> 0x1e);
    }
    *(uint *)(iVar4 + 0xc) = uVar20 << 2 | *(uint *)(iVar4 + 0xc) & 0xfffffff3;
    *(byte *)(iVar4 + 0x32) = *(byte *)(iVar4 + 0x32) & 0xfb;
    if (uVar20 != 0) {
      iVar10 = 0;
      pcVar19 = param_2 + iVar6 + 0x30;
      puVar8 = (undefined4 *)(iVar9 + 8);
      do {
        uVar20 = uVar20 - 1;
        pcVar37 = param_2 + iVar10 * 0x14 + iVar12;
        puVar18 = (undefined4 *)(iVar9 + iVar10 * 0x14);
        uVar33 = *(undefined4 *)(pcVar37 + 4);
        iVar10 = iVar10 + 1;
        *puVar18 = *(undefined4 *)pcVar37;
        puVar18[1] = uVar33;
        *puVar8 = *(undefined4 *)pcVar19;
        uVar33 = *(undefined4 *)(pcVar37 + 0x10);
        puVar18[3] = *(undefined4 *)(pcVar37 + 0xc);
        puVar18[4] = uVar33;
        pcVar19 = pcVar19 + 0x14;
        puVar8 = puVar8 + 5;
      } while (uVar20 != 0);
    }
    iVar12 = *(int *)(iVar4 + 8);
    iVar6 = ((uint)(iVar12 << 0x1e) >> 0x19) + ((uint)(iVar12 << 0x1c) >> 0x1e) * 0x14 +
            *(int *)(iVar4 + 0x10);
    uVar20 = 0;
    if ((uint)(iVar12 << 0x1a) >> 0x1e != 0) {
      do {
        puVar22 = (undefined1 *)(iVar6 + uVar20 * 8);
        if (puVar22 != (undefined1 *)0x0) {
          *puVar22 = 0;
          puVar22[1] = 0;
        }
        uVar20 = uVar20 + 1;
      } while (uVar20 < (uint)(*(int *)(iVar4 + 8) << 0x1a) >> 0x1e);
    }
    *(uint *)(iVar4 + 0xc) = *(uint *)(iVar4 + 0xc) & 0xffffffcf | uVar21 << 4;
    *(byte *)(iVar4 + 0x32) = *(byte *)(iVar4 + 0x32) & 0xfb;
    iVar12 = 0;
    uVar20 = 0;
    if ((uint)(*(int *)(iVar4 + 0xc) << 0x1a) >> 0x1e != 0) {
      do {
        puVar8 = (undefined4 *)(iVar6 + uVar20 * 8);
        uVar33 = *(undefined4 *)(param_2 + uVar20 * 8 + iVar13 + 4);
        *puVar8 = *(undefined4 *)(param_2 + uVar20 * 8 + iVar13);
        puVar8[1] = uVar33;
        uVar7 = *(uint *)(iVar4 + 8);
        cVar1 = *(char *)((int)puVar8 + 1);
        if ((cVar1 == '\x03' || cVar1 == '\x04') || (cVar1 == '\x05')) {
          iVar9 = iVar12 + 1;
          iVar10 = (uVar7 >> 4 & 0x1c) +
                   (uVar7 >> 1 & 0x18) +
                   ((uVar7 << 0x1e) >> 0x19) + ((uVar7 << 0x1c) >> 0x1e) * 0x14 + (uVar7 >> 6 & 8) +
                   (uVar7 >> 8 & 0xc) + ((int)(uVar7 << 0x13) >> 0x1f) * -0xc +
                   *(int *)(iVar4 + 0x10) + iVar12 * 0x14;
        }
        else {
          iVar10 = 0;
          iVar9 = iVar12;
        }
        puVar8[1] = iVar10;
        uVar20 = uVar20 + 1;
        iVar12 = iVar9;
      } while (uVar20 < (uint)(*(int *)(iVar4 + 0xc) << 0x1a) >> 0x1e);
    }
    if (uVar35 != 0) {
      uVar20 = *(uint *)(iVar4 + 8);
      uVar7 = 0;
      puVar8 = (undefined4 *)
               ((uVar20 >> 1 & 0x18) +
                ((uVar20 << 0x1e) >> 0x19) + ((uVar20 << 0x1c) >> 0x1e) * 0x14 + (uVar20 >> 6 & 8) +
                (uVar20 >> 8 & 0xc) + ((int)(uVar20 << 0x13) >> 0x1f) * -0xc +
               *(int *)(iVar4 + 0x10));
      if ((uVar20 << 0x17) >> 0x1d != 0) {
        do {
          puVar18 = puVar8 + uVar7;
          if (puVar18 != (undefined4 *)0x0) {
            *(undefined1 *)puVar18 = 0;
            *(undefined1 *)((int)puVar18 + 1) = 0;
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < (uint)(*(int *)(iVar4 + 8) << 0x17) >> 0x1d);
      }
      *(uint *)(iVar4 + 0xc) = *(uint *)(iVar4 + 0xc) & 0xfffffe3f | uVar35 << 6;
      if (uVar35 != 0) {
        puVar18 = puVar8 + -1;
        pcVar19 = pcVar5 + -4;
        if ((uVar35 & 1) != 0) {
          *puVar8 = *(undefined4 *)pcVar5;
          puVar18 = puVar8;
          pcVar19 = pcVar5;
        }
        for (uVar35 = uVar35 >> 1; uVar35 != 0; uVar35 = uVar35 - 1) {
          puVar18[1] = *(undefined4 *)(pcVar19 + 4);
          pcVar19 = pcVar19 + 8;
          puVar18 = puVar18 + 2;
          *puVar18 = *(undefined4 *)pcVar19;
        }
      }
    }
    if (uVar16 != 0) {
      uVar20 = *(uint *)(iVar4 + 8);
      puVar8 = (undefined4 *)
               ((uVar20 >> 1 & 0x18) +
                ((uVar20 << 0x1e) >> 0x19) + ((uVar20 << 0x1c) >> 0x1e) * 0x14 +
               *(int *)(iVar4 + 0x10));
      uVar33 = *(undefined4 *)(param_2 + iVar14 + 4);
      *puVar8 = *(undefined4 *)(param_2 + iVar14);
      puVar8[1] = uVar33;
    }
    if (bVar39) {
      uVar20 = *(uint *)(iVar4 + 8);
      *(undefined4 *)
       ((uVar20 >> 1 & 0x18) + ((uVar20 << 0x1e) >> 0x19) + ((uVar20 << 0x1c) >> 0x1e) * 0x14 +
        (uVar20 >> 6 & 8) + *(int *)(iVar4 + 0x10)) = *(undefined4 *)(param_2 + iVar23);
    }
    if (bVar40) {
      uVar20 = *(uint *)(iVar4 + 8);
      *(undefined4 *)
       ((uVar20 >> 6 & 8) +
        ((uVar20 << 0x1e) >> 0x19) + ((uVar20 << 0x1c) >> 0x1e) * 0x14 + (uVar20 >> 1 & 0x18) + 4 +
       *(int *)(iVar4 + 0x10)) = *(undefined4 *)(param_2 + iVar24);
    }
    if (uVar17 != 0) {
      uVar20 = *(uint *)(iVar4 + 8);
      puVar8 = (undefined4 *)
               ((uVar20 >> 8 & 0xc) +
                (uVar20 >> 1 & 0x18) +
                ((uVar20 << 0x1e) >> 0x19) + ((uVar20 << 0x1c) >> 0x1e) * 0x14 + (uVar20 >> 6 & 8) +
               *(int *)(iVar4 + 0x10));
      uVar33 = *(undefined4 *)pcVar26;
      uVar28 = *(undefined4 *)(pcVar26 + 4);
      puVar8[2] = *(undefined4 *)(pcVar26 + 8);
      *puVar8 = uVar33;
      puVar8[1] = uVar28;
    }
    if (uVar15 != 0) {
      uVar20 = *(uint *)(iVar4 + 8);
      puVar8 = (undefined4 *)
               ((uVar20 >> 6 & 8) +
                ((uVar20 << 0x1e) >> 0x19) + ((uVar20 << 0x1c) >> 0x1e) * 0x14 +
                (uVar20 >> 1 & 0x18) + (uVar20 >> 8 & 0xc) + ((int)(uVar20 << 0x13) >> 0x1f) * -0xc
                + (uVar20 >> 4 & 0x1c) + *(int *)(iVar4 + 0x10));
      uVar35 = 0;
      if ((uVar20 << 0x10) >> 0x1d != 0) {
        do {
          puVar18 = puVar8 + uVar35 * 5;
          if (puVar18 != (undefined4 *)0x0) {
            *puVar18 = 0;
            puVar18[1] = 0;
            puVar18[2] = 0;
            puVar18[3] = 0;
            puVar18[4] = 0;
          }
          uVar35 = uVar35 + 1;
        } while (uVar35 < (uint)(*(int *)(iVar4 + 8) << 0x10) >> 0x1d);
      }
      *(uint *)(iVar4 + 0xc) = uVar15 << 0xd | *(uint *)(iVar4 + 0xc) & 0xffff1fff;
      if (uVar15 != 0) {
        puVar18 = puVar8 + -5;
        pcVar5 = pcVar11 + -0x14;
        if ((uVar15 & 1) != 0) {
          uVar33 = *(undefined4 *)(pcVar11 + 4);
          uVar28 = *(undefined4 *)(pcVar11 + 8);
          uVar36 = *(undefined4 *)(pcVar11 + 0xc);
          uVar38 = *(undefined4 *)(pcVar11 + 0x10);
          *puVar8 = *(undefined4 *)pcVar11;
          puVar8[1] = uVar33;
          puVar8[2] = uVar28;
          puVar8[3] = uVar36;
          puVar8[4] = uVar38;
          puVar18 = puVar8;
          pcVar5 = pcVar11;
        }
        for (uVar15 = uVar15 >> 1; uVar15 != 0; uVar15 = uVar15 - 1) {
          uVar33 = *(undefined4 *)(pcVar5 + 0x18);
          uVar28 = *(undefined4 *)(pcVar5 + 0x1c);
          uVar36 = *(undefined4 *)(pcVar5 + 0x20);
          uVar38 = *(undefined4 *)(pcVar5 + 0x24);
          puVar18[5] = *(undefined4 *)(pcVar5 + 0x14);
          puVar18[6] = uVar33;
          puVar18[7] = uVar28;
          puVar18[8] = uVar36;
          puVar18[9] = uVar38;
          uVar33 = *(undefined4 *)(pcVar5 + 0x2c);
          uVar28 = *(undefined4 *)(pcVar5 + 0x30);
          uVar36 = *(undefined4 *)(pcVar5 + 0x34);
          uVar38 = *(undefined4 *)(pcVar5 + 0x38);
          puVar18[10] = *(undefined4 *)(pcVar5 + 0x28);
          puVar18[0xb] = uVar33;
          puVar18[0xc] = uVar28;
          puVar18[0xd] = uVar36;
          puVar18[0xe] = uVar38;
          puVar18 = puVar18 + 10;
          pcVar5 = pcVar5 + 0x28;
        }
      }
    }
    if (uVar29 != 0) {
      uVar20 = *(uint *)(iVar4 + 8);
      func_0010BB00((undefined4 *)
                    ((uVar20 >> 8 & 0xc) +
                     ((uVar20 << 0x1e) >> 0x19) + ((uVar20 << 0x1c) >> 0x1e) * 0x14 +
                     (uVar20 >> 1 & 0x18) + (uVar20 >> 6 & 8) +
                     ((int)(uVar20 << 0x13) >> 0x1f) * -0xc + (uVar20 >> 4 & 0x1c) +
                     ((uVar20 << 0x10) >> 0x1d) * 0x14 + *(int *)(iVar4 + 0x10)),
                    (undefined4 *)(param_2 + iVar27 + iVar25));
    }
  }
  uVar35 = *(uint *)(iVar4 + 0xc);
  bVar39 = false;
  iVar6 = 0;
  uVar20 = uVar35 << 0x17;
  if (uVar20 >> 0x1d != 0) {
    uVar29 = *(uint *)(iVar4 + 8);
    do {
      cVar1 = *(char *)(((uVar29 << 0x1e) >> 0x19) + ((uVar29 << 0x1c) >> 0x1e) * 0x14 +
                        (uVar29 >> 1 & 0x18) + (uVar29 >> 6 & 8) + (uVar29 >> 8 & 0xc) +
                        ((int)(uVar29 << 0x13) >> 0x1f) * -0xc + *(int *)(iVar4 + 0x10) + iVar6 * 4)
      ;
      if ((cVar1 == '\t' || cVar1 == '\n') || cVar1 == '\v') {
        bVar39 = true;
        break;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < (int)(uVar20 >> 0x1d));
  }
  if ((uVar35 & 3) == 0) {
    *(undefined1 *)(iVar4 + 0x14) = 1;
    return iVar30;
  }
  uVar35 = uVar35 & 3;
  if (uVar35 == 1) {
    uVar3 = 2;
switchD_00407368_caseD_0:
    *(undefined1 *)(iVar4 + 0x14) = uVar3;
    return iVar30;
  }
  if (!bVar39) {
    if (uVar35 < 3) {
      uVar20 = *(uint *)(iVar4 + 8);
      uVar3 = 3;
      switch(*(undefined1 *)
              (*(int *)(iVar4 + 0x10) +
              ((uVar20 << 0x1e) >> 0x19) + ((uVar20 << 0x1c) >> 0x1e) * 0x14 + (uVar20 >> 1 & 0x18)
              + (uVar20 >> 6 & 8) + (uVar20 >> 8 & 0xc) + ((int)(uVar20 << 0x13) >> 0x1f) * -0xc)) {
      case 1:
        uVar3 = 4;
        break;
      case 2:
        uVar3 = 5;
        break;
      case 3:
        uVar3 = 7;
        break;
      case 5:
        uVar3 = 6;
        break;
      case 6:
        *(undefined1 *)(iVar4 + 0x14) = 8;
        return iVar30;
      case 7:
        uVar3 = 9;
        break;
      case 8:
        uVar3 = 10;
      }
    }
    else {
      uVar35 = *(uint *)(iVar4 + 8);
      iVar6 = 0;
      *(undefined1 *)(iVar4 + 0x14) = 0;
      if ((uVar35 & 0x1c0) == 0) {
        return iVar30;
      }
      if (uVar20 >> 0x1d == 0) {
        return iVar30;
      }
      while ((bVar2 = *(byte *)(*(int *)(iVar4 + 0x10) +
                                (uVar35 >> 8 & 0xc) +
                                (uVar35 >> 6 & 8) +
                                (uVar35 >> 1 & 0x18) +
                                ((uVar35 << 0x1e) >> 0x19) + ((uVar35 << 0x1c) >> 0x1e) * 0x14 +
                                ((int)(uVar35 << 0x13) >> 0x1f) * -0xc + iVar6 * 4), bVar2 < 2 ||
             ((bVar2 == 2 || bVar2 == 4) || bVar2 == 5))) {
        iVar6 = iVar6 + 1;
        if ((int)(uVar20 >> 0x1d) <= iVar6) {
          return iVar30;
        }
      }
      uVar3 = 0xb;
    }
    goto switchD_00407368_caseD_0;
  }
  if (uVar35 == 2) {
    uVar3 = 0xc;
  }
  else {
    if (((uVar35 != 3) || (*(undefined1 *)(iVar4 + 0x14) = 0xd, uVar20 >> 0x1d == 0)) ||
       (uVar35 = *(uint *)(iVar4 + 8),
       *(char *)(((uVar35 << 0x1e) >> 0x19) + ((uVar35 << 0x1c) >> 0x1e) * 0x14 +
                 (uVar35 >> 1 & 0x18) + (uVar35 >> 6 & 8) + (uVar35 >> 8 & 0xc) +
                 ((int)(uVar35 << 0x13) >> 0x1f) * -0xc + *(int *)(iVar4 + 0x10) + 4) != '\v'))
    goto LAB_004071dc;
    uVar3 = 0xe;
  }
  *(undefined1 *)(iVar4 + 0x14) = uVar3;
LAB_004071dc:
  iVar4 = 0;
  if (uVar20 >> 0x1d == 0) {
    return iVar30;
  }
  do {
    iVar4 = iVar4 + 1;
  } while (iVar4 < (int)(uVar20 >> 0x1d));
  return iVar30;
}

