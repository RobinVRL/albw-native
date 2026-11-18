#include "ghidra_types.h"

extern float func_003FF720(float *param_1,int param_2,float fparam_0,float fparam_1);
extern int func_00404F24(undefined4 *param_1,undefined4 *param_2);
extern undefined4 DAT_003febc4;
extern float DAT_003febc8;
extern undefined4 DAT_003febcc;
extern undefined4 DAT_003febd0;
extern float DAT_003febd4;
extern undefined4 DAT_003febd8;
extern int DAT_003febdc;
extern int DAT_003febe0;
extern uint DAT_003febe4;

// USA 003FE8C8 <- EU 003FE8A8 (Ghidra, non-matching)
// GLOBAL DAT_003febc4 undefined4
// GLOBAL DAT_003febc8 float
// GLOBAL DAT_003febcc undefined4
// GLOBAL DAT_003febd0 undefined4
// GLOBAL DAT_003febd4 float
// GLOBAL DAT_003febd8 undefined4
// GLOBAL DAT_003febdc int
// GLOBAL DAT_003febe0 int
// GLOBAL DAT_003febe4 uint

void func_003FE8C8(int param_1,int param_2,int param_3,float fparam_0,float fparam_1)

{
  int iVar1;
  byte bVar2;
  undefined1 uVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  byte *pbVar9;
  undefined4 *puVar10;
  int iVar11;
  uint uVar12;
  uint *puVar13;
  byte bVar14;
  float *pfVar15;
  uint uVar16;
  int *piVar17;
  uint unaff_r8;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  float fVar26;
  int local_58;
  
  local_58 = 0;
  if (*(char *)(param_3 + 0x1c) != '\0') {
    uVar25 = CONCAT44(DAT_003febc4,DAT_003febcc);
    uVar24 = CONCAT44(DAT_003febd8,DAT_003febd0);
    fVar23 = DAT_003febd4;
    fVar26 = DAT_003febc8;
    do {
      uVar7 = DAT_003febe4;
      piVar17 = (int *)(*(int *)(param_3 + 0x20 + local_58 * 4) + param_3);
      iVar8 = *piVar17;
      if (iVar8 == DAT_003febdc) {
        iVar8 = 0;
        unaff_r8 = *(uint *)(param_1 + 0x18);
        fVar22 = *(float *)(param_1 + 0x10);
        if ((char)piVar17[1] != '\0') {
          do {
            pbVar9 = (byte *)(piVar17[iVar8 + 2] + (int)piVar17);
            pfVar15 = (float *)(pbVar9 + *(int *)(pbVar9 + 8));
            uVar7 = (uint)*(ushort *)(pbVar9 + 4);
            if ((uVar7 == 1) || (fparam_1 = *pfVar15, fVar22 <= fparam_1)) {
              uVar7 = (uint)*(ushort *)(pfVar15 + 1);
            }
            else {
              fparam_1 = pfVar15[uVar7 * 2 + -2];
              if (fparam_1 <= fVar22) {
                uVar7 = (uint)*(ushort *)(pfVar15 + uVar7 * 2 + -1);
              }
              else {
                iVar6 = uVar7 - 1;
                iVar11 = 0;
                while (iVar4 = iVar6, iVar11 != iVar4 + -1 && iVar11 != iVar4) {
                  iVar1 = (iVar11 + iVar4) / 2;
                  iVar6 = iVar1;
                  if (pfVar15[iVar1 * 2] <= fVar22) {
                    iVar6 = iVar4;
                    iVar11 = iVar1;
                  }
                }
                pfVar5 = pfVar15 + iVar4 * 2;
                fparam_1 = ALBW_AS_F32(((ulonglong)uVar25 >> 0x20));
                if (fVar22 - *pfVar5 <= fVar26 || fparam_1 <= fVar22 - *pfVar5) {
                  pfVar5 = pfVar15 + iVar11 * 2;
                }
                uVar7 = (uint)*(ushort *)(pfVar5 + 1);
              }
            }
            puVar10 = *(undefined4 **)(unaff_r8 + uVar7 * 4);
            if (puVar10[4] != 0) {
              func_00404F24((undefined4 *)(*(int *)(param_2 + 0x7c) + (uint)*pbVar9 * 0x20),puVar10)
              ;
              *(byte *)(param_2 + 0x9e) = *(byte *)(param_2 + 0x9e) & 0xfb;
            }
            iVar8 = iVar8 + 1;
          } while (iVar8 < (int)(uint)*(byte *)(piVar17 + 1));
        }
      }
      else if (iVar8 < DAT_003febdc) {
        iVar8 = DAT_003febe0 + iVar8;
        if (iVar8 == 0) {
          iVar8 = 0;
          fVar20 = *(float *)(param_1 + 0x10);
          fVar22 = fVar23;
          if ((char)piVar17[1] != '\0') {
            do {
              iVar6 = piVar17[iVar8 + 2];
              fVar21 = func_003FF720((float *)((int)piVar17 +
                                              *(int *)((int)piVar17 + iVar6 + 8) + iVar6),
                                     (uint)*(ushort *)((int)piVar17 + iVar6 + 4),fVar20,fparam_1);
              fVar18 = fVar22;
              if ((fVar22 <= fVar21) && (fVar18 = fVar21, 0x3f800000 < (int)ALBW_AS_U32(fVar21))) {
                fVar18 = ALBW_AS_F32(uVar25);
              }
              uVar7 = *(uint *)(param_2 + 0x74);
              iVar8 = iVar8 + 1;
              uVar12 = *(uint *)(param_2 + 0x74);
              uVar16 = unaff_r8 & 0xffffff00;
              unaff_r8 = 0;
              puVar13 = (uint *)((uVar12 >> 1 & 0x18) +
                                 ((uVar12 << 0x1e) >> 0x19) + ((uVar12 << 0x1c) >> 0x1e) * 0x14 +
                                *(int *)(param_2 + 0x7c));
              *puVar13 = *(byte *)((uVar7 >> 1 & 0x18) +
                                   ((uVar7 << 0x1e) >> 0x19) + ((uVar7 << 0x1c) >> 0x1e) * 0x14 +
                                  *(int *)(param_2 + 0x7c)) | uVar16;
              puVar13[1] = (uint)ALBW_AS_U32(fVar18);
            } while (iVar8 < (int)(uint)*(byte *)(piVar17 + 1));
          }
        }
        else if (iVar8 == 0xc0000) {
          iVar8 = 0;
          fVar22 = *(float *)(param_1 + 0x10);
          if ((char)piVar17[1] != '\0') {
            do {
              iVar6 = piVar17[iVar8 + 2];
              fVar18 = func_003FF720((float *)((int)piVar17 +
                                              *(int *)((int)piVar17 + iVar6 + 8) + iVar6),
                                     (uint)*(ushort *)((int)piVar17 + iVar6 + 4),fVar22,fparam_1);
              fVar18 = fVar18 + ALBW_AS_F32(uVar24);
              fVar20 = fVar23;
              if ((fVar23 <= fVar18) && (fVar20 = fVar18, (int)uVar7 < (int)ALBW_AS_U32(fVar18))) {
                fVar20 = ALBW_AS_F32(((ulonglong)uVar24 >> 0x20));
              }
              bVar2 = *(byte *)((int)piVar17 + iVar6 + 1);
              uVar19 = VectorFloatToUnsigned(fVar20,3);
              uVar3 = (undefined1)uVar19;
              if (bVar2 < 8) {
                bVar14 = bVar2 & 3;
                uVar12 = (uint)(bVar2 >> 2);
                if ((bVar2 & 3) == 0) {
                  *(undefined1 *)(param_2 + uVar12 * 4 + 0x6c) = uVar3;
                }
                else if (bVar14 == 1) {
                  *(undefined1 *)(param_2 + uVar12 * 4 + 0x6d) = uVar3;
                }
                else if (bVar14 == 2) {
                  *(undefined1 *)(param_2 + uVar12 * 4 + 0x6e) = uVar3;
                }
                else if (bVar14 == 3) {
                  *(undefined1 *)(param_2 + uVar12 * 4 + 0x6f) = uVar3;
                }
              }
              iVar8 = iVar8 + 1;
              unaff_r8 = uVar7;
            } while (iVar8 < (int)(uint)*(byte *)(piVar17 + 1));
          }
        }
        else if (iVar8 == 0xa080000) {
          iVar8 = 0;
          fVar22 = *(float *)(param_1 + 0x10);
          if ((char)piVar17[1] != '\0') {
            unaff_r8 = 0;
            do {
              iVar6 = piVar17[iVar8 + 2];
              bVar2 = *(byte *)((int)piVar17 + iVar6 + 1);
              fVar20 = func_003FF720((float *)((int)piVar17 +
                                              *(int *)((int)piVar17 + iVar6 + 8) + iVar6),
                                     (uint)*(ushort *)((int)piVar17 + iVar6 + 4),fVar22,fparam_1);
              uVar7 = *(uint *)(param_2 + 0x74);
              iVar8 = iVar8 + 1;
              *(float *)((uVar7 >> 8 & 0xc) +
                         ((uVar7 << 0x1e) >> 0x19) + ((uVar7 << 0x1c) >> 0x1e) * 0x14 +
                         (uVar7 >> 1 & 0x18) + (uVar7 >> 6 & 8) + *(int *)(param_2 + 0x7c) +
                        (uint)bVar2 * 4) = fVar20;
            } while (iVar8 < (int)(uint)*(byte *)(piVar17 + 1));
          }
        }
      }
      else if (iVar8 - DAT_003febdc == 0x2f20000) {
        iVar8 = 0;
        fVar22 = *(float *)(param_1 + 0x10);
        if ((char)piVar17[1] != '\0') {
          do {
            iVar6 = piVar17[iVar8 + 2];
            fVar18 = func_003FF720((float *)((int)piVar17 +
                                            *(int *)((int)piVar17 + iVar6 + 8) + iVar6),
                                   (uint)*(ushort *)((int)piVar17 + iVar6 + 4),fVar22,fparam_1);
            fVar18 = fVar18 + ALBW_AS_F32(uVar24);
            fVar20 = fVar23;
            if ((fVar23 <= fVar18) && (fVar20 = fVar18, (int)DAT_003febe4 < (int)ALBW_AS_U32(fVar18))) {
              fVar20 = ALBW_AS_F32(((ulonglong)uVar24 >> 0x20));
            }
            uVar7 = *(uint *)(param_2 + 0x74);
            uVar19 = VectorFloatToUnsigned(fVar20,3);
            iVar8 = iVar8 + 1;
            *(char *)((uVar7 >> 4 & 0x1c) +
                      (uVar7 >> 1 & 0x18) +
                      ((uVar7 << 0x1e) >> 0x19) + ((uVar7 << 0x1c) >> 0x1e) * 0x14 +
                      (uVar7 >> 6 & 8) + (uVar7 >> 8 & 0xc) + ((int)(uVar7 << 0x13) >> 0x1f) * -0xc
                      + ((uVar7 << 0x10) >> 0x1d) * 0x14 + *(int *)(param_2 + 0x7c) +
                     (uint)*(byte *)((int)piVar17 + iVar6 + 1)) = (char)uVar19;
            unaff_r8 = 0;
          } while (iVar8 < (int)(uint)*(byte *)(piVar17 + 1));
        }
      }
      else if (iVar8 - DAT_003febdc == 0x3000000) {
        iVar8 = 0;
        fVar22 = *(float *)(param_1 + 0x10);
        if ((char)piVar17[1] != '\0') {
          do {
            pbVar9 = (byte *)(piVar17[iVar8 + 2] + (int)piVar17);
            bVar2 = *pbVar9;
            bVar14 = pbVar9[1];
            fVar20 = func_003FF720((float *)(pbVar9 + *(int *)(pbVar9 + 8)),
                                   (uint)*(ushort *)(pbVar9 + 4),fVar22,fparam_1);
            iVar8 = iVar8 + 1;
            *(float *)(*(int *)(param_2 + 0x7c) + ((uint)(*(int *)(param_2 + 0x74) << 0x1e) >> 0x19)
                       + (uint)bVar2 * 0x14 + (uint)bVar14 * 4) = fVar20;
            *(byte *)(param_2 + 0x9e) = *(byte *)(param_2 + 0x9e) & 0xfb;
            unaff_r8 = (uint)bVar2;
          } while (iVar8 < (int)(uint)*(byte *)(piVar17 + 1));
        }
      }
      local_58 = local_58 + 1;
    } while (local_58 < (int)(uint)*(byte *)(param_3 + 0x1c));
  }
  return;
}

