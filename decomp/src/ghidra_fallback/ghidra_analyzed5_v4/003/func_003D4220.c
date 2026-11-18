#include "ghidra_types.h"

extern int func_00115074(float *param_1,float *param_2,float *param_3);
extern ulonglong func_0011624C(uint param_1,uint param_2,uint param_3,uint param_4);
extern int func_003D3A30(int param_1);
extern int func_003D3BFC(int param_1,float *param_2,int *param_3,float *param_4,int param_5,int param_6, float fparam_0);
extern float func_003D3DB8(int param_1,float *param_2,float *param_3);
extern int func_003D4D38(int *param_1,short *param_2);
extern int func_003D4DFC(undefined4 param_1,float *param_2,int param_3,short *param_4);
extern int func_003E6274(uint *param_1,int param_2,int param_3,int *param_4,uint *param_5,uint *param_6);
extern int DAT_003d46f8;
extern uint DAT_003d46fc;
extern uint DAT_003d4700;
extern uint DAT_003d4704;
extern undefined4 DAT_003d4708;
extern double DAT_003d4710;
extern double DAT_003d4718;
extern uint DAT_003d4720;

// USA 003D4220 <- EU 003D4200 (Ghidra, non-matching)
// GLOBAL DAT_003d46f8 int
// GLOBAL DAT_003d46fc uint
// GLOBAL DAT_003d4700 uint
// GLOBAL DAT_003d4704 uint
// GLOBAL DAT_003d4708 undefined4
// GLOBAL DAT_003d4710 double
// GLOBAL DAT_003d4718 double
// GLOBAL DAT_003d4720 uint

void func_003D4220(int param_1,undefined4 *param_2,int *param_3,int param_4)

