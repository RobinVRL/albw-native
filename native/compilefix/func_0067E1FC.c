/* compilefix: USA 0067E1FC (EU 0067E1D4), Ghidra-derived (build/ghidra_analyzed4).
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
extern float DAT_0067e558;
extern float DAT_0067e55c;
extern float DAT_0067e560;
extern float DAT_0067e564;
extern float DAT_0067e568;
extern float DAT_0067e56c;
extern float DAT_0067e570;
extern float DAT_0067e574;
extern float DAT_0067e81c;

// USA 0067E1FC <- EU 0067E1D4 (Ghidra, non-matching)
// GLOBAL DAT_0067e558 float
// GLOBAL DAT_0067e55c float
// GLOBAL DAT_0067e560 float
// GLOBAL DAT_0067e564 float
// GLOBAL DAT_0067e568 float
// GLOBAL DAT_0067e56c float
// GLOBAL DAT_0067e570 float
// GLOBAL DAT_0067e574 float
// GLOBAL DAT_0067e81c float

void func_0067E1FC(float *param_1,float *param_2,float fparam_0)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  bool bVar9;
  byte *pbVar10;
  byte *pbVar11;
  float fVar12;
  bool bVar13;
  bool bVar14;
  uint in_fpscr;
  uint uVar15;
  float fVar16;
  float fVar17;
  int iVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  
  fVar16 = DAT_0067e558;
  bVar9 = false;
  fVar12 = param_1[8];
  uVar1 = in_fpscr & 0xfffffff;
  uVar15 = uVar1 | (uint)(fparam_0 == DAT_0067e558) << 0x1e |
           (uint)(DAT_0067e558 <= fparam_0) << 0x1d;
  uVar19 = VectorFloatToUnsigned(fparam_0 / param_1[6],3);
  pbVar11 = (byte *)((uint)*(ushort *)((int)param_1 + 0xe) * 6 + -6 + (int)ALBW_AS_U32(fVar12));
  bVar3 = (byte)(uVar15 >> 0x18);
  bVar13 = (bool)(bVar3 >> 6);
  bVar14 = false;
  if ((bool)(bVar3 >> 5 & 1)) {
    bVar14 = uVar19 <= *pbVar11;
    bVar13 = *pbVar11 == uVar19;
  }
  if (bVar14 && !bVar13) {
    param_2[1] = 0.0;
    fVar12 = fVar16;
  }
  else {
    uVar15 = uVar1 | (uint)(DAT_0067e558 <= fparam_0) << 0x1d;
    if (SUB41(uVar15 >> 0x1d,0)) {
      cVar2 = *(char *)((int)param_1 + 9);
    }
    else {
      cVar2 = *(char *)(param_1 + 2);
    }
    if (cVar2 == '\0') {
      uVar1 = uVar1 | (uint)(DAT_0067e558 <= fparam_0) << 0x1d;
      if (!SUB41(uVar1 >> 0x1d,0)) {
        bVar3 = *(byte *)((int)ALBW_AS_U32(fVar12) + 2);
        bVar4 = *(byte *)((int)ALBW_AS_U32(fVar12) + 1);
        fVar26 = param_1[4];
        fVar25 = param_1[5];
        param_2[1] = CF_NAN_NEG;
        *param_2 = fVar12;
        fVar12 = DAT_0067e55c;
        fVar23 = (float)VectorUnsignedToFloat
                                  ((uint)bVar4 + (uint)bVar3 * 0x100,(byte)(uVar1 >> 0x15) & 3);
        fVar27 = *param_1;
        param_2[4] = fVar25 + fVar23 * fVar26;
        param_2[5] = fVar16;
        param_2[6] = fVar16;
        param_2[7] = fVar16;
        param_2[2] = fVar12;
        param_2[3] = fVar27;
        return;
      }
      fVar26 = param_1[4];
      fVar12 = (float)VectorUnsignedToFloat((uint)*pbVar11,(byte)(uVar1 >> 0x15) & 3);
      fVar27 = (float)VectorUnsignedToFloat
                                ((uint)pbVar11[1] + (uint)pbVar11[2] * 0x100,
                                 (byte)(uVar1 >> 0x15) & 3);
      fVar12 = fVar12 * param_1[6] + *param_1;
      fVar25 = param_1[5];
      param_2[1] = 1.4013e-45;
      *param_2 = 0.0;
      fVar23 = param_1[1];
      param_2[4] = fVar25 + fVar27 * fVar26;
      param_2[5] = fVar16;
      param_2[6] = fVar16;
      param_2[7] = fVar16;
      fVar16 = DAT_0067e560;
      if (fVar23 < fVar12) {
        fVar12 = fVar23;
      }
      param_2[2] = fVar12;
      param_2[3] = fVar16;
      return;
    }
    fVar12 = DAT_0067e558;
    fVar16 = func_00590D4C(param_1[7] * fparam_0);
    fVar16 = ALBW_AS_F32((int)fVar16);
    param_2[1] = fVar16;
    if ((cVar2 == '\x02') && (((uint)ALBW_AS_U32(fVar16) & 1) != 0)) {
      bVar9 = true;
      fVar16 = (float)VectorSignedToFloat((int)ALBW_AS_U32(fVar16) + 1,(byte)(uVar15 >> 0x15) & 3);
      fVar16 = (param_1[1] - *param_1) * fVar16;
      fparam_0 = fVar16 - fparam_0;
    }
    else {
      fVar16 = (float)VectorSignedToFloat(ALBW_AS_U32(fVar16),(byte)(uVar15 >> 0x15) & 3);
      fVar16 = (param_1[1] - *param_1) * fVar16;
      fparam_0 = fparam_0 - fVar16;
    }
    uVar19 = VectorFloatToUnsigned(fparam_0 / param_1[6],3);
  }
  fVar27 = DAT_0067e570;
  fVar23 = DAT_0067e56c;
  fVar26 = DAT_0067e568;
  fVar25 = DAT_0067e564;
  pbVar11 = (byte *)CF_FBITS(*param_2);
  if (pbVar11 == (byte *)0x0) {
    fVar17 = (float)VectorSignedToFloat(*(ushort *)((int)param_1 + 0xe) - 1,
                                        (byte)(uVar15 >> 0x15) & 3);
    iVar18 = VectorFloatToUnsigned(param_1[7] * fVar17 * fparam_0,3);
    pbVar11 = (byte *)((int)ALBW_AS_U32(param_1[8]) + iVar18 * 6);
  }
  if (bVar9) {
    pbVar10 = pbVar11;
    if (*pbVar11 < uVar19) {
      do {
        pbVar11 = pbVar11 + 6;
      } while (*pbVar11 < uVar19);
    }
    else {
      do {
        pbVar11 = pbVar10;
        pbVar10 = pbVar11 + -6;
      } while (uVar19 <= pbVar11[-6]);
    }
    fVar17 = param_1[6];
    fVar20 = (float)VectorUnsignedToFloat((uint)*pbVar11,(byte)(uVar15 >> 0x15) & 3);
    fVar22 = (float)VectorUnsignedToFloat((uint)pbVar11[-6],(byte)(uVar15 >> 0x15) & 3);
    fVar21 = *param_1;
    *param_2 = ALBW_AS_F32((pbVar11 + -6));
    cVar2 = *(char *)(param_1 + 3);
    fVar20 = (fVar21 - fVar20 * fVar17) + fVar16;
    fVar16 = (fVar21 - fVar22 * fVar17) + fVar16;
    if (cVar2 == '\0') {
      bVar3 = pbVar11[1];
      bVar4 = pbVar11[2];
      fVar26 = param_1[4];
      fVar25 = param_1[5];
      param_2[2] = fVar20;
      param_2[5] = fVar12;
      param_2[6] = fVar12;
      param_2[7] = fVar12;
      fVar12 = (float)VectorUnsignedToFloat
                                ((uint)bVar3 + (uint)bVar4 * 0x100,(byte)(uVar15 >> 0x15) & 3);
      param_2[3] = fVar16;
      param_2[4] = fVar25 + fVar12 * fVar26;
      return;
    }
    if (cVar2 == '\x01') {
      bVar3 = pbVar11[1];
      bVar4 = pbVar11[2];
      fVar25 = param_1[5];
      fVar23 = param_1[4];
      bVar5 = pbVar11[-5];
      bVar6 = pbVar11[-4];
      param_2[2] = fVar20;
      param_2[3] = fVar16;
      fVar26 = (float)VectorUnsignedToFloat
                                ((uint)bVar3 + (uint)bVar4 * 0x100,(byte)(uVar15 >> 0x15) & 3);
      fVar26 = fVar25 + fVar26 * fVar23;
      fVar27 = (float)VectorUnsignedToFloat
                                ((uint)bVar5 + (uint)bVar6 * 0x100,(byte)(uVar15 >> 0x15) & 3);
      param_2[4] = fVar26;
      param_2[5] = ((fVar25 + fVar27 * fVar23) - fVar26) / (fVar16 - fVar20);
      param_2[6] = fVar12;
      param_2[7] = fVar12;
      return;
    }
    if (cVar2 == '\x02') {
      fVar24 = param_1[5];
      fVar12 = param_1[4];
      bVar3 = pbVar11[-4];
      bVar4 = pbVar11[-5];
      bVar5 = pbVar11[-2];
      fVar17 = (float)VectorUnsignedToFloat
                                ((uint)pbVar11[1] + (uint)pbVar11[2] * 0x100,
                                 (byte)(uVar15 >> 0x15) & 3);
      bVar6 = pbVar11[-3];
      fVar28 = fVar24 + fVar17 * fVar12;
      bVar8 = pbVar11[5];
      bVar7 = pbVar11[4];
      param_2[2] = fVar20;
      param_2[3] = fVar16;
      fVar21 = (float)VectorUnsignedToFloat
                                ((uint)bVar4 + (uint)bVar3 * 0x100,(byte)(uVar15 >> 0x15) & 3);
      param_2[4] = fVar28;
      fVar22 = (float)VectorSignedToFloat((uint)bVar6 + (char)(bVar5 << 4) * 0x10,
                                          (byte)(uVar15 >> 0x15) & 3);
      fVar17 = (float)VectorSignedToFloat((char)bVar8 * 0x10 + (uint)(bVar7 >> 4),
                                          (byte)(uVar15 >> 0x15) & 3);
      fVar28 = fVar28 - (fVar24 + fVar21 * fVar12);
      fVar22 = fVar22 * DAT_0067e574;
      fVar17 = fVar17 * DAT_0067e574;
      fVar16 = fVar16 - fVar20;
      param_2[5] = fVar17;
      fVar25 = fVar25 / fVar16;
      param_2[6] = ((fVar16 * fVar26 * fVar17 - fVar28 * fVar23) - fVar16 * fVar22) *
                   fVar25 * fVar25;
      param_2[7] = (fVar28 * fVar27 + fVar16 * fVar17 + fVar16 * fVar22) * fVar25 * fVar25 * fVar25;
      return;
    }
  }
  else {
    pbVar10 = pbVar11;
    if (uVar19 < *pbVar11) {
      do {
        pbVar11 = pbVar11 + -6;
      } while (uVar19 < *pbVar11);
    }
    else {
      do {
        pbVar11 = pbVar10;
        pbVar10 = pbVar11 + 6;
      } while (pbVar11[6] <= uVar19);
    }
    fVar17 = param_1[6];
    bVar3 = *pbVar11;
    fVar21 = *param_1;
    bVar4 = pbVar11[6];
    *param_2 = ALBW_AS_F32((pbVar11 + 6));
    cVar2 = *(char *)(param_1 + 3);
    fVar20 = (float)VectorUnsignedToFloat((uint)bVar3,(byte)(uVar15 >> 0x15) & 3);
    fVar22 = (float)VectorUnsignedToFloat((uint)bVar4,(byte)(uVar15 >> 0x15) & 3);
    fVar20 = fVar20 * fVar17 + fVar16 + fVar21;
    fVar21 = fVar22 * fVar17 + fVar16 + fVar21;
    if (cVar2 == '\0') {
      fVar16 = (float)VectorUnsignedToFloat
                                ((uint)pbVar11[1] + (uint)pbVar11[2] * 0x100,
                                 (byte)(uVar15 >> 0x15) & 3);
      param_2[4] = param_1[5] + fVar16 * param_1[4];
      param_2[5] = fVar12;
      param_2[6] = fVar12;
      param_2[7] = fVar12;
      param_2[2] = fVar20;
      param_2[3] = fVar21;
      return;
    }
    if (cVar2 == '\x01') {
      fVar16 = (float)VectorUnsignedToFloat
                                ((uint)pbVar11[1] + (uint)pbVar11[2] * 0x100,
                                 (byte)(uVar15 >> 0x15) & 3);
      fVar16 = param_1[5] + fVar16 * param_1[4];
      fVar25 = (float)VectorUnsignedToFloat
                                ((uint)pbVar11[7] + (uint)pbVar11[8] * 0x100,
                                 (byte)(uVar15 >> 0x15) & 3);
      param_2[5] = ((param_1[5] + fVar25 * param_1[4]) - fVar16) / (fVar21 - fVar20);
      param_2[6] = fVar12;
      param_2[7] = fVar12;
      param_2[2] = fVar20;
      param_2[3] = fVar21;
      param_2[4] = fVar16;
      return;
    }
    if (cVar2 == '\x02') {
      fVar16 = param_1[5];
      fVar12 = param_1[4];
      bVar3 = pbVar11[10];
      fVar17 = (float)VectorUnsignedToFloat
                                ((uint)pbVar11[1] + (uint)pbVar11[2] * 0x100,
                                 (byte)(uVar15 >> 0x15) & 3);
      bVar4 = pbVar11[9];
      fVar24 = fVar16 + fVar17 * fVar12;
      bVar6 = pbVar11[5];
      bVar5 = pbVar11[4];
      fVar22 = (float)VectorUnsignedToFloat
                                ((uint)pbVar11[7] + (uint)pbVar11[8] * 0x100,
                                 (byte)(uVar15 >> 0x15) & 3);
      param_2[4] = fVar24;
      fVar28 = (float)VectorSignedToFloat((uint)bVar4 + (char)(bVar3 << 4) * 0x10,
                                          (byte)(uVar15 >> 0x15) & 3);
      fVar17 = (float)VectorSignedToFloat((char)bVar6 * 0x10 + (uint)(bVar5 >> 4),
                                          (byte)(uVar15 >> 0x15) & 3);
      fVar24 = fVar24 - (fVar16 + fVar22 * fVar12);
      fVar28 = fVar28 * DAT_0067e81c;
      fVar17 = fVar17 * DAT_0067e81c;
      fVar16 = fVar21 - fVar20;
      param_2[5] = fVar17;
      fVar25 = fVar25 / fVar16;
      param_2[6] = ((fVar16 * fVar26 * fVar17 - fVar24 * fVar23) - fVar16 * fVar28) *
                   fVar25 * fVar25;
      param_2[7] = (fVar24 * fVar27 + fVar16 * fVar17 + fVar16 * fVar28) * fVar25 * fVar25 * fVar25;
      param_2[2] = fVar20;
      param_2[3] = fVar21;
      return;
    }
  }
  return;
}

