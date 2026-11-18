#include "ghidra_types.h"

extern int func_001788DC(int param_1,undefined4 *param_2);

// USA 00441278 <- EU 00441258 (Ghidra, non-matching)

void func_00441278(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = func_001788DC(*(int *)(param_1 + 0x74),param_2);
  *(char *)(param_1 + 0x84) = (char)uVar1;
  return;
}

