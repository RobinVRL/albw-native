#include "ghidra_types.h"

extern int func_001139F8(int param_1);
extern int func_003E35DC(undefined4 param_1,undefined4 param_2);
extern int func_003E6A04(int *param_1,uint *param_2,uint param_3);
extern int func_003E6A30(uint *param_1,int param_2,int param_3,undefined1 param_4);
extern int func_003E6A5C(int *param_1,int param_2);
extern undefined4 DAT_00420a24;
extern undefined4 DAT_00420a28;
extern undefined4 DAT_00420a2c;
extern uint *DAT_00420a30;
extern uint *DAT_00420a34;
extern uint *DAT_00420a38;
extern uint DAT_00420a3c;
extern int DAT_00420a40;
extern uint *DAT_00420a44;
extern uint DAT_00420a48;
extern int DAT_00420a4c;
extern uint DAT_00420c70;
extern uint *DAT_00420c74;
extern uint *DAT_00420c78;

// USA 004205A4 <- EU 00420584 (Ghidra, non-matching)
// GLOBAL DAT_00420a24 undefined4
// GLOBAL DAT_00420a28 undefined4
// GLOBAL DAT_00420a2c undefined4
// GLOBAL DAT_00420a30 uint *
// GLOBAL DAT_00420a34 uint *
// GLOBAL DAT_00420a38 uint *
// GLOBAL DAT_00420a3c uint
// GLOBAL DAT_00420a40 int
// GLOBAL DAT_00420a44 uint *
// GLOBAL DAT_00420a48 uint
// GLOBAL DAT_00420a4c int
// GLOBAL DAT_00420c70 uint
// GLOBAL DAT_00420c74 uint *
// GLOBAL DAT_00420c78 uint *

