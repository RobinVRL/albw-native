#include "ghidra_types.h"

extern int DAT_003133ec;
extern float DAT_003133f0;

// USA 00313398 <- EU 00313374 (Ghidra, non-matching)
// GLOBAL DAT_003133ec int
// GLOBAL DAT_003133f0 float

void func_00313398(int *param_1)

{
  float fVar1;
  
  (**(code **)(*param_1 + 0xac))(param_1,3,0xffffffff);
  (**(code **)(*param_1 + 0xac))(param_1,4,0xffffffff);
  param_1[0x20d] = DAT_003133ec;
  fVar1 = DAT_003133f0;
  param_1[0x285] = param_1[0xf4];
  param_1[0x286] = param_1[0xf5];
  param_1[0x287] = param_1[0xf6];
  param_1[0x287] = (int)ALBW_AS_U32((ALBW_AS_F32(param_1[0x287]) + fVar1));
  param_1[0x22b] = param_1[0x22b] | 4;
  return;
}

