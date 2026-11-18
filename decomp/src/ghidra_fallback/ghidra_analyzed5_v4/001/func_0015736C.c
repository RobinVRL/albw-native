#include "ghidra_types.h"

extern int func_0058A8F0(int param_1);
extern int func_00657FA0(undefined4 *param_1,undefined1 param_2);

// USA 0015736C <- EU 00157370 (Ghidra, non-matching)

void func_0015736C(int param_1)

{
  int iVar1;
  
  iVar1 = func_0058A8F0(param_1);
  if (iVar1 != 0) {
    func_00657FA0((undefined4 *)(param_1 + 0x8bc),1);
  }
  return;
}

