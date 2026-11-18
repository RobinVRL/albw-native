#include "ghidra_types.h"

extern int func_0051D27C(int *param_1,int param_2,int param_3);
extern float func_0058AC38(int param_1);
extern longlong func_0058ACC8(int param_1,float fparam_0);
extern int func_0065D9FC(undefined4 *param_1,undefined1 param_2);
extern int DAT_00215298;

// USA 00215254 <- EU 00215254 (Ghidra, non-matching)
// GLOBAL DAT_00215298 int

void func_00215254(int param_1)

{
  float fparam_0;
  longlong lVar1;
  
  func_0051D27C((int *)(param_1 + 1000),*(int *)(param_1 + 0xa64),DAT_00215298);
  fparam_0 = func_0058AC38(param_1);
  lVar1 = func_0058ACC8(param_1,fparam_0);
  if ((int)lVar1 != 0) {
    func_0065D9FC((undefined4 *)(param_1 + 0x8bc),8);
  }
  return;
}

