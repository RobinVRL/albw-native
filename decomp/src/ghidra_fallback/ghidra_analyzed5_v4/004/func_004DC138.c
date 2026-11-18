#include "ghidra_types.h"

extern int DAT_004dc1a0;
extern float DAT_004dc1a4;
extern float DAT_004dc1a8;
extern float DAT_004dc1ac;

// USA 004DC138 <- EU 004DC110 (Ghidra, non-matching)
// GLOBAL DAT_004dc1a0 int
// GLOBAL DAT_004dc1a4 float
// GLOBAL DAT_004dc1a8 float
// GLOBAL DAT_004dc1ac float

void func_004DC138(int *param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  (**(code **)(*param_1 + 0xac))(param_1,4,0xffffffff);
  iVar1 = DAT_004dc1a0;
  param_1[0x22b] = param_1[0x22b] | 2;
  *(undefined2 *)(param_1 + 0x213) = 0xf;
  param_1[0x20d] = iVar1;
  param_1[0x26a] = 0;
  fVar2 = DAT_004dc1a8;
  param_1[0x26c] = (int)ALBW_AS_U32((ALBW_AS_F32(param_1[0xf5]) + DAT_004dc1a4));
  param_1[0x267] = param_1[0xf4];
  param_1[0x268] = param_1[0xf5];
  param_1[0x269] = param_1[0xf6];
  fVar3 = DAT_004dc1ac;
  param_1[0x267] = (int)ALBW_AS_U32((ALBW_AS_F32(param_1[0x267]) + fVar2));
  param_1[0x269] = (int)ALBW_AS_U32((ALBW_AS_F32(param_1[0x269]) + fVar3));
  return;
}

