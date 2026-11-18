#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern undefined8 func_00110D44(undefined4 *param_1,byte *param_2,uint param_3);
extern int func_003CC030(undefined4 *param_1,int param_2);
extern int func_003E35DC(undefined4 param_1,undefined4 param_2);
extern int func_0041E840(int param_1,byte *param_2);
extern int func_0041F43C(int param_1,uint *param_2);
extern undefined4 DAT_0041ece8;
extern undefined *DAT_0041ecec;
extern uint DAT_0041ecf0;
extern undefined4 DAT_0041ecf4;
extern undefined4 DAT_0041ecf8;
extern uint DAT_0041ecfc;
extern int DAT_0041ed00;
extern int DAT_0041ed04;
extern uint DAT_0041ed08;
extern uint DAT_0041ed0c;
extern uint DAT_0041ed10;
extern uint DAT_0041ed14;
extern uint DAT_0041ed18;
extern uint DAT_0041ed1c;
extern uint DAT_0041f128;
extern undefined4 DAT_0041f12c;
extern undefined4 DAT_0041f130;
extern undefined4 DAT_0041f134;

// USA 0041E948 <- EU 0041E928 (Ghidra, non-matching)
// GLOBAL DAT_0041ece8 undefined4
// GLOBAL DAT_0041ecec undefined *
// GLOBAL DAT_0041ecf0 uint
// GLOBAL DAT_0041ecf4 undefined4
// GLOBAL DAT_0041ecf8 undefined4
// GLOBAL DAT_0041ecfc uint
// GLOBAL DAT_0041ed00 int
// GLOBAL DAT_0041ed04 int
// GLOBAL DAT_0041ed08 uint
// GLOBAL DAT_0041ed0c uint
// GLOBAL DAT_0041ed10 uint
// GLOBAL DAT_0041ed14 uint
// GLOBAL DAT_0041ed18 uint
// GLOBAL DAT_0041ed1c uint
// GLOBAL DAT_0041f128 uint
// GLOBAL DAT_0041f12c undefined4
// GLOBAL DAT_0041f130 undefined4
// GLOBAL DAT_0041f134 undefined4

