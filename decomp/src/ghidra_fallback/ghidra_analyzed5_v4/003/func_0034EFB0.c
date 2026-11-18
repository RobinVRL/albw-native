#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern float DAT_0034f04c;
extern int DAT_0034f050;
extern float DAT_0034f054;
extern float DAT_0034f058;
extern float DAT_0034f05c;
extern float DAT_0034f060;
extern float DAT_0034f064;

// USA 0034EFB0 <- EU 0034EF8C (Ghidra, non-matching)
// GLOBAL DAT_0034f04c float
// GLOBAL DAT_0034f050 int
// GLOBAL DAT_0034f054 float
// GLOBAL DAT_0034f058 float
// GLOBAL DAT_0034f05c float
// GLOBAL DAT_0034f060 float
// GLOBAL DAT_0034f064 float

undefined8 func_0034EFB0(int param_1)

{
  uint uVar1;
  uint in_fpscr;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  
  fVar2 = (float)VectorUnsignedToFloat
                           (*(undefined4 *)(param_1 + 0x180),(byte)(in_fpscr >> 0x15) & 3);
  fVar4 = (float)VectorUnsignedToFloat(*(undefined4 *)(param_1 + 0x30),(byte)(in_fpscr >> 0x15) & 3)
  ;
  fVar2 = fVar2 * DAT_0034f04c;
  fVar4 = fVar4 * DAT_0034f04c;
  if (DAT_0034f050 < (int)(fVar4 - fVar2)) {
    fVar2 = fVar2 + DAT_0034f054;
  }
  else if ((uint)ALBW_AS_U32(DAT_0034f058) < (uint)(fVar4 - fVar2)) {
    fVar4 = fVar4 + DAT_0034f054;
  }
  uVar1 = *(uint *)(param_1 + 0x18c);
  fVar5 = (float)VectorUnsignedToFloat(uVar1,(byte)(in_fpscr >> 0x15) & 3);
  fVar3 = DAT_0034f04c;
  if ((int)uVar1 < 0) {
    fVar3 = fVar5 * DAT_0034f04c;
    fVar5 = fVar3 - DAT_0034f054;
  }
  if ((int)uVar1 >= 0) {
    fVar5 = fVar5 * fVar3;
  }
  fVar3 = (*(float *)(param_1 + 0x194) - *(float *)(param_1 + 0x184)) /
          (*(float *)(param_1 + 0x188) - *(float *)(param_1 + 0x184));
  fVar7 = fVar3 * fVar3 - fVar3;
  fVar6 = fVar7 * fVar3;
  fVar3 = fVar3 * fVar3 - fVar6 * DAT_0034f060;
  uVar8 = func_00114608((uint)ALBW_AS_U32((((fVar2 - fVar3 * fVar2) + fVar3 * fVar4 + (fVar6 - fVar7) * fVar5 +
                               fVar6 * DAT_0034f05c) * DAT_0034f064)),uVar1);
  return uVar8;
}

