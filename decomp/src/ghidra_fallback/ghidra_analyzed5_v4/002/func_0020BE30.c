#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115CA8(float *param_1,float *param_2,float *param_3);
extern int func_00115DAC(float *param_1,float *param_2,float *param_3,float fparam_0);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_0020B820(int param_1,int param_2);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004A3700(int param_1);
extern int func_004F6DA0(int param_1);
extern int func_004F6DE8(int param_1,float *param_2,float *param_3,float fparam_0);
extern int func_004F766C(int param_1,float *param_2,float *param_3,float fparam_0);
extern int func_004F7A00(int param_1);
extern int func_0051D2CC(int *param_1,int param_2,float fparam_0);
extern int func_00520FC0(void);
extern int func_0068C690(float *param_1);
extern float DAT_0020c18c;
extern float DAT_0020c190;
extern float DAT_0020c194;
extern float DAT_0020c198;
extern float DAT_0020c19c;
extern float DAT_0020c1a0;
extern float DAT_0020c1a4;
extern float DAT_0020c1a8;
extern int DAT_0020c1ac;
extern float DAT_0020c1b0;
extern float DAT_0020c1b4;
extern undefined DAT_0020c1b8;
extern float DAT_0020c1dc;
extern int DAT_0020c1e8;
extern int DAT_0020c1ec;
extern float DAT_0020c1f0;
extern float DAT_0020c1f4;
extern int DAT_0020c4d8;
extern int DAT_0020c4dc;
extern float DAT_0020c4e0;
extern float DAT_0020c4e4;
extern float DAT_0020c4e8;
extern float DAT_0020c4ec;
extern float DAT_0020c4f0;
extern float *DAT_0020c4f4;
extern undefined4 DAT_0020c4f8;
extern float DAT_0020c4fc;
extern char s_IceHit_0020c1e0[];
extern char s_cf_0020c1bc[];
extern undefined4 _DAT_0020c1b8;

