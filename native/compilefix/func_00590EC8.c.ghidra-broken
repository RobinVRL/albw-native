/* compilefix: USA 00590EC8 (EU 00590EA0), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: use of undeclared identifier 'INFINITY'
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - Ghidra NAN(x)/INFINITY -> __builtin_isnan(x) (vcmp unordered) / +inf [1]
 *  - implicit float<->int conversions (Ghidra COPY between a float and an int-typed variable or
 *    pool word) made bit copies
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
#define CF_MATHCONST
#include "compilefix.h"

extern int func_00100986(undefined4 param_1);
extern int func_0058FBFC(uint param_1);
extern float func_005919B4(void);
extern int func_00691F18(undefined4 param_1);
extern float DAT_005911ac;
extern float DAT_005911b0;
extern float DAT_005911b4;
extern float DAT_005911b8;
extern uint DAT_005911bc;
extern float DAT_005911c0;
extern undefined4 DAT_005911c8;
extern undefined4 DAT_005911cc;
extern int DAT_005914c0;
extern float DAT_005914c4;
extern float DAT_005914c8;
extern double DAT_005914d0;
extern float DAT_005914d8;
extern float DAT_005914dc;
extern float DAT_005914e0;
extern float DAT_005914e4;
extern float DAT_005914e8;
extern float DAT_005914ec;
extern float DAT_005914f0;
extern float DAT_005914f4;
extern float DAT_005914f8;
extern int DAT_005914fc;
extern float DAT_00591500;
extern float DAT_00591504;
extern float DAT_00591508;
extern float DAT_0059150c;
extern int DAT_00591510;
extern int DAT_00591514;
extern int DAT_00591518;
extern float DAT_0059151c;
extern float DAT_00591520;
extern float DAT_00591524;
extern float DAT_0059160c;
extern float DAT_00591610;

// USA 00590EC8 <- EU 00590EA0 (Ghidra, non-matching)
// GLOBAL DAT_005911ac float
// GLOBAL DAT_005911b0 float
// GLOBAL DAT_005911b4 float
// GLOBAL DAT_005911b8 float
// GLOBAL DAT_005911bc uint
// GLOBAL DAT_005911c0 float
// GLOBAL DAT_005911c8 undefined4
// GLOBAL DAT_005911cc undefined4
// GLOBAL DAT_005914c0 int
// GLOBAL DAT_005914c4 float
// GLOBAL DAT_005914c8 float
// GLOBAL DAT_005914d0 double
// GLOBAL DAT_005914d8 float
// GLOBAL DAT_005914dc float
// GLOBAL DAT_005914e0 float
// GLOBAL DAT_005914e4 float
// GLOBAL DAT_005914e8 float
// GLOBAL DAT_005914ec float
// GLOBAL DAT_005914f0 float
// GLOBAL DAT_005914f4 float
// GLOBAL DAT_005914f8 float
// GLOBAL DAT_005914fc int
// GLOBAL DAT_00591500 float
// GLOBAL DAT_00591504 float
// GLOBAL DAT_00591508 float
// GLOBAL DAT_0059150c float
// GLOBAL DAT_00591510 int
// GLOBAL DAT_00591514 int
// GLOBAL DAT_00591518 int
// GLOBAL DAT_0059151c float
// GLOBAL DAT_00591520 float
// GLOBAL DAT_00591524 float
// GLOBAL DAT_0059160c float
// GLOBAL DAT_00591610 float
// GLOBAL UNK_005911c4 undefined4

float func_00590EC8(float fparam_0,float fparam_1)

{
  float fVar1;
  float *pfVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  uint in_fpscr;
  float fVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  iVar4 = 0;
  uVar5 = (int)ALBW_AS_U32(fparam_1) * 2 + 0x2000000;
  fVar1 = fparam_1;
  fVar16 = DAT_005911ac;
  if (0x7effffff < (int)ALBW_AS_U32(fparam_0) - 0x800000U) {
    if (uVar5 < 0x40000000) goto LAB_00590f98;
    goto LAB_00590ef0;
  }
  if (0x3fffffff < uVar5) goto LAB_005911d0;
LAB_00590f98:
  uVar5 = (int)ALBW_AS_U32(fparam_1) * 2 + 0x2000000;
  if (uVar5 < 0x2000000) {
    if (uVar5 < 0x1000000) {
      fVar1 = ALBW_AS_F32(((int)ALBW_AS_U32(fparam_1) - 0x800000));
      goto LAB_00590ef0;
    }
LAB_00590fec:
    if (((int)ABS(fparam_0) + 0x807fffffU < DAT_005911bc) ||
       ((int)ABS(fparam_1) + 0x807fffffU < DAT_005911bc)) {
      return fparam_1;
    }
    if (fparam_0 == 1.0) {
      return fparam_1;
    }
    if (ABS(fparam_1) == 0.0) {
      return fparam_1;
    }
    if ((uint)ALBW_AS_U32(DAT_005911c0) < (uint)ABS(fparam_0)) {
      return fparam_1;
    }
    if ((uint)ALBW_AS_U32(DAT_005911c0) < (uint)ABS(fparam_1)) {
      return fparam_1;
    }
    if (fparam_0 == DAT_005911c0) {
      if (((uint)ALBW_AS_U32(fparam_1) & 0x80000000) != 0) {
        return fparam_1;
      }
      return fparam_1;
    }
    uVar5 = (uint)((int)ALBW_AS_U32(fparam_1) << 1) >> 0x18;
    if (uVar5 < 0x7f) {
LAB_0059108c:
      iVar4 = 0;
    }
    else if (uVar5 < 0x97) {
      uVar5 = 1 << (0x96 - uVar5 & 0xff);
      if ((uVar5 - 1 & (uint)ALBW_AS_U32(fparam_1)) != 0) goto LAB_0059108c;
      if ((uVar5 & (uint)ALBW_AS_U32(fparam_1)) == 0) goto LAB_005910a0;
      iVar4 = 1;
    }
    else {
LAB_005910a0:
      iVar4 = 2;
    }
    if (fparam_0 != -INFINITY) {
      if (fparam_0 == 0.0) {
        if (((uint)ALBW_AS_U32(fparam_1) & 0x80000000) == 0) {
          return fparam_1;
        }
      }
      else {
        if (fparam_0 != -0.0) {
          if (fparam_0 == -1.0) {
            return fparam_1;
          }
          fVar1 = ALBW_AS_F32((((int)ALBW_AS_U32(fparam_1) >> 0x1f) + 1));
          if (ALBW_AS_F32((uint)(0x7effffff < (uint)((int)ALBW_AS_U32(fparam_0) * 2))) != fVar1) {
            return fVar1;
          }
          return fVar1;
        }
        if (fparam_1 == DAT_005911c0) {
          return fparam_1;
        }
        if (fparam_1 != -INFINITY) {
          if (((uint)ALBW_AS_U32(fparam_1) & 0x80000000) == 0) {
            if (iVar4 == 0) {
              return fparam_1;
            }
            goto joined_r0x005910e0;
          }
          if ((iVar4 != 0) && (iVar4 == 1)) {
            fVar1 = ALBW_AS_F32(func_00100986(2));
            return fVar1;
          }
        }
      }
      fVar1 = ALBW_AS_F32(func_00100986(2));
      return fVar1;
    }
    if (((uint)ALBW_AS_U32(fparam_1) & 0x80000000) == 0) {
      if (iVar4 != 1) {
        return fparam_1;
      }
      return fparam_1;
    }
joined_r0x005910e0:
    if (iVar4 != 1) {
      return fparam_1;
    }
    return fparam_1;
  }
  in_fpscr = in_fpscr & 0xfffffff | (uint)(fparam_1 == DAT_005911b0) << 0x1e;
  if (SUB41(in_fpscr >> 0x1e,0)) {
    bVar8 = ABS(fparam_0) == 0.0;
    bVar7 = true;
    if (!bVar8) {
      bVar7 = (uint)((int)ALBW_AS_U32(fparam_0) * 2) < 0xff000001;
      bVar8 = (int)ALBW_AS_U32(fparam_0) * 2 == 0xff000000;
    }
    if (bVar7 && !bVar8) {
      return fparam_1;
    }
  }
  else {
    fparam_1 = ALBW_AS_F32(((uint)ALBW_AS_U32(fparam_1) & 0x80000000 | 0x1f800000));
    fVar1 = fparam_1;
  }
LAB_00590ef0:
  if ((int)ALBW_AS_U32(fparam_0) + 0x7f800000U < 0x7f000000) {
LAB_00590f00:
    fparam_0 = ABS(fparam_0);
    uVar5 = (uint)((int)ALBW_AS_U32(fparam_1) << 1) >> 0x18;
    if (uVar5 < 0x7f) {
LAB_00590f38:
      fVar1 = ALBW_AS_F32(func_00100986(1));
      return fVar1;
    }
    if (uVar5 < 0x97) {
      uVar5 = 1 << (0x96 - uVar5 & 0xff);
      if ((uVar5 - 1 & (uint)ALBW_AS_U32(fparam_1)) != 0) goto LAB_00590f38;
      if (((uint)ALBW_AS_U32(fparam_1) & uVar5) != 0) {
        fVar16 = DAT_005911b4;
      }
    }
  }
  else {
    bVar8 = ABS(fparam_0) == 0.0;
    bVar7 = true;
    if (!bVar8) {
      bVar7 = (uint)((int)ALBW_AS_U32(fparam_0) * 2) < 0x1000001;
      bVar8 = (int)ALBW_AS_U32(fparam_0) * 2 == 0x1000000;
    }
    if (!bVar7 || bVar8) {
      if (0x7effffff < (int)ALBW_AS_U32(fparam_0) - 0x800000U) goto LAB_00590fec;
    }
    else {
      iVar4 = -0x1b;
      fparam_0 = fparam_0 * DAT_005911b8;
      if (((uint)ALBW_AS_U32(fparam_0) & 0x80000000) != 0) goto LAB_00590f00;
    }
  }
LAB_005911d0:
  if ((uint)(DAT_005914c0 + (int)ALBW_AS_U32(fparam_0)) < 0x2001) {
    fVar9 = (float)((double)fparam_0 - DAT_005914d0);
    fVar12 = fVar9 * DAT_005914e0 +
             -(fVar9 * fVar9 * (DAT_005914c8 - fVar9 * (DAT_005914c4 - fVar9 * DAT_005914d8))) *
             DAT_005914e4;
    fVar11 = ALBW_AS_F32(((int)(fVar9 * DAT_005914dc + fVar12) + 0x800U & 0xfffff000));
    fVar12 = (fVar9 * DAT_005914dc - fVar11) + fVar12;
  }
  else {
    uVar5 = (int)ALBW_AS_U32(fparam_0) + 0x40000U >> 0x13;
    uVar3 = uVar5 & 0xf;
    iVar6 = ((uVar5 << 0x14) >> 0x18) - 0x7f;
    fVar11 = (float)VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
    fVar12 = ALBW_AS_F32(((int)ALBW_AS_U32(fparam_0) + iVar6 * -0x800000));
    fVar13 = DAT_005911ac + fVar11 * DAT_005914e8;
    fVar11 = ALBW_AS_F32(((int)(fVar12 + fVar13) + 0x800U & 0xfffff000));
    fVar14 = DAT_005911ac / (fVar12 + fVar13);
    fVar9 = ALBW_AS_F32(((int)((fVar12 - fVar13) * fVar14) + 0x800U & 0xfffff000));
    fVar14 = (((fVar12 - fVar13) - fVar9 * fVar11) - fVar9 * ((fVar13 - fVar11) + fVar12)) * fVar14;
    fVar11 = (fVar9 + fVar14) * (fVar9 + fVar14);
    fVar12 = fVar14 * DAT_005911ac +
             (DAT_005914c4 + fVar11 * DAT_005914ec) * fVar11 * (fVar9 + fVar14);
    fVar11 = ALBW_AS_F32(((int)(fVar9 * DAT_005911ac + fVar12) + 0x800U & 0xfffff000));
    fVar12 = fVar11 * DAT_005914f4 + ((fVar9 * DAT_005911ac - fVar11) + fVar12) * DAT_005914f8;
    fVar9 = ALBW_AS_F32(((int)(fVar11 * DAT_005914f0 + fVar12) + 0x800U & 0xfffff000));
    fVar12 = (fVar11 * DAT_005914f0 - fVar9) + fVar12;
    pfVar2 = (float *)(DAT_005914fc + 0x59135c + uVar3 * 8);
    fVar15 = *pfVar2;
    fVar14 = pfVar2[1];
    fVar13 = (float)VectorSignedToFloat((iVar6 + iVar4) * 0x10,(byte)(in_fpscr >> 0x15) & 3);
    fVar11 = ALBW_AS_F32(((int)ALBW_AS_U32((fVar12 + fVar14 + fVar9 + fVar15 + fVar13)) + 0x800U & 0xfffff000));
    fVar12 = fVar12 - ((((fVar11 - fVar13) - fVar15) - fVar9) - fVar14);
  }
  fVar9 = ALBW_AS_F32(((int)ALBW_AS_U32(fVar1) + 0x800U & 0xfffff000));
  fVar12 = fVar11 * (fVar1 - fVar9) + fVar12 * (fVar9 + (fVar1 - fVar9));
  fVar1 = (float)((int)(fVar11 * fVar9 + fVar12) + 0x800U & 0xfffff000);
  fVar12 = (fVar11 * fVar9 - fVar1) + fVar12;
  fVar9 = fVar1 + fVar12;
  uVar5 = in_fpscr & 0xfffffff | (uint)(DAT_005911b0 <= fVar9) << 0x1d;
  fVar11 = DAT_005914c8;
  if (!SUB41(uVar5 >> 0x1d,0)) {
    fVar11 = DAT_00591500;
  }
  uVar10 = (uint)(fVar11 + fVar9);
  fVar9 = (float)VectorSignedToFloat((int)uVar10 >> 4,(byte)(uVar5 >> 0x15) & 3);
  uVar3 = uVar10 & 0xf;
  fVar11 = (float)VectorSignedToFloat(uVar10,(byte)(uVar5 >> 0x15) & 3);
  fVar12 = (fVar1 - fVar11) + fVar12;
  if (ABS(fVar9) < DAT_0059151c) {
    fVar1 = ALBW_AS_F32(func_00691F18(ALBW_AS_U32((fVar9 + DAT_00591520) * DAT_00591524)));
    return fVar1;
  }
  if (DAT_0059160c <= ABS(fVar9)) {
    if (DAT_005911b0 <= fVar9) goto LAB_005915e0;
  }
  else {
    iVar4 = (int)fVar9 / 2;
    fVar1 = ALBW_AS_F32((iVar4 * 0x800000 + 0x3f800000)) *
            fVar16 * (*(float *)(DAT_00591510 + 0x591448 + uVar3 * 4) +
                      *(float *)(DAT_00591514 + 0x59145c + uVar3 * 4) *
                      (DAT_0059150c + fVar12 * (DAT_00591508 + fVar12 * DAT_00591504)) * fVar12 +
                     *(float *)(DAT_00591518 + 0x59146c + uVar3 * 4)) *
            ALBW_AS_F32((((int)fVar9 - iVar4) * 0x800000 + 0x3f800000));
    if (ABS(fVar1) == INFINITY) {
LAB_005915e0:
      fVar1 = DAT_00591610;
      func_00100986(2);
      return ALBW_AS_F32(((uint)ALBW_AS_U32(fVar16) & 0x80000000 | (uint)ALBW_AS_U32(ABS(fVar1 * fVar1))));
    }
    if (ABS(fVar1) != 0.0) {
      fVar1 = ALBW_AS_F32(func_0058FBFC((uint)ALBW_AS_U32(fVar1)));
      if (fVar1 == 5.60519e-45) {
        func_005919B4();
      }
      return fVar1;
    }
  }
  func_00100986(2);
  fVar1 = func_005919B4();
  return ALBW_AS_F32(((uint)ALBW_AS_U32(fVar16) & 0x80000000 | (uint)ALBW_AS_U32(ABS(fVar1))));
}

