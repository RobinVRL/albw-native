/* compilefix: USA 0067CBE0 (EU 0067CBB8), Ghidra-derived (build/ghidra_analyzed4).
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
extern float DAT_0067cebc;
extern float DAT_0067cec0;
extern float DAT_0067cec4;
extern float DAT_0067cec8;
extern float DAT_0067cecc;
extern float DAT_0067ced0;
extern float DAT_0067ced4;
extern float DAT_0067ced8;

// USA 0067CBE0 <- EU 0067CBB8 (Ghidra, non-matching)
// GLOBAL DAT_0067cebc float
// GLOBAL DAT_0067cec0 float
// GLOBAL DAT_0067cec4 float
// GLOBAL DAT_0067cec8 float
// GLOBAL DAT_0067cecc float
// GLOBAL DAT_0067ced0 float
// GLOBAL DAT_0067ced4 float
// GLOBAL DAT_0067ced8 float

void func_0067CBE0(float *param_1,float *param_2,float fparam_0)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  float *pfVar4;
  float fVar5;
  float *pfVar6;
  uint in_fpscr;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  fVar8 = DAT_0067cebc;
  fVar5 = param_1[8];
  pfVar4 = (float *)((uint)*(ushort *)((int)param_1 + 0xe) * 8 + -8 + (int)ALBW_AS_U32(fVar5));
  bVar3 = false;
  uVar7 = in_fpscr & 0xfffffff | (uint)(DAT_0067cebc <= fparam_0) << 0x1d;
  if ((!SUB41(uVar7 >> 0x1d,0)) ||
     (uVar7 = in_fpscr & 0xfffffff | (uint)(*pfVar4 == fparam_0) << 0x1e |
              (uint)(fparam_0 <= *pfVar4) << 0x1d, bVar2 = (byte)(uVar7 >> 0x18),
     !(bool)(bVar2 >> 5 & 1) || (bool)(bVar2 >> 6))) {
    uVar7 = uVar7 & 0xfffffff | (uint)(DAT_0067cebc <= fparam_0) << 0x1d;
    if (SUB41(uVar7 >> 0x1d,0)) {
      cVar1 = *(char *)((int)param_1 + 9);
    }
    else {
      cVar1 = *(char *)(param_1 + 2);
    }
    if (cVar1 == '\0') {
      if (fparam_0 < DAT_0067cebc) {
        fVar15 = *(float *)((int)ALBW_AS_U32(fVar5) + 4);
        *param_2 = fVar5;
        param_2[1] = CF_NAN_NEG;
        fVar5 = *param_1;
        param_2[2] = DAT_0067cec0;
        param_2[4] = fVar15;
        param_2[3] = fVar5;
        param_2[5] = fVar8;
        param_2[6] = fVar8;
        param_2[7] = fVar8;
        return;
      }
      fVar14 = *pfVar4;
      fVar9 = *param_1;
      fVar10 = pfVar4[1];
      param_2[1] = 1.4013e-45;
      *param_2 = 0.0;
      fVar5 = DAT_0067cec4;
      fVar15 = fVar14 + fVar9;
      if (param_1[1] < fVar14 + fVar9) {
        fVar15 = param_1[1];
      }
      param_2[2] = fVar15;
      param_2[4] = fVar10;
      param_2[3] = fVar5;
      param_2[5] = fVar8;
      param_2[6] = fVar8;
      param_2[7] = fVar8;
      return;
    }
    fVar5 = DAT_0067cebc;
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
    fVar5 = fVar8;
  }
  fVar10 = DAT_0067ced4;
  fVar9 = DAT_0067ced0;
  fVar14 = DAT_0067cecc;
  fVar15 = DAT_0067cec8;
  pfVar4 = (float *)CF_FBITS(*param_2);
  if (pfVar4 == (float *)0x0) {
    fVar13 = (float)VectorSignedToFloat(*(ushort *)((int)param_1 + 0xe) - 1,
                                        (byte)(uVar7 >> 0x15) & 3);
    iVar11 = VectorFloatToUnsigned(param_1[7] * fVar13 * fparam_0,3);
    pfVar4 = (float *)((int)ALBW_AS_U32(param_1[8]) + iVar11 * 8);
  }
  if (bVar3) {
    pfVar6 = pfVar4;
    if (*pfVar4 < fparam_0) {
      do {
        pfVar4 = pfVar4 + 2;
      } while (*pfVar4 < fparam_0);
    }
    else {
      do {
        pfVar4 = pfVar6;
        pfVar6 = pfVar4 + -2;
      } while (fparam_0 <= pfVar4[-2]);
    }
    fVar13 = *pfVar4;
    fVar12 = *param_1;
    fVar16 = pfVar4[-2];
    pfVar6 = pfVar4 + -2;
    *param_2 = ALBW_AS_F32(pfVar6);
    cVar1 = *(char *)(param_1 + 3);
    fVar13 = (fVar12 - fVar13) + fVar8;
    fVar8 = (fVar12 - fVar16) + fVar8;
    if (cVar1 == '\0') {
LAB_0067ce64:
      fVar15 = pfVar4[1];
      param_2[2] = fVar13;
      param_2[3] = fVar8;
      param_2[4] = fVar15;
      param_2[5] = fVar5;
      param_2[6] = fVar5;
      param_2[7] = fVar5;
      return;
    }
    if (cVar1 == '\x01') {
LAB_0067ce88:
      fVar15 = pfVar4[1];
      fVar14 = pfVar6[1];
      param_2[2] = fVar13;
      param_2[3] = fVar8;
      param_2[4] = fVar15;
      param_2[5] = (fVar14 - fVar15) / (fVar8 - fVar13);
      param_2[6] = fVar5;
      param_2[7] = fVar5;
      return;
    }
    if (cVar1 == '\x02') {
      fVar16 = pfVar4[1];
      fVar12 = pfVar4[-1];
      param_2[2] = fVar13;
      param_2[3] = fVar8;
      fVar5 = DAT_0067ced8;
      fVar8 = fVar8 - fVar13;
      fVar12 = fVar16 - fVar12;
      param_2[4] = fVar16;
      param_2[5] = fVar5;
      fVar15 = fVar15 / fVar8;
      param_2[6] = ((fVar8 * fVar14 * fVar5 - fVar12 * fVar9) - fVar8 * fVar5) * fVar15 * fVar15;
      param_2[7] = (fVar12 * fVar10 + fVar8 * fVar5 + fVar8 * fVar5) * fVar15 * fVar15 * fVar15;
      return;
    }
  }
  else {
    pfVar6 = pfVar4;
    if (*pfVar4 <= fparam_0) {
      do {
        pfVar4 = pfVar6;
        pfVar6 = pfVar4 + 2;
      } while (pfVar4[2] <= fparam_0);
    }
    else {
      do {
        pfVar4 = pfVar4 + -2;
      } while (fparam_0 < *pfVar4);
    }
    fVar12 = *param_1;
    fVar13 = *pfVar4;
    fVar16 = pfVar4[2];
    pfVar6 = pfVar4 + 2;
    *param_2 = ALBW_AS_F32(pfVar6);
    cVar1 = *(char *)(param_1 + 3);
    fVar13 = fVar13 + fVar12 + fVar8;
    fVar8 = fVar16 + fVar12 + fVar8;
    if (cVar1 == '\0') goto LAB_0067ce64;
    if (cVar1 == '\x01') goto LAB_0067ce88;
    if (cVar1 == '\x02') {
      fVar16 = pfVar4[1];
      fVar12 = pfVar4[3];
      param_2[2] = fVar13;
      param_2[3] = fVar8;
      fVar8 = fVar8 - fVar13;
      fVar12 = fVar16 - fVar12;
      param_2[4] = fVar16;
      param_2[5] = fVar5;
      fVar15 = fVar15 / fVar8;
      param_2[6] = ((fVar8 * fVar14 * fVar5 - fVar12 * fVar9) - fVar8 * fVar5) * fVar15 * fVar15;
      param_2[7] = (fVar12 * fVar10 + fVar8 * fVar5 + fVar8 * fVar5) * fVar15 * fVar15 * fVar15;
      return;
    }
  }
  return;
}

