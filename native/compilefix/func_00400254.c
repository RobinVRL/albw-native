/* compilefix: USA 00400254 (EU 00400234), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: operand of type 'float' cannot be cast to a pointer type
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - (T *)<float expr> -> (T *)CF_FBITS(expr): 32-bit copy of the float (vmov/vstr), never a conversion [2]
 *  - explicit (T)(uintptr_t) casts at int<->pointer mismatches (identity on the 32-bit ARM) [2]
 *  - implicit float<->int conversions (Ghidra COPY between a float and an int-typed variable or
 *    pool word, e.g. `fVar = _DAT_xxx;`, `puVar[3] = fVar;`) made bit copies [8]
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
#include "compilefix.h"

extern int func_004001B4(int param_1);
extern undefined4 DAT_004004f8;
extern undefined4 DAT_004004fc;
extern float DAT_00400500;
extern float DAT_00400504;
extern int DAT_00400508;

// USA 00400254 <- EU 00400234 (Ghidra, non-matching)
// GLOBAL DAT_004004f8 undefined4
// GLOBAL DAT_004004fc undefined4
// GLOBAL DAT_00400500 float
// GLOBAL DAT_00400504 float
// GLOBAL DAT_00400508 int

undefined4 * func_00400254(undefined4 *param_1,int param_2,float *param_3)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  byte bVar5;
  char *pcVar6;
  int iVar7;
  char *pcVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  char *pcVar12;
  uint uVar13;
  undefined4 uVar14;
  char *pcVar15;
  uint uVar16;
  int *piVar17;
  float *pfVar18;
  float *pfVar19;
  char *pcVar20;
  char *pcVar21;
  char *pcVar22;
  bool bVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  
  uVar9 = DAT_004004fc;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = DAT_004004f8;
  param_1[5] = (undefined4)(uintptr_t)(param_1 + 5);
  param_1[4] = 0;
  param_1[6] = (undefined4)(uintptr_t)(param_1 + 5);
  param_1[0xf] = uVar9;
  param_1[0x10] = uVar9;
  func_004001B4((int)param_1);
  pcVar12 = (char *)CF_FBITS(param_3[10]);
  pcVar22 = (char *)(param_2 + 0x2c);
  pcVar21 = (char *)(param_2 + 0x38);
  pfVar19 = (float *)(param_2 + 0x44);
  pfVar18 = (float *)(param_2 + 0x4c);
  pcVar20 = (char *)(param_2 + 10);
  pcVar6 = (char *)(param_2 + 0x24);
  if (pcVar12 != (char *)0x0) {
    uVar3 = *(ushort *)((int)param_3 + 0x26);
    if ((uVar3 & 8) != 0) {
      pcVar22 = pcVar12 + 8;
    }
    if ((uVar3 & 0x40) != 0) {
      pcVar21 = pcVar12 + 0x14;
    }
    if ((uVar3 & 0x20) != 0) {
      pfVar19 = (float *)(pcVar12 + 0x20);
    }
    if ((uVar3 & 0x10) != 0) {
      pfVar18 = (float *)(pcVar12 + 0x28);
    }
    if ((uVar3 & 0x80) != 0) {
      pcVar20 = pcVar12 + 0x30;
    }
    if ((uVar3 & 4) != 0) {
      pcVar6 = pcVar12;
    }
  }
  *(undefined1 *)((int)param_1 + 0x47) = *(undefined1 *)(param_2 + 9);
  pcVar8 = (char *)(param_2 + 0xc);
  uVar13 = 0;
  pcVar12 = (char *)(param_1 + 0x20);
  do {
    uVar13 = uVar13 + 1;
    pcVar15 = pcVar12 + 1;
    *pcVar12 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    bVar23 = *pcVar8 == '\0';
    uVar16 = 0;
    if (!bVar23) {
      uVar16 = 0x18;
    }
    pcVar12 = pcVar15;
  } while ((bVar23 || uVar13 <= uVar16) && (!bVar23 && uVar16 != uVar13));
  *pcVar15 = '\0';
  uVar13 = 0;
  pcVar12 = (char *)((int)param_1 + 0x99);
  do {
    uVar13 = uVar13 + 1;
    pcVar8 = pcVar12 + 1;
    *pcVar12 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    bVar23 = *pcVar6 == '\0';
    uVar16 = 0;
    if (!bVar23) {
      uVar16 = 8;
    }
    pcVar12 = pcVar8;
  } while ((bVar23 || uVar13 <= uVar16) && (!bVar23 && uVar16 != uVar13));
  *pcVar8 = '\0';
  param_1[0x1f] = ALBW_AS_U32(param_3[0xc]);
  uVar9 = *(undefined4 *)(pcVar22 + 4);
  uVar14 = *(undefined4 *)(pcVar22 + 8);
  param_1[7] = *(undefined4 *)pcVar22;
  param_1[8] = uVar9;
  param_1[9] = uVar14;
  uVar9 = *(undefined4 *)(pcVar21 + 4);
  uVar14 = *(undefined4 *)(pcVar21 + 8);
  param_1[10] = *(undefined4 *)pcVar21;
  param_1[0xb] = uVar9;
  param_1[0xc] = uVar14;
  fVar10 = pfVar19[1];
  param_1[0xd] = ALBW_AS_U32(*pfVar19);
  param_1[0xe] = ALBW_AS_U32(fVar10);
  iVar4 = DAT_00400508;
  fVar10 = param_3[8];
  if (fVar10 != 0.0) {
    fVar11 = *param_3;
    if (fVar11 == 1.0) {
      fVar10 = param_3[1];
    }
    if ((fVar11 != 1.0 || fVar10 != 1.0) && ((*(byte *)(param_2 + 0xb) & 1) == 0)) {
      if ((*(byte *)(param_2 + 0xb) & 2) == 0) {
        param_1[0xf] = ALBW_AS_U32(*pfVar18 * fVar11);
        fVar10 = pfVar18[1] * param_3[1];
      }
      else {
        fVar10 = DAT_00400504;
        if ((*(byte *)((int)param_1 + 0x47) & 3) != 0) {
          fVar10 = DAT_00400500;
        }
        fVar11 = DAT_00400500;
        if (((uint)*(byte *)((int)param_1 + 0x47) << 0x1c) >> 0x1e == 0) {
          fVar11 = DAT_00400504;
        }
        piVar17 = (int *)CF_FBITS(param_3[0xb]);
        fVar26 = DAT_00400504;
        fVar27 = DAT_00400504;
        while ((piVar17 != (int *)0x0 && (iVar7 = (**(code **)(*piVar17 + 8))(piVar17), iVar7 != iVar4))) {
          fVar26 = fVar26 * ALBW_AS_F32(piVar17[0xd]);
          fVar27 = fVar27 * ALBW_AS_F32(piVar17[0xe]);
          piVar17 = (int *)piVar17[3];
        }
        fVar24 = param_3[3];
        fVar25 = param_3[1];
        param_1[0xf] = ALBW_AS_U32(((param_3[2] * *param_3 - param_3[2]) * fVar10) / (fVar26 * *pfVar19) +
                       *pfVar18);
        fVar10 = ((fVar24 * fVar25 - fVar24) * fVar11) / (fVar27 * pfVar19[1]) + pfVar18[1];
      }
      param_1[0x10] = ALBW_AS_U32(fVar10);
      goto LAB_0040049c;
    }
  }
  param_1[0xf] = ALBW_AS_U32(*pfVar18);
  param_1[0x10] = ALBW_AS_U32(pfVar18[1]);
LAB_0040049c:
  cVar1 = *pcVar20;
  *(char *)((int)param_1 + 0x45) = cVar1;
  *(char *)((int)param_1 + 0x46) = cVar1;
  bVar2 = *(byte *)(param_2 + 8);
  *(byte *)(param_1 + 0x11) = bVar2;
  if ((param_3[8] != 0.0) && (uVar3 = *(ushort *)((int)param_3 + 0x26), (uVar3 & 1) != 0)) {
    bVar5 = (byte)uVar3 & 2;
    if ((uVar3 & 2) != 0) {
      bVar5 = 1;
    }
    *(byte *)(param_1 + 0x11) = bVar5 | bVar2 & 0xfe;
  }
  *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) & 0xef | 0x10;
  return param_1;
}

