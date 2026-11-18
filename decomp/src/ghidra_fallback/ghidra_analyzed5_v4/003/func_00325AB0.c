#include "ghidra_types.h"

extern int func_00324964(int param_1);
extern int func_003249E0(int param_1,uint param_2);
extern float func_0054DE3C(int param_1,uint param_2,int param_3);
extern undefined4 DAT_00325af4;

// USA 00325AB0 <- EU 00325A8C (Ghidra, non-matching)
// GLOBAL DAT_00325af4 undefined4

void func_00325AB0(int param_1,uint param_2)

{
  undefined4 uVar1;
  float fVar2;
  
  func_003249E0(param_1,param_2);
  func_00324964(param_1);
  *(undefined4 *)(param_1 + 0x498) = *(undefined4 *)(param_1 + 0x40c);
  fVar2 = func_0054DE3C(param_1,param_2,1);
  *(float *)(param_1 + 0x4c0) = fVar2;
  *(float *)(param_1 + 0x4bc) = fVar2;
  fVar2 = func_0054DE3C(param_1,param_2,0);
  *(float *)(param_1 + 0x4ac) = fVar2;
  uVar1 = DAT_00325af4;
  *(undefined4 *)(param_1 + 0x49c) = DAT_00325af4;
  *(float *)(param_1 + 0x4a0) = fVar2;
  *(undefined4 *)(param_1 + 0x4a4) = uVar1;
  return;
}

