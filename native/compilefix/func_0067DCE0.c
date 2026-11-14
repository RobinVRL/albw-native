/* compilefix: USA 0067DCE0 (EU 0067DCB8), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: use of undeclared identifier 'NAN'
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - (T *)<float expr> -> (T *)CF_FBITS(expr): 32-bit copy of the float (vmov/vstr), never a conversion [1]
 *  - Ghidra NAN(x)/INFINITY -> __builtin_isnan(x) (vcmp unordered) / +inf [1]
 *  - Ghidra -NAN/NAN constant -> the exact words 0xFFFFFFFF/0x7FFFFFFF (mvn in the ARM) [1]
 *  - implicit float<->int conversions (Ghidra COPY between a float and an int-typed variable or
 *    pool word, e.g. `fVar = _DAT_xxx;`, `puVar[3] = fVar;`) made bit copies [1]
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites, this function's sites checked);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
#define CF_MATHCONST
#include "compilefix.h"

extern float func_00590D4C(float fparam_0);
extern float DAT_0067dfd0;
extern float DAT_0067dfd4;
extern float DAT_0067dfd8;
extern float DAT_0067dfdc;
extern float DAT_0067dfe0;
extern float DAT_0067dfe4;
extern float DAT_0067dfe8;

// USA 0067DCE0 <- EU 0067DCB8 (Ghidra, non-matching)
// GLOBAL DAT_0067dfd0 float
// GLOBAL DAT_0067dfd4 float
// GLOBAL DAT_0067dfd8 float
// GLOBAL DAT_0067dfdc float
// GLOBAL DAT_0067dfe0 float
// GLOBAL DAT_0067dfe4 float
// GLOBAL DAT_0067dfe8 float

void func_0067DCE0(float *param_1,float *param_2,float fparam_0)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  uint in_fpscr;
  uint uVar7;
  float fVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  fVar8 = DAT_0067dfd0;
  bVar3 = false;
  fVar6 = param_1[8];
  pfVar5 = (float *)((uint)*(ushort *)((int)param_1 + 0xe) * 0xc + -0xc + (int)ALBW_AS_U32(fVar6));
  uVar7 = in_fpscr & 0xfffffff | (uint)(DAT_0067dfd0 <= fparam_0) << 0x1d;
  if ((!SUB41(uVar7 >> 0x1d,0)) ||
     (uVar7 = in_fpscr & 0xfffffff | (uint)(*pfVar5 == fparam_0) << 0x1e |
              (uint)(fparam_0 <= *pfVar5) << 0x1d, bVar2 = (byte)(uVar7 >> 0x18),
     !(bool)(bVar2 >> 5 & 1) || (bool)(bVar2 >> 6))) {
    uVar7 = uVar7 & 0xfffffff | (uint)(DAT_0067dfd0 <= fparam_0) << 0x1d;
    if (SUB41(uVar7 >> 0x1d,0)) {
      cVar1 = *(char *)((int)param_1 + 9);
    }
    else {
      cVar1 = *(char *)(param_1 + 2);
    }
    if (cVar1 == '\0') {
      if (fparam_0 < DAT_0067dfd0) {
        fVar13 = *(float *)((int)ALBW_AS_U32(fVar6) + 4);
        *param_2 = fVar6;
        param_2[1] = CF_NAN_NEG;
        fVar6 = *param_1;
        param_2[2] = DAT_0067dfd4;
        param_2[4] = fVar13;
        param_2[3] = fVar6;
        param_2[5] = fVar8;
        param_2[6] = fVar8;
        param_2[7] = fVar8;
        return;
      }
      fVar16 = *pfVar5;
      fVar10 = *param_1;
      fVar11 = pfVar5[1];
      param_2[1] = 1.4013e-45;
      *param_2 = 0.0;
      fVar6 = DAT_0067dfd8;
      fVar13 = fVar16 + fVar10;
      if (param_1[1] < fVar16 + fVar10) {
        fVar13 = param_1[1];
      }
      param_2[2] = fVar13;
      param_2[4] = fVar11;
      param_2[3] = fVar6;
      param_2[5] = fVar8;
      param_2[6] = fVar8;
      param_2[7] = fVar8;
      return;
    }
    fVar6 = DAT_0067dfd0;
    fVar8 = func_00590D4C(param_1[7] * fparam_0);
    fVar8 = ALBW_AS_F32((int)fVar8);
    param_2[1] = fVar8;
    if ((cVar1 == '\x02') && (((uint)ALBW_AS_U32(fVar8) & 1) != 0)) {
      bVar3 = true;
      fVar8 = (float)VectorSignedToFloat((int)ALBW_AS_U32(fVar8) + 1,(byte)(uVar7 >> 0x15) & 3);
      fVar8 = (param_1[1] - *param_1) * fVar8;
      fparam_0 = fVar8 - fparam_0;
    }
    else {
      fVar8 = (float)VectorSignedToFloat(ALBW_AS_U32(fVar8),(byte)(uVar7 >> 0x15) & 3);
      fVar8 = (param_1[1] - *param_1) * fVar8;
      fparam_0 = fparam_0 - fVar8;
    }
  }
  else {
    param_2[1] = 0.0;
    fVar6 = fVar8;
  }
  fVar11 = DAT_0067dfe8;
  fVar10 = DAT_0067dfe4;
  fVar16 = DAT_0067dfe0;
  fVar13 = DAT_0067dfdc;
  pfVar5 = (float *)CF_FBITS(*param_2);
  if (pfVar5 == (float *)0x0) {
    fVar14 = (float)VectorSignedToFloat(*(ushort *)((int)param_1 + 0xe) - 1,
                                        (byte)(uVar7 >> 0x15) & 3);
    iVar9 = VectorFloatToUnsigned(param_1[7] * fVar14 * fparam_0,3);
    pfVar5 = (float *)((int)ALBW_AS_U32(param_1[8]) + iVar9 * 0xc);
  }
  if (bVar3) {
    pfVar4 = pfVar5;
    if (*pfVar5 < fparam_0) {
      do {
        pfVar5 = pfVar5 + 3;
      } while (*pfVar5 < fparam_0);
    }
    else {
      do {
        pfVar5 = pfVar4;
        pfVar4 = pfVar5 + -3;
      } while (fparam_0 <= pfVar5[-3]);
    }
    fVar12 = *pfVar5;
    fVar14 = *param_1;
    fVar15 = pfVar5[-3];
    *param_2 = ALBW_AS_F32((pfVar5 + -3));
    cVar1 = *(char *)(param_1 + 3);
    fVar12 = (fVar14 - fVar12) + fVar8;
    fVar8 = (fVar14 - fVar15) + fVar8;
    if (cVar1 == '\0') {
      fVar13 = pfVar5[1];
      param_2[2] = fVar12;
      param_2[3] = fVar8;
      param_2[4] = fVar13;
      param_2[5] = fVar6;
      param_2[6] = fVar6;
      param_2[7] = fVar6;
      return;
    }
    if (cVar1 == '\x01') {
      fVar13 = pfVar5[1];
      fVar16 = pfVar5[-2];
      param_2[2] = fVar12;
      param_2[3] = fVar8;
      param_2[4] = fVar13;
      param_2[5] = (fVar16 - fVar13) / (fVar8 - fVar12);
      param_2[6] = fVar6;
      param_2[7] = fVar6;
      return;
    }
    if (cVar1 == '\x02') {
      fVar15 = pfVar5[-1];
      fVar14 = pfVar5[1];
      fVar17 = pfVar5[-2];
      fVar6 = -pfVar5[2];
      param_2[2] = fVar12;
      param_2[3] = fVar8;
      fVar8 = fVar8 - fVar12;
      param_2[4] = fVar14;
      param_2[5] = fVar6;
      fVar13 = fVar13 / fVar8;
      fVar14 = fVar14 - fVar17;
      param_2[6] = ((fVar8 * fVar16 * fVar6 - fVar14 * fVar10) - fVar8 * -fVar15) * fVar13 * fVar13;
      param_2[7] = (fVar14 * fVar11 + fVar8 * fVar6 + fVar8 * -fVar15) * fVar13 * fVar13 * fVar13;
      return;
    }
  }
  else {
    pfVar4 = pfVar5;
    if (*pfVar5 <= fparam_0) {
      do {
        pfVar5 = pfVar4;
        pfVar4 = pfVar5 + 3;
      } while (pfVar5[3] <= fparam_0);
    }
    else {
      do {
        pfVar5 = pfVar5 + -3;
      } while (fparam_0 < *pfVar5);
    }
    fVar14 = *param_1;
    fVar12 = *pfVar5;
    fVar15 = pfVar5[3];
    *param_2 = ALBW_AS_F32((pfVar5 + 3));
    cVar1 = *(char *)(param_1 + 3);
    fVar12 = fVar12 + fVar14 + fVar8;
    fVar8 = fVar15 + fVar14 + fVar8;
    if (cVar1 == '\0') {
      fVar13 = pfVar5[1];
      param_2[2] = fVar12;
      param_2[3] = fVar8;
      param_2[4] = fVar13;
      param_2[5] = fVar6;
      param_2[6] = fVar6;
      param_2[7] = fVar6;
      return;
    }
    if (cVar1 == '\x01') {
      fVar13 = pfVar5[1];
      fVar16 = pfVar5[4];
      param_2[2] = fVar12;
      param_2[3] = fVar8;
      param_2[4] = fVar13;
      param_2[5] = (fVar16 - fVar13) / (fVar8 - fVar12);
      param_2[6] = fVar6;
      param_2[7] = fVar6;
      return;
    }
    if (cVar1 == '\x02') {
      fVar17 = pfVar5[1];
      fVar14 = pfVar5[2];
      fVar6 = pfVar5[4];
      fVar15 = pfVar5[5];
      param_2[2] = fVar12;
      param_2[3] = fVar8;
      fVar8 = fVar8 - fVar12;
      fVar6 = fVar17 - fVar6;
      param_2[4] = fVar17;
      param_2[5] = fVar14;
      fVar13 = fVar13 / fVar8;
      param_2[6] = ((fVar8 * fVar16 * fVar14 - fVar6 * fVar10) - fVar8 * fVar15) * fVar13 * fVar13;
      param_2[7] = (fVar6 * fVar11 + fVar8 * fVar14 + fVar8 * fVar15) * fVar13 * fVar13 * fVar13;
      return;
    }
  }
  return;
}

