/* compilefix: USA 0067E914 (EU 0067E8EC), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: operand of type 'float' cannot be cast to a pointer type
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - (T *)<float expr> -> (T *)CF_FBITS(expr): 32-bit copy of the float (vmov/vstr), never a conversion [1]
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
#include "compilefix.h"

extern float func_00590D4C(float fparam_0);
extern float DAT_0067ec6c;
extern int DAT_0067ec70;
extern int DAT_0067ec74;
extern float DAT_0067ec78;
extern float DAT_0067ec7c;
extern float DAT_0067ec80;
extern float DAT_0067ec84;
extern float DAT_0067ec88;
extern float DAT_0067ef10;

// USA 0067E914 <- EU 0067E8EC (Ghidra, non-matching)
// GLOBAL DAT_0067ec6c float
// GLOBAL DAT_0067ec70 int
// GLOBAL DAT_0067ec74 int
// GLOBAL DAT_0067ec78 float
// GLOBAL DAT_0067ec7c float
// GLOBAL DAT_0067ec80 float
// GLOBAL DAT_0067ec84 float
// GLOBAL DAT_0067ec88 float
// GLOBAL DAT_0067ef10 float

void func_0067E914(float *param_1,int *param_2,float fparam_0)

{
  char cVar1;
  short sVar2;
  bool bVar3;
  uint *puVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint in_fpscr;
  float fVar8;
  uint uVar9;
  float fVar10;
  int iVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  fVar8 = DAT_0067ec6c;
  puVar4 = (uint *)CF_FBITS(param_1[8]);
  bVar3 = false;
  uVar12 = VectorFloatToUnsigned(fparam_0 / param_1[6],3);
  uVar9 = in_fpscr & 0xfffffff;
  uVar5 = uVar9 | (uint)(DAT_0067ec6c <= fparam_0) << 0x1d;
  if ((SUB41(uVar5 >> 0x1d,0)) &&
     (uVar12 < (puVar4[(uint)*(ushort *)((int)param_1 + 0xe) * 2 + -2] & 0xfff))) {
    param_2[1] = 0;
    fVar20 = fVar8;
  }
  else {
    uVar5 = uVar9 | (uint)(DAT_0067ec6c <= fparam_0) << 0x1d;
    if (SUB41(uVar5 >> 0x1d,0)) {
      cVar1 = *(char *)((int)param_1 + 9);
    }
    else {
      cVar1 = *(char *)(param_1 + 2);
    }
    if (cVar1 == '\0') {
      uVar9 = uVar9 | (uint)(DAT_0067ec6c <= fparam_0) << 0x1d;
      if (!SUB41(uVar9 >> 0x1d,0)) {
        uVar5 = *puVar4;
        fVar17 = param_1[4];
        fVar14 = param_1[5];
        *param_2 = (int)puVar4;
        param_2[1] = -1;
        fVar20 = *param_1;
        fVar18 = (float)VectorUnsignedToFloat(uVar5 >> 0xc,(byte)(uVar9 >> 0x15) & 3);
        param_2[2] = DAT_0067ec70;
        param_2[3] = (int)ALBW_AS_U32(fVar20);
        param_2[4] = (int)ALBW_AS_U32((fVar14 + fVar18 * fVar17));
        param_2[5] = (int)ALBW_AS_U32(fVar8);
        param_2[6] = (int)ALBW_AS_U32(fVar8);
        param_2[7] = (int)ALBW_AS_U32(fVar8);
        return;
      }
      uVar5 = puVar4[(uint)*(ushort *)((int)param_1 + 0xe) * 2 + -2];
      fVar17 = param_1[4];
      fVar20 = (float)VectorUnsignedToFloat(uVar5 & 0xfff,(byte)(uVar9 >> 0x15) & 3);
      fVar18 = (float)VectorUnsignedToFloat(uVar5 >> 0xc,(byte)(uVar9 >> 0x15) & 3);
      fVar20 = fVar20 * param_1[6] + *param_1;
      fVar14 = param_1[5];
      param_2[1] = 1;
      *param_2 = 0;
      iVar11 = DAT_0067ec74;
      if (param_1[1] < fVar20) {
        fVar20 = param_1[1];
      }
      param_2[2] = (int)ALBW_AS_U32(fVar20);
      param_2[4] = (int)ALBW_AS_U32((fVar14 + fVar18 * fVar17));
      param_2[3] = iVar11;
      param_2[5] = (int)ALBW_AS_U32(fVar8);
      param_2[6] = (int)ALBW_AS_U32(fVar8);
      param_2[7] = (int)ALBW_AS_U32(fVar8);
      return;
    }
    fVar20 = DAT_0067ec6c;
    fVar8 = func_00590D4C(param_1[7] * fparam_0);
    uVar9 = (uint)fVar8;
    param_2[1] = uVar9;
    if ((cVar1 == '\x02') && ((uVar9 & 1) != 0)) {
      bVar3 = true;
      fVar8 = (float)VectorSignedToFloat(uVar9 + 1,(byte)(uVar5 >> 0x15) & 3);
      fVar8 = (param_1[1] - *param_1) * fVar8;
      fparam_0 = fVar8 - fparam_0;
    }
    else {
      fVar8 = (float)VectorSignedToFloat(uVar9,(byte)(uVar5 >> 0x15) & 3);
      fVar8 = (param_1[1] - *param_1) * fVar8;
      fparam_0 = fparam_0 - fVar8;
    }
    uVar12 = VectorFloatToUnsigned(fparam_0 / param_1[6],3);
  }
  fVar19 = DAT_0067ec84;
  fVar18 = DAT_0067ec80;
  fVar17 = DAT_0067ec7c;
  fVar14 = DAT_0067ec78;
  puVar4 = (uint *)*param_2;
  if (puVar4 == (uint *)0x0) {
    fVar10 = (float)VectorSignedToFloat(*(ushort *)((int)param_1 + 0xe) - 1,
                                        (byte)(uVar5 >> 0x15) & 3);
    iVar11 = VectorFloatToUnsigned(param_1[7] * fVar10 * fparam_0,3);
    puVar4 = (uint *)((int)ALBW_AS_U32(param_1[8]) + iVar11 * 8);
  }
  if (bVar3) {
    puVar6 = puVar4;
    if ((*puVar4 & 0xfff) < uVar12) {
      do {
        puVar4 = puVar4 + 2;
      } while ((*puVar4 & 0xfff) < uVar12);
    }
    else {
      do {
        puVar4 = puVar6;
        puVar6 = puVar4 + -2;
      } while (uVar12 <= (puVar4[-2] & 0xfff));
    }
    uVar9 = *puVar4;
    fVar13 = param_1[6];
    fVar15 = *param_1;
    puVar6 = puVar4 + -2;
    uVar12 = puVar4[-2];
    *param_2 = (int)puVar6;
    fVar10 = (float)VectorUnsignedToFloat(uVar9 & 0xfff,(byte)(uVar5 >> 0x15) & 3);
    cVar1 = *(char *)(param_1 + 3);
    fVar16 = (float)VectorUnsignedToFloat(uVar12 & 0xfff,(byte)(uVar5 >> 0x15) & 3);
    fVar10 = (fVar15 - fVar10 * fVar13) + fVar8;
    fVar8 = (fVar15 - fVar16 * fVar13) + fVar8;
    if (cVar1 == '\0') {
      uVar9 = *puVar4;
      fVar17 = param_1[4];
      fVar14 = param_1[5];
      param_2[5] = (int)ALBW_AS_U32(fVar20);
      param_2[6] = (int)ALBW_AS_U32(fVar20);
      param_2[7] = (int)ALBW_AS_U32(fVar20);
      fVar20 = (float)VectorUnsignedToFloat(uVar9 >> 0xc,(byte)(uVar5 >> 0x15) & 3);
      param_2[2] = (int)ALBW_AS_U32(fVar10);
      param_2[3] = (int)ALBW_AS_U32(fVar8);
      param_2[4] = (int)ALBW_AS_U32((fVar14 + fVar20 * fVar17));
      return;
    }
    if (cVar1 == '\x01') {
      fVar17 = param_1[5];
      fVar18 = param_1[4];
      fVar14 = (float)VectorUnsignedToFloat(*puVar4 >> 0xc,(byte)(uVar5 >> 0x15) & 3);
      fVar14 = fVar17 + fVar14 * fVar18;
      fVar19 = (float)VectorUnsignedToFloat(*puVar6 >> 0xc,(byte)(uVar5 >> 0x15) & 3);
      param_2[2] = (int)ALBW_AS_U32(fVar10);
      param_2[3] = (int)ALBW_AS_U32(fVar8);
      param_2[4] = (int)ALBW_AS_U32(fVar14);
      param_2[5] = (int)ALBW_AS_U32((((fVar17 + fVar19 * fVar18) - fVar14) / (fVar8 - fVar10)));
      param_2[6] = (int)ALBW_AS_U32(fVar20);
      param_2[7] = (int)ALBW_AS_U32(fVar20);
      return;
    }
    if (cVar1 == '\x02') {
      fVar13 = param_1[5];
      fVar15 = param_1[4];
      sVar2 = *(short *)((int)puVar4 + 6);
      fVar20 = (float)VectorUnsignedToFloat(*puVar4 >> 0xc,(byte)(uVar5 >> 0x15) & 3);
      fVar21 = (float)VectorSignedToFloat((int)(short)puVar4[-1],(byte)(uVar5 >> 0x15) & 3);
      fVar20 = fVar13 + fVar20 * fVar15;
      fVar16 = (float)VectorUnsignedToFloat(*puVar6 >> 0xc,(byte)(uVar5 >> 0x15) & 3);
      param_2[2] = (int)ALBW_AS_U32(fVar10);
      param_2[3] = (int)ALBW_AS_U32(fVar8);
      param_2[4] = (int)ALBW_AS_U32(fVar20);
      fVar8 = fVar8 - fVar10;
      fVar14 = fVar14 / fVar8;
      fVar10 = (float)VectorSignedToFloat((int)sVar2,(byte)(uVar5 >> 0x15) & 3);
      fVar20 = fVar20 - (fVar13 + fVar16 * fVar15);
      fVar10 = fVar10 * DAT_0067ec88;
      fVar21 = fVar21 * DAT_0067ec88;
      param_2[5] = (int)ALBW_AS_U32(fVar10);
      param_2[6] = (int)ALBW_AS_U32((((fVar8 * fVar17 * fVar10 - fVar20 * fVar18) - fVar8 * fVar21) *
                        fVar14 * fVar14));
      param_2[7] = (int)ALBW_AS_U32(((fVar20 * fVar19 + fVar8 * fVar10 + fVar8 * fVar21) *
                        fVar14 * fVar14 * fVar14));
      return;
    }
  }
  else {
    puVar6 = puVar4;
    if (uVar12 < (*puVar4 & 0xfff)) {
      do {
        puVar4 = puVar4 + -2;
      } while (uVar12 < (*puVar4 & 0xfff));
    }
    else {
      do {
        puVar4 = puVar6;
        puVar6 = puVar4 + 2;
      } while ((puVar4[2] & 0xfff) <= uVar12);
    }
    fVar10 = param_1[6];
    uVar9 = *puVar4;
    fVar13 = *param_1;
    puVar6 = puVar4 + 2;
    uVar12 = puVar4[2];
    *param_2 = (int)puVar6;
    fVar15 = (float)VectorUnsignedToFloat(uVar9 & 0xfff,(byte)(uVar5 >> 0x15) & 3);
    cVar1 = *(char *)(param_1 + 3);
    fVar16 = (float)VectorUnsignedToFloat(uVar12 & 0xfff,(byte)(uVar5 >> 0x15) & 3);
    fVar15 = fVar15 * fVar10 + fVar8 + fVar13;
    fVar13 = fVar16 * fVar10 + fVar8 + fVar13;
    if (cVar1 == '\0') {
      uVar9 = *puVar4;
      fVar14 = param_1[4];
      fVar8 = param_1[5];
      param_2[2] = (int)ALBW_AS_U32(fVar15);
      param_2[3] = (int)ALBW_AS_U32(fVar13);
      fVar17 = (float)VectorUnsignedToFloat(uVar9 >> 0xc,(byte)(uVar5 >> 0x15) & 3);
      param_2[4] = (int)ALBW_AS_U32((fVar8 + fVar17 * fVar14));
      param_2[5] = (int)ALBW_AS_U32(fVar20);
      param_2[6] = (int)ALBW_AS_U32(fVar20);
      param_2[7] = (int)ALBW_AS_U32(fVar20);
      return;
    }
    if (cVar1 == '\x01') {
      uVar9 = *puVar4;
      fVar14 = param_1[5];
      fVar17 = param_1[4];
      uVar12 = *puVar6;
      param_2[2] = (int)ALBW_AS_U32(fVar15);
      param_2[3] = (int)ALBW_AS_U32(fVar13);
      fVar8 = (float)VectorUnsignedToFloat(uVar9 >> 0xc,(byte)(uVar5 >> 0x15) & 3);
      fVar8 = fVar14 + fVar8 * fVar17;
      fVar18 = (float)VectorUnsignedToFloat(uVar12 >> 0xc,(byte)(uVar5 >> 0x15) & 3);
      param_2[4] = (int)ALBW_AS_U32(fVar8);
      param_2[5] = (int)ALBW_AS_U32((((fVar14 + fVar18 * fVar17) - fVar8) / (fVar13 - fVar15)));
      param_2[6] = (int)ALBW_AS_U32(fVar20);
      param_2[7] = (int)ALBW_AS_U32(fVar20);
      return;
    }
    if (cVar1 == '\x02') {
      uVar12 = *puVar4;
      fVar16 = param_1[5];
      fVar20 = param_1[4];
      sVar2 = *(short *)((int)puVar4 + 6);
      uVar7 = *puVar6;
      uVar9 = puVar4[3];
      param_2[2] = (int)ALBW_AS_U32(fVar15);
      param_2[3] = (int)ALBW_AS_U32(fVar13);
      fVar8 = (float)VectorUnsignedToFloat(uVar12 >> 0xc,(byte)(uVar5 >> 0x15) & 3);
      fVar13 = fVar13 - fVar15;
      fVar21 = (float)VectorSignedToFloat((int)(short)uVar9,(byte)(uVar5 >> 0x15) & 3);
      fVar8 = fVar16 + fVar8 * fVar20;
      fVar15 = (float)VectorUnsignedToFloat(uVar7 >> 0xc,(byte)(uVar5 >> 0x15) & 3);
      param_2[4] = (int)ALBW_AS_U32(fVar8);
      fVar10 = (float)VectorSignedToFloat((int)sVar2,(byte)(uVar5 >> 0x15) & 3);
      fVar8 = fVar8 - (fVar16 + fVar15 * fVar20);
      fVar14 = fVar14 / fVar13;
      fVar10 = fVar10 * DAT_0067ef10;
      fVar21 = fVar21 * DAT_0067ef10;
      param_2[5] = (int)ALBW_AS_U32(fVar10);
      param_2[6] = (int)ALBW_AS_U32((((fVar13 * fVar17 * fVar10 - fVar8 * fVar18) - fVar13 * fVar21) *
                        fVar14 * fVar14));
      param_2[7] = (int)ALBW_AS_U32(((fVar8 * fVar19 + fVar13 * fVar10 + fVar13 * fVar21) *
                        fVar14 * fVar14 * fVar14));
      return;
    }
  }
  return;
}

