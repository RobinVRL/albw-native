#include "ghidra_types.h"

extern float DAT_00531110;
extern float DAT_00531114;
extern float DAT_00531118;
extern int DAT_0053111c;
extern float DAT_00531120;

// USA 00531080 <- EU 00531058 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 undefined1 *
// GLOBAL DAT_00531110 float
// GLOBAL DAT_00531114 float
// GLOBAL DAT_00531118 float
// GLOBAL DAT_0053111c int
// GLOBAL DAT_00531120 float

float func_00531080(undefined4 param_1,uint param_2,uint param_3,int param_4,undefined1 *param_5)

{
  float fVar1;
  uint uVar2;
  float *pfVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  
  fVar1 = DAT_00531110;
  if (param_3 <= param_2) {
    if (param_5 != (undefined1 *)0x0) {
      *param_5 = 0;
    }
    fVar5 = (float)VectorUnsignedToFloat(param_4 - param_3,(byte)(in_fpscr >> 0x15) & 3);
    fVar4 = (float)VectorUnsignedToFloat(param_2 - param_3,(byte)(in_fpscr >> 0x15) & 3);
    return fVar1 - (fVar1 / (fVar5 * fVar5)) * fVar4 * fVar4;
  }
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = 1;
  }
  fVar5 = (float)VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x15) & 3);
  fVar4 = (float)VectorUnsignedToFloat(param_3,(byte)(in_fpscr >> 0x15) & 3);
  uVar2 = (int)((fVar5 / fVar4) * DAT_00531114) + 0xc0000000;
  pfVar3 = (float *)(DAT_0053111c + (uVar2 >> 0x18) * 0x10);
  fVar4 = (float)VectorUnsignedToFloat(uVar2 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
  return (*pfVar3 + pfVar3[1] * fVar4 * DAT_00531118 + fVar1) * DAT_00531120;
}

