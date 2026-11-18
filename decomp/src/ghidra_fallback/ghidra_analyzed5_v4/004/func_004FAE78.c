#include "ghidra_types.h"

extern int func_00520FC0(void);

// USA 004FAE78 <- EU 004FAE50 (Ghidra, non-matching)

void func_004FAE78(float *param_1,float *param_2,float fparam_0)

{
  float *pfVar1;
  bool bVar2;
  float fVar3;
  
  bVar2 = param_2 == (float *)0x0;
  pfVar1 = param_1;
  if (!bVar2) {
    pfVar1 = param_2;
  }
  *(bool *)((int)param_1 + 0x8b7) = bVar2;
  if (bVar2) {
    pfVar1 = (float *)func_00520FC0();
  }
  fVar3 = *pfVar1 - param_1[0xf4];
  if (SQRT(fVar3 * fVar3 + (pfVar1[2] - param_1[0xf6]) * (pfVar1[2] - param_1[0xf6])) < fparam_0) {
    param_1[0x20f] = *pfVar1;
    param_1[0x210] = pfVar1[1];
    param_1[0x211] = pfVar1[2];
    param_1[0x168] = ALBW_AS_F32(((uint)ALBW_AS_U32(param_1[0x168]) | 0x80000));
  }
  return;
}

