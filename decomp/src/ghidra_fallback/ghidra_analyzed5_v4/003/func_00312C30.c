#include "ghidra_types.h"

extern float DAT_00312c70;
extern float DAT_00312c74;
extern int DAT_00312c78;

// USA 00312C30 <- EU 00312C0C (Ghidra, non-matching)
// GLOBAL DAT_00312c70 float
// GLOBAL DAT_00312c74 float
// GLOBAL DAT_00312c78 int

void func_00312C30(int *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  
  (**(code **)(*param_1 + 0xac))(param_1,3,0xffffffff);
  fVar2 = DAT_00312c74;
  fVar1 = DAT_00312c70;
  param_1[0x285] = param_1[0xf4];
  param_1[0x286] = param_1[0xf5];
  param_1[0x287] = param_1[0xf6];
  iVar3 = DAT_00312c78;
  param_1[0x285] = (int)ALBW_AS_U32((ALBW_AS_F32(param_1[0x285]) - fVar1));
  param_1[0x287] = (int)ALBW_AS_U32((ALBW_AS_F32(param_1[0x287]) + fVar2));
  param_1[0x20d] = iVar3;
  return;
}

