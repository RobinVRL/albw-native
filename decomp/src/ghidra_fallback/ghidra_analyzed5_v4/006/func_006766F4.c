#include "ghidra_types.h"

extern int func_006766E8(int param_1);
extern int func_00676724(int param_1);

// USA 006766F4 <- EU 006766CC (Ghidra, non-matching)

void func_006766F4(int param_1)

{
  void *pvVar1;
  
  func_006766E8(param_1 + 0xb4);
  pvVar1 = func_00676724(param_1 + 0xb4);
  func_006766E8((int)pvVar1 + -0xb4);
  *(undefined4 *)((int)pvVar1 + -0x98) = 0xffffffff;
  return;
}

