/* USA 002964A4: converted Ghidra text with one fix (160bg): its range tests compare the float BITS
 * of a value with float constants (vmov rX, sY; cmp - signed against a positive constant,
 * unsigned against a negative one), which Ghidra wrote as (int)(v) / (uint)(v) conversions.
 * On x86 (uint)(-1.0f) is 0xFFFFFFFF, so small negative values passed the test. Now the
 * float comparisons the bit tests mean (1). Confidence: high (EU code bytes). */
#include "ghidra_types.h"

extern int func_002590C4(int param_1,float fparam_0);
extern int func_0048BD24(int param_1,undefined4 param_2,float fparam_0);
extern int func_0057D86C(int *param_1);
extern float DAT_0029669c;
extern int DAT_002966a0;
extern float DAT_002966a4;
extern int DAT_002966a8;
extern float DAT_002966ac;
extern float DAT_002966b0;
extern int DAT_002966b4;
extern float DAT_002966b8;
extern float DAT_002966bc;
extern float DAT_002966c0;

// USA 002964A4 <- EU 002964CC (Ghidra, non-matching)
// GLOBAL DAT_0029669c float
// GLOBAL DAT_002966a0 int
// GLOBAL DAT_002966a4 float
// GLOBAL DAT_002966a8 int
// GLOBAL DAT_002966ac float
// GLOBAL DAT_002966b0 float
// GLOBAL DAT_002966b4 int
// GLOBAL DAT_002966b8 float
// GLOBAL DAT_002966bc float
// GLOBAL DAT_002966c0 float

void func_002964A4(int param_1,int param_2)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  float *pfVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  
  *(undefined1 *)(*(int *)(param_1 + 0x40) + 0x84) = 0;
  iVar3 = *(int *)(param_1 + 0x4c);
  fVar8 = (float)VectorSignedToFloat(param_2 * param_2,(byte)(in_fpscr >> 0x15) & 3);
  fVar9 = fVar8 * DAT_0029669c;
  if ((ALBW_AS_F32(DAT_002966a0) < (fVar8 * DAT_0029669c))) {
    fVar9 = DAT_002966a4;
  }
  uVar5 = param_2 * param_2 * DAT_002966a8;
  pfVar4 = (float *)(DAT_002966b4 + (uVar5 >> 0x18) * 0x10);
  fVar8 = (float)VectorUnsignedToFloat(uVar5 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
  fVar8 = *pfVar4 + pfVar4[1] * fVar8 * DAT_002966b0;
  if (DAT_002966b8 <= fVar8) {
    fVar9 = DAT_002966ac + fVar8 * fVar9;
  }
  else {
    fVar9 = DAT_002966ac - fVar8 * fVar8 * fVar9 * DAT_002966bc;
  }
  uVar5 = in_fpscr & 0xfffffff | (uint)(DAT_002966bc <= fVar9) << 0x1d;
  fVar8 = DAT_002966bc;
  if ((SUB41(uVar5 >> 0x1d,0)) &&
     (uVar5 = in_fpscr & 0xfffffff | (uint)(fVar9 < DAT_002966a4) << 0x1f |
              (uint)(fVar9 == DAT_002966a4) << 0x1e, bVar1 = (byte)(uVar5 >> 0x18), fVar8 = fVar9,
     !(bool)(bVar1 >> 6 & 1) && (bool)(bVar1 >> 7) == (NAN(fVar9) || NAN(DAT_002966a4)))) {
    fVar8 = DAT_002966a4;
  }
  uVar10 = CONCAT44(fVar8,DAT_002966ac);
  if (0x77 < param_2) {
    fVar9 = (float)VectorSignedToFloat(param_2 + -0x78,(byte)(uVar5 >> 0x15) & 3);
    fVar9 = DAT_002966ac - fVar9 * DAT_002966c0;
    uVar10 = CONCAT44(fVar8,fVar9);
    if (fVar9 < DAT_002966b8) {
      uVar10 = CONCAT44(fVar8,DAT_002966b8);
    }
  }
  if (*(int *)(iVar3 + 0x1c) != 0) {
    iVar7 = *(int *)(iVar3 + 0x20);
    for (iVar6 = *(int *)(iVar3 + 0x18) - iVar7; iVar6 != (iVar3 + 0x14) - iVar7;
        iVar6 = *(int *)(iVar6 + iVar7 + 4) - iVar7) {
      bVar2 = func_0057D86C((int *)(iVar6 + 0xc));
      if (bVar2) {
        func_0048BD24(iVar6,0,ALBW_AS_F32(uVar10));
        func_002590C4(iVar6,ALBW_AS_F32(((ulonglong)uVar10 >> 0x20)));
      }
    }
  }
  if (*(int *)(iVar3 + 0x4c) != 0) {
    iVar7 = *(int *)(iVar3 + 0x50);
    for (iVar6 = *(int *)(iVar3 + 0x48) - iVar7; iVar6 != (iVar3 + 0x44) - iVar7;
        iVar6 = *(int *)(iVar6 + iVar7 + 4) - iVar7) {
      bVar2 = func_0057D86C((int *)(iVar6 + 0xc));
      if (bVar2) {
        func_002590C4(iVar6,ALBW_AS_F32(((ulonglong)uVar10 >> 0x20)));
      }
    }
  }
  return;
}

