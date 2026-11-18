#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_003E183C(float *param_1,float *param_2,float fparam_0);
extern int func_003FF2A8(float *param_1,int param_2,int param_3,int param_4,int param_5,int param_6);
extern undefined4 DAT_00568f98;
extern undefined4 DAT_00568f9c;
extern float DAT_00568fa0;
extern float DAT_00568fa4;
extern uint *DAT_00568fa8;
extern float *DAT_00568fac;

// USA 00568BD8 <- EU 00568BB0 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 float
// GLOBAL DAT_00568f98 undefined4
// GLOBAL DAT_00568f9c undefined4
// GLOBAL DAT_00568fa0 float
// GLOBAL DAT_00568fa4 float
// GLOBAL DAT_00568fa8 uint *
// GLOBAL DAT_00568fac float *

/* WARNING: Variable defined which should be unmapped: objStack_70 */
/* WARNING: Variable defined which should be unmapped: objStack_6c */

void func_00568BD8(undefined4 param_1,int param_2,undefined4 param_3,int param_4,float param_5)

{
  float *pfVar1;
  byte bVar2;
  int iVar3;
  undefined8 *puVar4;
  uint *puVar5;
  uint uVar6;
  float *pfVar7;
  int iVar8;
  float *pfVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  float *pfVar13;
  uint uVar14;
  uint uVar15;
  uint in_fpscr;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined8 uVar28;
  float fVar29;
  float fVar30;
  undefined8 uVar31;
  float fVar32;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define objStack_70 ((uint *)(albw_frame + 0x0))
  #define objStack_6c ((uint *)(albw_frame + 0x4))
  #define local_68 ((uint *)(albw_frame + 0x8))
  #define local_60 (*(float *)(albw_frame + 0x10))
  #define local_5c ((float *)(albw_frame + 0x14))
  #define uStack_34 (*(undefined4 *)(albw_frame + 0x3c))
  #define local_30 (*(int *)(albw_frame + 0x40))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x44))
  #define iStack_28 (*(int *)(albw_frame + 0x48))
  local_68[0] = (uint)(*(int *)(param_4 + 0x78) << 0x1a) >> 0x1e;
  local_68[1] = 3;
  puVar5 = local_68;
  if (3 < local_68[0]) {
    puVar5 = local_68 + 1;
  }
  uVar14 = *puVar5;
  bVar2 = *(byte *)(param_4 + 0x9e) & 4;
  if ((*(byte *)(param_4 + 0x9e) & 4) != 0) {
    bVar2 = 1;
  }
  uStack_34 = param_1;
  local_30 = param_2;
  uStack_2c = param_3;
  iStack_28 = param_4;
  if (bVar2 == 1) {
    uVar12 = 0;
    uVar10 = 0;
    if (uVar14 != 0) {
      do {
        bVar2 = *(byte *)(param_4 + uVar10 + 0x67);
        objStack_70[0] =
             (uint)*(byte *)(((uint)(*(int *)(param_4 + 0x74) << 0x1e) >> 0x19) +
                             ((uint)(*(int *)(param_4 + 0x74) << 0x1c) >> 0x1e) * 0x14 +
                             *(int *)(param_4 + 0x7c) + uVar10 * 8 + 1);
        if (objStack_70[0] == 3 || objStack_70[0] == 4) {
          if ((~(bVar2 >> 7) & 1) != 0) {
            objStack_6c[0] = uVar12;
            func_003FF2A8((float *)(param_4 + (uint)bVar2 * 0x10 + 4),local_30,param_4,uVar10,
                          objStack_70[0],uVar12);
          }
          uVar12 = uVar12 + 1;
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < uVar14);
    }
  }
  else {
    if (uVar14 == 0) {
      *(undefined1 *)(param_4 + 100) = 0;
      *(undefined1 *)(param_4 + 0x65) = 0;
      *(undefined1 *)(param_4 + 0x66) = 0;
    }
    else {
      uVar12 = 0;
      iVar11 = 0;
      uVar15 = 0;
      uVar10 = 0;
      local_5c[1] = 0.0;
      uVar31 = CONCAT44(DAT_00568f98,DAT_00568f9c);
      fVar29 = DAT_00568fa0;
      fVar30 = DAT_00568fa4;
      do {
        uVar6 = (uint)*(byte *)(((uint)(*(int *)(param_4 + 0x74) << 0x1e) >> 0x19) +
                                ((uint)(*(int *)(param_4 + 0x74) << 0x1c) >> 0x1e) * 0x14 +
                                *(int *)(param_4 + 0x7c) + uVar10 * 8 + 1);
        switch(uVar6) {
        case 0:
        case 1:
        case 2:
          iVar8 = param_4 + iVar11 * 0x10;
          pfVar9 = (float *)(iVar8 + 4);
          *(undefined1 *)(param_4 + uVar10 + 0x67) = 0x80;
          if (param_5 == 0.0) {
            puVar4 = (undefined8 *)
                     (*(int *)(param_4 + 0x7c) + ((uint)(*(int *)(param_4 + 0x74) << 0x1e) >> 0x19)
                     + uVar10 * 0x14);
            fVar17 = *(float *)((int)puVar4 + 0xc);
            fVar16 = *(float *)(puVar4 + 2);
            in_fpscr = in_fpscr & 0xfffffff | (uint)(*(float *)(puVar4 + 1) == fVar29) << 0x1e;
            uVar28 = *puVar4;
            if (!SUB41(in_fpscr >> 0x1e,0)) {
              func_003E183C((float *)objStack_6c,(float *)objStack_70,
                            *(float *)(puVar4 + 1) * fVar30);
              fVar18 = ALBW_AS_F32(uVar31);
              *(float *)(iVar8 + 0xc) = fVar29;
              *(float *)(iVar8 + 0x10) =
                   ALBW_AS_F32(uVar28) + fVar18 +
                   (ALBW_AS_F32(objStack_6c[0]) * fVar16 - ALBW_AS_F32(objStack_70[0]) * fVar17) * fVar18;
              *pfVar9 = ALBW_AS_F32(objStack_70[0]) * fVar17;
              *(float *)(iVar8 + 8) = -(ALBW_AS_F32(objStack_6c[0]) * fVar16);
              *(float *)(iVar8 + 0x1c) = fVar29;
              *(float *)(iVar8 + 0x20) =
                   (ALBW_AS_F32(((ulonglong)uVar28 >> 0x20)) + fVar18) -
                   (ALBW_AS_F32(objStack_6c[0]) * fVar17 + ALBW_AS_F32(objStack_70[0]) * fVar16) * fVar18;
              *(float *)(iVar8 + 0x14) = ALBW_AS_F32(objStack_6c[0]) * fVar17;
              *(float *)(iVar8 + 0x18) = ALBW_AS_F32(objStack_70[0]) * fVar16;
              goto LAB_00569080;
            }
            fVar18 = ALBW_AS_F32(uVar31);
            *pfVar9 = fVar17;
            *(float *)(iVar8 + 8) = fVar16;
            *(float *)(iVar8 + 0xc) = (ALBW_AS_F32(uVar28) - fVar17 * fVar18) + fVar18;
            *(float *)(iVar8 + 0x10) =
                 (ALBW_AS_F32(((ulonglong)uVar28 >> 0x20)) - fVar16 * fVar18) + fVar18;
LAB_00569004:
            uVar6 = 0x10 >> ((uVar10 & 0x7f) << 1);
            iVar11 = iVar11 + 1;
          }
          else {
            objStack_6c[0] = (uint)ALBW_AS_U32(param_5);
            objStack_70[0] = uVar6;
            if (((*DAT_00568fa8 & 1) == 0) &&
               (iVar3 = func_00100174((int *)DAT_00568fa8), pfVar13 = DAT_00568fac, iVar3 != 0)) {
              *DAT_00568fac = ALBW_AS_F32(uVar31);
              pfVar13[1] = ALBW_AS_F32(uVar31);
            }
            iVar3 = *(int *)(param_4 + 0x7c) + uVar10 * 0x20;
            fVar16 = (float)VectorUnsignedToFloat
                                      ((uint)*(ushort *)(iVar3 + 4),(byte)(in_fpscr >> 0x15) & 3);
            fVar17 = (float)VectorUnsignedToFloat
                                      ((uint)*(ushort *)(iVar3 + 0x10),(byte)(in_fpscr >> 0x15) & 3)
            ;
            fVar20 = (float)VectorUnsignedToFloat
                                      ((uint)*(ushort *)(iVar3 + 6),(byte)(in_fpscr >> 0x15) & 3);
            fVar18 = (float)VectorUnsignedToFloat
                                      ((uint)*(ushort *)(iVar3 + 0x12),(byte)(in_fpscr >> 0x15) & 3)
            ;
            pfVar13 = (float *)(*(int *)(param_4 + 0x7c) +
                                ((uint)(*(int *)(param_4 + 0x74) << 0x1e) >> 0x19) + uVar10 * 0x14);
            fVar16 = fVar16 / fVar17;
            uVar6 = in_fpscr & 0xfffffff | (uint)(pfVar13[2] == fVar29) << 0x1e;
            fVar20 = fVar20 / fVar18;
            uVar28 = *(undefined8 *)(pfVar13 + 3);
            if ((SUB41(uVar6 >> 0x1e,0) && (int)uVar28 == 0x3f800000) &&
                (int)((ulonglong)uVar28 >> 0x20) == 0x3f800000) {
              fVar19 = ALBW_AS_F32(((ulonglong)uVar31 >> 0x20));
              fVar17 = *pfVar13;
              fVar18 = pfVar13[1];
              pfVar13 = (float *)(objStack_6c[0] + objStack_70[0] * 0x20);
              *pfVar9 = (*pfVar13 + fVar17) * fVar16;
              *(float *)(iVar8 + 8) = fVar19 - (pfVar13[1] + fVar18) * fVar20;
              *(float *)(iVar8 + 0xc) = (pfVar13[6] + fVar17) * fVar16;
              *(float *)(iVar8 + 0x10) = fVar19 - (pfVar13[7] + fVar18) * fVar20;
              *(float *)(iVar8 + 0x14) = (pfVar13[4] + fVar17) * fVar16;
              *(float *)(iVar8 + 0x18) = fVar19 - (pfVar13[5] + fVar18) * fVar20;
              *(float *)(iVar8 + 0x1c) = (pfVar13[2] + fVar17) * fVar16;
              *(float *)(iVar8 + 0x20) = fVar19 - (pfVar13[3] + fVar18) * fVar20;
            }
            else {
              func_003E183C(local_5c,&local_60,pfVar13[2] * fVar30);
              pfVar1 = DAT_00568fac;
              pfVar7 = (float *)(objStack_6c[0] + objStack_70[0] * 0x20);
              fVar21 = ALBW_AS_F32(((ulonglong)uVar28 >> 0x20));
              fVar22 = *DAT_00568fac;
              fVar23 = DAT_00568fac[1];
              fVar24 = *pfVar7;
              fVar25 = pfVar7[1];
              fVar17 = local_60 * ALBW_AS_F32(uVar28) * fVar16;
              fVar19 = local_5c[0] * ALBW_AS_F32(uVar28) * fVar20;
              fVar26 = pfVar7[6];
              fVar27 = pfVar7[7];
              fVar18 = -(local_5c[0] * fVar21) * fVar16;
              fVar21 = local_60 * fVar21 * fVar20;
              fVar16 = (fVar22 + *pfVar13) * fVar16;
              fVar20 = (fVar23 + pfVar13[1]) * fVar20;
              *pfVar9 = fVar17 * (fVar24 - fVar22) + fVar18 * (fVar25 - fVar23) + fVar16;
              fVar32 = ALBW_AS_F32(((ulonglong)uVar31 >> 0x20));
              *(float *)(iVar8 + 8) =
                   fVar32 - (fVar19 * (fVar24 - fVar22) + fVar21 * (fVar25 - fVar23) + fVar20);
              *(float *)(iVar8 + 0xc) =
                   fVar17 * (fVar26 - fVar22) + fVar18 * (fVar27 - fVar23) + fVar16;
              *(float *)(iVar8 + 0x10) =
                   fVar32 - (fVar19 * (fVar26 - fVar22) + fVar21 * (fVar27 - fVar23) + fVar20);
              fVar24 = *pfVar1;
              fVar23 = pfVar1[1];
              fVar25 = pfVar7[4] - fVar24;
              fVar22 = pfVar7[5] - fVar23;
              fVar24 = pfVar7[2] - fVar24;
              fVar23 = pfVar7[3] - fVar23;
              *(float *)(iVar8 + 0x14) = fVar17 * fVar25 + fVar18 * fVar22 + fVar16;
              *(float *)(iVar8 + 0x1c) = fVar17 * fVar24 + fVar18 * fVar23 + fVar16;
              *(float *)(iVar8 + 0x18) = fVar32 - (fVar19 * fVar25 + fVar21 * fVar22 + fVar20);
              *(float *)(iVar8 + 0x20) = fVar32 - (fVar19 * fVar24 + fVar21 * fVar23 + fVar20);
            }
            uVar6 = uVar6 & 0xfffffff;
            in_fpscr = uVar6 | (uint)(*pfVar9 == *(float *)(iVar8 + 0x14)) << 0x1e;
            if ((((SUB41(in_fpscr >> 0x1e,0)) &&
                 (in_fpscr = uVar6 | (uint)(*(float *)(iVar8 + 0xc) == *(float *)(iVar8 + 0x1c)) <<
                                     0x1e, SUB41(in_fpscr >> 0x1e,0))) &&
                (in_fpscr = uVar6 | (uint)(*(float *)(iVar8 + 8) == *(float *)(iVar8 + 0x20)) <<
                                    0x1e, SUB41(in_fpscr >> 0x1e,0))) &&
               (in_fpscr = uVar6 | (uint)(*(float *)(iVar8 + 0x10) == *(float *)(iVar8 + 0x18)) <<
                                   0x1e, SUB41(in_fpscr >> 0x1e,0))) goto LAB_00569004;
LAB_00569080:
            uVar6 = 0x20 >> ((uVar10 & 0x7f) << 1);
            iVar11 = iVar11 + 2;
          }
          uVar12 = uVar12 | uVar6;
          break;
        case 3:
        case 4:
          objStack_70[0] = uVar6;
          objStack_6c[0] = uVar15;
          func_003FF2A8((float *)(param_4 + iVar11 * 0x10 + 4),local_30,param_4,uVar10,uVar6,uVar15)
          ;
          local_5c[1] = 1.4013e-45;
          *(char *)(param_4 + uVar10 + 0x67) = (char)iVar11;
          uVar12 = uVar12 | 0x30U >> ((uVar10 & 0x7f) << 1);
          iVar11 = iVar11 + 2;
          uVar15 = uVar15 + 1;
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < uVar14);
      *(char *)(param_4 + 100) = (char)iVar11;
      *(char *)(param_4 + 0x66) = SUB41(local_5c[1],0);
      *(char *)(param_4 + 0x65) = (char)uVar12;
    }
    *(byte *)(param_4 + 0x9e) = *(byte *)(param_4 + 0x9e) & 0xfb | 4;
  }
  return;
}

