/* USA 0051D0B0: converted Ghidra text with one fix (160bg): its range tests compare the float BITS
 * of a value with float constants (vmov rX, sY; cmp - signed against a positive constant,
 * unsigned against a negative one), which Ghidra wrote as (int)(v) / (uint)(v) conversions.
 * On x86 (uint)(-1.0f) is 0xFFFFFFFF, so small negative values passed the test. Now the
 * float comparisons the bit tests mean (1). Confidence: high (EU code bytes). */
#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern float DAT_0051d0f8;
extern float DAT_0051d0fc;
extern float DAT_0051d100;
extern float DAT_0051d104;
extern float DAT_0051d108;

// USA 0051D0B0 <- EU 0051D088 (Ghidra, non-matching)
// GLOBAL DAT_0051d0f8 float
// GLOBAL DAT_0051d0fc float
// GLOBAL DAT_0051d100 float
// GLOBAL DAT_0051d104 float
// GLOBAL DAT_0051d108 float

void func_0051D0B0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,float fparam_0)

{
  float fVar1;
  uint in_fpscr;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  
  fVar2 = (float)VectorUnsignedToFloat(param_2,(byte)(in_fpscr >> 0x15) & 3);
  fVar3 = (float)VectorUnsignedToFloat(param_3,(byte)(in_fpscr >> 0x15) & 3);
  fVar2 = fVar2 * DAT_0051d0f8;
  fVar3 = fVar3 * DAT_0051d0f8;
  if ((ALBW_AS_F32(DAT_0051d0fc) < (fVar3 - fVar2))) {
    fVar2 = fVar2 + DAT_0051d100;
    fVar1 = DAT_0051d0fc;
  }
  else {
    fVar1 = DAT_0051d104;
    if (((fVar3 - fVar2) < ALBW_AS_F32(DAT_0051d104))) {
      fVar3 = fVar3 + DAT_0051d100;
    }
  }
  fVar2 = (fVar2 + (fVar3 - fVar2) * fparam_0) * DAT_0051d108;
  uVar4 = func_00114608((uint)ALBW_AS_U32(fVar2),(uint)ALBW_AS_U32(fVar1));
  *param_1 = (int)uVar4;
  return;
}

