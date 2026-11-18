#include "ghidra_types.h"

extern int func_0016B444(int param_1,undefined1 param_2,int param_3);
extern int func_00271AB8(int param_1);
extern int func_00271D94(int param_1);
extern int func_00272C20(int param_1);
extern int func_00272E30(int param_1);
extern int func_00272FA4(int param_1);
extern int func_0027355C(int param_1,float fparam_0,float fparam_1,float fparam_2);
extern int func_004ACC38(int param_1);
extern int *DAT_00272590;
extern int *DAT_00272594;

// USA 002724E0 <- EU 00272508 (Ghidra, non-matching)
// GLOBAL DAT_00272590 int *
// GLOBAL DAT_00272594 int *

undefined4 func_002724E0(int param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  float in_s0;
  float in_s1;
  float in_s2;
  
  *(undefined2 *)(param_1 + 0x7cb0) = param_2;
  *(undefined2 *)(param_1 + 0x7cb2) = param_3;
  func_00272E30(param_1);
  func_00272FA4(param_1);
  iVar1 = func_004ACC38(*DAT_00272590);
  if (iVar1 != 0) {
    *(char *)(iVar1 + 0x3fc) = (char)*(int *)(param_1 + 0x7cac);
  }
  func_0016B444(*DAT_00272594,(char)param_3,*(int *)(param_1 + 0x7cac));
  func_0027355C(param_1,in_s0,in_s1,in_s2);
  func_00271AB8(param_1);
  func_00271D94(param_1);
  return func_00272C20(param_1);
}

