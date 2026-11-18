#include "ghidra_types.h"

extern int func_0036BFD0(int param_1,undefined4 param_2,undefined4 param_3);
extern int func_0036C2B8(undefined4 param_1,undefined4 param_2);
extern int func_004FAB60(int param_1,undefined4 param_2,int param_3);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_004FB070(int param_1,float fparam_0);
extern int func_004FB4C4(int param_1,float fparam_0);
extern undefined4 *DAT_002f165c;
extern float DAT_002f1660;

// USA 002F15B4 <- EU 002F1590 (Ghidra, non-matching)
// GLOBAL DAT_002f165c undefined4 *
// GLOBAL DAT_002f1660 float

void func_002F15B4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  float fparam_0;
  
  *(uint *)(param_1 + 0x2e0) = *(uint *)(param_1 + 0x2e0) | 2;
  *(undefined4 *)(param_1 + 0xc28) = 0;
  *(undefined1 *)(param_1 + 0xa58) = 3;
  puVar1 = DAT_002f165c;
  *(int *)(param_1 + 0x990) = param_1 + 0xce8;
  func_0036C2B8(param_1 + 0x964,*puVar1);
  func_0036BFD0(param_1 + 0x964,0x1e,0x1e);
  fparam_0 = DAT_002f1660;
  *(undefined4 *)(param_1 + 0xb7c) = 0;
  *(undefined4 *)(param_1 + 0xb10) = 0;
  *(float *)(param_1 + 0xb14) = fparam_0;
  *(undefined4 *)(param_1 + 0xb0c) = 0;
  func_004FABDC(param_1,2,0,0);
  func_004FAB60(param_1,1,0);
  func_004FB070(param_1,fparam_0);
  func_004FB4C4(param_1,fparam_0);
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) | 0x200;
  return;
}

