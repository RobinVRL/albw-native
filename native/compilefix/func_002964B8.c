/* USA 002964B8: converted Ghidra text with one fix (160bg): its range tests compare the float BITS
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

// USA 002964B8 <- EU 002964E0 (Ghidra, non-matching)
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

void func_002964B8(int param_1,int param_2)

{
  byte bVar1;
  bool bVar2;
  float *pfVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  
  fVar7 = (float)VectorSignedToFloat(param_2 * param_2,(byte)(in_fpscr >> 0x15) & 3);
  fVar8 = fVar7 * DAT_0029669c;
  /* scaled value above 4.0? (ARM: bit compare with 4.0f) */
  if ((ALBW_AS_F32(DAT_002966a0) < (fVar7 * DAT_0029669c))) {
    fVar8 = DAT_002966a4;
  }
  uVar4 = param_2 * param_2 * DAT_002966a8;
  pfVar3 = (float *)(DAT_002966b4 + (uVar4 >> 0x18) * 0x10);
  fVar7 = (float)VectorUnsignedToFloat(uVar4 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
  fVar7 = *pfVar3 + pfVar3[1] * fVar7 * DAT_002966b0;
  if (DAT_002966b8 <= fVar7) {
    fVar8 = DAT_002966ac + fVar7 * fVar8;
  }
  else {
    fVar8 = DAT_002966ac - fVar7 * fVar7 * fVar8 * DAT_002966bc;
  }
  uVar4 = in_fpscr & 0xfffffff | (uint)(DAT_002966bc <= fVar8) << 0x1d;
  fVar7 = DAT_002966bc;
  if ((SUB41(uVar4 >> 0x1d,0)) &&
     (uVar4 = in_fpscr & 0xfffffff | (uint)(fVar8 < DAT_002966a4) << 0x1f |
              (uint)(fVar8 == DAT_002966a4) << 0x1e, bVar1 = (byte)(uVar4 >> 0x18), fVar7 = fVar8,
     !(bool)(bVar1 >> 6 & 1) && (bool)(bVar1 >> 7) == (NAN(fVar8) || NAN(DAT_002966a4)))) {
    fVar7 = DAT_002966a4;
  }
  uVar9 = CONCAT44(fVar7,DAT_002966ac);
  if (0x77 < param_2) {
    fVar8 = (float)VectorSignedToFloat(param_2 + -0x78,(byte)(uVar4 >> 0x15) & 3);
    fVar8 = DAT_002966ac - fVar8 * DAT_002966c0;
    uVar9 = CONCAT44(fVar7,fVar8);
    if (fVar8 < DAT_002966b8) {
      uVar9 = CONCAT44(fVar7,DAT_002966b8);
    }
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    iVar6 = *(int *)(param_1 + 0x20);
    for (iVar5 = *(int *)(param_1 + 0x18) - iVar6; iVar5 != (param_1 + 0x14) - iVar6;
        iVar5 = *(int *)(iVar5 + iVar6 + 4) - iVar6) {
      bVar2 = func_0057D86C((int *)(iVar5 + 0xc));
      if (bVar2) {
        func_0048BD24(iVar5,0,ALBW_AS_F32(uVar9));
        func_002590C4(iVar5,ALBW_AS_F32(((ulonglong)uVar9 >> 0x20)));
      }
    }
  }
  if (*(int *)(param_1 + 0x4c) != 0) {
    iVar6 = *(int *)(param_1 + 0x50);
    for (iVar5 = *(int *)(param_1 + 0x48) - iVar6; iVar5 != (param_1 + 0x44) - iVar6;
        iVar5 = *(int *)(iVar5 + iVar6 + 4) - iVar6) {
      bVar2 = func_0057D86C((int *)(iVar5 + 0xc));
      if (bVar2) {
        func_002590C4(iVar5,ALBW_AS_F32(((ulonglong)uVar9 >> 0x20)));
      }
    }
  }
  return;
}