undefined4 func_004205A4(int *param_1,int param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ushort *puVar10;
  char *pcVar11;
  uint uVar12;
  int iVar13;
  undefined4 *puVar14;
  uint *puVar15;
  uint uVar16;
  uint uVar17;
  char cVar18;
  char cVar19;
  int iVar20;
  bool bVar21;
  byte bVar22;
  uint in_fpscr;
  undefined4 uVar23;
  undefined4 uVar24;
  _Alignas(8) unsigned char albw_frame[0xa0];
  #define local_98 (*(uint *)(albw_frame + 0x8))
  #define local_94 (*(uint *)(albw_frame + 0xc))
  #define local_90 (*(uint *)(albw_frame + 0x10))
  #define local_8c (*(uint *)(albw_frame + 0x14))
  #define local_88 (*(uint *)(albw_frame + 0x18))
  #define local_84 (*(uint *)(albw_frame + 0x1c))
  #define local_80 (*(uint *)(albw_frame + 0x20))
  #define local_7c (*(uint *)(albw_frame + 0x24))
  #define local_78 (*(uint *)(albw_frame + 0x28))
  #define local_74 (*(uint *)(albw_frame + 0x2c))
  #define local_70 (*(int *)(albw_frame + 0x30))
  #define uStack_6c (*(uint *)(albw_frame + 0x34))
  #define local_68 (*(int *)(albw_frame + 0x38))
  #define uStack_64 (*(uint *)(albw_frame + 0x3c))
  #define local_60 (*(int *)(albw_frame + 0x40))
  #define uStack_5c (*(uint *)(albw_frame + 0x44))
  #define local_58 (*(undefined4 *)(albw_frame + 0x48))
  #define auStack_54 ((uint *)(albw_frame + 0x4c))
  #define local_38 (*(undefined4 *)(albw_frame + 0x68))
  #define local_34 (*(undefined4 *)(albw_frame + 0x6c))
  #define local_30 ((char *)(albw_frame + 0x70))
  iVar7 = param_3 + *(int *)(param_3 + 4) * 4;
  iVar8 = *(int *)(param_3 + 8);
  *param_1 = param_2;
  uVar12 = *(uint *)(iVar7 + 0x14);
  iVar8 = iVar8 + param_3;
  iVar9 = (uVar12 >> 7) * 0x84;
  if ((uVar12 & 0x7f) != 0) {
    iVar9 = iVar9 + ((uVar12 & 0x7f) + 4 & 0xfffffffe);
  }
  uVar12 = *(uint *)(iVar7 + 0x1c);
  iVar13 = (uVar12 >> 7) * 0x84;
  if ((uVar12 & 0x7f) != 0) {
    iVar13 = iVar13 + ((uVar12 & 0x7f) + 4 & 0xfffffffe);
  }
  iVar9 = (iVar9 + iVar13 + *(int *)(iVar8 + 0x1c) * 6) * 4 + 0x350;
  func_003E6A30((uint *)(param_1 + 1),param_2,iVar9,1);
  iVar9 = param_2 + iVar9;
  func_003E6A30((uint *)(param_1 + 5),iVar9,0x28,1);
  uVar6 = DAT_00420a2c;
  uVar5 = DAT_00420a28;
  uVar4 = DAT_00420a24;
  local_70 = iVar9 + 0x28;
  iVar9 = 0;
  do {
    iVar20 = 0;
    iVar13 = 6;
    puVar15 = DAT_00420a30;
    do {
      uVar12 = *puVar15;
      puVar14 = (undefined4 *)(local_70 + iVar9 * 0x60 + iVar20 * 0x10);
      iVar20 = iVar20 + 1;
      uVar24 = ALBW_AS_U32(VectorSignedToFloat(iVar9,(byte)(in_fpscr >> 0x15) & 3));
      uVar23 = ALBW_AS_U32(VectorSignedToFloat(uVar12,(byte)(in_fpscr >> 0x15) & 3));
      *puVar14 = uVar24;
      puVar14[1] = uVar23;
      uVar23 = uVar4;
      if ((uVar12 & 1) == 0) {
        uVar23 = uVar6;
      }
      puVar14[2] = uVar23;
      uVar23 = uVar5;
      if (uVar12 + 1 < 3) {
        uVar23 = uVar6;
      }
      iVar13 = iVar13 + -1;
      puVar14[3] = uVar23;
      puVar15 = puVar15 + 1;
    } while (iVar13 != 0);
    iVar9 = iVar9 + 1;
  } while (iVar9 < 0x17);
  func_003E35DC(local_70,0x8a0);
  func_003E6A04(param_1 + 1,DAT_00420a34,0x140);
  puVar15 = DAT_00420a38;
  uVar16 = 0;
  iVar9 = *(int *)(iVar7 + 0x10) + iVar7 + 8;
  uVar12 = *(uint *)(iVar7 + 0x14);
  if (uVar12 != 0) {
    do {
      uVar17 = uVar12 - uVar16;
      local_7c = puVar15[0xb1];
      if (0x7f < uVar17) {
        uVar17 = 0x80;
      }
      local_78 = *(undefined4 *)(iVar9 + uVar16 * 4);
      local_74 = uVar17 * 0x100000 - 0x100000 | 0xf02cc;
      local_80 = uVar16;
      func_003E6A04(param_1 + 1,&local_80,0x10);
      func_003E6A04(param_1 + 1,(uint *)(iVar9 + uVar16 * 4 + 4),uVar17 * 4 - 4);
      func_003E6A5C(param_1 + 1,8);
      uVar12 = *(uint *)(iVar7 + 0x14);
      uVar16 = uVar16 + uVar17;
    } while (uVar16 < uVar12);
  }
  func_003E6A04(param_1 + 1,DAT_00420a38,8);
  uVar16 = 0;
  iVar9 = *(int *)(iVar7 + 0x18) + iVar7 + 8;
  uVar12 = *(uint *)(iVar7 + 0x1c);
  if (uVar12 != 0) {
    do {
      uVar17 = uVar12 - uVar16;
      local_7c = puVar15[0xb5];
      if (0x7f < uVar17) {
        uVar17 = 0x80;
      }
      local_74 = DAT_00420a3c | uVar17 * 0x100000 - 0x100000;
      local_78 = *(undefined4 *)(iVar9 + uVar16 * 8);
      local_80 = uVar16;
      func_003E6A04(param_1 + 1,&local_80,0x10);
      uVar12 = 1;
      if (1 < uVar17) {
        do {
          func_003E6A04(param_1 + 1,(uint *)(iVar9 + (uVar16 + uVar12) * 8),4);
          uVar12 = uVar12 + 1;
        } while (uVar12 < uVar17);
      }
      func_003E6A5C(param_1 + 1,8);
      uVar12 = *(uint *)(iVar7 + 0x1c);
      uVar16 = uVar16 + uVar17;
    } while (uVar16 < uVar12);
  }
  iVar9 = *(int *)(iVar8 + 0x18);
  uVar12 = 0;
  if (*(int *)(iVar8 + 0x1c) != 0) {
    do {
      local_94 = puVar15[0xb9];
      local_84 = puVar15[0xbd];
      iVar7 = iVar9 + iVar8 + uVar12 * 0x14;
      local_98 = *(ushort *)(iVar7 + 2) & 0xff;
      local_90 = (uint)(*(int *)(iVar7 + 0xc) << 8) >> 0x18 | *(int *)(iVar7 + 0x10) << 8;
      local_8c = *(int *)(iVar7 + 0xc) << 0x10 | (uint)(*(int *)(iVar7 + 8) << 8) >> 0x10;
      local_88 = *(uint *)(iVar7 + 4) & 0xffffff | *(int *)(iVar7 + 8) << 0x18;
      func_003E6A04(param_1 + 1,&local_98,0x18);
      uVar12 = uVar12 + 1;
    } while (uVar12 < *(uint *)(iVar8 + 0x1c));
  }
  uVar12 = func_001139F8(local_70);
  local_7c = *(undefined4 *)(DAT_00420a40 + 0x18);
  local_78 = *(undefined4 *)(DAT_00420a40 + 0x1c);
  local_90 = (uVar12 >> 4) << 1;
  local_8c = *(undefined4 *)(DAT_00420a40 + 8);
  local_88 = *(undefined4 *)(DAT_00420a40 + 0xc);
  local_80 = uVar12 - (uVar12 & 0xfffffff0) & 0xfffffff;
  local_84 = 0;
  func_003E6A04(param_1 + 1,&local_90,0x1c);
  func_003E6A04(param_1 + 1,DAT_00420a44,0x94);
  local_98 = DAT_00420a38[0xbe];
  local_94 = DAT_00420a38[0xbf];
  local_90 = DAT_00420a38[0xc0];
  local_8c = DAT_00420a38[0xc1];
  local_84 = DAT_00420a38[0xc3];
  local_88 = *(uint *)(iVar8 + 8) | 0x7fff0000;
  func_003E6A04(param_1 + 1,&local_98,0x18);
  puVar15 = DAT_00420a38;
  uVar16 = 0;
  local_38 = 0;
  local_34 = 0;
  do {
    iVar9 = uVar16 - 1;
    local_30[uVar16] = '\0';
    uVar16 = uVar16 + 1;
    auStack_54[iVar9] = DAT_00420a48;
  } while (uVar16 < 7);
  iVar9 = *(int *)(iVar8 + 0x28);
  uVar17 = 0;
  uVar16 = *(uint *)(iVar8 + 0x2c);
  bVar21 = uVar16 == 7;
  if (uVar16 < 8) {
    bVar21 = uVar16 == 0;
  }
  if (!bVar21) {
    do {
      puVar10 = (ushort *)(iVar9 + iVar8 + uVar17 * 8);
      if (*puVar10 != 9) {
        local_30[puVar10[1]] = '\x01';
        uVar1 = *puVar10;
        uVar2 = puVar10[2];
        uVar3 = puVar10[1];
        *(char *)((int)&local_38 + (uint)uVar1) = (char)uVar2;
        cVar18 = *(char *)(DAT_00420a4c + (uint)uVar1);
        iVar7 = (uint)uVar3 * 4;
        if ((uVar2 & 1) != 0) {
          *(char *)(auStack_54 + (uVar3 - 1)) = cVar18;
          cVar18 = cVar18 + '\x01';
        }
        cVar19 = cVar18;
        if ((puVar10[2] & 2) != 0) {
          cVar19 = cVar18 + '\x01';
          *(char *)((int)auStack_54 + iVar7 + -3) = cVar18;
        }
        cVar18 = cVar19;
        if ((puVar10[2] & 4) != 0) {
          cVar18 = cVar19 + '\x01';
          *(char *)((int)auStack_54 + iVar7 + -2) = cVar19;
        }
        if ((puVar10[2] & 8) != 0) {
          *(char *)((int)auStack_54 + iVar7 + -1) = cVar18;
        }
      }
      uVar16 = *(uint *)(iVar8 + 0x2c);
      uVar17 = uVar17 + 1;
      if (7 < uVar16) {
        uVar16 = 7;
      }
    } while (uVar17 < uVar16);
  }
  local_60 = 0;
  iVar7 = 0;
  iVar9 = 3;
  pcVar11 = (char *)((int)&local_34 + 3);
  do {
    if (local_30[0] != '\0') {
      local_60 = local_60 + 1;
    }
    local_30[0] = pcVar11[3];
    if (pcVar11[2] != '\0') {
      iVar7 = iVar7 + 1;
    }
    iVar9 = iVar9 + -1;
    pcVar11 = pcVar11 + 2;
  } while (iVar9 != 0);
  local_60 = local_60 + iVar7;
  if (local_30[6] != '\0') {
    local_60 = local_60 + 1;
  }
  local_8c = DAT_00420a38[0xc5];
  local_84 = DAT_00420a38[199];
  local_80 = DAT_00420a38[200];
  local_7c = DAT_00420a38[0xc9];
  local_78 = DAT_00420a38[0xca];
  local_74 = DAT_00420a38[0xcb];
  uStack_6c = DAT_00420a38[0xcd];
  uStack_64 = DAT_00420a38[0xcf];
  uStack_5c = DAT_00420a38[0xd1];
  local_88 = local_60 + -1;
  local_90 = (uint)*(ushort *)(iVar8 + 0x12);
  local_70 = local_88;
  local_68 = local_88;
  func_003E6A04(param_1 + 1,&local_90,0x38);
  local_94 = puVar15[5];
  local_98 = local_58;
  func_003E6A04(param_1 + 1,&local_98,8);
  func_003E6A04(param_1 + 1,auStack_54,0x18);
  bVar22 = (local_38 & 1) != 0;
  if ((local_38 & 2) != 0) {
    bVar22 = bVar22 + 1;
  }
  if ((local_38 & 4) != 0) {
    bVar22 = bVar22 + 1;
  }
  if ((local_38 & 8) != 0) {
    bVar22 = bVar22 + 1;
  }
  uVar16 = local_34 >> 0x18;
  bVar21 = uVar16 == 0;
  if (bVar21) {
    uVar16 = local_38 >> 8 & 0xff;
  }
  if (!bVar21 || uVar16 != 0) {
    uVar16 = 1;
  }
  local_88 = (uint)(2 < bVar22) | (uint)((*(undefined1 *)((char *)&local_38 + 2)) != '\0') << 1 |
             (uint)(local_38 >> 0x18 != 0) << 8 | (uint)((local_34 >> 8 & 0xff) != 0) << 9 |
             (uint)((*(undefined1 *)((char *)&local_34 + 2)) != '\0') << 10 | (uint)((local_34 & 0xff) != 0) << 0x10 |
             uVar16 << 0x18;
  local_8c = puVar15[0xd3];
  local_90 = (uint)((local_88 & DAT_00420c70) != 0);
  local_84 = puVar15[0xd5];
  func_003E6A04(param_1 + 1,&local_90,0x10);
  func_003E6A04(param_1 + 1,DAT_00420c74,0xd8);
  param_1[9] = uVar12 & 0xfffffff0;
  return func_003E6A04(param_1 + 5,DAT_00420c78,0x28);
}