uint * func_0041E948(int param_1,uint *param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  float *pfVar8;
  uint uVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  int iVar12;
  uint *puVar13;
  int iVar14;
  uint uVar15;
  int *piVar16;
  int iVar17;
  uint uVar18;
  bool bVar19;
  bool bVar20;
  uint in_fpscr;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 uVar27;
  float fVar28;
  undefined8 uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  _Alignas(8) unsigned char albw_frame[0xd0];
  #define local_cc (*(uint *)(albw_frame + 0x4))
  #define local_c8 (*(int * *)(albw_frame + 0x8))
  #define local_c0 ((int *)(albw_frame + 0x10))
  #define local_ac (*(uint * *)(albw_frame + 0x24))
  #define local_a4 (*(uint *)(albw_frame + 0x2c))
  #define local_9c (*(uint *)(albw_frame + 0x34))
  #define local_98 (*(int *)(albw_frame + 0x38))
  #define local_94 (*(uint *)(albw_frame + 0x3c))
  #define local_90 (*(uint *)(albw_frame + 0x40))
  #define local_88 (*(uint *)(albw_frame + 0x48))
  #define local_7c (*(uint * *)(albw_frame + 0x54))
  #define local_78 (*(uint *)(albw_frame + 0x58))
  #define local_74 (*(uint *)(albw_frame + 0x5c))
  #define local_6c (*(uint *)(albw_frame + 0x64))
  #define local_64 (*(int *)(albw_frame + 0x6c))
  #define local_60 (*(uint *)(albw_frame + 0x70))
  #define local_5c (*(uint *)(albw_frame + 0x74))
  #define local_58 (*(uint *)(albw_frame + 0x78))
  #define local_54 (*(uint *)(albw_frame + 0x7c))
  uVar18 = (uint)*(ushort *)(param_4 + 4);
  if (uVar18 != 0) {
    local_64 = param_1 + 0x400;
    *(undefined4 *)(param_1 + 0x5fc) = DAT_0041ece8;
    *(undefined1 *)(param_1 + 0x5f8) = 0;
    *(undefined1 *)(param_1 + 0x5f9) = 0;
    *(undefined1 *)(param_1 + 0x5fa) = 0;
    *(undefined1 *)(param_1 + 0x5fb) = 0;
    local_7c = (uint *)(param_4 + 0x1c);
    local_c0[4] = param_4;
    local_ac = param_2;
    func_00100118((int)&local_78,DAT_0041ecec,4,2);
    func_0010E3C4(&local_78,local_7c,8);
    iVar17 = *(int *)(local_c0[4] + 8);
    *(undefined1 *)(param_1 + 0x33) = 0;
    *(undefined1 *)(param_1 + 0x34) = 0;
    *(undefined1 *)(param_1 + 0x31) = 7;
    *(undefined1 *)(param_1 + 0x32) = 7;
    iVar14 = (int)(uVar18 + 7) >> 3;
    uVar9 = iVar14 - 1;
    if (iVar14 != 0) {
      puVar10 = (undefined1 *)(uVar9 + iVar17);
      puVar11 = puVar10 + 1;
      if ((uVar9 & 1) == 0) {
        *puVar10 = 0;
        puVar11 = puVar10;
      }
      for (iVar14 = (int)(uVar18 + 7) >> 4; iVar14 != 0; iVar14 = iVar14 + -1) {
        puVar11[-1] = 0;
        puVar11 = puVar11 + -2;
        *puVar11 = 0;
      }
    }
    local_9c = 0xffffffff;
    local_98 = local_c0[4] + 0x44;
    local_a4 = 0xffffffff;
    uVar9 = 0;
    local_5c = 0;
    local_6c = 0;
    local_cc = 0;
    local_c0[1] = 0;
    local_54 = *(byte *)((int)local_7c + 0x25) & 1;
    local_58 = (*(byte *)((int)local_7c + 0x25) & 2) >> 1;
    local_c0[2] = 0;
    local_c8 = local_c0;
    local_c0[0] = 0;
    local_c0[3] = 0;
    local_94 = 0;
    if (uVar18 != 0) {
      uVar31 = (ulonglong)DAT_0041ecf0;
      uVar29 = CONCAT44(DAT_0041ecf8,DAT_0041ecf4);
      uVar30 = (ulonglong)DAT_0041ecfc;
      uVar15 = local_6c;
      do {
        while ((*(byte *)(iVar17 + ((int)(uVar15 + ((uint)((int)uVar15 >> 0x1f) >> 0x1d)) >> 3)) >>
                ((int)uVar15 % 8 & 0xffU) & 1) != 0) {
          uVar15 = uVar15 + 1;
        }
        iVar14 = local_98 + uVar15 * 0x20;
        local_6c = uVar15 + 1;
        uVar4 = (*(ushort *)(iVar14 + 0x1e) & 0xffff7fff) * *(int *)(*(int *)(iVar14 + 0x18) + 0x10)
                + *(int *)(*(int *)(iVar14 + 0x18) + 4);
        if (uVar9 != uVar4) {
          cVar2 = '\0';
          if (local_94 != 0) {
            cVar2 = *(char *)(param_1 + 0x30);
          }
          if (local_94 != 0 && cVar2 != '\0') {
            local_ac = func_0041F43C(param_1,local_ac);
            func_0010E3C4(&local_78,local_7c,8);
          }
          puVar13 = local_ac;
          local_90 = (uint)*(byte *)(*(int *)(iVar14 + 0x18) + 0xe);
          uVar9 = (uint)(*(ushort *)(iVar14 + 0x1e) >> 0xf);
          uVar5 = local_90;
          if (local_a4 == local_90) {
            uVar5 = local_cc;
          }
          if (local_a4 != local_90 || uVar5 != uVar9) {
            uVar5 = uVar9;
            if (local_90 != 0xb) {
              uVar5 = local_90;
            }
            uVar5 = (uint)(local_90 == 0xb || uVar5 == 8) | uVar9 << 1;
            local_cc = uVar9;
            if (local_58 == 0) {
              piVar16 = (int *)(DAT_0041ed04 + uVar5 * 0x10);
              if ((byte *)*local_c8 != (byte *)*piVar16) {
                local_88 = piVar16[1];
                func_00110D44(local_ac,(byte *)*piVar16,local_88);
                local_ac = (uint *)((local_88 & 0xfffffffc) + (int)puVar13);
              }
              puVar13 = local_ac;
              piVar1 = local_c8 + 2;
              local_c8 = piVar16;
              if ((byte *)*piVar1 != (byte *)piVar16[2]) {
                uVar9 = piVar16[3];
                func_00110D44(local_ac,(byte *)piVar16[2],uVar9);
                local_ac = (uint *)((uVar9 & 0xfffffffc) + (int)puVar13);
              }
            }
            else {
              if (local_54 == 0) {
                piVar16 = (int *)(DAT_0041ed04 + uVar5 * 0x10);
              }
              else {
                piVar16 = (int *)(DAT_0041ed00 + uVar5 * 8);
              }
              pbVar6 = (byte *)*local_c8;
              local_c8 = piVar16;
              if (pbVar6 != (byte *)*piVar16) {
                local_88 = piVar16[1];
                func_00110D44(local_ac,(byte *)*piVar16,local_88);
                local_ac = (uint *)((local_88 & 0xfffffffc) + (int)puVar13);
              }
            }
          }
          uVar9 = DAT_0041ed08;
          if (local_a4 != 0xffffffff) {
            *local_ac = 0;
            local_ac[1] = uVar9;
            local_ac[2] = 0;
            local_ac[3] = 0;
            local_ac = local_ac + 4;
          }
          uVar9 = DAT_0041ed0c;
          if (local_a4 != local_90) {
            local_a4 = local_90;
            *local_ac = local_90;
            local_ac[1] = uVar9;
            local_ac = local_ac + 2;
          }
          uVar5 = DAT_0041ed18;
          uVar9 = DAT_0041ed10;
          *local_ac = DAT_0041ed14;
          local_ac[1] = uVar9;
          local_ac[2] = uVar4;
          local_ac[3] = uVar5;
          uVar9 = DAT_0041ed1c;
          uVar5 = *(uint *)(*(int *)(iVar14 + 0x18) + 8);
          puVar13 = local_ac + 4;
          if (uVar5 != local_5c) {
            local_ac[4] = uVar5;
            local_ac[5] = uVar9;
            puVar13 = local_ac + 6;
            local_5c = uVar5;
          }
          local_ac = puVar13;
          uVar5 = DAT_0041f128;
          uVar7 = *(uint *)(*(int *)(iVar14 + 0x18) + 0x14);
          uVar9 = uVar4;
          if (local_9c != uVar7) {
            *local_ac = uVar7;
            local_ac[1] = uVar5;
            local_ac = local_ac + 2;
            local_9c = uVar7;
          }
        }
        if (uVar15 < uVar18) {
          uVar30 = CONCAT44(DAT_0041f130,(int)uVar30);
          uVar27 = CONCAT44(DAT_0041f12c,DAT_0041f134);
          do {
            pbVar6 = (byte *)(iVar17 + ((int)(uVar15 + ((uint)((int)uVar15 >> 0x1f) >> 0x1d)) >> 3))
            ;
            if (((*pbVar6 >> ((int)uVar15 % 8 & 0xffU) & 1) == 0) &&
               (iVar12 = local_98 + uVar15 * 0x20, iVar14 = *(int *)(iVar12 + 0x18),
               (*(ushort *)(iVar12 + 0x1e) & 0xffff7fff) * *(int *)(iVar14 + 0x10) +
               *(int *)(iVar14 + 4) == uVar9)) {
              iVar14 = local_c0[4] + uVar15 * 0x20;
              uVar4 = *local_7c;
              uVar5 = *(uint *)(iVar14 + 0x4c);
              uVar5 = uVar5 << 0x18 | ((uVar5 << 0x10) >> 0x18) << 0x10 |
                      ((uVar5 << 8) >> 0x18) << 8 | uVar5 >> 0x18;
              if ((uVar4 << 0x18 | ((uVar4 << 0x10) >> 0x18) << 0x10 | ((uVar4 << 8) >> 0x18) << 8 |
                  uVar4 >> 0x18) == uVar5) {
                uVar4 = local_7c[1];
                uVar7 = *(uint *)(iVar14 + 0x50);
                if ((uVar4 << 0x18 | ((uVar4 << 0x10) >> 0x18) << 0x10 | ((uVar4 << 8) >> 0x18) << 8
                    | uVar4 >> 0x18) !=
                    (uVar7 << 0x18 | ((uVar7 << 0x10) >> 0x18) << 0x10 | ((uVar7 << 8) >> 0x18) << 8
                    | uVar7 >> 0x18)) goto LAB_0041ee7c;
                *(int *)(local_64 + 0x208) = (int)uVar31;
              }
              else {
LAB_0041ee7c:
                if (((local_78 << 0x18 | ((local_78 << 0x10) >> 0x18) << 0x10 |
                      ((local_78 << 8) >> 0x18) << 8 | local_78 >> 0x18) == uVar5) &&
                   (uVar4 = *(uint *)(iVar14 + 0x50),
                   (local_74 << 0x18 | ((local_74 << 0x10) >> 0x18) << 0x10 |
                    ((local_74 << 8) >> 0x18) << 8 | local_74 >> 0x18) ==
                   (uVar4 << 0x18 | ((uVar4 << 0x10) >> 0x18) << 0x10 | ((uVar4 << 8) >> 0x18) << 8
                   | uVar4 >> 0x18))) {
                  uVar21 = ALBW_AS_U32(VectorUnsignedToFloat(local_60,(byte)(in_fpscr >> 0x15) & 3));
                  *(undefined4 *)(local_64 + 0x208) = uVar21;
                }
                else {
                  local_60 = (uint)*(byte *)(param_1 + 0x31);
                  func_0010E3C4(&local_78,(uint *)(iVar14 + 0x4c),8);
                  func_0041E840(param_1,(byte *)(iVar14 + 0x4c));
                }
              }
              uVar4 = (uint)*(byte *)(param_1 + 0x33);
              fVar26 = ALBW_AS_F32(uVar29);
              uVar5 = uVar4 + 1 & 0xff;
              pfVar8 = (float *)(param_1 + 0x3f8 + uVar4 * 0x10);
              uVar21 = ALBW_AS_U32(VectorUnsignedToFloat(uVar4 + 0x20,(byte)(in_fpscr >> 0x15) & 3));
              *(undefined4 *)(local_64 + 0x204) = uVar21;
              cVar2 = (char)(uVar4 + 1);
              fVar23 = (float)VectorSignedToFloat((int)*(short *)(iVar14 + 0x56),
                                                  (byte)(in_fpscr >> 0x15) & 3);
              fVar24 = (float)VectorSignedToFloat((int)*(short *)(iVar14 + 0x5a),
                                                  (byte)(in_fpscr >> 0x15) & 3);
              fVar22 = (float)VectorSignedToFloat((int)*(short *)(iVar14 + 0x54),
                                                  (byte)(in_fpscr >> 0x15) & 3);
              fVar25 = (float)VectorSignedToFloat((int)*(short *)(iVar14 + 0x58),
                                                  (byte)(in_fpscr >> 0x15) & 3);
              fVar28 = ALBW_AS_F32(((ulonglong)uVar29 >> 0x20));
              pfVar8[2] = fVar25 * fVar26;
              uVar21 = ALBW_AS_U32(VectorUnsignedToFloat(uVar5 + 0x20,(byte)(in_fpscr >> 0x15) & 3));
              pfVar8[3] = fVar28 - fVar24 * fVar26;
              *pfVar8 = fVar22 * fVar26;
              pfVar8[1] = fVar28 - fVar23 * fVar26;
              *(char *)(param_1 + 0x33) = cVar2;
              pfVar8 = (float *)(param_1 + 0x3f8 + uVar5 * 0x10);
              *(undefined4 *)(local_64 + 0x200) = uVar21;
              fVar23 = (float)VectorSignedToFloat((int)*(short *)(iVar14 + 0x48),
                                                  (byte)(in_fpscr >> 0x15) & 3);
              fVar22 = (float)VectorSignedToFloat((int)*(short *)(iVar14 + 0x4a),
                                                  (byte)(in_fpscr >> 0x15) & 3);
              fVar25 = (float)VectorSignedToFloat(-(int)*(short *)(iVar14 + 0x46),
                                                  (byte)(in_fpscr >> 0x15) & 3);
              fVar24 = (float)VectorSignedToFloat((int)*(short *)(iVar14 + 0x44),
                                                  (byte)(in_fpscr >> 0x15) & 3);
              fVar26 = ALBW_AS_F32(uVar27);
              fVar28 = ALBW_AS_F32(((ulonglong)uVar27 >> 0x20));
              pfVar8[2] = fVar23 * fVar26;
              pfVar8[3] = fVar22 * fVar26;
              *pfVar8 = fVar24 * fVar28;
              pfVar8[1] = fVar25 * fVar28;
              *(char *)(param_1 + 0x33) = cVar2 + '\x01';
              bVar3 = (byte)(1 << ((int)uVar15 % 8 & 0xffU));
              *pbVar6 = *pbVar6 & ~bVar3 | bVar3;
              local_94 = local_94 + 1;
              fVar22 = *(float *)(param_1 + 0x600);
              fVar23 = *(float *)(param_1 + 0x604);
              fVar24 = *(float *)(param_1 + 0x608);
              iVar14 = param_1 + (uint)*(byte *)(param_1 + 0x30) * 0x10;
              pfVar8 = (float *)(iVar14 + 0x88);
              *pfVar8 = *(float *)(param_1 + 0x5fc);
              *(float *)(iVar14 + 0x8c) = fVar22;
              *(float *)(iVar14 + 0x90) = fVar23;
              *(float *)(iVar14 + 0x94) = fVar24;
              if (*(byte *)(param_1 + 0x5f8) != 0) {
                fVar25 = (float)VectorUnsignedToFloat
                                          ((uint)*(byte *)(param_1 + 0x5f8),
                                           (byte)(in_fpscr >> 0x15) & 3);
                *pfVar8 = *pfVar8 + fVar25 * ALBW_AS_F32(uVar30);
              }
              if (*(byte *)(param_1 + 0x5f9) != 0) {
                fVar25 = (float)VectorUnsignedToFloat
                                          ((uint)*(byte *)(param_1 + 0x5f9),
                                           (byte)(in_fpscr >> 0x15) & 3);
                *(float *)(iVar14 + 0x8c) = fVar22 + fVar25 * fVar28;
              }
              if (*(byte *)(param_1 + 0x5fa) != 0) {
                fVar22 = (float)VectorUnsignedToFloat
                                          ((uint)*(byte *)(param_1 + 0x5fa),
                                           (byte)(in_fpscr >> 0x15) & 3);
                *(float *)(iVar14 + 0x90) = fVar23 + fVar22 * ALBW_AS_F32((uVar30 >> 0x20));
              }
              if ((0x3f800000 < (int)ALBW_AS_U32(fVar24)) && (*(byte *)(param_1 + 0x5fb) != 0)) {
                fVar22 = (float)VectorUnsignedToFloat
                                          ((uint)*(byte *)(param_1 + 0x5fb),
                                           (byte)(in_fpscr >> 0x15) & 3);
                *(float *)(iVar14 + 0x94) = fVar24 + fVar22 * fVar26;
              }
              bVar3 = *(char *)(param_1 + 0x30) + 1;
              bVar20 = 0x15 < bVar3;
              bVar19 = bVar3 == 0x16;
              *(byte *)(param_1 + 0x30) = bVar3;
              if (bVar3 < 0x17) {
                bVar20 = 0x1d < *(byte *)(param_1 + 0x33);
                bVar19 = *(byte *)(param_1 + 0x33) == 0x1e;
              }
              if (!bVar20 || bVar19) {
                bVar20 = 0x1d < *(byte *)(param_1 + 0x31);
                bVar19 = *(byte *)(param_1 + 0x31) == 0x1e;
              }
              if (bVar20 && !bVar19) {
                local_ac = func_0041F43C(param_1,local_ac);
                func_0010E3C4(&local_78,local_7c,8);
              }
            }
            uVar15 = uVar15 + 1;
          } while (uVar15 < uVar18);
        }
        uVar15 = local_6c;
      } while (local_94 < uVar18);
    }
    if (*(char *)(param_1 + 0x30) != '\0') {
      local_ac = func_0041F43C(param_1,local_ac);
    }
    bVar3 = *(byte *)(local_c0[4] + 7);
    *(undefined1 *)(param_1 + 0x31) = 0;
    *(undefined1 *)(param_1 + 0x32) = 0;
    *(undefined1 *)(param_1 + 0x33) = 0;
    *(undefined1 *)(param_1 + 0x34) = 0;
    param_2 = local_ac;
    if ((bVar3 & 2) != 0) {
      uVar18 = ((int)local_ac - *(int *)(local_c0[4] + 0x10) >> 2) * 4 + 8;
      puVar13 = local_ac;
      if (((uVar18 & 0xf) != 0) && (uVar18 = 4 - (uVar18 * 0x10000000 >> 0x1e), 0 < (int)uVar18)) {
        puVar13 = local_ac + -1;
        if ((uVar18 & 1) != 0) {
          *local_ac = 0;
          puVar13 = local_ac;
        }
        for (iVar14 = (int)uVar18 >> 1; iVar14 != 0; iVar14 = iVar14 + -1) {
          puVar13[1] = 0;
          puVar13 = puVar13 + 2;
          *puVar13 = 0;
        }
        puVar13 = local_ac + uVar18;
      }
      local_ac = func_003CC030(puVar13,1);
      func_003E35DC(*(int *)(local_c0[4] + 0x10),
                    ((int)local_ac - *(int *)(local_c0[4] + 0x10) >> 2) << 2);
      param_2 = local_ac;
    }
  }
  return param_2;
}

