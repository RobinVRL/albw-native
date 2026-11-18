#include "ghidra_types.h"

extern int func_004F8964(float *param_1,int param_2,float fparam_0);
extern float func_004F898C(void);
extern int func_004FB0D8(int param_1,float *param_2);
extern undefined4 DAT_00202de8;
extern undefined4 DAT_00202dec;
extern undefined4 DAT_00202df0;
extern undefined4 DAT_00202df4;

// USA 00202D70 <- EU 00202D70 (Ghidra, non-matching)
// GLOBAL DAT_00202de8 undefined4
// GLOBAL DAT_00202dec undefined4
// GLOBAL DAT_00202df0 undefined4
// GLOBAL DAT_00202df4 undefined4

undefined4 func_00202D70(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fparam_0;
  
  uVar1 = DAT_00202de8;
  *(undefined4 *)(param_1 + 0x3dc) = DAT_00202de8;
  *(undefined4 *)(param_1 + 0x3e4) = uVar1;
  *(undefined1 *)(param_1 + 0x925) = 0;
  uVar1 = DAT_00202dec;
  *(undefined4 *)(param_1 + 0x910) = 5;
  *(undefined4 *)(param_1 + 0x914) = uVar1;
  uVar2 = DAT_00202df4;
  uVar1 = DAT_00202df0;
  *(undefined4 *)(param_1 + 0x90c) = 0;
  *(undefined4 *)(param_1 + 0x91c) = uVar1;
  *(undefined4 *)(param_1 + 0x920) = uVar2;
  *(undefined4 *)(param_1 + 0x918) = 0;
  fparam_0 = func_004F898C();
  func_004F8964((float *)(param_1 + 0x3e0),1,fparam_0);
  return func_004FB0D8(param_1,(float *)(param_1 + 0x3e0));
}

