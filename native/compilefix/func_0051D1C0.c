/* USA 0051D1C0: converted Ghidra text with one fix (160bg): its range tests compare the float BITS
 * of a value with float constants (vmov rX, sY; cmp - signed against a positive constant,
 * unsigned against a negative one), which Ghidra wrote as (int)(v) / (uint)(v) conversions.
 * On x86 (uint)(-1.0f) is 0xFFFFFFFF, so small negative values passed the test. Now the
 * float comparisons the bit tests mean (1). Confidence: high (EU code bytes). */
#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern float DAT_0051d238;
extern float DAT_0051d23c;
extern float DAT_0051d240;
extern float DAT_0051d244;
extern float DAT_0051d248;
extern float DAT_0051d24c;
extern float DAT_0051d250;

// USA 0051D1C0 <- EU 0051D198 (Ghidra, non-matching)
// GLOBAL DAT_0051d238 float
// GLOBAL DAT_0051d23c float
// GLOBAL DAT_0051d240 float
// GLOBAL DAT_0051d244 float
// GLOBAL DAT_0051d248 float
// GLOBAL DAT_0051d24c float
// GLOBAL DAT_0051d250 float

void func_0051D1C0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,float fparam_0,
                  float fparam_1,float fparam_2)

{
  float fVar1;
  uint in_fpscr;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  
  fVar3 = (float)VectorUnsignedToFloat(param_2,(byte)(in_fpscr >> 0x15) & 3);
  fVar4 = (float)VectorUnsignedToFloat(param_3,(byte)(in_fpscr >> 0x15) & 3);
  fVar3 = fVar3 * DAT_0051d238;
  fVar4 = fVar4 * DAT_0051d238;
  if ((ALBW_AS_F32(DAT_0051d23c) < (fVar4 - fVar3))) {
    fVar3 = fVar3 + DAT_0051d240;
    fVar1 = DAT_0051d23c;
  }
  else {
    fVar1 = DAT_0051d244;
    if (((fVar4 - fVar3) < ALBW_AS_F32(DAT_0051d244))) {
      fVar4 = fVar4 + DAT_0051d240;
    }
  }
  fVar5 = fparam_2 / DAT_0051d248;
  fVar2 = fVar5 * fVar5 - fVar5;
  fVar6 = fVar2 * fVar5;
  fVar5 = fVar5 * fVar5 - fVar6 * DAT_0051d24c;
  uVar7 = func_00114608((uint)ALBW_AS_U32((((fVar3 - fVar5 * fVar3) + fVar5 * fVar4 + (fVar6 - fVar2) * fparam_0
                               + fVar6 * fparam_1) * DAT_0051d250)),(uint)ALBW_AS_U32(fVar1));
  *param_1 = (int)uVar7;
  return;
}

