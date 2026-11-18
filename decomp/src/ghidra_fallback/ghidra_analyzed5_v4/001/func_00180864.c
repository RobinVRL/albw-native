#include "ghidra_types.h"

extern int func_00392B7C(int *param_1,undefined1 param_2);
extern int *DAT_00180904;
extern int DAT_00180908;
extern int DAT_0018090c;

// USA 00180864 <- EU 00180864 (Ghidra, non-matching)
// GLOBAL DAT_00180904 int *
// GLOBAL DAT_00180908 int
// GLOBAL DAT_0018090c int

void func_00180864(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = DAT_00180908;
  piVar1 = DAT_00180904;
  iVar3 = DAT_00180904[1];
  iVar4 = DAT_00180904[2];
  param_1[0x296] = *DAT_00180904;
  param_1[0x297] = iVar3;
  param_1[0x298] = iVar4;
  iVar3 = *piVar1;
  iVar4 = piVar1[1];
  param_1[0x29b] = piVar1[2];
  param_1[0x299] = iVar3;
  param_1[0x29a] = iVar4;
  param_1[0xf7] = iVar2;
  param_1[0xf8] = iVar2;
  param_1[0xf9] = iVar2;
  func_00392B7C(param_1 + 0x284,0x46);
  *(undefined1 *)((int)param_1 + 0xbf1) = 1;
  iVar2 = DAT_0018090c;
  param_1[0x26a] = 0x2d;
  param_1[0x26b] = iVar2;
  param_1[0x269] = 0;
  (**(code **)(*param_1 + 0xac))(param_1,6,0xffffffff);
  param_1[0x22b] = param_1[0x22b] | 0x40;
  return;
}

