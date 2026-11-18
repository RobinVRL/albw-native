#include "ghidra_types.h"

extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_003FF904(int param_1,int param_2);
extern int func_003FFE34(int param_1,int param_2);
extern float DAT_00440100;

// USA 004400A4 <- EU 00440084 (Ghidra, non-matching)
// GLOBAL DAT_00440100 float

void func_004400A4(int param_1)

{
  int iVar1;
  float fparam_0;
  
  iVar1 = *(int *)(param_1 + 0xfc);
  func_003FF904(*(int *)(iVar1 + 0x24),*(int *)(iVar1 + 0x20));
  func_003FFE34(*(int *)(iVar1 + 0x24),*(int *)(iVar1 + 0x20));
  fparam_0 = DAT_00440100;
  *(undefined4 *)(param_1 + 0x13c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined2 *)(param_1 + 0x136) = 5;
  *(undefined2 *)(param_1 + 0x134) = 0;
  func_002317C0((undefined2 *)(param_1 + 0x134),fparam_0);
  *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined2 *)(param_1 + 0x142) = 6;
  *(undefined2 *)(param_1 + 0x140) = 0;
  func_002317C0((undefined2 *)(param_1 + 0x140),fparam_0);
  return;
}

