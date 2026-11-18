#include "ghidra_types.h"

extern int func_0058A8F0(int param_1);
extern longlong func_0058ACC8(int param_1,float fparam_0);
extern int func_0066AF2C(undefined4 *param_1,undefined1 param_2);
extern float DAT_004fec20;

// USA 004FEBF0 <- EU 004FEBC8 (Ghidra, non-matching)
// GLOBAL DAT_004fec20 float

void func_004FEBF0(int param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = func_0058A8F0(param_1);
  if (iVar1 == 0) {
    lVar2 = func_0058ACC8(param_1,DAT_004fec20);
    if ((int)lVar2 != 0) {
      *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) | 0x86;
      return;
    }
  }
  else {
    func_0066AF2C((undefined4 *)(param_1 + 0x8bc),4);
  }
  return;
}

