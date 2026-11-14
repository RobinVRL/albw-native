/* compilefix: USA 0059069C (EU 00590674), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: use of undeclared identifier 'INFINITY'
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - Ghidra NAN(x)/INFINITY -> __builtin_isnan(x) (vcmp unordered) / +inf [1]
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
#define CF_MATHCONST
#include "compilefix.h"

extern int func_0058FBFC(uint param_1);
extern float func_005919B4(void);
extern float DAT_00590884;
extern float DAT_00590888;
extern float DAT_0059088c;
extern float DAT_00590890;
extern float DAT_00590894;
extern float DAT_00590898;
extern float DAT_0059089c;
extern float DAT_005908a0;
extern float DAT_005908a4;
extern float DAT_005908a8;
extern float DAT_005908ac;
extern float DAT_005908b0;
extern float DAT_005908b4;
extern float DAT_005908b8;
extern float DAT_005908bc;
extern float DAT_005908c0;
extern float DAT_005908c4;
extern float DAT_005908c8;
extern float DAT_005908cc;
extern float DAT_005908d0;
extern float DAT_005908d4;
extern float DAT_005908d8;
extern float DAT_005908dc;
extern float DAT_005908e0;

// USA 0059069C <- EU 00590674 (Ghidra, non-matching)
// GLOBAL DAT_00590884 float
// GLOBAL DAT_00590888 float
// GLOBAL DAT_0059088c float
// GLOBAL DAT_00590890 float
// GLOBAL DAT_00590894 float
// GLOBAL DAT_00590898 float
// GLOBAL DAT_0059089c float
// GLOBAL DAT_005908a0 float
// GLOBAL DAT_005908a4 float
// GLOBAL DAT_005908a8 float
// GLOBAL DAT_005908ac float
// GLOBAL DAT_005908b0 float
// GLOBAL DAT_005908b4 float
// GLOBAL DAT_005908b8 float
// GLOBAL DAT_005908bc float
// GLOBAL DAT_005908c0 float
// GLOBAL DAT_005908c4 float
// GLOBAL DAT_005908c8 float
// GLOBAL DAT_005908cc float
// GLOBAL DAT_005908d0 float
// GLOBAL DAT_005908d4 float
// GLOBAL DAT_005908d8 float
// GLOBAL DAT_005908dc float
// GLOBAL DAT_005908e0 float

float func_0059069C(float fparam_0,float fparam_1,float fparam_2,float fparam_3)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  
  uVar3 = 0xe8000000;
  bVar5 = (int)ALBW_AS_U32(fparam_0) * 2 + 0xe8000000U < 0xe5000000;
  if (bVar5) {
    uVar3 = (int)ALBW_AS_U32(fparam_1) * 2 + 0xe8000000;
  }
  fVar1 = fparam_0;
  fVar7 = fparam_1;
  if (!bVar5 || 0xe4ffffff < uVar3) {
    if (0xff000000 < (uint)((int)ALBW_AS_U32(fparam_0) << 1) || 0xff000000 < (uint)((int)ALBW_AS_U32(fparam_1) << 1)) {
      return fparam_0 + fparam_1;
    }
    if ((((uint)ALBW_AS_U32(fparam_0) | (uint)ALBW_AS_U32(fparam_1)) & 0x7fffffff) == 0) {
      fparam_1 = ALBW_AS_F32(((uint)ALBW_AS_U32(fparam_1) | 0x7f800000));
      fVar7 = fparam_1;
    }
    else if (ABS(fparam_0) == INFINITY && ABS(fparam_1) == INFINITY) {
      fVar1 = ALBW_AS_F32(((uint)ALBW_AS_U32(fparam_0) & 0xbfffffff));
      fparam_1 = ALBW_AS_F32(((uint)ALBW_AS_U32(fparam_1) & 0xbfffffff));
      fparam_0 = fVar1;
      fVar7 = fparam_1;
    }
    else if (ABS(fparam_0) == INFINITY || ABS(fparam_1) == 0.0) {
      fVar1 = ALBW_AS_F32(((uint)ALBW_AS_U32(fparam_0) | 0x7f800000));
      fparam_1 = ALBW_AS_F32(((uint)ALBW_AS_U32(fparam_1) & 0x80000000));
    }
    else if (-1 < (int)(((uint)ALBW_AS_U32(fparam_1) ^ (uint)ALBW_AS_U32(fparam_0)) << 1)) {
      fVar7 = DAT_00590884;
      if ((int)ALBW_AS_U32(fparam_1) * 2 < 0) {
        fVar7 = DAT_00590888;
      }
      fparam_1 = fparam_1 * fVar7;
      fVar1 = fparam_0 * fVar7;
      fparam_0 = fparam_0 * fVar7;
      fVar7 = fparam_1;
    }
  }
  iVar4 = ((uint)((int)ALBW_AS_U32(fVar1) * 2) >> 0x18) - ((uint)((int)ALBW_AS_U32(fparam_1) << 1) >> 0x18);
  if (0x1b < iVar4) {
    fVar7 = DAT_0059088c;
    if (((uint)ALBW_AS_U32(fVar1) & 0x80000000) == 0) {
      fVar7 = DAT_00590890;
    }
    return fVar7;
  }
  if (-0x1b < iVar4) {
    if ((uint)((int)ALBW_AS_U32(fparam_1) * 2) < (uint)((int)ALBW_AS_U32(fVar1) * 2)) {
      fVar6 = -fparam_0;
      bVar5 = ((uint)ALBW_AS_U32(fVar1) & 0x80000000) != 0;
      if (bVar5) {
        fparam_3 = DAT_0059089c;
      }
      fVar2 = -fVar1;
      fVar1 = fparam_1;
      fparam_0 = fVar7;
      fVar7 = DAT_005908a0;
      if (!bVar5) {
        fVar7 = DAT_005908a8;
        fparam_3 = DAT_005908a4;
      }
    }
    else {
      fVar2 = fparam_1;
      fVar6 = fVar7;
      fVar7 = DAT_005908bc;
      fparam_3 = DAT_005908bc;
      if ((((uint)ALBW_AS_U32(fparam_1) & 0x80000000) != 0) &&
         (fVar7 = DAT_005908c4, fparam_3 = DAT_005908c0, ((uint)ALBW_AS_U32(fVar1) & 0x80000000) == 0)) {
        fVar7 = DAT_005908cc;
        fparam_3 = DAT_005908c8;
      }
    }
    if ((uint)(((int)ALBW_AS_U32(fVar2) - (int)ALBW_AS_U32(fVar1)) * 2) < 0x1000000) {
      if ((((uint)ALBW_AS_U32(fVar1) ^ (uint)ALBW_AS_U32(fVar2)) & 0x80000000) == 0) {
        fVar7 = fVar7 + DAT_005908b0;
        fparam_3 = fparam_3 + DAT_005908ac;
        fVar1 = DAT_005908b8;
      }
      else {
        fVar7 = fVar7 - DAT_005908b0;
        fparam_3 = fparam_3 - DAT_005908ac;
        fVar1 = DAT_005908b4;
      }
      fVar6 = (fparam_0 - fVar1 * fVar6) / (fVar6 + fparam_0 * fVar1);
    }
    else {
      fVar6 = fparam_0 / fVar6;
    }
    fVar1 = fVar6 * fVar6;
    return fVar7 + fVar6 * fVar1 *
                   (DAT_005908e0 +
                   fVar1 * (DAT_005908dc +
                           fVar1 * (DAT_005908d8 + fVar1 * (DAT_005908d4 + fVar1 * DAT_005908d0))))
           + fVar6 + fparam_3;
  }
  if (((uint)ALBW_AS_U32(fparam_1) & 0x80000000) != 0) {
    fVar7 = DAT_00590894;
    if (((uint)ALBW_AS_U32(fVar1) & 0x80000000) == 0) {
      fVar7 = DAT_00590898;
    }
    return fVar7;
  }
  fVar7 = fparam_0 / fVar7;
  uVar3 = func_0058FBFC((uint)ALBW_AS_U32(fVar7));
  if (uVar3 == 4) {
    func_005919B4();
  }
  return fVar7;
}

