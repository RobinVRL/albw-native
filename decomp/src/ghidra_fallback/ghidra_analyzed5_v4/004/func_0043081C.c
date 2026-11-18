#include "ghidra_types.h"

extern int func_0010F1DC(int *param_1,int *param_2);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_004317D4(int param_1,int param_2,int param_3,undefined4 *param_4);
extern undefined4 DAT_00430bc4;
extern int DAT_00430bc8;
extern char *DAT_00430bcc;

// USA 0043081C <- EU 004307FC (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// PARAM param_6 Stack[0x4]:4 int
// PARAM param_7 Stack[0x8]:4 int
// PARAM param_8 Stack[0xc]:4 uint
// PARAM param_9 Stack[0x10]:4 uint
// PARAM param_10 Stack[0x14]:4 uint
// GLOBAL DAT_00430bc4 undefined4
// GLOBAL DAT_00430bc8 int
// GLOBAL DAT_00430bcc char *

void func_0043081C(int param_1,int param_2,int param_3,undefined4 *param_4,int param_5,int param_6,
                  int param_7,uint param_8,uint param_9,uint param_10)

{
  _Alignas(8) unsigned char albw_frame[0xf0]; /* entry_sp - 0xd0 .. entry_sp + 0x20 */
#define stack0xffffff38 (*(undefined4 *)(albw_frame + 0x8))
  __builtin_memcpy(albw_frame + 0xd0, &param_5, 4);
  __builtin_memcpy(albw_frame + 0xd4, &param_6, 4);
  __builtin_memcpy(albw_frame + 0xd8, &param_7, 4);
  __builtin_memcpy(albw_frame + 0xdc, &param_8, 4);
  __builtin_memcpy(albw_frame + 0xe0, &param_9, 4);
  __builtin_memcpy(albw_frame + 0xe4, &param_10, 4);
#define param_5 (*(int *)(albw_frame + 0xd0))
#define param_6 (*(int *)(albw_frame + 0xd4))
#define param_7 (*(int *)(albw_frame + 0xd8))
#define param_8 (*(uint *)(albw_frame + 0xdc))
#define param_9 (*(uint *)(albw_frame + 0xe0))
#define param_10 (*(uint *)(albw_frame + 0xe4))
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  char *pcVar5;
  int *piVar6;
  float *pfVar7;
  float *pfVar8;
  ushort *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  ushort *puVar15;
  int iVar16;
  ushort *puVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  float *pfVar24;
  bool bVar25;
  float fVar26;
  float fVar27;
  ulonglong uVar28;
  #define in_stack_ffffff38 (*(float *)(albw_frame + 0x8)) /* V4: frame slot (callee-filled) */
  #define in_stack_ffffff3c (*(float *)(albw_frame + 0xc)) /* V4: frame slot (callee-filled) */
  #define in_stack_ffffff40 (*(float *)(albw_frame + 0x10)) /* V4: frame slot (callee-filled) */
  #define local_9c (*(float *)(albw_frame + 0x34))
  #define local_98 (*(int * *)(albw_frame + 0x38))
  #define local_94 (*(float * *)(albw_frame + 0x3c))
  #define local_90 (*(int *)(albw_frame + 0x40))
  #define local_8c (*(float *)(albw_frame + 0x44))
  #define local_88 (*(float *)(albw_frame + 0x48))
  #define local_84 (*(float *)(albw_frame + 0x4c))
  #define local_80 (*(undefined4 *)(albw_frame + 0x50))
  #define local_6c (*(uint *)(albw_frame + 0x64))
  #define iStack_34 (*(int *)(albw_frame + 0x9c))
  #define local_30 (*(int *)(albw_frame + 0xa0))
  #define iStack_2c (*(int *)(albw_frame + 0xa4))
  #define local_28 (*(undefined4 * *)(albw_frame + 0xa8))
  pcVar5 = DAT_00430bcc;
  iVar18 = DAT_00430bc8;
  uVar28 = (ulonglong)*(uint *)(DAT_00430bc8 + 0x14);
  iStack_34 = param_1;
  local_30 = param_2;
  iStack_2c = param_3;
  local_28 = param_4;
  if (((param_5 == 0 && param_6 == 0) && param_7 == 0) &&
     ((param_8 & param_9 & param_10) == 0xffffffff)) {
    uVar14 = *(uint *)(param_2 + param_3);
    if ((uVar14 & 0x80000000) == 0) {
      iVar18 = param_2 + uVar14;
      func_004317D4(param_1,iVar18,0,param_4);
      func_004317D4(param_1,iVar18,4,param_4);
      func_004317D4(param_1,iVar18,8,param_4);
      func_004317D4(param_1,iVar18,0xc,param_4);
      func_004317D4(param_1,iVar18,0x10,param_4);
      func_004317D4(param_1,iVar18,0x14,param_4);
      func_004317D4(param_1,iVar18,0x18,param_4);
      func_004317D4(param_1,iVar18,0x1c,param_4);
    }
    else {
      iVar16 = (uVar14 & 0x7fffffff) + param_2;
      if (*(char *)(DAT_00430bc8 + 0x6e) == '\0') {
        if (*(char *)(DAT_00430bc8 + 0x6f) == '\0') {
          puVar17 = (ushort *)(iVar16 + 2);
          uVar3 = *puVar17;
          while (uVar3 != 0) {
            iVar16 = *(int *)(*(int *)(param_1 + 0x5c) + 8) + (uint)uVar3 * 0x10;
            *(int *)(param_1 + 0x70) = iVar16;
            if ((*(uint *)(iVar18 + 0x68) & 1 << (*(ushort *)(iVar16 + 0xe) & 0x1f)) != 0) {
              uVar14 = (*(ushort *)(iVar16 + 0xe) & 0xb000) >> 0xc;
              if (*pcVar5 == '\0') {
                if (uVar14 != 8) goto LAB_00430ed4;
              }
              else if (uVar14 != 9) {
LAB_00430ed4:
                iVar13 = *(int *)(param_1 + 0x58);
                uVar14 = iVar16 - *(int *)(*(int *)(param_1 + 0x5c) + 8) >> 4;
                if (uVar14 < *(uint *)(iVar13 + 200)) {
                  piVar6 = (int *)(*(int *)(iVar13 + 0xcc) + uVar14 * 8);
                }
                else {
                  piVar6 = *(int **)(iVar13 + 0xcc);
                }
                iVar16 = piVar6[1];
                bVar25 = iVar16 == 0;
                if (bVar25) {
                  iVar16 = *piVar6;
                }
                if (bVar25 && iVar16 == 0) {
                  func_0010F1DC((int *)(param_1 + 0x78),
                                (int *)(*(int *)(param_1 + 0x84) + (int)piVar6));
                  *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
                  (**(code **)*param_4)(param_4,param_1);
                  if (*(char *)(iVar18 + 0x6f) != '\0') {
                    return;
                  }
                }
              }
            }
            puVar17 = puVar17 + 1;
            uVar3 = *puVar17;
          }
        }
      }
      else if (*(char *)(param_1 + 0x4a0) == '\0') {
        local_98 = (int *)0x0;
        local_94 = (float *)0x0;
        local_90 = 0;
        local_80 = DAT_00430bc4;
        puVar17 = (ushort *)(iVar16 + 2);
        uVar14 = (uint)*puVar17;
        pfVar24 = (float *)(DAT_00430bc8 + 8);
        if (uVar14 != 0) {
          puVar10 = (undefined4 *)(param_1 + 0x488);
          do {
            iVar16 = *(int *)(*(int *)(param_1 + 0x5c) + 8) + uVar14 * 0x10;
            *(int *)(param_1 + 0x70) = iVar16;
            if ((*(uint *)(iVar18 + 0x68) & 1 << (*(ushort *)(iVar16 + 0xe) & 0x1f)) != 0) {
              uVar14 = (*(ushort *)(iVar16 + 0xe) & 0xb000) >> 0xc;
              if (*pcVar5 == '\0') {
                if (uVar14 != 8) goto LAB_00430c7c;
              }
              else if (uVar14 != 9) {
LAB_00430c7c:
                iVar13 = *(int *)(param_1 + 0x58);
                uVar14 = iVar16 - *(int *)(*(int *)(param_1 + 0x5c) + 8) >> 4;
                if (uVar14 < *(uint *)(iVar13 + 200)) {
                  piVar6 = (int *)(*(int *)(iVar13 + 0xcc) + uVar14 * 8);
                }
                else {
                  piVar6 = *(int **)(iVar13 + 0xcc);
                }
                iVar16 = piVar6[1];
                bVar25 = iVar16 == 0;
                if (bVar25) {
                  iVar16 = *piVar6;
                }
                if (bVar25 && iVar16 == 0) {
                  func_0010F1DC((int *)(param_1 + 0x78),
                                (int *)(*(int *)(param_1 + 0x84) + (int)piVar6));
                  *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
                  local_98 = *(int **)(param_1 + 0x5c);
                  local_94 = *(float **)(param_1 + 0x70);
                  local_90 = (int)local_94 - local_98[2] >> 4;
                  pfVar7 = (float *)(*local_98 + (uint)*(ushort *)(local_94 + 1) * 0xc);
                  local_8c = *pfVar7;
                  local_88 = pfVar7[1];
                  local_84 = pfVar7[2];
                  local_80 = *(undefined4 *)(iVar18 + 0x38);
                  func_00115C70((float *)&stack0xffffff38,pfVar24,&local_8c);
                  iVar16 = local_98[1];
                  pfVar7 = (float *)(iVar16 + (uint)*(ushort *)(local_94 + 2) * 0xc);
                  fVar27 = ALBW_AS_F32(uVar28);
                  if (((in_stack_ffffff38 * *pfVar7 + in_stack_ffffff3c * pfVar7[1] +
                        in_stack_ffffff40 * pfVar7[2] <= fVar27) &&
                      (pfVar7 = (float *)(iVar16 + (uint)*(ushort *)((int)local_94 + 10) * 0xc),
                      in_stack_ffffff38 * *pfVar7 + in_stack_ffffff3c * pfVar7[1] +
                      in_stack_ffffff40 * pfVar7[2] <= fVar27)) &&
                     (pfVar7 = (float *)(iVar16 + (uint)*(ushort *)(local_94 + 3) * 0xc),
                     in_stack_ffffff38 * *pfVar7 + in_stack_ffffff3c * pfVar7[1] +
                     in_stack_ffffff40 * pfVar7[2] <= *local_94 + fVar27)) {
                    pfVar7 = (float *)(iVar16 + (uint)*(ushort *)((int)local_94 + 6) * 0xc);
                    fVar26 = -(in_stack_ffffff38 * *pfVar7 + in_stack_ffffff3c * pfVar7[1]) +
                             -(in_stack_ffffff40 * pfVar7[2]);
                    if (((-fVar27 <= fVar26) && (fVar26 <= fVar27)) && (fVar26 != -3.4028235e+38)) {
                      puVar9 = *(ushort **)(param_1 + 0x488);
                      uVar3 = *puVar17;
                      *puVar10 = puVar9 + 1;
                      *puVar9 = uVar3;
                      if (puVar10 <= (undefined4 *)*puVar10) {
LAB_00431470:
                        *(int *)(param_1 + 0x488) = *(int *)(param_1 + 0x488) + -2;
                        return;
                      }
                    }
                  }
                }
              }
            }
            puVar17 = puVar17 + 1;
            uVar14 = (uint)*puVar17;
          } while (uVar14 != 0);
        }
      }
      else {
        local_90 = DAT_00430bc4;
        puVar17 = (ushort *)(iVar16 + 2);
        uVar14 = (uint)*puVar17;
        pfVar24 = (float *)(DAT_00430bc8 + 8);
        if (uVar14 != 0) {
          do {
            iVar16 = *(int *)(*(int *)(param_1 + 0x5c) + 8) + uVar14 * 0x10;
            *(int *)(param_1 + 0x70) = iVar16;
            if ((*(uint *)(iVar18 + 0x68) & 1 << (*(ushort *)(iVar16 + 0xe) & 0x1f)) != 0) {
              uVar14 = (*(ushort *)(iVar16 + 0xe) & 0xb000) >> 0xc;
              if (*pcVar5 == '\0') {
                if (uVar14 != 8) goto LAB_004309d4;
              }
              else if (uVar14 != 9) {
LAB_004309d4:
                iVar13 = *(int *)(param_1 + 0x58);
                uVar14 = iVar16 - *(int *)(*(int *)(param_1 + 0x5c) + 8) >> 4;
                if (uVar14 < *(uint *)(iVar13 + 200)) {
                  piVar6 = (int *)(*(int *)(iVar13 + 0xcc) + uVar14 * 8);
                }
                else {
                  piVar6 = *(int **)(iVar13 + 0xcc);
                }
                iVar16 = piVar6[1];
                bVar25 = iVar16 == 0;
                if (bVar25) {
                  iVar16 = *piVar6;
                }
                if (bVar25 && iVar16 == 0) {
                  func_0010F1DC((int *)(param_1 + 0x78),
                                (int *)(*(int *)(param_1 + 0x84) + (int)piVar6));
                  *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
                  pfVar7 = *(float **)(param_1 + 0x70);
                  piVar6 = *(int **)(param_1 + 0x5c);
                  pfVar8 = (float *)(*piVar6 + (uint)*(ushort *)(pfVar7 + 1) * 0xc);
                  local_9c = *pfVar8;
                  local_98 = (int *)ALBW_PTR_BITS(pfVar8[1]);
                  local_94 = (float *)ALBW_PTR_BITS(pfVar8[2]);
                  local_90 = *(undefined4 *)(iVar18 + 0x38);
                  func_00115C70((float *)&stack0xffffff38,pfVar24,&local_9c);
                  iVar16 = piVar6[1];
                  pfVar8 = (float *)(iVar16 + (uint)*(ushort *)(pfVar7 + 2) * 0xc);
                  fVar27 = ALBW_AS_F32(uVar28);
                  if (((in_stack_ffffff38 * *pfVar8 + in_stack_ffffff3c * pfVar8[1] +
                        in_stack_ffffff40 * pfVar8[2] <= fVar27) &&
                      (pfVar8 = (float *)(iVar16 + (uint)*(ushort *)((int)pfVar7 + 10) * 0xc),
                      in_stack_ffffff38 * *pfVar8 + in_stack_ffffff3c * pfVar8[1] +
                      in_stack_ffffff40 * pfVar8[2] <= fVar27)) &&
                     (pfVar8 = (float *)(iVar16 + (uint)*(ushort *)(pfVar7 + 3) * 0xc),
                     in_stack_ffffff38 * *pfVar8 + in_stack_ffffff3c * pfVar8[1] +
                     in_stack_ffffff40 * pfVar8[2] <= *pfVar7 + fVar27)) {
                    pfVar7 = (float *)(iVar16 + (uint)*(ushort *)((int)pfVar7 + 6) * 0xc);
                    fVar26 = -(in_stack_ffffff38 * *pfVar7 + in_stack_ffffff3c * pfVar7[1]) +
                             -(in_stack_ffffff40 * pfVar7[2]);
                    if (((-fVar27 <= fVar26) && (fVar26 <= fVar27)) && (fVar26 != -3.4028235e+38)) {
                      puVar15 = *(ushort **)(param_1 + 0x488);
                      puVar9 = (ushort *)(*(int *)(param_1 + 0x48c) + 2);
                      if (puVar9 != puVar15) {
                        do {
                          if (*puVar17 == *puVar9) goto LAB_00430bd8;
                          puVar9 = puVar9 + 1;
                        } while (puVar9 != puVar15);
                      }
                      uVar3 = *puVar17;
                      *(undefined4 *)(param_1 + 0x488) = puVar15 + 1;
                      *puVar15 = uVar3;
LAB_00430bd8:
                      puVar10 = *(undefined4 **)(param_1 + 0x488);
                      if ((undefined4 *)(param_1 + 0x488) <= puVar10) {
LAB_00431218:
                        *(int *)(param_1 + 0x488) = (int)puVar10 + -2;
                        return;
                      }
                    }
                  }
                }
              }
            }
            puVar17 = puVar17 + 1;
            uVar14 = (uint)*puVar17;
          } while (uVar14 != 0);
        }
      }
    }
  }
  else if ((param_5 != -1 && param_6 != -1) &&
          ((param_7 != -1 && param_8 != 0 && (param_9 != 0 && param_10 != 0)))) {
    uVar14 = *(uint *)(param_2 + param_3);
    if ((uVar14 & 0x80000000) == 0) {
      uVar1 = param_5 << 1;
      uVar19 = param_6 << 1;
      local_30 = param_2 + uVar14;
      if ((uVar1 & 0x80000000) == 0) {
        uVar14 = 0;
      }
      else {
        uVar14 = uVar1;
        uVar1 = 0xffffffff;
      }
      bVar25 = (uVar19 & 0x80000000) == 0;
      local_88 = ALBW_AS_F32(uVar19);
      if (!bVar25) {
        local_88 = ALBW_AS_F32(0xffffffff);
      }
      uVar21 = param_7 << 1;
      if (bVar25) {
        uVar19 = 0;
      }
      bVar25 = (uVar21 & 0x80000000) == 0;
      local_6c = uVar21;
      if (!bVar25) {
        local_6c = 0xffffffff;
      }
      uVar20 = param_8 << 1;
      if (bVar25) {
        uVar21 = 0;
      }
      bVar25 = (uVar20 & 0x80000000) != 0;
      uVar11 = 0;
      if (bVar25) {
        uVar11 = uVar20;
      }
      uVar22 = param_9 << 1;
      if (bVar25) {
        uVar20 = 0xffffffff;
      }
      bVar25 = (uVar22 & 0x80000000) != 0;
      uVar12 = 0;
      if (bVar25) {
        uVar12 = uVar22;
      }
      uVar2 = param_10 << 1;
      if (bVar25) {
        uVar22 = 0xffffffff;
      }
      uVar23 = uVar2;
      uVar4 = 0;
      if ((uVar2 & 0x80000000) != 0) {
        uVar23 = 0xffffffff;
        uVar4 = uVar2;
      }
      func_0043081C(param_1,local_30,0,param_4,uVar1,(int)ALBW_AS_U32(local_88),local_6c,uVar20,uVar22,uVar23);
      func_0043081C(param_1,local_30,4,local_28,uVar14,(int)ALBW_AS_U32(local_88),local_6c,uVar11,uVar22,uVar23);
      func_0043081C(param_1,local_30,8,local_28,uVar1,uVar19,local_6c,uVar20,uVar12,uVar23);
      func_0043081C(param_1,local_30,0xc,local_28,uVar14,uVar19,local_6c,uVar11,uVar12,uVar23);
      func_0043081C(param_1,local_30,0x10,local_28,uVar1,(int)ALBW_AS_U32(local_88),uVar21,uVar20,uVar22,uVar4);
      func_0043081C(param_1,local_30,0x14,local_28,uVar14,(int)ALBW_AS_U32(local_88),uVar21,uVar11,uVar22,uVar4);
      func_0043081C(param_1,local_30,0x18,local_28,uVar1,uVar19,uVar21,uVar20,uVar12,uVar4);
      func_0043081C(param_1,local_30,0x1c,local_28,uVar14,uVar19,uVar21,uVar11,uVar12,uVar4);
    }
    else {
      iVar16 = (uVar14 & 0x7fffffff) + param_2;
      if (*(char *)(DAT_00430bc8 + 0x6e) == '\0') {
        if (*(char *)(DAT_00430bc8 + 0x6f) == '\0') {
          puVar17 = (ushort *)(iVar16 + 2);
          uVar3 = *puVar17;
          while (uVar3 != 0) {
            iVar16 = *(int *)(*(int *)(param_1 + 0x5c) + 8) + (uint)uVar3 * 0x10;
            *(int *)(param_1 + 0x70) = iVar16;
            if ((*(uint *)(iVar18 + 0x68) & 1 << (*(ushort *)(iVar16 + 0xe) & 0x1f)) != 0) {
              uVar14 = (*(ushort *)(iVar16 + 0xe) & 0xb000) >> 0xc;
              if (*pcVar5 == '\0') {
                if (uVar14 != 8) goto LAB_00431500;
              }
              else if (uVar14 != 9) {
LAB_00431500:
                uVar14 = iVar16 - *(int *)(*(int *)(param_1 + 0x5c) + 8) >> 4;
                piVar6 = *(int **)(*(int *)(param_1 + 0x58) + 0xcc);
                if (uVar14 < *(uint *)(*(int *)(param_1 + 0x58) + 200)) {
                  piVar6 = piVar6 + uVar14 * 2;
                }
                iVar16 = piVar6[1];
                bVar25 = iVar16 == 0;
                if (bVar25) {
                  iVar16 = *piVar6;
                }
                if (bVar25 && iVar16 == 0) {
                  func_0010F1DC((int *)(param_1 + 0x78),
                                (int *)(*(int *)(param_1 + 0x84) + (int)piVar6));
                  *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
                  (**(code **)*param_4)(param_4,param_1);
                  if (*(char *)(iVar18 + 0x6f) != '\0') {
                    return;
                  }
                }
              }
            }
            puVar17 = puVar17 + 1;
            uVar3 = *puVar17;
          }
        }
      }
      else {
        pfVar24 = (float *)(DAT_00430bc8 + 8);
        local_90 = DAT_00430bc4;
        puVar17 = (ushort *)(iVar16 + 2);
        uVar14 = (uint)*puVar17;
        if (*(char *)(param_1 + 0x4a0) == '\0') {
          if (uVar14 != 0) {
            puVar10 = (undefined4 *)(param_1 + 0x488);
            do {
              iVar16 = *(int *)(*(int *)(param_1 + 0x5c) + 8) + uVar14 * 0x10;
              *(int *)(param_1 + 0x70) = iVar16;
              if ((*(uint *)(iVar18 + 0x68) & 1 << (*(ushort *)(iVar16 + 0xe) & 0x1f)) != 0) {
                uVar14 = (*(ushort *)(iVar16 + 0xe) & 0xb000) >> 0xc;
                if (*pcVar5 == '\0') {
                  if (uVar14 != 8) goto LAB_00431298;
                }
                else if (uVar14 != 9) {
LAB_00431298:
                  iVar13 = *(int *)(param_1 + 0x58);
                  uVar14 = iVar16 - *(int *)(*(int *)(param_1 + 0x5c) + 8) >> 4;
                  if (uVar14 < *(uint *)(iVar13 + 200)) {
                    piVar6 = (int *)(*(int *)(iVar13 + 0xcc) + uVar14 * 8);
                  }
                  else {
                    piVar6 = *(int **)(iVar13 + 0xcc);
                  }
                  iVar16 = piVar6[1];
                  bVar25 = iVar16 == 0;
                  if (bVar25) {
                    iVar16 = *piVar6;
                  }
                  if (bVar25 && iVar16 == 0) {
                    func_0010F1DC((int *)(param_1 + 0x78),
                                  (int *)(*(int *)(param_1 + 0x84) + (int)piVar6));
                    *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
                    pfVar7 = *(float **)(param_1 + 0x70);
                    piVar6 = *(int **)(param_1 + 0x5c);
                    pfVar8 = (float *)(*piVar6 + (uint)*(ushort *)(pfVar7 + 1) * 0xc);
                    local_9c = *pfVar8;
                    local_98 = (int *)ALBW_PTR_BITS(pfVar8[1]);
                    local_94 = (float *)ALBW_PTR_BITS(pfVar8[2]);
                    local_90 = *(undefined4 *)(iVar18 + 0x38);
                    func_00115C70((float *)&stack0xffffff38,pfVar24,&local_9c);
                    iVar16 = piVar6[1];
                    pfVar8 = (float *)(iVar16 + (uint)*(ushort *)(pfVar7 + 2) * 0xc);
                    fVar27 = ALBW_AS_F32(uVar28);
                    if (((in_stack_ffffff38 * *pfVar8 + in_stack_ffffff3c * pfVar8[1] +
                          in_stack_ffffff40 * pfVar8[2] <= fVar27) &&
                        (pfVar8 = (float *)(iVar16 + (uint)*(ushort *)((int)pfVar7 + 10) * 0xc),
                        in_stack_ffffff38 * *pfVar8 + in_stack_ffffff3c * pfVar8[1] +
                        in_stack_ffffff40 * pfVar8[2] <= fVar27)) &&
                       (pfVar8 = (float *)(iVar16 + (uint)*(ushort *)(pfVar7 + 3) * 0xc),
                       in_stack_ffffff38 * *pfVar8 + in_stack_ffffff3c * pfVar8[1] +
                       in_stack_ffffff40 * pfVar8[2] <= *pfVar7 + fVar27)) {
                      pfVar7 = (float *)(iVar16 + (uint)*(ushort *)((int)pfVar7 + 6) * 0xc);
                      fVar26 = -(in_stack_ffffff38 * *pfVar7 + in_stack_ffffff3c * pfVar7[1]) +
                               -(in_stack_ffffff40 * pfVar7[2]);
                      if (((-fVar27 <= fVar26) && (fVar26 <= fVar27)) && (fVar26 != -3.4028235e+38))
                      {
                        puVar9 = *(ushort **)(param_1 + 0x488);
                        uVar3 = *puVar17;
                        *puVar10 = puVar9 + 1;
                        *puVar9 = uVar3;
                        if (puVar10 <= (undefined4 *)*puVar10) goto LAB_00431470;
                      }
                    }
                  }
                }
              }
              puVar17 = puVar17 + 1;
              uVar14 = (uint)*puVar17;
            } while (uVar14 != 0);
          }
        }
        else if (uVar14 != 0) {
          do {
            iVar16 = *(int *)(*(int *)(param_1 + 0x5c) + 8) + uVar14 * 0x10;
            *(int *)(param_1 + 0x70) = iVar16;
            if ((*(uint *)(iVar18 + 0x68) & 1 << (*(ushort *)(iVar16 + 0xe) & 0x1f)) != 0) {
              uVar14 = (*(ushort *)(iVar16 + 0xe) & 0xb000) >> 0xc;
              if (*pcVar5 == '\0') {
                if (uVar14 != 8) goto LAB_00431018;
              }
              else if (uVar14 != 9) {
LAB_00431018:
                iVar13 = *(int *)(param_1 + 0x58);
                uVar14 = iVar16 - *(int *)(*(int *)(param_1 + 0x5c) + 8) >> 4;
                if (uVar14 < *(uint *)(iVar13 + 200)) {
                  piVar6 = (int *)(*(int *)(iVar13 + 0xcc) + uVar14 * 8);
                }
                else {
                  piVar6 = *(int **)(iVar13 + 0xcc);
                }
                iVar16 = piVar6[1];
                bVar25 = iVar16 == 0;
                if (bVar25) {
                  iVar16 = *piVar6;
                }
                if (bVar25 && iVar16 == 0) {
                  func_0010F1DC((int *)(param_1 + 0x78),
                                (int *)(*(int *)(param_1 + 0x84) + (int)piVar6));
                  *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
                  pfVar7 = *(float **)(param_1 + 0x70);
                  piVar6 = *(int **)(param_1 + 0x5c);
                  pfVar8 = (float *)(*piVar6 + (uint)*(ushort *)(pfVar7 + 1) * 0xc);
                  local_9c = *pfVar8;
                  local_98 = (int *)ALBW_PTR_BITS(pfVar8[1]);
                  local_94 = (float *)ALBW_PTR_BITS(pfVar8[2]);
                  local_90 = *(undefined4 *)(iVar18 + 0x38);
                  func_00115C70((float *)&stack0xffffff38,pfVar24,&local_9c);
                  iVar16 = piVar6[1];
                  pfVar8 = (float *)(iVar16 + (uint)*(ushort *)(pfVar7 + 2) * 0xc);
                  fVar27 = ALBW_AS_F32(uVar28);
                  if (((in_stack_ffffff38 * *pfVar8 + in_stack_ffffff3c * pfVar8[1] +
                        in_stack_ffffff40 * pfVar8[2] <= fVar27) &&
                      (pfVar8 = (float *)(iVar16 + (uint)*(ushort *)((int)pfVar7 + 10) * 0xc),
                      in_stack_ffffff38 * *pfVar8 + in_stack_ffffff3c * pfVar8[1] +
                      in_stack_ffffff40 * pfVar8[2] <= fVar27)) &&
                     (pfVar8 = (float *)(iVar16 + (uint)*(ushort *)(pfVar7 + 3) * 0xc),
                     in_stack_ffffff38 * *pfVar8 + in_stack_ffffff3c * pfVar8[1] +
                     in_stack_ffffff40 * pfVar8[2] <= *pfVar7 + fVar27)) {
                    pfVar7 = (float *)(iVar16 + (uint)*(ushort *)((int)pfVar7 + 6) * 0xc);
                    fVar26 = -(in_stack_ffffff38 * *pfVar7 + in_stack_ffffff3c * pfVar7[1]) +
                             -(in_stack_ffffff40 * pfVar7[2]);
                    if (((-fVar27 <= fVar26) && (fVar26 <= fVar27)) && (fVar26 != -3.4028235e+38)) {
                      puVar15 = *(ushort **)(param_1 + 0x488);
                      puVar9 = (ushort *)(*(int *)(param_1 + 0x48c) + 2);
                      if (puVar9 != puVar15) {
                        do {
                          if (*puVar17 == *puVar9) goto LAB_0043120c;
                          puVar9 = puVar9 + 1;
                        } while (puVar9 != puVar15);
                      }
                      uVar3 = *puVar17;
                      *(undefined4 *)(param_1 + 0x488) = puVar15 + 1;
                      *puVar15 = uVar3;
LAB_0043120c:
                      puVar10 = *(undefined4 **)(param_1 + 0x488);
                      if ((undefined4 *)(param_1 + 0x488) <= puVar10) goto LAB_00431218;
                    }
                  }
                }
              }
            }
            puVar17 = puVar17 + 1;
            uVar14 = (uint)*puVar17;
          } while (uVar14 != 0);
        }
      }
    }
  }
  return;
}

