#include "ghidra_types.h"

extern int func_0036BE78();
extern int func_0065D630(undefined4 *param_1,undefined1 param_2);

// USA 0020C970 <- EU 0020C970 (Ghidra, non-matching)

void func_0020C970(int param_1)

{
  int iVar1;
  
  iVar1 = func_0036BE78(param_1 + 0xa7c);
  if (iVar1 != 0) {
    func_0065D630((undefined4 *)(param_1 + 0x8bc),0x10);
  }
  return;
}

