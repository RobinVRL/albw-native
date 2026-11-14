/* compilefix: USA 0020BE2C (EU 0020BE2C), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: use of undeclared identifier 's_'
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - Ghidra string label with punctuation (s_T<SE_..._ADDR + n) -> s_cf_<ADDR+n>, the same code-section address (checked: add rX,pc,#imm in the ARM) [2]
 *  - explicit (T)(uintptr_t) casts at int<->pointer mismatches (identity on the 32-bit ARM) [1]
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
extern char s_cf_0020c1bb[];
extern char s_cf_0020c1bc[];
#include "compilefix.h"

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
extern undefined4 DAT_0020c1e8;
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
extern undefined4 _DAT_0020c1b8;

// USA 0020BE2C <- EU 0020BE2C (Ghidra, non-matching)
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
// GLOBAL DAT_0020c1e8 undefined4
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
// GLOBAL s_cf_0020c1bb string
// GLOBAL s_IceHit_0020c1e0 string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_0020BE2C(int param_1)

{
  byte bVar1;
  bool bVar2;
  undefined4 uVar3;
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
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar16;
  _Alignas(8) unsigned char albw_frame[0xb0];
  #define fStack_b0 (*(float *)(albw_frame + 0x0))
  #define pcStack_ac (*(char * *)(albw_frame + 0x4))
  #define aiStack_a8 ((int *)(albw_frame + 0x8))
  #define fStack_a0 (*(float *)(albw_frame + 0x10))
  #define fStack_9c (*(float *)(albw_frame + 0x14))
  #define fStack_98 (*(float *)(albw_frame + 0x18))
  #define afStack_90 ((float *)(albw_frame + 0x20))
  #define fStack_84 (*(float *)(albw_frame + 0x2c))
  #define fStack_80 (*(float *)(albw_frame + 0x30))
  #define fStack_7c (*(float *)(albw_frame + 0x34))
  #define fStack_78 (*(float *)(albw_frame + 0x38))
  #define uStack_74 (*(undefined4 *)(albw_frame + 0x3c))
  #define iStack_70 (*(int *)(albw_frame + 0x40))
  #define fStack_6c (*(float *)(albw_frame + 0x44))
  #define fStack_68 (*(float *)(albw_frame + 0x48))
  #define fStack_64 (*(float *)(albw_frame + 0x4c))
  #define fStack_60 (*(float *)(albw_frame + 0x50))
  #define fStack_5c (*(float *)(albw_frame + 0x54))
  #define fStack_58 (*(float *)(albw_frame + 0x58))
  #define afStack_54 ((float *)(albw_frame + 0x5c))
  fVar12 = *(float *)(param_1 + 0xd14) * DAT_0020c18c;
  *(float *)(param_1 + 0x470) = *(float *)(param_1 + 0xd0c) * DAT_0020c18c;
  *(undefined4 *)(param_1 + 0x474) = *(undefined4 *)(param_1 + 0xd10);
  *(float *)(param_1 + 0x478) = fVar12;
  if (*(char *)(param_1 + 0x8c0) == '\n') {
    pfVar9 = (float *)func_00520FC0();
    fStack_84 = *pfVar9;
    fStack_80 = pfVar9[1];
    fStack_7c = pfVar9[2];
  }
  else {
    fStack_80 = *(float *)(param_1 + 0xb9c);
    fStack_7c = *(float *)(param_1 + 0xba0);
    fStack_84 = *(float *)(param_1 + 0xb98);
  }
  func_00115C70(&fStack_b0,&fStack_84,(float *)(param_1 + 0x3d0));
  fStack_78 = fStack_b0;
  uStack_74 = (undefined4)(uintptr_t)(pcStack_ac);
  iStack_70 = aiStack_a8[0];
  aiStack_a8[0] = func_0068C690(&fStack_78);
  fVar11 = DAT_0020c1a0;
  fStack_6c = DAT_0020c198;
  fVar12 = DAT_0020c190;
  fVar10 = *(float *)(param_1 + 0x3d0) - fStack_84;
  fVar13 = *(float *)(param_1 + 0x3d8) - fStack_7c;
  uVar15 = CONCAT44(DAT_0020c198,SQRT(fVar10 * fVar10 + fVar13 * fVar13));
  *(float *)(param_1 + 0x574) =
       *(float *)(param_1 + 0x574) + (DAT_0020c194 - *(float *)(param_1 + 0x574)) * DAT_0020c190;
  fStack_68 = DAT_0020c19c;
  fStack_64 = fStack_6c;
  fStack_60 = fStack_6c;
  fStack_5c = DAT_0020c19c + *(float *)(param_1 + 0x8f8) * fVar11;
  fStack_58 = fStack_6c;
  pfVar9 = (float *)(*(int *)(param_1 + 0x40c) + 0x104);
  func_00115CA8(afStack_90,pfVar9,&fStack_6c);
  func_00115CA8(afStack_54,pfVar9,&fStack_60);
  iVar5 = DAT_0020c1ac;
  pfVar9 = (float *)(param_1 + 0xba8);
  fVar11 = DAT_0020c1a8;
  fVar10 = DAT_0020c1b0;
  fVar13 = DAT_0020c1b4;
  fVar16 = DAT_0020c1a4;
  if ((*(char *)(param_1 + 0x8c0) == '\n') && (0x1d < *(int *)(param_1 + 0x8bc))) {
    bVar2 = true;
    if (*(char *)(param_1 + 0xdb0) == '\0') {
      if (0x4f < *(int *)(param_1 + 0x8bc)) {
        func_004F766C(*(int *)(param_1 + 0x8ec),afStack_90,afStack_54,*(float *)(param_1 + 0x8f4));
        iVar4 = func_004F7A00(*(int *)(param_1 + 0x8ec));
        uVar3 = _DAT_0020c1b8;
        if (iVar4 != 0) {
          *(undefined4 *)(param_1 + 0xa74) = 0x3c;
          *(undefined4 *)(param_1 + 0xa78) = uVar3;
          *(undefined4 *)(param_1 + 0xa70) = 0;
          pcStack_ac = s_cf_0020c1bc;
          fStack_b0 = DAT_0020c1dc;
          func_00150A84((int *)param_1,(int *)&fStack_b0,0);
          iVar5 = *(int *)(param_1 + 0xd3c);
          if ((iVar5 != 0) && (*(int *)(iVar5 + 0x1c) == *(int *)(param_1 + 0xd40))) {
            *(uint *)(iVar5 + 0x3c) = *(uint *)(iVar5 + 0x3c) & 0xffffffbb | 8;
            func_004A3700(iVar5);
          }
          func_004F6DA0(*(int *)(param_1 + 0x8e8));
          if (*(int *)(param_1 + 0x344) != 0) {
            func_004A1B9C(aiStack_a8,*(int *)(param_1 + 0x344),(uint *)s_IceHit_0020c1e0);
          }
          *(undefined1 *)(param_1 + 0xdb0) = 1;
          uVar3 = DAT_0020c1e8;
          *(undefined4 *)(param_1 + 0xda8) = 0x60;
          *(undefined4 *)(param_1 + 0xdac) = uVar3;
          *(undefined4 *)(param_1 + 0xda4) = 0;
          return 0;
        }
        goto LAB_0020c0c8;
      }
LAB_0020c2b8:
      pfVar7 = (float *)func_00520FC0();
      fVar14 = *pfVar7 - *(float *)(param_1 + 0x3d0);
      fVar11 = pfVar7[2] - *(float *)(param_1 + 0x3d8);
      if (DAT_0020c4d8 < (int)ALBW_AS_U32(SQRT(fVar14 * fVar14 + fVar11 * fVar11))) {
        func_0051D2CC((int *)(param_1 + 1000),aiStack_a8[0],DAT_0020c4e8);
        *pfVar9 = *pfVar9 + (DAT_0020c4ec - *pfVar9) * fVar12;
      }
      else {
        fVar11 = *pfVar9 + (fVar16 - *pfVar9) * fVar12;
LAB_0020c35c:
        *pfVar9 = fVar11;
      }
      goto LAB_0020c39c;
    }
  }
  else {
    bVar2 = false;
LAB_0020c0c8:
    if (*(char *)(param_1 + 0xdb0) == '\0') {
      if (bVar2) goto LAB_0020c2b8;
      if ((int)uVar15 < 0x3f000000) {
        return func_0020B820(param_1,-1);
      }
      func_0051D2CC((int *)(param_1 + 1000),aiStack_a8[0],fVar11);
      fVar11 = *pfVar9;
      if ((int)uVar15 < DAT_0020c4dc) {
        fVar11 = fVar11 + (DAT_0020c4e0 - fVar11) * DAT_0020c4e4;
        goto LAB_0020c35c;
      }
      *pfVar9 = fVar11 + (DAT_0020c4f0 - fVar11) * fVar12;
LAB_0020c39c:
      fVar14 = ALBW_AS_F32(((ulonglong)uVar15 >> 0x20));
      uVar6 = *(uint *)(param_1 + 1000);
      pfVar9 = (float *)(iVar5 + (uVar6 >> 0x18) * 0x10);
      fVar12 = (float)VectorUnsignedToFloat(uVar6 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
      *(float *)(param_1 + 0x3dc) =
           (*pfVar9 + pfVar9[1] * fVar12 * fVar10) * *(float *)(param_1 + 0xba8);
      fVar12 = (float)VectorUnsignedToFloat(uVar6 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
      *(float *)(param_1 + 0x3e4) =
           (pfVar9[2] + pfVar9[3] * fVar12 * fVar10) * *(float *)(param_1 + 0xba8);
      pfVar9 = DAT_0020c4f4;
      if (bVar2) {
        pfVar7 = (float *)(param_1 + 0x8f4);
        uVar15 = CONCAT44(fVar14,DAT_0020c4f8);
        func_00115C70(&fStack_a0,DAT_0020c4f4,pfVar7);
        fVar12 = SQRT(fStack_a0 * fStack_a0 + fStack_9c * fStack_9c + fStack_98 * fStack_98);
        if (fVar12 <= ALBW_AS_F32(uVar15)) {
          fVar12 = pfVar9[1];
          fVar11 = pfVar9[2];
          *pfVar7 = *pfVar9;
          *(float *)(param_1 + 0x8f8) = fVar12;
          *(float *)(param_1 + 0x8fc) = fVar11;
        }
        else {
          fVar13 = fVar13 / fVar12;
          fStack_a0 = fStack_a0 * fVar13;
          fStack_9c = fStack_9c * fVar13;
          fStack_98 = fStack_98 * fVar13;
          func_00115DAC(pfVar7,&fStack_a0,pfVar7,ALBW_AS_F32(uVar15));
        }
        fVar14 = ALBW_AS_F32(((ulonglong)uVar15 >> 0x20));
        func_004F6DE8(*(int *)(param_1 + 0x8e8),afStack_90,afStack_54,
                      *(float *)(param_1 + 0x8f4) * DAT_0020c4fc);
        if (*(uint *)(param_1 + 0xbb4) <= *(uint *)(param_1 + 0xbb0)) {
          func_0020B820(param_1,10);
        }
      }
      else {
        func_004F6DA0(*(int *)(param_1 + 0x8e8));
      }
      goto LAB_0020c4c8;
    }
  }
  fVar14 = ALBW_AS_F32(((ulonglong)uVar15 >> 0x20));
  uVar6 = *(uint *)(param_1 + 0xda4);
  uVar8 = *(uint *)(param_1 + 0xda8);
  if (uVar6 < uVar8) {
    uVar6 = uVar6 + 1;
    *(uint *)(param_1 + 0xda4) = uVar6;
  }
  if (uVar8 <= uVar6) {
    *(undefined4 *)(param_1 + 0xbb4) = 0;
    *(float *)(param_1 + 3000) = fVar14;
    *(undefined4 *)(param_1 + 0xbb0) = 0;
    func_0020B820(param_1,0);
    goto LAB_0020c4c8;
  }
  if ((uVar8 != 0 && uVar6 != 0) &&
     (fVar12 = (float)VectorUnsignedToFloat(uVar6,(byte)(in_fpscr >> 0x15) & 3),
     DAT_0020c1ec <= (int)ALBW_AS_U32((fVar12 * *(float *)(param_1 + 0xdac))))) {
    fVar12 = *pfVar9;
    fVar11 = (fVar16 - fVar12) * fVar11;
    if (fVar11 <= fVar14) {
      fVar11 = -fVar11;
    }
    uVar6 = in_fpscr & 0xfffffff | (uint)(DAT_0020c1f0 <= fVar11) << 0x1d;
    fVar13 = DAT_0020c1f0;
    if ((SUB41(uVar6 >> 0x1d,0)) &&
       (uVar6 = in_fpscr & 0xfffffff | (uint)(fVar11 < DAT_0020c1f4) << 0x1f |
                (uint)(fVar11 == DAT_0020c1f4) << 0x1e, bVar1 = (byte)(uVar6 >> 0x18),
       fVar13 = fVar11,
       !(bool)(bVar1 >> 6 & 1) && (bool)(bVar1 >> 7) == (NAN(fVar11) || NAN(DAT_0020c1f4)))) {
      fVar13 = DAT_0020c1f4;
    }
    uVar6 = uVar6 & 0xfffffff;
    uVar8 = uVar6 | (uint)(fVar12 < fVar16) << 0x1f | (uint)(fVar12 == fVar16) << 0x1e |
            (uint)(fVar16 <= fVar12) << 0x1d;
    in_fpscr = uVar8 | (uint)(NAN(fVar12) || NAN(fVar16)) << 0x1c;
    bVar1 = (byte)(uVar8 >> 0x18);
    if ((bool)(bVar1 >> 5 & 1)) {
      if (!(bool)(bVar1 >> 6 & 1) && bVar1 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
        fVar13 = fVar12 - fVar13;
        in_fpscr = uVar6 | (uint)(fVar13 == fVar16) << 0x1e | (uint)(fVar16 <= fVar13) << 0x1d;
        bVar1 = (byte)(in_fpscr >> 0x18);
        if ((!(bool)(bVar1 >> 5 & 1) || (bool)(bVar1 >> 6)) ||
           (uVar6 = uVar6 | (uint)(fVar13 < fVar12) << 0x1f | (uint)(fVar13 == fVar12) << 0x1e,
           in_fpscr = uVar6 | (uint)(NAN(fVar13) || NAN(fVar12)) << 0x1c,
           bVar1 = (byte)(uVar6 >> 0x18),
           !(bool)(bVar1 >> 6 & 1) && bVar1 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)))
        goto LAB_0020c184;
        goto LAB_0020c1f8;
      }
    }
    else {
      fVar13 = fVar12 + fVar13;
      in_fpscr = uVar6 | (uint)(fVar16 == fVar13) << 0x1e | (uint)(fVar13 <= fVar16) << 0x1d;
      bVar1 = (byte)(in_fpscr >> 0x18);
      if ((!(bool)(bVar1 >> 5 & 1) || (bool)(bVar1 >> 6)) ||
         (uVar6 = uVar6 | (uint)(fVar12 < fVar13) << 0x1f | (uint)(fVar12 == fVar13) << 0x1e,
         in_fpscr = uVar6 | (uint)(NAN(fVar12) || NAN(fVar13)) << 0x1c,
         bVar1 = (byte)(uVar6 >> 0x18),
         !(bool)(bVar1 >> 6 & 1) && bVar1 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1))) {
LAB_0020c184:
        *pfVar9 = fVar16;
      }
      else {
LAB_0020c1f8:
        *pfVar9 = fVar13;
      }
    }
  }
  uVar6 = *(uint *)(param_1 + 1000);
  pfVar9 = (float *)(iVar5 + (uVar6 >> 0x18) * 0x10);
  fVar12 = (float)VectorUnsignedToFloat(uVar6 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
  *(float *)(param_1 + 0x3dc) =
       (*pfVar9 + pfVar9[1] * fVar12 * fVar10) * *(float *)(param_1 + 0xba8);
  fVar12 = (float)VectorUnsignedToFloat(uVar6 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
  *(float *)(param_1 + 0x3e4) =
       (pfVar9[2] + pfVar9[3] * fVar12 * fVar10) * *(float *)(param_1 + 0xba8);
LAB_0020c4c8:
  *(float *)(param_1 + 0x3d4) = fVar14;
  return 0;
}

