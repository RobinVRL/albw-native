#include "ghidra_types.h"

extern int func_0015BB18(int param_1);
extern int func_001DDCC4(int param_1,undefined1 param_2);
extern int func_004E9CD4(int param_1);
extern int func_004FCEDC(int param_1,float fparam_0);
extern undefined4 DAT_0015e4b0;
extern int *DAT_0015e4b4;
extern int *DAT_0015e4b8;
extern float DAT_0015e4bc;

// USA 0015E430 <- EU 0015E434 (Ghidra, non-matching)
// GLOBAL DAT_0015e4b0 undefined4
// GLOBAL DAT_0015e4b4 int *
// GLOBAL DAT_0015e4b8 int *
// GLOBAL DAT_0015e4bc float

void func_0015E430(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  float fVar3;
  
  func_0015BB18(param_1);
  uVar1 = DAT_0015e4b0;
  *(undefined4 *)(param_1 + 0x8f0) = 0xb4;
  *(undefined4 *)(param_1 + 0x8f4) = uVar1;
  piVar2 = DAT_0015e4b4;
  *(undefined4 *)(param_1 + 0x8ec) = 0;
  func_004E9CD4(*piVar2);
  func_001DDCC4(*DAT_0015e4b8,1);
  fVar3 = DAT_0015e4bc;
  func_004FCEDC(param_1 + 0x5a8,DAT_0015e4bc);
  *(float *)(param_1 + 0xfa4) = fVar3;
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) & 0xffffffef;
  return;
}

