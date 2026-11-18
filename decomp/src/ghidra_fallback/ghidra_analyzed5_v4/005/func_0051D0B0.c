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
  if ((int)ALBW_AS_U32(DAT_0051d0fc) < (int)(fVar3 - fVar2)) {
    fVar2 = fVar2 + DAT_0051d100;
    fVar1 = DAT_0051d0fc;
  }
  else {
    fVar1 = DAT_0051d104;
    if ((uint)ALBW_AS_U32(DAT_0051d104) < (uint)(fVar3 - fVar2)) {
      fVar3 = fVar3 + DAT_0051d100;
    }
  }
  fVar2 = (fVar2 + (fVar3 - fVar2) * fparam_0) * DAT_0051d108;
  uVar4 = func_00114608((uint)ALBW_AS_U32(fVar2),(uint)ALBW_AS_U32(fVar1));
  *param_1 = (int)uVar4;
  return;
}