{
  _Alignas(8) unsigned char albw_frame[0x170]; /* entry_sp - 0x170 .. entry_sp + 0x0 */
#define stack0xfffffe94 (*(undefined4 *)(albw_frame + 0x4))
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int iVar15;
  uint uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  bool bVar20;
  uint in_fpscr;
  float fVar21;
  double dVar22;
  double dVar23;
  float fVar24;
  float fVar25;
  double dVar26;
  double dVar27;
  ulonglong uVar28;
  #define local_164 ((float *)(albw_frame + 0xc))
  #define local_15c (*(float *)(albw_frame + 0x14))
  #define asStack_158 ((short *)(albw_frame + 0x18))
  #define local_98 (*(float *)(albw_frame + 0xd8))
  #define local_94 (*(int *)(albw_frame + 0xdc))
  #define local_90 (*(float *)(albw_frame + 0xe0))
  #define local_8c (*(float * *)(albw_frame + 0xe4))
  #define local_88 (*(float *)(albw_frame + 0xe8))
  #define local_84 (*(float * *)(albw_frame + 0xec))
  #define local_80 (*(int *)(albw_frame + 0xf0))
  #define asStack_7c ((short *)(albw_frame + 0xf4))
  #define local_6c (*(float * *)(albw_frame + 0x104))
  #define local_68 (*(float * *)(albw_frame + 0x108))
  #define local_64 (*(float * *)(albw_frame + 0x10c))
  #define local_60 (*(uint * *)(albw_frame + 0x110))
  #define iStack_34 (*(int *)(albw_frame + 0x13c))
  #define local_30 (*(undefined4 * *)(albw_frame + 0x140))
  #define local_2c (*(int * *)(albw_frame + 0x144))
  #define local_28 (*(int *)(albw_frame + 0x148))
  uVar10 = 0x20;
  local_80 = 0;
  uVar4 = (uint)*(byte *)(param_1 + 0x784);
  iStack_34 = param_1;
  local_30 = param_2;
  local_2c = param_3;
  local_28 = param_4;
  if (uVar4 != 0) {
    software_interrupt(0x28);
    uVar6 = uVar4 - *(uint *)(DAT_003d46f8 + 8);
    uVar4 = (param_1 + 0x700) -
            (*(int *)(DAT_003d46f8 + 0xc) + (uint)(uVar4 < *(uint *)(DAT_003d46f8 + 8)));
    uVar28 = (ulonglong)uVar6 * 3 +
             ((ulonglong)
              (((int)uVar4 >> 0x1f) * DAT_003d46fc +
              (int)((ulonglong)DAT_003d46fc * (ulonglong)uVar4 >> 0x20)) << 0x20 |
             (ulonglong)DAT_003d46fc * (ulonglong)uVar4 & 0xffffffff) +
             CONCAT44(uVar4 * 3,(int)((ulonglong)DAT_003d46fc * (ulonglong)uVar6 >> 0x20));
    uVar4 = (uint)(uVar28 >> 0x20);
    local_15c = ALBW_AS_F32(((ulonglong)DAT_003d4700 * (uVar28 & 0xffffffff) >> 0x20));
    iVar15 = (int)uVar4 >> 0x1f;
    lVar2 = (ulonglong)DAT_003d4700 * (ulonglong)uVar4 + CONCAT44(iVar15 * DAT_003d4700,local_15c);
    uVar12 = (uint)((ulonglong)lVar2 >> 0x20);
    lVar1 = (ulonglong)DAT_003d4704 * (uVar28 & 0xffffffff);
    uVar16 = (uint)((ulonglong)DAT_003d4704 * (ulonglong)uVar4);
    uVar6 = (int)((ulonglong)lVar1 >> 0x20) + (uint)CARRY4((uint)lVar2,(uint)lVar1);
    iVar7 = iVar15 * DAT_003d4704 + (int)((ulonglong)DAT_003d4704 * (ulonglong)uVar4 >> 0x20) +
            ((int)uVar6 >> 0x1f) + ((int)uVar12 >> 0x1f) + (uint)CARRY4(uVar6,uVar12) +
            (uint)CARRY4(uVar16,uVar6 + uVar12);
    uVar4 = uVar16 + uVar6 + uVar12 >> 0x12 | iVar7 * 0x4000;
    uVar12 = (iVar7 >> 0x12) + (uint)CARRY4(uVar4,-iVar15);
    uVar28 = func_0011624C(uVar4 + -iVar15,uVar12,100,0);
    uVar6 = (int)uVar28 + 1;
    uVar4 = uVar12;
    if (-1 < (int)uVar12) {
      uVar4 = uVar6;
    }
    if (uVar4 == 0 || (-1 >= (int)uVar12 || (int)uVar6 < 0)) {
      *local_2c = 0;
      return;
    }
    if ((int)uVar6 < 0x20) {
      uVar10 = uVar6;
    }
    *(undefined1 *)(param_1 + 0x784) = 0;
  }
  func_003E6274(*(uint **)(*(int *)(param_1 + 0x14c0) + 8),(int)asStack_158,uVar10,&local_80,
                (uint *)(param_1 + 0x14c8),(uint *)(param_1 + 0x14c4));
  uVar8 = DAT_003d4708;
  if (local_80 < 1) {
    *local_2c = 0;
    if (local_28 < 1) {
      return;
    }
    uVar8 = *(undefined4 *)(param_1 + 0x7e4);
    uVar9 = *(undefined4 *)(param_1 + 0x7e8);
    uVar11 = *(undefined4 *)(param_1 + 0x7ec);
    uVar13 = *(undefined4 *)(param_1 + 0x7f0);
    uVar14 = *(undefined4 *)(param_1 + 0x7f4);
    uVar17 = *(undefined4 *)(param_1 + 0x7f8);
    uVar18 = *(undefined4 *)(param_1 + 0x7fc);
    *local_30 = *(undefined4 *)(param_1 + 0x7e0);
    local_30[1] = uVar8;
    local_30[2] = uVar9;
    local_30[3] = uVar11;
    local_30[4] = uVar13;
    local_30[5] = uVar14;
    local_30[6] = uVar17;
    local_30[7] = uVar18;
    uVar8 = *(undefined4 *)(param_1 + 0x80c);
    uVar9 = *(undefined4 *)(param_1 + 0x810);
    uVar11 = *(undefined4 *)(param_1 + 0x814);
    uVar13 = *(undefined4 *)(param_1 + 0x804);
    uVar14 = *(undefined4 *)(param_1 + 0x808);
    uVar17 = *(undefined4 *)(param_1 + 0x818);
    local_30[8] = *(undefined4 *)(param_1 + 0x800);
    puVar5 = local_30 + 9;
    local_30[0xb] = uVar8;
    local_30[0xc] = uVar9;
    local_30[0xd] = uVar11;
    local_30[0xe] = uVar17;
  }
  else {
    *(undefined4 *)(param_1 + 0x870) = DAT_003d4708;
    *(undefined4 *)(param_1 + 0x874) = uVar8;
    local_94 = param_1 + 0x8b0;
    local_90 = ALBW_AS_F32((param_1 + 0xcb0));
    local_8c = (float *)(param_1 + 0x8a4);
    local_68 = (float *)(param_1 + 0x7e4);
    local_88 = ALBW_AS_F32((param_1 + 0x10b0));
    local_84 = (float *)(param_1 + 0x8a8);
    local_64 = (float *)(param_1 + 0x7e8);
    local_6c = (float *)(param_1 + 0x14d0);
    uVar28 = (ulonglong)DAT_003d4720;
    local_60 = (uint *)(param_1 + 0x8ac);
    dVar26 = DAT_003d4718;
    dVar27 = DAT_003d4710;
    iVar15 = local_80;
    do {
      iVar15 = iVar15 + -1;
      *(undefined4 *)(param_1 + 0x820) = *(undefined4 *)(param_1 + 0x7e0);
      *(undefined4 *)(param_1 + 0x824) = *(undefined4 *)(param_1 + 0x7e4);
      *(undefined4 *)(param_1 + 0x828) = *(undefined4 *)(param_1 + 0x7e8);
      *local_60 = *(int *)(param_1 + 0x8ac) + 1U & 0xff;
      dVar22 = (double)VectorSignedToFloat((int)asStack_158[iVar15 * 3],(byte)(in_fpscr >> 0x15) & 3
                                          );
      dVar22 = (dVar22 - (double)*(float *)(param_1 + 0x87c)) * *(double *)(param_1 + 0x888) *
               (double)*(float *)(param_1 + 0x14b0);
      uVar10 = in_fpscr & 0xfffffff | (uint)(dVar27 <= dVar22) << 0x1d;
      if (SUB41(uVar10 >> 0x1d,0)) {
        dVar22 = dVar22 + dVar26;
      }
      else {
        dVar22 = dVar22 - dVar26;
      }
      iVar7 = VectorFloatToSigned(dVar22,3);
      dVar22 = dVar27;
      func_003D3BFC(param_1,(float *)(param_1 + 0x7e0),(int *)&local_15c,(float *)(param_1 + 0x8a0),
                    iVar7,local_94,*(float *)(param_1 + 0x838));
      dVar23 = (double)VectorSignedToFloat((int)asStack_158[iVar15 * 3 + 1],
                                           (byte)(uVar10 >> 0x15) & 3);
      dVar23 = (dVar23 - (double)*(float *)(param_1 + 0x880)) * *(double *)(param_1 + 0x890) *
               (double)*(float *)(param_1 + 0x14b4);
      uVar10 = uVar10 & 0xfffffff | (uint)(dVar27 <= dVar23) << 0x1d;
      if (SUB41(uVar10 >> 0x1d,0)) {
        dVar23 = dVar23 + dVar26;
      }
      else {
        dVar23 = dVar23 - dVar26;
      }
      iVar7 = VectorFloatToSigned(dVar23,3);
      func_003D3BFC(param_1,local_68,(int *)&local_98,local_8c,iVar7,(int)ALBW_AS_U32(local_90),
                    *(float *)(param_1 + 0x83c));
      dVar23 = (double)VectorSignedToFloat((int)asStack_158[iVar15 * 3 + 2],
                                           (byte)(uVar10 >> 0x15) & 3);
      dVar23 = (dVar23 - (double)*(float *)(param_1 + 0x884)) * *(double *)(param_1 + 0x898) *
               (double)*(float *)(param_1 + 0x14b8);
      uVar10 = uVar10 & 0xfffffff | (uint)(dVar27 <= dVar23) << 0x1d;
      if (SUB41(uVar10 >> 0x1d,0)) {
        dVar23 = dVar23 + dVar26;
      }
      else {
        dVar23 = dVar23 - dVar26;
      }
      iVar7 = VectorFloatToSigned(dVar23,3);
      fVar21 = local_88;
      func_003D3BFC(param_1,local_64,(int *)local_164,local_84,iVar7,(int)ALBW_AS_U32(local_88),
                    *(float *)(param_1 + 0x840));
      if (*(char *)(param_1 + 0x857) != '\0') {
        fVar24 = ALBW_AS_F32(uVar28);
        bVar3 = false;
        if (*local_6c == 1.0) {
          uVar10 = uVar10 & 0xfffffff | (uint)(local_6c[1] == fVar24) << 0x1e;
          bVar3 = SUB41(uVar10 >> 0x1e,0);
        }
        if (bVar3) {
          uVar4 = uVar10 & 0xfffffff;
          uVar10 = uVar4 | (uint)(local_6c[2] == fVar24) << 0x1e;
          bVar3 = false;
          if (SUB41(uVar10 >> 0x1e,0)) {
            uVar10 = uVar4 | (uint)(local_6c[3] == fVar24) << 0x1e;
            bVar3 = SUB41(uVar10 >> 0x1e,0);
          }
          bVar20 = false;
          if (bVar3) {
            uVar10 = uVar10 & 0xfffffff | (uint)(local_6c[4] == fVar24) << 0x1e;
            bVar20 = SUB41(uVar10 >> 0x1e,0);
          }
          if (bVar20) {
            bVar3 = false;
            if (local_6c[5] == 1.0) {
              uVar10 = uVar10 & 0xfffffff | (uint)(local_6c[6] == fVar24) << 0x1e;
              bVar3 = SUB41(uVar10 >> 0x1e,0);
            }
            if (bVar3) {
              uVar4 = uVar10 & 0xfffffff;
              uVar10 = uVar4 | (uint)(local_6c[7] == fVar24) << 0x1e;
              bVar3 = false;
              if (SUB41(uVar10 >> 0x1e,0)) {
                uVar10 = uVar4 | (uint)(local_6c[8] == fVar24) << 0x1e;
                bVar3 = SUB41(uVar10 >> 0x1e,0);
              }
              bVar20 = false;
              if (bVar3) {
                uVar10 = uVar10 & 0xfffffff | (uint)(local_6c[9] == fVar24) << 0x1e;
                bVar20 = SUB41(uVar10 >> 0x1e,0);
              }
              if (bVar20) {
                bVar3 = false;
                if (local_6c[10] == 1.0) {
                  uVar10 = uVar10 & 0xfffffff | (uint)(local_6c[0xb] == fVar24) << 0x1e;
                  bVar3 = SUB41(uVar10 >> 0x1e,0);
                }
                if (bVar3) goto LAB_003d46a4;
              }
            }
          }
        }
        func_00115074((float *)(param_1 + 0x7e0),local_6c,(float *)(param_1 + 0x7e0));
      }
LAB_003d46a4:
      *(float *)(param_1 + 0x82c) = *(float *)(param_1 + 0x7e0) - *(float *)(param_1 + 0x820);
      *(float *)(param_1 + 0x830) = *(float *)(param_1 + 0x7e4) - *(float *)(param_1 + 0x824);
      *(float *)(param_1 + 0x834) = *(float *)(param_1 + 0x7e8) - *(float *)(param_1 + 0x828);
      if ((int)ALBW_AS_U32(local_15c) < (int)ALBW_AS_U32(local_98)) {
        if ((int)ALBW_AS_U32(local_15c) < (int)ALBW_AS_U32(local_164[0])) {
          local_164[0] = local_15c;
        }
      }
      else if ((int)ALBW_AS_U32(local_98) < (int)ALBW_AS_U32(local_164[0])) {
        local_164[0] = local_98;
      }
      fVar24 = (float)VectorSignedToFloat((int)ALBW_AS_U32(local_164[0]) + -1,(byte)(uVar10 >> 0x15) & 3);
      fVar25 = (float)VectorSignedToFloat(*(int *)(param_1 + 0x860) + -1,(byte)(uVar10 >> 0x15) & 3)
      ;
      in_fpscr = uVar10 & 0xfffffff | (uint)(fVar24 / fVar25 <= *(float *)(param_1 + 0x874)) << 0x1d
      ;
      fVar24 = fVar24 / fVar25;
      if (!SUB41(in_fpscr >> 0x1d,0)) {
        fVar24 = *(float *)(param_1 + 0x874);
      }
      *(float *)(param_1 + 0x874) = fVar24;
      fVar24 = *(float *)(param_1 + 0x848);
      *(float *)(param_1 + 0x7ec) =
           *(float *)(param_1 + 0x7ec) + fVar24 * *(float *)(param_1 + 0x7e0);
      *(float *)(param_1 + 0x7f0) =
           *(float *)(param_1 + 0x7f0) + fVar24 * *(float *)(param_1 + 0x7e4);
      *(float *)(param_1 + 0x7f4) =
           *(float *)(param_1 + 0x7f4) + fVar24 * *(float *)(param_1 + 0x7e8);
      func_003D3A30(param_1);
      uVar8 = (undefined4)uVar28;
      if (iVar15 < local_28) {
        puVar5 = local_30 + iVar15 * 0xf;
        uVar9 = *(undefined4 *)(param_1 + 0x7e4);
        uVar11 = *(undefined4 *)(param_1 + 0x7e8);
        uVar13 = *(undefined4 *)(param_1 + 0x7ec);
        uVar14 = *(undefined4 *)(param_1 + 0x7f0);
        uVar18 = *(undefined4 *)(param_1 + 0x7f4);
        uVar17 = *(undefined4 *)(param_1 + 0x7f8);
        uVar19 = *(undefined4 *)(param_1 + 0x7fc);
        *puVar5 = *(undefined4 *)(param_1 + 0x7e0);
        puVar5[1] = uVar9;
        puVar5[2] = uVar11;
        puVar5[3] = uVar13;
        puVar5[4] = uVar14;
        puVar5[5] = uVar18;
        puVar5[6] = uVar17;
        puVar5[7] = uVar19;
        uVar9 = *(undefined4 *)(param_1 + 0x804);
        uVar11 = *(undefined4 *)(param_1 + 0x808);
        uVar13 = *(undefined4 *)(param_1 + 0x80c);
        uVar14 = *(undefined4 *)(param_1 + 0x810);
        uVar17 = *(undefined4 *)(param_1 + 0x814);
        uVar18 = *(undefined4 *)(param_1 + 0x818);
        puVar5[8] = *(undefined4 *)(param_1 + 0x800);
        puVar5[9] = uVar9;
        puVar5[10] = uVar11;
        puVar5[0xb] = uVar13;
        puVar5[0xc] = uVar14;
        puVar5[0xd] = uVar17;
        puVar5[0xe] = uVar18;
      }
      dVar27 = dVar22;
    } while (iVar15 != 0);
    iVar15 = local_80;
    if (local_28 < local_80) {
      iVar15 = local_28;
    }
    *local_2c = iVar15;
    if ((*(char *)(param_1 + 0x856) == '\0') ||
       (bVar3 = func_003D4D38(*(int **)(param_1 + 0x81c),asStack_7c), !bVar3)) {
      *(undefined4 *)(param_1 + 0x878) = uVar8;
      return;
    }
    func_003D4DFC(*(undefined4 *)(param_1 + 0x81c),(float *)&stack0xfffffe94,1,asStack_7c);
    local_90 = local_164[0];
    local_98 = fVar21;
    fVar21 = func_003D3DB8(param_1,(float *)(param_1 + 0x7f8),&local_98);
    *(float *)(param_1 + 0x878) = fVar21;
    if (local_28 < 1) {
      return;
    }
    uVar8 = *(undefined4 *)(param_1 + 0x7e4);
    uVar9 = *(undefined4 *)(param_1 + 0x7e8);
    uVar11 = *(undefined4 *)(param_1 + 0x7ec);
    uVar13 = *(undefined4 *)(param_1 + 0x7f0);
    uVar14 = *(undefined4 *)(param_1 + 0x7f4);
    uVar17 = *(undefined4 *)(param_1 + 0x7f8);
    uVar18 = *(undefined4 *)(param_1 + 0x7fc);
    *local_30 = *(undefined4 *)(param_1 + 0x7e0);
    local_30[1] = uVar8;
    local_30[2] = uVar9;
    local_30[3] = uVar11;
    local_30[4] = uVar13;
    local_30[5] = uVar14;
    local_30[6] = uVar17;
    local_30[7] = uVar18;
    uVar8 = *(undefined4 *)(param_1 + 0x800);
    uVar9 = *(undefined4 *)(param_1 + 0x804);
    uVar11 = *(undefined4 *)(param_1 + 0x808);
    uVar17 = *(undefined4 *)(param_1 + 0x80c);
    uVar13 = *(undefined4 *)(param_1 + 0x810);
    uVar14 = *(undefined4 *)(param_1 + 0x814);
    local_30[0xe] = *(undefined4 *)(param_1 + 0x818);
    local_30[8] = uVar8;
    local_30[9] = uVar9;
    local_30[10] = uVar11;
    local_30[0xb] = uVar17;
    puVar5 = local_30 + 0xc;
  }
  *puVar5 = uVar13;
  puVar5[1] = uVar14;
  return;
}

