#include "ghidra_types.h"

extern int func_00520FC0(void);
extern int DAT_004faf68;

// USA 004FAF00 <- EU 004FAED8 (Ghidra, non-matching)
// GLOBAL DAT_004faf68 int

void func_004FAF00(float *param_1,undefined2 param_2,float *param_3,float fparam_0)

{
  bool bVar1;
  float fVar2;
  
  bVar1 = param_3 == (float *)0x0;
  if (bVar1) {
    param_3 = param_1;
  }
  *(undefined2 *)(DAT_004faf68 + (int)param_1) = param_2;
  *(bool *)((int)param_1 + 0x8b7) = bVar1;
  if (bVar1) {
    param_3 = (float *)func_00520FC0();
  }
  fVar2 = *param_3 - param_1[0xf4];
  if (SQRT(fVar2 * fVar2 + (param_3[2] - param_1[0xf6]) * (param_3[2] - param_1[0xf6])) < fparam_0)
  {
    param_1[0x20f] = *param_3;
    param_1[0x210] = param_3[1];
    param_1[0x211] = param_3[2];
    param_1[0x168] = ALBW_AS_F32(((uint)ALBW_AS_U32(param_1[0x168]) | 0x100000));
  }
  return;
}

