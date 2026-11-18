#include "ghidra_types.h"

extern int func_0010F1DC(int *param_1,int *param_2);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_0043081C(int param_1,int param_2,int param_3,undefined4 *param_4,int param_5,int param_6, int param_7,uint param_8,uint param_9,uint param_10);
extern int func_004317D4(int param_1,int param_2,int param_3,undefined4 *param_4);
extern int func_0049F5FC(undefined4 *param_1);
extern int DAT_0042f374;
extern float DAT_0042f378;
extern char *DAT_0042f37c;

// USA 0042EFB0 <- EU 0042EF90 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 undefined4 *
// GLOBAL DAT_0042f374 int
// GLOBAL DAT_0042f378 float
// GLOBAL DAT_0042f37c char *

/* WARNING: Variable defined which should be unmapped: objStack_f0 */
/* WARNING: Variable defined which should be unmapped: objStack_e8 */

undefined4 func_0042EFB0(int param_1,float *param_2,float *param_3,undefined4 param_4,undefined4 *param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ushort uVar4;
  int *piVar5;
  float *pfVar6;
  float fVar7;
  ushort *puVar8;
  uint uVar9;
  uint uVar10;
  float *pfVar11;
  int iVar12;
  ushort *puVar13;
  uint uVar14;
  int *piVar15;
  int iVar16;
  ushort *puVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  bool bVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  float fVar27;
  longlong lVar28;
  undefined4 *puVar29;
  _Alignas(8) unsigned char albw_frame[0xf0];
  #define objStack_f0 ((uint *)(albw_frame + 0x0))
  #define objStack_e8 ((uint *)(albw_frame + 0x8))
  #define local_e0 (*(float *)(albw_frame + 0x10))
  #define local_c8 (*(float *)(albw_frame + 0x28))
  #define local_c4 (*(float * *)(albw_frame + 0x2c))
  #define local_c0 (*(float *)(albw_frame + 0x30))
  #define local_bc (*(float *)(albw_frame + 0x34))
  #define local_b8 (*(uint *)(albw_frame + 0x38))
  #define local_ac (*(uint *)(albw_frame + 0x44))
  #define local_a8 (*(undefined4 * *)(albw_frame + 0x48))
  #define local_a4 (*(uint *)(albw_frame + 0x4c))
  #define local_9c (*(uint *)(albw_frame + 0x54))
  #define local_94 (*(uint *)(albw_frame + 0x5c))
  #define local_90 (*(uint *)(albw_frame + 0x60))
  #define local_8c (*(int *)(albw_frame + 0x64))
  #define local_88 (*(int *)(albw_frame + 0x68))
  #define local_84 (*(float * *)(albw_frame + 0x6c))
  #define local_80 (*(float * *)(albw_frame + 0x70))
  #define local_7c (*(int *)(albw_frame + 0x74))
  #define local_78 (*(float *)(albw_frame + 0x78))
  #define local_74 (*(float *)(albw_frame + 0x7c))
  #define local_70 (*(float *)(albw_frame + 0x80))
  #define local_6c (*(float *)(albw_frame + 0x84))
  #define local_68 (*(int *)(albw_frame + 0x88))
  #define local_64 (*(uint *)(albw_frame + 0x8c))
  #define local_60 (*(int *)(albw_frame + 0x90))
  #define local_58 (*(int *)(albw_frame + 0x98))
  #define local_54 (*(float * *)(albw_frame + 0x9c))
  #define local_4c (*(uint *)(albw_frame + 0xa4))
  #define local_44 (*(uint *)(albw_frame + 0xac))
  #define local_34 (*(int *)(albw_frame + 0xbc))
  #define pfStack_30 (*(float * *)(albw_frame + 0xc0))
  #define pfStack_2c (*(float * *)(albw_frame + 0xc4))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0xc8))
  *(undefined4 *)(DAT_0042f374 + 0x68) = param_4;
  iVar18 = *(int *)(param_1 + 0x5c);
  uVar24 = (uint)(*param_2 - *(float *)(iVar18 + 0x14));
  if ((int)uVar24 < 0) {
    uVar24 = 0;
  }
  uVar25 = (uint)(param_2[1] - *(float *)(iVar18 + 0x18));
  if ((int)uVar25 < 0) {
    uVar25 = 0;
  }
  uVar26 = (uint)(param_2[2] - *(float *)(iVar18 + 0x1c));
  if ((int)uVar26 < 0) {
    uVar26 = 0;
  }
  local_90 = (uint)((*param_3 - *(float *)(iVar18 + 0x14)) + DAT_0042f378);
  if ((int)~*(uint *)(iVar18 + 0x20) < (int)local_90) {
    local_90 = ~*(uint *)(iVar18 + 0x20);
  }
  local_a4 = (uint)((param_3[1] - *(float *)(iVar18 + 0x18)) + DAT_0042f378);
  if ((int)~*(uint *)(iVar18 + 0x24) < (int)local_a4) {
    local_a4 = ~*(uint *)(iVar18 + 0x24);
  }
  local_9c = (uint)((param_3[2] - *(float *)(iVar18 + 0x1c)) + DAT_0042f378);
  if ((int)~*(uint *)(iVar18 + 0x28) < (int)local_9c) {
    local_9c = ~*(uint *)(iVar18 + 0x28);
  }
  bVar23 = SBORROW4(uVar24,local_90);
  iVar3 = uVar24 - local_90;
  if ((int)uVar24 < (int)local_90) {
    bVar23 = SBORROW4(uVar25,local_a4);
    iVar3 = uVar25 - local_a4;
  }
  if ((iVar3 < 0 == bVar23) || ((int)local_9c <= (int)uVar26)) {
    return 0;
  }
  local_60 = *(int *)(iVar18 + 0xc);
  uVar14 = *(uint *)(iVar18 + 0x2c);
  local_64 = uVar25 >> (uVar14 & 0xff);
  local_ac = local_a4 >> (uVar14 & 0xff);
  local_44 = uVar26 >> (uVar14 & 0xff);
  local_94 = local_90 >> (uVar14 & 0xff);
  uVar2 = local_9c >> (uVar14 & 0xff);
  uVar10 = 0x1f - uVar14;
  uVar14 = uVar24 >> (uVar14 & 0xff);
  local_88 = uVar24 << (uVar10 & 0xff);
  local_8c = uVar25 << (uVar10 & 0xff);
  local_58 = uVar26 << (uVar10 & 0xff);
  local_90 = local_90 << (uVar10 & 0xff);
  local_a4 = local_a4 << (uVar10 & 0xff);
  local_9c = local_9c << (uVar10 & 0xff);
  local_4c = uVar14;
  local_34 = param_1;
  pfStack_30 = param_2;
  pfStack_2c = param_3;
  uStack_28 = param_4;
  if (uVar14 <= local_94) {
    lVar28 = (ulonglong)(uint)ALBW_AS_U32(DAT_0042f378) << 0x20;
    local_68 = param_1 + 0x400;
    do {
      uVar24 = local_64;
      if (local_64 <= local_ac) {
        do {
          uVar25 = local_44;
          if (local_44 <= uVar2) {
LAB_0042f128:
            iVar3 = local_34;
            iVar18 = DAT_0042f374;
            local_a8 = param_5;
            iVar16 = local_88;
            if (uVar14 != local_4c) {
              iVar16 = 0;
            }
            iVar12 = local_8c;
            if (uVar24 != local_64) {
              iVar12 = 0;
            }
            iVar21 = local_58;
            if (uVar25 != local_44) {
              iVar21 = 0;
            }
            uVar26 = local_90;
            if (uVar14 != local_94) {
              uVar26 = 0xffffffff;
            }
            uVar10 = local_a4;
            if (uVar24 != local_ac) {
              uVar10 = 0xffffffff;
            }
            iVar1 = (uVar25 << (*(uint *)(*(int *)(local_34 + 0x5c) + 0x34) & 0xff) |
                     uVar24 << (*(uint *)(*(int *)(local_34 + 0x5c) + 0x30) & 0xff) | uVar14) * 4;
            uVar19 = local_9c;
            if (uVar25 != uVar2) {
              uVar19 = 0xffffffff;
            }
            fVar7 = ALBW_AS_F32(((ulonglong)lVar28 >> 0x20));
            if (((iVar16 == 0 && iVar12 == 0) && iVar21 == 0) &&
               ((uVar26 & uVar10 & uVar19) == 0xffffffff)) {
              uVar26 = *(uint *)(local_60 + iVar1);
              if ((uVar26 & 0x80000000) == 0) {
                iVar18 = local_60 + uVar26;
                func_004317D4(local_34,iVar18,0,param_5);
                func_004317D4(iVar3,iVar18,4,param_5);
                func_004317D4(iVar3,iVar18,8,param_5);
                func_004317D4(iVar3,iVar18,0xc,param_5);
                func_004317D4(iVar3,iVar18,0x10,param_5);
                func_004317D4(iVar3,iVar18,0x14,param_5);
                func_004317D4(iVar3,iVar18,0x18,param_5);
                func_004317D4(iVar3,iVar18,0x1c,param_5);
              }
              else {
                iVar16 = (uVar26 & 0x7fffffff) + local_60;
                if (*(char *)(DAT_0042f374 + 0x6e) == '\0') {
                  if (*(char *)(DAT_0042f374 + 0x6f) == '\0') {
                    puVar17 = (ushort *)(iVar16 + 2);
                    uVar4 = *puVar17;
                    puVar29 = param_5;
                    while (uVar4 != 0) {
                      iVar16 = *(int *)(*(int *)(iVar3 + 0x5c) + 8) + (uint)uVar4 * 0x10;
                      *(int *)(iVar3 + 0x70) = iVar16;
                      if ((*(uint *)(iVar18 + 0x68) & 1 << (*(ushort *)(iVar16 + 0xe) & 0x1f)) != 0)
                      {
                        uVar26 = (*(ushort *)(iVar16 + 0xe) & 0xb000) >> 0xc;
                        if (*DAT_0042f37c == '\0') {
                          if (uVar26 != 8) goto LAB_0042f8ac;
                        }
                        else if (uVar26 != 9) {
LAB_0042f8ac:
                          iVar12 = *(int *)(iVar3 + 0x58);
                          uVar26 = iVar16 - *(int *)(*(int *)(iVar3 + 0x5c) + 8) >> 4;
                          if (uVar26 < *(uint *)(iVar12 + 200)) {
                            piVar5 = (int *)(*(int *)(iVar12 + 0xcc) + uVar26 * 8);
                          }
                          else {
                            piVar5 = *(int **)(iVar12 + 0xcc);
                          }
                          iVar16 = piVar5[1];
                          bVar23 = iVar16 == 0;
                          if (bVar23) {
                            iVar16 = *piVar5;
                          }
                          if (bVar23 && iVar16 == 0) {
                            objStack_f0[0] = iVar3 + 0x78;
                            func_0010F1DC((int *)objStack_f0[0],
                                          (int *)(*(int *)(iVar3 + 0x84) + (int)piVar5));
                            *(int *)(objStack_f0[0] + 8) = *(int *)(objStack_f0[0] + 8) + 1;
                            (**(code **)*puVar29)(puVar29,iVar3);
                            if (*(char *)(iVar18 + 0x6f) != '\0') break;
                          }
                        }
                      }
                      puVar17 = puVar17 + 1;
                      uVar4 = *puVar17;
                    }
                  }
                }
                else {
                  pfVar11 = (float *)(DAT_0042f374 + 8);
                  local_84 = (float *)0x0;
                  local_80 = (float *)0x0;
                  local_7c = 0;
                  puVar17 = (ushort *)(iVar16 + 2);
                  if (*(char *)(local_68 + 0xa0) == '\0') {
                    lVar28 = CONCAT44(fVar7,*(undefined4 *)(DAT_0042f374 + 0x14));
                    local_6c = fVar7;
                    if (*puVar17 != 0) {
                      local_c4 = (float *)(local_34 + 0x488);
                      do {
                        iVar16 = *(int *)(*(int *)(iVar3 + 0x5c) + 8) + (uint)*puVar17 * 0x10;
                        *(int *)(iVar3 + 0x70) = iVar16;
                        if ((*(uint *)(iVar18 + 0x68) & 1 << (*(ushort *)(iVar16 + 0xe) & 0x1f)) !=
                            0) {
                          uVar26 = (*(ushort *)(iVar16 + 0xe) & 0xb000) >> 0xc;
                          if (*DAT_0042f37c == '\0') {
                            if (uVar26 != 8) goto LAB_0042f628;
                          }
                          else if (uVar26 != 9) {
LAB_0042f628:
                            iVar12 = *(int *)(iVar3 + 0x58);
                            uVar26 = iVar16 - *(int *)(*(int *)(iVar3 + 0x5c) + 8) >> 4;
                            if (uVar26 < *(uint *)(iVar12 + 200)) {
                              piVar5 = (int *)(*(int *)(iVar12 + 0xcc) + uVar26 * 8);
                            }
                            else {
                              piVar5 = *(int **)(iVar12 + 0xcc);
                            }
                            iVar16 = piVar5[1];
                            bVar23 = iVar16 == 0;
                            if (bVar23) {
                              iVar16 = *piVar5;
                            }
                            if (bVar23 && iVar16 == 0) {
                              piVar15 = (int *)(iVar3 + 0x78);
                              func_0010F1DC(piVar15,(int *)(*(int *)(iVar3 + 0x84) + (int)piVar5));
                              piVar15[2] = piVar15[2] + 1;
                              local_84 = *(float **)(iVar3 + 0x5c);
                              local_80 = *(float **)(iVar3 + 0x70);
                              local_7c = (int)local_80 - (int)ALBW_AS_U32(local_84[2]) >> 4;
                              pfVar6 = (float *)((int)ALBW_AS_U32(*local_84) +
                                                (uint)*(ushort *)(local_80 + 1) * 0xc);
                              local_78 = *pfVar6;
                              local_74 = pfVar6[1];
                              local_70 = pfVar6[2];
                              local_6c = *(float *)(iVar18 + 0x38);
                              func_00115C70((float *)objStack_f0,pfVar11,&local_78);
                              fVar7 = local_84[1];
                              pfVar6 = (float *)((int)ALBW_AS_U32(fVar7) + (uint)*(ushort *)(local_80 + 2) * 0xc)
                              ;
                              fVar27 = ALBW_AS_F32(lVar28);
                              if (((ALBW_AS_F32(objStack_f0[0]) * *pfVar6 +
                                    ALBW_AS_F32(objStack_f0[1]) * pfVar6[1] +
                                    ALBW_AS_F32(objStack_e8[0]) * pfVar6[2] <= fVar27) &&
                                  (pfVar6 = (float *)((int)ALBW_AS_U32(fVar7) +
                                                     (uint)*(ushort *)((int)local_80 + 10) * 0xc),
                                  ALBW_AS_F32(objStack_f0[0]) * *pfVar6 +
                                  ALBW_AS_F32(objStack_f0[1]) * pfVar6[1] +
                                  ALBW_AS_F32(objStack_e8[0]) * pfVar6[2] <= fVar27)) &&
                                 (pfVar6 = (float *)((int)ALBW_AS_U32(fVar7) +
                                                    (uint)*(ushort *)(local_80 + 3) * 0xc),
                                 ALBW_AS_F32(objStack_f0[0]) * *pfVar6 + ALBW_AS_F32(objStack_f0[1]) * pfVar6[1]
                                 + ALBW_AS_F32(objStack_e8[0]) * pfVar6[2] <= *local_80 + fVar27)) {
                                pfVar6 = (float *)((int)ALBW_AS_U32(fVar7) +
                                                  (uint)*(ushort *)((int)local_80 + 6) * 0xc);
                                fVar7 = -(ALBW_AS_F32(objStack_f0[0]) * *pfVar6 +
                                         ALBW_AS_F32(objStack_f0[1]) * pfVar6[1]) +
                                        -(ALBW_AS_F32(objStack_e8[0]) * pfVar6[2]);
                                if (((-fVar27 <= fVar7) && (fVar7 <= fVar27)) &&
                                   (fVar7 != -3.4028235e+38)) {
                                  puVar8 = *(ushort **)(iVar3 + 0x488);
                                  uVar4 = *puVar17;
                                  *local_c4 = ALBW_AS_F32((puVar8 + 1));
                                  *puVar8 = uVar4;
                                  if (local_c4 <= (float *)ALBW_PTR_BITS(*local_c4)) {
                                    fVar7 = ALBW_AS_F32((*(int *)(iVar3 + 0x488) + -2));
                                    pfVar11 = local_c4;
                                    goto LAB_0042f820;
                                  }
                                }
                              }
                            }
                          }
                        }
                        puVar17 = puVar17 + 1;
                      } while (*puVar17 != 0);
                    }
                  }
                  else {
                    lVar28 = CONCAT44(fVar7,*(undefined4 *)(DAT_0042f374 + 0x14));
                    local_6c = fVar7;
                    if (*puVar17 != 0) {
                      objStack_e8[1] = local_34 + 0x488;
                      do {
                        iVar16 = *(int *)(*(int *)(iVar3 + 0x5c) + 8) + (uint)*puVar17 * 0x10;
                        *(int *)(iVar3 + 0x70) = iVar16;
                        if ((*(uint *)(iVar18 + 0x68) & 1 << (*(ushort *)(iVar16 + 0xe) & 0x1f)) !=
                            0) {
                          uVar26 = (*(ushort *)(iVar16 + 0xe) & 0xb000) >> 0xc;
                          if (*DAT_0042f37c == '\0') {
                            if (uVar26 != 8) goto LAB_0042f388;
                          }
                          else if (uVar26 != 9) {
LAB_0042f388:
                            iVar12 = *(int *)(iVar3 + 0x58);
                            uVar26 = iVar16 - *(int *)(*(int *)(iVar3 + 0x5c) + 8) >> 4;
                            if (uVar26 < *(uint *)(iVar12 + 200)) {
                              piVar5 = (int *)(*(int *)(iVar12 + 0xcc) + uVar26 * 8);
                            }
                            else {
                              piVar5 = *(int **)(iVar12 + 0xcc);
                            }
                            iVar16 = piVar5[1];
                            bVar23 = iVar16 == 0;
                            if (bVar23) {
                              iVar16 = *piVar5;
                            }
                            if (bVar23 && iVar16 == 0) {
                              piVar15 = (int *)(iVar3 + 0x78);
                              func_0010F1DC(piVar15,(int *)(*(int *)(iVar3 + 0x84) + (int)piVar5));
                              piVar15[2] = piVar15[2] + 1;
                              local_84 = *(float **)(iVar3 + 0x5c);
                              local_80 = *(float **)(iVar3 + 0x70);
                              local_7c = (int)local_80 - (int)ALBW_AS_U32(local_84[2]) >> 4;
                              pfVar6 = (float *)((int)ALBW_AS_U32(*local_84) +
                                                (uint)*(ushort *)(local_80 + 1) * 0xc);
                              local_78 = *pfVar6;
                              local_74 = pfVar6[1];
                              local_70 = pfVar6[2];
                              local_6c = *(float *)(iVar18 + 0x38);
                              func_00115C70((float *)objStack_f0,pfVar11,&local_78);
                              fVar7 = local_84[1];
                              pfVar6 = (float *)((int)ALBW_AS_U32(fVar7) + (uint)*(ushort *)(local_80 + 2) * 0xc)
                              ;
                              fVar27 = ALBW_AS_F32(lVar28);
                              if (((ALBW_AS_F32(objStack_f0[0]) * *pfVar6 +
                                    ALBW_AS_F32(objStack_f0[1]) * pfVar6[1] +
                                    ALBW_AS_F32(objStack_e8[0]) * pfVar6[2] <= fVar27) &&
                                  (pfVar6 = (float *)((int)ALBW_AS_U32(fVar7) +
                                                     (uint)*(ushort *)((int)local_80 + 10) * 0xc),
                                  ALBW_AS_F32(objStack_f0[0]) * *pfVar6 +
                                  ALBW_AS_F32(objStack_f0[1]) * pfVar6[1] +
                                  ALBW_AS_F32(objStack_e8[0]) * pfVar6[2] <= fVar27)) &&
                                 (pfVar6 = (float *)((int)ALBW_AS_U32(fVar7) +
                                                    (uint)*(ushort *)(local_80 + 3) * 0xc),
                                 ALBW_AS_F32(objStack_f0[0]) * *pfVar6 + ALBW_AS_F32(objStack_f0[1]) * pfVar6[1]
                                 + ALBW_AS_F32(objStack_e8[0]) * pfVar6[2] <= *local_80 + fVar27)) {
                                pfVar6 = (float *)((int)ALBW_AS_U32(fVar7) +
                                                  (uint)*(ushort *)((int)local_80 + 6) * 0xc);
                                fVar7 = -(ALBW_AS_F32(objStack_f0[0]) * *pfVar6 +
                                         ALBW_AS_F32(objStack_f0[1]) * pfVar6[1]) +
                                        -(ALBW_AS_F32(objStack_e8[0]) * pfVar6[2]);
                                if (((-fVar27 <= fVar7) && (fVar7 <= fVar27)) &&
                                   (fVar7 != -3.4028235e+38)) {
                                  puVar13 = *(ushort **)(iVar3 + 0x488);
                                  puVar8 = (ushort *)(*(int *)(iVar3 + 0x48c) + 2);
                                  if (puVar8 != puVar13) {
                                    do {
                                      if (*puVar17 == *puVar8) goto LAB_0042f594;
                                      puVar8 = puVar8 + 1;
                                    } while (puVar8 != puVar13);
                                  }
                                  uVar4 = *puVar17;
                                  *(ushort **)objStack_e8[1] = puVar13 + 1;
                                  *puVar13 = uVar4;
LAB_0042f594:
                                  uVar26 = *(uint *)(iVar3 + 0x488);
                                  if (objStack_e8[1] <= uVar26) goto LAB_0042fc14;
                                }
                              }
                            }
                          }
                        }
                        puVar17 = puVar17 + 1;
                      } while (*puVar17 != 0);
                    }
                  }
                }
              }
            }
            else if ((iVar16 != -1 && iVar12 != -1) &&
                    ((iVar21 != -1 && uVar26 != 0 && (uVar10 != 0 && uVar19 != 0)))) {
              uVar22 = *(uint *)(local_60 + iVar1);
              if ((uVar22 & 0x80000000) == 0) {
                local_c0 = ALBW_AS_F32((iVar16 << 1));
                local_e0 = ALBW_AS_F32((local_60 + uVar22));
                bVar23 = ((uint)ALBW_AS_U32(local_c0) & 0x80000000) == 0;
                local_bc = local_c0;
                if (!bVar23) {
                  local_bc = ALBW_NAN_NEG;
                }
                local_c4 = (float *)(iVar12 << 1);
                if (bVar23) {
                  local_c0 = 0.0;
                }
                bVar23 = ((uint)local_c4 & 0x80000000) == 0;
                local_54 = local_c4;
                if (!bVar23) {
                  local_54 = (float *)0xffffffff;
                }
                uVar22 = iVar21 << 1;
                if (bVar23) {
                  local_c4 = (float *)0x0;
                }
                bVar23 = (uVar22 & 0x80000000) == 0;
                uVar9 = uVar22;
                if (!bVar23) {
                  uVar9 = 0xffffffff;
                }
                objStack_f0[1] = uVar26 << 1;
                if (bVar23) {
                  uVar22 = 0;
                }
                bVar23 = (objStack_f0[1] & 0x80000000) != 0;
                uVar26 = 0;
                if (bVar23) {
                  uVar26 = objStack_f0[1];
                }
                pfVar11 = (float *)(uVar10 << 1);
                if (bVar23) {
                  objStack_f0[1] = 0xffffffff;
                }
                bVar23 = ((uint)pfVar11 & 0x80000000) != 0;
                local_84 = (float *)0x0;
                if (bVar23) {
                  local_84 = pfVar11;
                }
                uVar19 = uVar19 << 1;
                if (bVar23) {
                  pfVar11 = (float *)0xffffffff;
                }
                uVar20 = uVar19;
                uVar10 = 0;
                if ((uVar19 & 0x80000000) != 0) {
                  uVar20 = 0xffffffff;
                  uVar10 = uVar19;
                }
                objStack_f0[0] = uVar9;
                objStack_e8[0] = (uint)pfVar11;
                objStack_e8[1] = uVar20;
                local_b8 = objStack_f0[1];
                func_0043081C(local_34,(int)ALBW_AS_U32(local_e0),0,param_5,(int)ALBW_AS_U32(local_bc),(int)local_54,uVar9,
                              objStack_f0[1],(uint)pfVar11,uVar20);
                objStack_f0[0] = uVar9;
                objStack_f0[1] = uVar26;
                objStack_e8[0] = (uint)pfVar11;
                objStack_e8[1] = uVar20;
                func_0043081C(iVar3,(int)ALBW_AS_U32(local_e0),4,local_a8,(int)ALBW_AS_U32(local_c0),(int)local_54,uVar9,
                              uVar26,(uint)pfVar11,uVar20);
                objStack_f0[1] = local_b8;
                objStack_e8[0] = (uint)local_84;
                objStack_f0[0] = uVar9;
                objStack_e8[1] = uVar20;
                func_0043081C(iVar3,(int)ALBW_AS_U32(local_e0),8,local_a8,(int)ALBW_AS_U32(local_bc),(int)local_c4,uVar9,
                              local_b8,(uint)local_84,uVar20);
                objStack_e8[0] = (uint)local_84;
                objStack_f0[0] = uVar9;
                objStack_f0[1] = uVar26;
                objStack_e8[1] = uVar20;
                func_0043081C(iVar3,(int)ALBW_AS_U32(local_e0),0xc,local_a8,(int)ALBW_AS_U32(local_c0),(int)local_c4,uVar9,
                              uVar26,(uint)local_84,uVar20);
                objStack_f0[1] = local_b8;
                objStack_f0[0] = uVar22;
                objStack_e8[0] = (uint)pfVar11;
                objStack_e8[1] = uVar10;
                func_0043081C(iVar3,(int)ALBW_AS_U32(local_e0),0x10,local_a8,(int)ALBW_AS_U32(local_bc),(int)local_54,uVar22,
                              local_b8,(uint)pfVar11,uVar10);
                objStack_f0[0] = uVar22;
                objStack_f0[1] = uVar26;
                objStack_e8[0] = (uint)pfVar11;
                objStack_e8[1] = uVar10;
                func_0043081C(iVar3,(int)ALBW_AS_U32(local_e0),0x14,local_a8,(int)ALBW_AS_U32(local_c0),(int)local_54,uVar22,
                              uVar26,(uint)pfVar11,uVar10);
                objStack_f0[1] = local_b8;
                objStack_e8[0] = (uint)local_84;
                objStack_f0[0] = uVar22;
                objStack_e8[1] = uVar10;
                func_0043081C(iVar3,(int)ALBW_AS_U32(local_e0),0x18,local_a8,(int)ALBW_AS_U32(local_bc),(int)local_c4,uVar22,
                              local_b8,(uint)local_84,uVar10);
                objStack_e8[0] = (uint)local_84;
                objStack_f0[0] = uVar22;
                objStack_f0[1] = uVar26;
                objStack_e8[1] = uVar10;
                func_0043081C(iVar3,(int)ALBW_AS_U32(local_e0),0x1c,local_a8,(int)ALBW_AS_U32(local_c0),(int)local_c4,uVar22,
                              uVar26,(uint)local_84,uVar10);
              }
              else {
                iVar16 = (uVar22 & 0x7fffffff) + local_60;
                if (*(char *)(DAT_0042f374 + 0x6e) == '\0') {
                  if (*(char *)(DAT_0042f374 + 0x6f) == '\0') {
                    puVar17 = (ushort *)(iVar16 + 2);
                    uVar4 = *puVar17;
                    puVar29 = param_5;
                    while (uVar4 != 0) {
                      iVar16 = *(int *)(*(int *)(iVar3 + 0x5c) + 8) + (uint)uVar4 * 0x10;
                      *(int *)(iVar3 + 0x70) = iVar16;
                      if ((*(uint *)(iVar18 + 0x68) & 1 << (*(ushort *)(iVar16 + 0xe) & 0x1f)) != 0)
                      {
                        uVar26 = (*(ushort *)(iVar16 + 0xe) & 0xb000) >> 0xc;
                        if (*DAT_0042f37c == '\0') {
                          if (uVar26 != 8) goto LAB_0042ff40;
                        }
                        else if (uVar26 != 9) {
LAB_0042ff40:
                          uVar26 = iVar16 - *(int *)(*(int *)(iVar3 + 0x5c) + 8) >> 4;
                          piVar5 = *(int **)(*(int *)(iVar3 + 0x58) + 0xcc);
                          if (uVar26 < *(uint *)(*(int *)(iVar3 + 0x58) + 200)) {
                            piVar5 = piVar5 + uVar26 * 2;
                          }
                          iVar16 = piVar5[1];
                          bVar23 = iVar16 == 0;
                          if (bVar23) {
                            iVar16 = *piVar5;
                          }
                          if (bVar23 && iVar16 == 0) {
                            objStack_f0[0] = iVar3 + 0x78;
                            func_0010F1DC((int *)objStack_f0[0],
                                          (int *)(*(int *)(iVar3 + 0x84) + (int)piVar5));
                            *(int *)(objStack_f0[0] + 8) = *(int *)(objStack_f0[0] + 8) + 1;
                            (**(code **)*puVar29)(puVar29,iVar3);
                            if (*(char *)(iVar18 + 0x6f) != '\0') break;
                          }
                        }
                      }
                      puVar17 = puVar17 + 1;
                      uVar4 = *puVar17;
                    }
                  }
                }
                else if (*(char *)(local_68 + 0xa0) == '\0') {
                  puVar17 = (ushort *)(iVar16 + 2);
                  local_84 = (float *)(DAT_0042f374 + 8);
                  lVar28 = CONCAT44(fVar7,*(undefined4 *)(DAT_0042f374 + 0x14));
                  local_bc = fVar7;
                  if (*puVar17 != 0) {
                    local_80 = (float *)(local_34 + 0x488);
                    do {
                      iVar16 = *(int *)(*(int *)(iVar3 + 0x5c) + 8) + (uint)*puVar17 * 0x10;
                      *(int *)(iVar3 + 0x70) = iVar16;
                      if ((*(uint *)(iVar18 + 0x68) & 1 << (*(ushort *)(iVar16 + 0xe) & 0x1f)) != 0)
                      {
                        uVar26 = (*(ushort *)(iVar16 + 0xe) & 0xb000) >> 0xc;
                        if (*DAT_0042f37c == '\0') {
                          if (uVar26 != 8) goto LAB_0042fcbc;
                        }
                        else if (uVar26 != 9) {
LAB_0042fcbc:
                          iVar12 = *(int *)(iVar3 + 0x58);
                          uVar26 = iVar16 - *(int *)(*(int *)(iVar3 + 0x5c) + 8) >> 4;
                          if (uVar26 < *(uint *)(iVar12 + 200)) {
                            piVar5 = (int *)(*(int *)(iVar12 + 0xcc) + uVar26 * 8);
                          }
                          else {
                            piVar5 = *(int **)(iVar12 + 0xcc);
                          }
                          iVar16 = piVar5[1];
                          bVar23 = iVar16 == 0;
                          if (bVar23) {
                            iVar16 = *piVar5;
                          }
                          if (bVar23 && iVar16 == 0) {
                            piVar15 = (int *)(iVar3 + 0x78);
                            func_0010F1DC(piVar15,(int *)(*(int *)(iVar3 + 0x84) + (int)piVar5));
                            piVar15[2] = piVar15[2] + 1;
                            piVar5 = *(int **)(iVar3 + 0x5c);
                            pfVar6 = *(float **)(iVar3 + 0x70);
                            pfVar11 = (float *)(*piVar5 + (uint)*(ushort *)(pfVar6 + 1) * 0xc);
                            local_c8 = *pfVar11;
                            local_c4 = (float *)ALBW_PTR_BITS(pfVar11[1]);
                            local_c0 = pfVar11[2];
                            local_bc = *(float *)(iVar18 + 0x38);
                            func_00115C70((float *)objStack_e8,local_84,&local_c8);
                            iVar16 = piVar5[1];
                            pfVar11 = (float *)(iVar16 + (uint)*(ushort *)(pfVar6 + 2) * 0xc);
                            fVar7 = ALBW_AS_F32(lVar28);
                            if (((ALBW_AS_F32(objStack_e8[0]) * *pfVar11 +
                                  ALBW_AS_F32(objStack_e8[1]) * pfVar11[1] + local_e0 * pfVar11[2] <=
                                  fVar7) &&
                                (pfVar11 = (float *)(iVar16 + (uint)*(ushort *)((int)pfVar6 + 10) *
                                                              0xc),
                                ALBW_AS_F32(objStack_e8[0]) * *pfVar11 +
                                ALBW_AS_F32(objStack_e8[1]) * pfVar11[1] + local_e0 * pfVar11[2] <= fVar7)
                                ) && (pfVar11 = (float *)(iVar16 + (uint)*(ushort *)(pfVar6 + 3) *
                                                                   0xc),
                                     ALBW_AS_F32(objStack_e8[0]) * *pfVar11 +
                                     ALBW_AS_F32(objStack_e8[1]) * pfVar11[1] + local_e0 * pfVar11[2] <=
                                     *pfVar6 + fVar7)) {
                              pfVar11 = (float *)(iVar16 + (uint)*(ushort *)((int)pfVar6 + 6) * 0xc)
                              ;
                              fVar27 = -(ALBW_AS_F32(objStack_e8[0]) * *pfVar11 +
                                        ALBW_AS_F32(objStack_e8[1]) * pfVar11[1]) +
                                       -(local_e0 * pfVar11[2]);
                              if (((-fVar7 <= fVar27) && (fVar27 <= fVar7)) &&
                                 (fVar27 != -3.4028235e+38)) {
                                puVar8 = *(ushort **)(iVar3 + 0x488);
                                uVar4 = *puVar17;
                                *local_80 = ALBW_AS_F32((puVar8 + 1));
                                *puVar8 = uVar4;
                                if (local_80 <= (float *)ALBW_PTR_BITS(*local_80)) {
                                  fVar7 = ALBW_AS_F32((*(int *)(iVar3 + 0x488) + -2));
                                  pfVar11 = local_80;
                                  goto LAB_0042f820;
                                }
                              }
                            }
                          }
                        }
                      }
                      puVar17 = puVar17 + 1;
                    } while (*puVar17 != 0);
                  }
                }
                else {
                  local_84 = (float *)0x0;
                  local_80 = (float *)0x0;
                  local_7c = 0;
                  puVar17 = (ushort *)(iVar16 + 2);
                  pfVar11 = (float *)(DAT_0042f374 + 8);
                  lVar28 = CONCAT44(fVar7,*(undefined4 *)(DAT_0042f374 + 0x14));
                  local_6c = fVar7;
                  if (*puVar17 != 0) {
                    objStack_e8[1] = local_34 + 0x488;
                    do {
                      iVar16 = *(int *)(*(int *)(iVar3 + 0x5c) + 8) + (uint)*puVar17 * 0x10;
                      *(int *)(iVar3 + 0x70) = iVar16;
                      if ((*(uint *)(iVar18 + 0x68) & 1 << (*(ushort *)(iVar16 + 0xe) & 0x1f)) != 0)
                      {
                        uVar26 = (*(ushort *)(iVar16 + 0xe) & 0xb000) >> 0xc;
                        if (*DAT_0042f37c == '\0') {
                          if (uVar26 != 8) goto LAB_0042f9fc;
                        }
                        else if (uVar26 != 9) {
LAB_0042f9fc:
                          iVar12 = *(int *)(iVar3 + 0x58);
                          uVar26 = iVar16 - *(int *)(*(int *)(iVar3 + 0x5c) + 8) >> 4;
                          if (uVar26 < *(uint *)(iVar12 + 200)) {
                            piVar5 = (int *)(*(int *)(iVar12 + 0xcc) + uVar26 * 8);
                          }
                          else {
                            piVar5 = *(int **)(iVar12 + 0xcc);
                          }
                          iVar16 = piVar5[1];
                          bVar23 = iVar16 == 0;
                          if (bVar23) {
                            iVar16 = *piVar5;
                          }
                          if (bVar23 && iVar16 == 0) {
                            piVar15 = (int *)(iVar3 + 0x78);
                            func_0010F1DC(piVar15,(int *)(*(int *)(iVar3 + 0x84) + (int)piVar5));
                            piVar15[2] = piVar15[2] + 1;
                            local_84 = *(float **)(iVar3 + 0x5c);
                            local_80 = *(float **)(iVar3 + 0x70);
                            local_7c = (int)local_80 - (int)ALBW_AS_U32(local_84[2]) >> 4;
                            pfVar6 = (float *)((int)ALBW_AS_U32(*local_84) +
                                              (uint)*(ushort *)(local_80 + 1) * 0xc);
                            local_78 = *pfVar6;
                            local_74 = pfVar6[1];
                            local_70 = pfVar6[2];
                            local_6c = *(float *)(iVar18 + 0x38);
                            func_00115C70((float *)objStack_f0,pfVar11,&local_78);
                            fVar7 = local_84[1];
                            pfVar6 = (float *)((int)ALBW_AS_U32(fVar7) + (uint)*(ushort *)(local_80 + 2) * 0xc);
                            fVar27 = ALBW_AS_F32(lVar28);
                            if (((ALBW_AS_F32(objStack_f0[0]) * *pfVar6 +
                                  ALBW_AS_F32(objStack_f0[1]) * pfVar6[1] +
                                  ALBW_AS_F32(objStack_e8[0]) * pfVar6[2] <= fVar27) &&
                                (pfVar6 = (float *)((int)ALBW_AS_U32(fVar7) +
                                                   (uint)*(ushort *)((int)local_80 + 10) * 0xc),
                                ALBW_AS_F32(objStack_f0[0]) * *pfVar6 + ALBW_AS_F32(objStack_f0[1]) * pfVar6[1]
                                + ALBW_AS_F32(objStack_e8[0]) * pfVar6[2] <= fVar27)) &&
                               (pfVar6 = (float *)((int)ALBW_AS_U32(fVar7) +
                                                  (uint)*(ushort *)(local_80 + 3) * 0xc),
                               ALBW_AS_F32(objStack_f0[0]) * *pfVar6 + ALBW_AS_F32(objStack_f0[1]) * pfVar6[1] +
                               ALBW_AS_F32(objStack_e8[0]) * pfVar6[2] <= *local_80 + fVar27)) {
                              pfVar6 = (float *)((int)ALBW_AS_U32(fVar7) +
                                                (uint)*(ushort *)((int)local_80 + 6) * 0xc);
                              fVar7 = -(ALBW_AS_F32(objStack_f0[0]) * *pfVar6 +
                                       ALBW_AS_F32(objStack_f0[1]) * pfVar6[1]) +
                                      -(ALBW_AS_F32(objStack_e8[0]) * pfVar6[2]);
                              if (((-fVar27 <= fVar7) && (fVar7 <= fVar27)) &&
                                 (fVar7 != -3.4028235e+38)) {
                                puVar13 = *(ushort **)(iVar3 + 0x488);
                                puVar8 = (ushort *)(*(int *)(iVar3 + 0x48c) + 2);
                                if (puVar8 != puVar13) {
                                  do {
                                    if (*puVar17 == *puVar8) goto LAB_0042fc04;
                                    puVar8 = puVar8 + 1;
                                  } while (puVar8 != puVar13);
                                }
                                uVar4 = *puVar17;
                                *(ushort **)objStack_e8[1] = puVar13 + 1;
                                *puVar13 = uVar4;
LAB_0042fc04:
                                uVar26 = *(uint *)(iVar3 + 0x488);
                                if (objStack_e8[1] <= uVar26) goto LAB_0042fc14;
                              }
                            }
                          }
                        }
                      }
                      puVar17 = puVar17 + 1;
                    } while (*puVar17 != 0);
                  }
                }
              }
            }
            goto LAB_00430240;
          }
LAB_0043024c:
          uVar24 = uVar24 + 1;
        } while (uVar24 <= local_ac);
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 <= local_94);
  }
  return func_0049F5FC((undefined4 *)(local_34 + 0x78));
LAB_0042fc14:
  fVar7 = ALBW_AS_F32((uVar26 - 2));
  pfVar11 = (float *)objStack_e8[1];
LAB_0042f820:
  *pfVar11 = fVar7;
LAB_00430240:
  uVar25 = uVar25 + 1;
  if (uVar2 < uVar25) goto LAB_0043024c;
  goto LAB_0042f128;
}