// USA 0020BE30 <- EU 0020BE30 (Ghidra, non-matching)
// GLOBAL DAT_0020c18c float
// GLOBAL DAT_0020c190 float
// GLOBAL DAT_0020c194 float
// GLOBAL DAT_0020c198 float
// GLOBAL DAT_0020c19c float
// GLOBAL DAT_0020c1a0 float
// GLOBAL DAT_0020c1a4 float
// GLOBAL DAT_0020c1a8 float
// GLOBAL DAT_0020c1ac int
// GLOBAL DAT_0020c1b0 float
// GLOBAL DAT_0020c1b4 float
// GLOBAL DAT_0020c1b8 undefined
// GLOBAL DAT_0020c1dc float
// GLOBAL DAT_0020c1e8 int
// GLOBAL DAT_0020c1ec int
// GLOBAL DAT_0020c1f0 float
// GLOBAL DAT_0020c1f4 float
// GLOBAL DAT_0020c4d8 int
// GLOBAL DAT_0020c4dc int
// GLOBAL DAT_0020c4e0 float
// GLOBAL DAT_0020c4e4 float
// GLOBAL DAT_0020c4e8 float
// GLOBAL DAT_0020c4ec float
// GLOBAL DAT_0020c4f0 float
// GLOBAL DAT_0020c4f4 float *
// GLOBAL DAT_0020c4f8 undefined4
// GLOBAL DAT_0020c4fc float
// GLOBAL s_IceHit_0020c1e0 string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_0020BE30(int *param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  float *pfVar7;
  uint uVar8;
  float *pfVar9;
  uint in_fpscr;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  _Alignas(8) unsigned char albw_frame[0xb0];
  #define local_b0 (*(float *)(albw_frame + 0x0))
  #define local_ac (*(char * *)(albw_frame + 0x4))
  #define local_a8 ((int *)(albw_frame + 0x8))
  #define local_a0 (*(float *)(albw_frame + 0x10))
  #define local_9c (*(float *)(albw_frame + 0x14))
  #define local_98 (*(float *)(albw_frame + 0x18))
  #define afStack_90 ((float *)(albw_frame + 0x20))
  #define local_84 (*(float *)(albw_frame + 0x2c))
  #define local_80 (*(float *)(albw_frame + 0x30))
  #define local_7c (*(float *)(albw_frame + 0x34))
  #define local_78 (*(float *)(albw_frame + 0x38))
  #define uStack_74 (*(undefined4 *)(albw_frame + 0x3c))
  #define iStack_70 (*(int *)(albw_frame + 0x40))
  #define local_6c (*(float *)(albw_frame + 0x44))
  #define local_68 (*(float *)(albw_frame + 0x48))
  #define local_64 (*(float *)(albw_frame + 0x4c))
  #define local_60 (*(float *)(albw_frame + 0x50))
  #define local_5c (*(float *)(albw_frame + 0x54))
  #define local_58 (*(float *)(albw_frame + 0x58))
  #define afStack_54 ((float *)(albw_frame + 0x5c))
  fVar12 = ALBW_AS_F32(param_1[0x345]) * DAT_0020c18c;
  param_1[0x11c] = (int)ALBW_AS_U32((ALBW_AS_F32(param_1[0x343]) * DAT_0020c18c));
  param_1[0x11d] = param_1[0x344];
  param_1[0x11e] = (int)ALBW_AS_U32(fVar12);
  if ((char)param_1[0x230] == '\n') {
    pfVar9 = (float *)func_00520FC0();
    local_84 = *pfVar9;
    local_80 = pfVar9[1];
    local_7c = pfVar9[2];
  }
  else {
    local_80 = ALBW_AS_F32(param_1[0x2e7]);
    local_7c = ALBW_AS_F32(param_1[0x2e8]);
    local_84 = ALBW_AS_F32(param_1[0x2e6]);
  }
  func_00115C70(&local_b0,&local_84,(float *)(param_1 + 0xf4));
  local_78 = local_b0;
  uStack_74 = local_ac;
  iStack_70 = local_a8[0];
  local_a8[0] = func_0068C690(&local_78);
  fVar10 = DAT_0020c1a0;
  local_6c = DAT_0020c198;
  fVar12 = DAT_0020c190;
  uVar13 = CONCAT44(DAT_0020c198,
                    SQRT((ALBW_AS_F32(param_1[0xf4]) - local_84) * (ALBW_AS_F32(param_1[0xf4]) - local_84) +
                         (ALBW_AS_F32(param_1[0xf6]) - local_7c) * (ALBW_AS_F32(param_1[0xf6]) - local_7c)));
  param_1[0x15d] =
       (int)ALBW_AS_U32((ALBW_AS_F32(param_1[0x15d]) + (DAT_0020c194 - ALBW_AS_F32(param_1[0x15d])) * DAT_0020c190));
  local_68 = DAT_0020c19c;
  local_64 = local_6c;
  local_60 = local_6c;
  local_5c = DAT_0020c19c + ALBW_AS_F32(param_1[0x23e]) * fVar10;
  local_58 = local_6c;
  iVar4 = param_1[0x103];
  func_00115CA8(afStack_90,(float *)(iVar4 + 0x104),&local_6c);
  func_00115CA8(afStack_54,(float *)(iVar4 + 0x104),&local_60);
  iVar4 = DAT_0020c1ac;
  pfVar9 = (float *)(param_1 + 0x2ea);
  fVar10 = DAT_0020c1a8;
  fVar16 = DAT_0020c1b0;
  fVar11 = DAT_0020c1b4;
  fVar15 = DAT_0020c1a4;
  if (((char)param_1[0x230] == '\n') && (0x1d < param_1[0x22f])) {
    bVar2 = true;
    if ((char)param_1[0x36c] == '\0') {
      if (0x4f < param_1[0x22f]) {
        func_004F766C(param_1[0x23b],afStack_90,afStack_54,ALBW_AS_F32(param_1[0x23d]));
        iVar5 = func_004F7A00(param_1[0x23b]);
        iVar3 = _DAT_0020c1b8;
        if (iVar5 != 0) {
          param_1[0x29d] = 0x3c;
          param_1[0x29e] = iVar3;
          param_1[0x29c] = 0;
          local_ac = s_cf_0020c1bc;
          local_b0 = DAT_0020c1dc;
          func_00150A84(param_1,(int *)&local_b0,0);
          iVar4 = param_1[0x34f];
          if ((iVar4 != 0) && (*(int *)(iVar4 + 0x1c) == param_1[0x350])) {
            *(uint *)(iVar4 + 0x3c) = *(uint *)(iVar4 + 0x3c) & 0xffffffbb | 8;
            func_004A3700(iVar4);
          }
          func_004F6DA0(param_1[0x23a]);
          if (param_1[0xd1] != 0) {
            func_004A1B9C(local_a8,param_1[0xd1],(uint *)s_IceHit_0020c1e0);
          }
          *(undefined1 *)(param_1 + 0x36c) = 1;
          iVar4 = DAT_0020c1e8;
          param_1[0x36a] = 0x60;
          param_1[0x36b] = iVar4;
          param_1[0x369] = 0;
          return 0;
        }
        goto LAB_0020c0c8;
      }
LAB_0020c2b8:
      pfVar7 = (float *)func_00520FC0();
      if (DAT_0020c4d8 <
          (int)ALBW_AS_U32(SQRT((*pfVar7 - ALBW_AS_F32(param_1[0xf4])) * (*pfVar7 - ALBW_AS_F32(param_1[0xf4])) +
                    (pfVar7[2] - ALBW_AS_F32(param_1[0xf6])) * (pfVar7[2] - ALBW_AS_F32(param_1[0xf6]))))) {
        func_0051D2CC(param_1 + 0xfa,local_a8[0],DAT_0020c4e8);
        *pfVar9 = *pfVar9 + (DAT_0020c4ec - *pfVar9) * fVar12;
      }
      else {
        fVar10 = *pfVar9 + (fVar15 - *pfVar9) * fVar12;
LAB_0020c35c:
        *pfVar9 = fVar10;
      }
      goto LAB_0020c39c;
    }
  }
  else {
    bVar2 = false;
LAB_0020c0c8:
    if ((char)param_1[0x36c] == '\0') {
      if (bVar2) goto LAB_0020c2b8;
      if ((int)uVar13 < 0x3f000000) {
        return func_0020B820((int)param_1,-1);
      }
      func_0051D2CC(param_1 + 0xfa,local_a8[0],fVar10);
      fVar10 = *pfVar9;
      if ((int)uVar13 < DAT_0020c4dc) {
        fVar10 = fVar10 + (DAT_0020c4e0 - fVar10) * DAT_0020c4e4;
        goto LAB_0020c35c;
      }
      *pfVar9 = fVar10 + (DAT_0020c4f0 - fVar10) * fVar12;
LAB_0020c39c:
      fVar14 = ALBW_AS_F32(((ulonglong)uVar13 >> 0x20));
      uVar6 = param_1[0xfa];
      pfVar9 = (float *)(iVar4 + (uVar6 >> 0x18) * 0x10);
      fVar12 = (float)VectorUnsignedToFloat(uVar6 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
      param_1[0xf7] = (int)ALBW_AS_U32(((*pfVar9 + pfVar9[1] * fVar12 * fVar16) * ALBW_AS_F32(param_1[0x2ea])));
      fVar12 = (float)VectorUnsignedToFloat(uVar6 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
      param_1[0xf9] = (int)ALBW_AS_U32(((pfVar9[2] + pfVar9[3] * fVar12 * fVar16) * ALBW_AS_F32(param_1[0x2ea])));
      pfVar9 = DAT_0020c4f4;
      if (bVar2) {
        pfVar7 = (float *)(param_1 + 0x23d);
        uVar13 = CONCAT44(fVar14,DAT_0020c4f8);
        func_00115C70(&local_a0,DAT_0020c4f4,pfVar7);
        fVar12 = SQRT(local_a0 * local_a0 + local_9c * local_9c + local_98 * local_98);
        if (fVar12 <= ALBW_AS_F32(uVar13)) {
          fVar12 = pfVar9[1];
          fVar10 = pfVar9[2];
          *pfVar7 = *pfVar9;
          param_1[0x23e] = (int)ALBW_AS_U32(fVar12);
          param_1[0x23f] = (int)ALBW_AS_U32(fVar10);
        }
        else {
          fVar11 = fVar11 / fVar12;
          local_a0 = local_a0 * fVar11;
          local_9c = local_9c * fVar11;
          local_98 = local_98 * fVar11;
          func_00115DAC(pfVar7,&local_a0,pfVar7,ALBW_AS_F32(uVar13));
        }
        fVar14 = ALBW_AS_F32(((ulonglong)uVar13 >> 0x20));
        func_004F6DE8(param_1[0x23a],afStack_90,afStack_54,ALBW_AS_F32(param_1[0x23d]) * DAT_0020c4fc);
        if ((uint)param_1[0x2ed] <= (uint)param_1[0x2ec]) {
          func_0020B820((int)param_1,10);
        }
      }
      else {
        func_004F6DA0(param_1[0x23a]);
      }
      goto LAB_0020c4c8;
    }
  }
  fVar14 = ALBW_AS_F32(((ulonglong)uVar13 >> 0x20));
  uVar6 = param_1[0x369];
  uVar8 = param_1[0x36a];
  if (uVar6 < uVar8) {
    uVar6 = uVar6 + 1;
    param_1[0x369] = uVar6;
  }
  if (uVar8 <= uVar6) {
    param_1[0x2ed] = 0;
    param_1[0x2ee] = (int)ALBW_AS_U32(fVar14);
    param_1[0x2ec] = 0;
    func_0020B820((int)param_1,0);
    goto LAB_0020c4c8;
  }
  if ((uVar8 != 0 && uVar6 != 0) &&
     (fVar12 = (float)VectorUnsignedToFloat(uVar6,(byte)(in_fpscr >> 0x15) & 3),
     DAT_0020c1ec <= (int)ALBW_AS_U32((fVar12 * ALBW_AS_F32(param_1[0x36b]))))) {
    fVar12 = *pfVar9;
    fVar10 = (fVar15 - fVar12) * fVar10;
    if (fVar10 <= fVar14) {
      fVar10 = -fVar10;
    }
    uVar6 = in_fpscr & 0xfffffff | (uint)(DAT_0020c1f0 <= fVar10) << 0x1d;
    fVar11 = DAT_0020c1f0;
    if ((SUB41(uVar6 >> 0x1d,0)) &&
       (uVar6 = in_fpscr & 0xfffffff | (uint)(fVar10 < DAT_0020c1f4) << 0x1f |
                (uint)(fVar10 == DAT_0020c1f4) << 0x1e, bVar1 = (byte)(uVar6 >> 0x18),
       fVar11 = fVar10,
       !(bool)(bVar1 >> 6 & 1) && (bool)(bVar1 >> 7) == (NAN(fVar10) || NAN(DAT_0020c1f4)))) {
      fVar11 = DAT_0020c1f4;
    }
    uVar6 = uVar6 & 0xfffffff;
    uVar8 = uVar6 | (uint)(fVar12 < fVar15) << 0x1f | (uint)(fVar12 == fVar15) << 0x1e |
            (uint)(fVar15 <= fVar12) << 0x1d;
    in_fpscr = uVar8 | (uint)(NAN(fVar12) || NAN(fVar15)) << 0x1c;
    bVar1 = (byte)(uVar8 >> 0x18);
    if ((bool)(bVar1 >> 5 & 1)) {
      if (!(bool)(bVar1 >> 6 & 1) && bVar1 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
        fVar11 = fVar12 - fVar11;
        in_fpscr = uVar6 | (uint)(fVar11 == fVar15) << 0x1e | (uint)(fVar15 <= fVar11) << 0x1d;
        bVar1 = (byte)(in_fpscr >> 0x18);
        if ((!(bool)(bVar1 >> 5 & 1) || (bool)(bVar1 >> 6)) ||
           (uVar6 = uVar6 | (uint)(fVar11 < fVar12) << 0x1f | (uint)(fVar11 == fVar12) << 0x1e,
           in_fpscr = uVar6 | (uint)(NAN(fVar11) || NAN(fVar12)) << 0x1c,
           bVar1 = (byte)(uVar6 >> 0x18),
           !(bool)(bVar1 >> 6 & 1) && bVar1 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)))
        goto LAB_0020c184;
        goto LAB_0020c1f8;
      }
    }
    else {
      fVar11 = fVar12 + fVar11;
      in_fpscr = uVar6 | (uint)(fVar15 == fVar11) << 0x1e | (uint)(fVar11 <= fVar15) << 0x1d;
      bVar1 = (byte)(in_fpscr >> 0x18);
      if ((!(bool)(bVar1 >> 5 & 1) || (bool)(bVar1 >> 6)) ||
         (uVar6 = uVar6 | (uint)(fVar12 < fVar11) << 0x1f | (uint)(fVar12 == fVar11) << 0x1e,
         in_fpscr = uVar6 | (uint)(NAN(fVar12) || NAN(fVar11)) << 0x1c,
         bVar1 = (byte)(uVar6 >> 0x18),
         !(bool)(bVar1 >> 6 & 1) && bVar1 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1))) {
LAB_0020c184:
        *pfVar9 = fVar15;
      }
      else {
LAB_0020c1f8:
        *pfVar9 = fVar11;
      }
    }
  }
  uVar6 = param_1[0xfa];
  pfVar9 = (float *)(iVar4 + (uVar6 >> 0x18) * 0x10);
  fVar12 = (float)VectorUnsignedToFloat(uVar6 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
  param_1[0xf7] = (int)ALBW_AS_U32(((*pfVar9 + pfVar9[1] * fVar12 * fVar16) * ALBW_AS_F32(param_1[0x2ea])));
  fVar12 = (float)VectorUnsignedToFloat(uVar6 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
  param_1[0xf9] = (int)ALBW_AS_U32(((pfVar9[2] + pfVar9[3] * fVar12 * fVar16) * ALBW_AS_F32(param_1[0x2ea])));
LAB_0020c4c8:
  param_1[0xf5] = (int)ALBW_AS_U32(fVar14);
  return 0;
}

