/* compilefix: USA 0067CFE0 (EU 0067CFB8), Ghidra-derived (build/ghidra_analyzed4).
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
extern float DAT_0067d338;
extern float DAT_0067d33c;
extern float DAT_0067d340;
extern float DAT_0067d344;
extern float DAT_0067d348;
extern float DAT_0067d34c;
extern float DAT_0067d350;
extern float DAT_0067d354;
extern float DAT_0067d61c;

// USA 0067CFE0 <- EU 0067CFB8 (Ghidra, non-matching)
// GLOBAL DAT_0067d338 float
// GLOBAL DAT_0067d33c float
// GLOBAL DAT_0067d340 float
// GLOBAL DAT_0067d344 float
// GLOBAL DAT_0067d348 float
// GLOBAL DAT_0067d34c float
// GLOBAL DAT_0067d350 float
// GLOBAL DAT_0067d354 float
// GLOBAL DAT_0067d61c float

void func_0067CFE0(float *param_1,float *param_2,float fparam_0)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  bool bVar8;
  byte *pbVar9;
  byte *pbVar10;
  float fVar11;
  bool bVar12;
  bool bVar13;
  uint in_fpscr;
  uint uVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  int iVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  
  fVar16 = DAT_0067d338;
  fVar11 = param_1[8];
  uVar1 = in_fpscr & 0xfffffff;
  uVar14 = uVar1 | (uint)(fparam_0 == DAT_0067d338) << 0x1e |
           (uint)(DAT_0067d338 <= fparam_0) << 0x1d;
  pbVar10 = (byte *)((uint)*(ushort *)((int)param_1 + 0xe) * 4 + -4 + (int)ALBW_AS_U32(fVar11));
  bVar8 = false;
  uVar15 = VectorFloatToUnsigned(fparam_0 / param_1[6],3);
  bVar3 = (byte)(uVar14 >> 0x18);
  bVar12 = (bool)(bVar3 >> 6);
  bVar13 = false;
  if ((bool)(bVar3 >> 5 & 1)) {
    bVar13 = uVar15 <= *pbVar10;
    bVar12 = *pbVar10 == uVar15;
  }
  if (bVar13 && !bVar12) {
    param_2[1] = 0.0;
    fVar11 = fVar16;
  }
  else {
    uVar14 = uVar1 | (uint)(DAT_0067d338 <= fparam_0) << 0x1d;
    if (SUB41(uVar14 >> 0x1d,0)) {
      cVar2 = *(char *)((int)param_1 + 9);
    }
    else {
      cVar2 = *(char *)(param_1 + 2);
    }
    if (cVar2 == '\0') {
      uVar1 = uVar1 | (uint)(DAT_0067d338 <= fparam_0) << 0x1d;
      if (!SUB41(uVar1 >> 0x1d,0)) {
        bVar3 = *(byte *)((int)ALBW_AS_U32(fVar11) + 2);
        bVar4 = *(byte *)((int)ALBW_AS_U32(fVar11) + 1);
        fVar25 = param_1[4];
        fVar21 = param_1[5];
        param_2[1] = CF_NAN_NEG;
        *param_2 = fVar11;
        fVar11 = *param_1;
        fVar17 = (float)VectorUnsignedToFloat
                                  ((uint)bVar4 + (bVar3 & 0xf) * 0x100,(byte)(uVar1 >> 0x15) & 3);
        param_2[2] = DAT_0067d33c;
        param_2[3] = fVar11;
        param_2[4] = fVar21 + fVar17 * fVar25;
        param_2[5] = fVar16;
        param_2[6] = fVar16;
        param_2[7] = fVar16;
        return;
      }
      fVar17 = param_1[4];
      fVar11 = (float)VectorUnsignedToFloat((uint)*pbVar10,(byte)(uVar1 >> 0x15) & 3);
      fVar24 = (float)VectorUnsignedToFloat
                                ((uint)pbVar10[1] + (pbVar10[2] & 0xf) * 0x100,
                                 (byte)(uVar1 >> 0x15) & 3);
      fVar21 = fVar11 * param_1[6] + *param_1;
      fVar25 = param_1[5];
      param_2[1] = 1.4013e-45;
      *param_2 = 0.0;
      fVar11 = DAT_0067d340;
      if (param_1[1] < fVar21) {
        fVar21 = param_1[1];
      }
      param_2[2] = fVar21;
      param_2[4] = fVar25 + fVar24 * fVar17;
      param_2[3] = fVar11;
      param_2[5] = fVar16;
      param_2[6] = fVar16;
      param_2[7] = fVar16;
      return;
    }
    fVar11 = DAT_0067d338;
    fVar16 = func_00590D4C(param_1[7] * fparam_0);
    fVar16 = ALBW_AS_F32((int)fVar16);
    param_2[1] = fVar16;
    if ((cVar2 == '\x02') && (((uint)ALBW_AS_U32(fVar16) & 1) != 0)) {
      bVar8 = true;
      fVar16 = (float)VectorSignedToFloat((int)ALBW_AS_U32(fVar16) + 1,(byte)(uVar14 >> 0x15) & 3);
      fVar16 = (param_1[1] - *param_1) * fVar16;
      fparam_0 = fVar16 - fparam_0;
    }
    else {
      fVar16 = (float)VectorSignedToFloat(ALBW_AS_U32(fVar16),(byte)(uVar14 >> 0x15) & 3);
      fVar16 = (param_1[1] - *param_1) * fVar16;
      fparam_0 = fparam_0 - fVar16;
    }
    uVar15 = VectorFloatToUnsigned(fparam_0 / param_1[6],3);
  }
  fVar24 = DAT_0067d350;
  fVar17 = DAT_0067d34c;
  fVar25 = DAT_0067d348;
  fVar21 = DAT_0067d344;
  pbVar10 = (byte *)CF_FBITS(*param_2);
  if (pbVar10 == (byte *)0x0) {
    fVar18 = (float)VectorSignedToFloat(*(ushort *)((int)param_1 + 0xe) - 1,
                                        (byte)(uVar14 >> 0x15) & 3);
    iVar19 = VectorFloatToUnsigned(param_1[7] * fVar18 * fparam_0,3);
    pbVar10 = (byte *)((int)ALBW_AS_U32(param_1[8]) + iVar19 * 4);
  }
  if (bVar8) {
    pbVar9 = pbVar10;
    if (*pbVar10 < uVar15) {
      do {
        pbVar10 = pbVar10 + 4;
      } while (*pbVar10 < uVar15);
    }
    else {
      do {
        pbVar10 = pbVar9;
        pbVar9 = pbVar10 + -4;
      } while (uVar15 <= pbVar10[-4]);
    }
    bVar3 = *pbVar10;
    fVar20 = param_1[6];
    fVar22 = *param_1;
    bVar4 = pbVar10[-4];
    *param_2 = ALBW_AS_F32((pbVar10 + -4));
    cVar2 = *(char *)(param_1 + 3);
    fVar18 = (float)VectorUnsignedToFloat((uint)bVar3,(byte)(uVar14 >> 0x15) & 3);
    fVar23 = (float)VectorUnsignedToFloat((uint)bVar4,(byte)(uVar14 >> 0x15) & 3);
    fVar18 = (fVar22 - fVar18 * fVar20) + fVar16;
    fVar16 = (fVar22 - fVar23 * fVar20) + fVar16;
    if (cVar2 == '\0') {
      fVar21 = (float)VectorUnsignedToFloat
                                ((uint)pbVar10[1] + (pbVar10[2] & 0xf) * 0x100,
                                 (byte)(uVar14 >> 0x15) & 3);
      param_2[4] = param_1[5] + fVar21 * param_1[4];
      param_2[5] = fVar11;
      param_2[6] = fVar11;
      param_2[7] = fVar11;
      param_2[2] = fVar18;
      param_2[3] = fVar16;
      return;
    }
    if (cVar2 == '\x01') {
      fVar21 = param_1[5];
      fVar24 = param_1[4];
      fVar25 = (float)VectorUnsignedToFloat
                                ((uint)pbVar10[1] + (pbVar10[2] & 0xf) * 0x100,
                                 (byte)(uVar14 >> 0x15) & 3);
      fVar25 = fVar21 + fVar25 * fVar24;
      fVar17 = (float)VectorUnsignedToFloat
                                ((uint)pbVar10[-3] + (pbVar10[-2] & 0xf) * 0x100,
                                 (byte)(uVar14 >> 0x15) & 3);
      param_2[4] = fVar25;
      param_2[2] = fVar18;
      param_2[3] = fVar16;
      param_2[5] = ((fVar21 + fVar17 * fVar24) - fVar25) / (fVar16 - fVar18);
      param_2[6] = fVar11;
      param_2[7] = fVar11;
      return;
    }
    if (cVar2 == '\x02') {
      bVar3 = pbVar10[2];
      fVar11 = param_1[5];
      fVar22 = param_1[4];
      bVar4 = pbVar10[3];
      fVar20 = (float)VectorUnsignedToFloat
                                ((uint)pbVar10[1] + (bVar3 & 0xf) * 0x100,(byte)(uVar14 >> 0x15) & 3
                                );
      fVar20 = fVar11 + fVar20 * fVar22;
      fVar23 = (float)VectorSignedToFloat((char)pbVar10[-1] * 0x10 + (uint)(pbVar10[-2] >> 4),
                                          (byte)(uVar14 >> 0x15) & 3);
      fVar26 = (float)VectorUnsignedToFloat
                                ((uint)pbVar10[-3] + (pbVar10[-2] & 0xf) * 0x100,
                                 (byte)(uVar14 >> 0x15) & 3);
      param_2[4] = fVar20;
      param_2[2] = fVar18;
      param_2[3] = fVar16;
      fVar16 = fVar16 - fVar18;
      fVar21 = fVar21 / fVar16;
      fVar18 = (float)VectorSignedToFloat((char)bVar4 * 0x10 + (uint)(bVar3 >> 4),
                                          (byte)(uVar14 >> 0x15) & 3);
      fVar20 = fVar20 - (fVar11 + fVar26 * fVar22);
      fVar18 = fVar18 * DAT_0067d354;
      fVar23 = fVar23 * DAT_0067d354;
      param_2[5] = fVar18;
      param_2[6] = ((fVar16 * fVar25 * fVar18 - fVar20 * fVar17) - fVar16 * fVar23) *
                   fVar21 * fVar21;
      param_2[7] = (fVar20 * fVar24 + fVar16 * fVar18 + fVar16 * fVar23) * fVar21 * fVar21 * fVar21;
      return;
    }
  }
  else {
    pbVar9 = pbVar10;
    if (uVar15 < *pbVar10) {
      do {
        pbVar10 = pbVar10 + -4;
      } while (uVar15 < *pbVar10);
    }
    else {
      do {
        pbVar10 = pbVar9;
        pbVar9 = pbVar10 + 4;
      } while (pbVar10[4] <= uVar15);
    }
    fVar22 = param_1[6];
    bVar3 = *pbVar10;
    fVar18 = *param_1;
    bVar4 = pbVar10[4];
    *param_2 = ALBW_AS_F32((pbVar10 + 4));
    cVar2 = *(char *)(param_1 + 3);
    fVar20 = (float)VectorUnsignedToFloat((uint)bVar3,(byte)(uVar14 >> 0x15) & 3);
    fVar23 = (float)VectorUnsignedToFloat((uint)bVar4,(byte)(uVar14 >> 0x15) & 3);
    fVar20 = fVar20 * fVar22 + fVar16 + fVar18;
    fVar18 = fVar23 * fVar22 + fVar16 + fVar18;
    if (cVar2 == '\0') {
      bVar3 = pbVar10[2];
      bVar4 = pbVar10[1];
      fVar21 = param_1[4];
      fVar16 = param_1[5];
      param_2[2] = fVar20;
      param_2[3] = fVar18;
      fVar25 = (float)VectorUnsignedToFloat
                                ((uint)bVar4 + (bVar3 & 0xf) * 0x100,(byte)(uVar14 >> 0x15) & 3);
      param_2[4] = fVar16 + fVar25 * fVar21;
      param_2[5] = fVar11;
      param_2[6] = fVar11;
      param_2[7] = fVar11;
      return;
    }
    if (cVar2 == '\x01') {
      bVar3 = pbVar10[2];
      bVar4 = pbVar10[1];
      fVar21 = param_1[4];
      fVar25 = param_1[5];
      bVar5 = pbVar10[6];
      bVar6 = pbVar10[5];
      param_2[2] = fVar20;
      param_2[3] = fVar18;
      fVar16 = (float)VectorUnsignedToFloat
                                ((uint)bVar4 + (bVar3 & 0xf) * 0x100,(byte)(uVar14 >> 0x15) & 3);
      fVar16 = fVar25 + fVar16 * fVar21;
      fVar17 = (float)VectorUnsignedToFloat
                                ((uint)bVar6 + (bVar5 & 0xf) * 0x100,(byte)(uVar14 >> 0x15) & 3);
      param_2[4] = fVar16;
      param_2[5] = ((fVar25 + fVar17 * fVar21) - fVar16) / (fVar18 - fVar20);
      param_2[6] = fVar11;
      param_2[7] = fVar11;
      return;
    }
    if (cVar2 == '\x02') {
      bVar3 = pbVar10[2];
      fVar16 = param_1[5];
      fVar22 = param_1[4];
      bVar4 = pbVar10[6];
      bVar5 = pbVar10[5];
      bVar6 = pbVar10[3];
      bVar7 = pbVar10[7];
      fVar11 = (float)VectorUnsignedToFloat
                                ((uint)pbVar10[1] + (bVar3 & 0xf) * 0x100,(byte)(uVar14 >> 0x15) & 3
                                );
      param_2[2] = fVar20;
      param_2[3] = fVar18;
      fVar18 = fVar18 - fVar20;
      fVar11 = fVar16 + fVar11 * fVar22;
      fVar23 = (float)VectorUnsignedToFloat
                                ((uint)bVar5 + (bVar4 & 0xf) * 0x100,(byte)(uVar14 >> 0x15) & 3);
      fVar26 = (float)VectorSignedToFloat((char)bVar7 * 0x10 + (uint)(bVar4 >> 4),
                                          (byte)(uVar14 >> 0x15) & 3);
      param_2[4] = fVar11;
      fVar21 = fVar21 / fVar18;
      fVar20 = (float)VectorSignedToFloat((char)bVar6 * 0x10 + (uint)(bVar3 >> 4),
                                          (byte)(uVar14 >> 0x15) & 3);
      fVar11 = fVar11 - (fVar16 + fVar23 * fVar22);
      fVar20 = fVar20 * DAT_0067d61c;
      fVar26 = fVar26 * DAT_0067d61c;
      param_2[5] = fVar20;
      param_2[6] = ((fVar18 * fVar25 * fVar20 - fVar11 * fVar17) - fVar18 * fVar26) *
                   fVar21 * fVar21;
      param_2[7] = (fVar11 * fVar24 + fVar18 * fVar20 + fVar18 * fVar26) * fVar21 * fVar21 * fVar21;
      return;
    }
  }
  return;
}

