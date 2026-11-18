#include "ghidra_types.h"

extern int func_00231524(int param_1);
extern float DAT_00424f04;
extern undefined4 DAT_00424f08;

// USA 00424EF0 <- EU 00424ED0 (Ghidra, non-matching)
// GLOBAL DAT_00424f04 float
// GLOBAL DAT_00424f08 undefined4

void func_00424EF0(int param_1)

{
  float fVar1;
  
  func_00231524(param_1 + 0x48);
  fVar1 = DAT_00424f04;
  *(undefined4 *)(param_1 + 0x74) = DAT_00424f08;
  *(float *)(param_1 + 0x70) = (*(float *)(param_1 + 0x54) + *(float *)(param_1 + 0x68)) - fVar1;
  return;
}

