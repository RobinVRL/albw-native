#include "ghidra_types.h"

extern int func_00623128(int *param_1);
extern int DAT_002cc7d8;

// USA 002CC7B4 <- EU 002CC790 (Ghidra, non-matching)
// GLOBAL DAT_002cc7d8 int

void func_002CC7B4(int *param_1)

{
  int iVar1;
  
  func_00623128(param_1);
  iVar1 = DAT_002cc7d8;
  param_1[0x266] = param_1[0xf4];
  param_1[0x267] = param_1[0xf5];
  param_1[0x268] = param_1[0xf6];
  param_1[0x267] = (int)ALBW_AS_U32((ALBW_AS_F32(param_1[0x267]) + ALBW_AS_F32(param_1[0x20e])));
  *(undefined2 *)(iVar1 + (int)param_1) = 0;
  return;
}

