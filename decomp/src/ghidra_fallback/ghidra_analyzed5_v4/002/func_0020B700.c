#include "ghidra_types.h"

extern int func_0058A8F0(int param_1);
extern int func_0065D630(undefined4 *param_1,undefined1 param_2);

// USA 0020B700 <- EU 0020B700 (Ghidra, non-matching)

void func_0020B700(int param_1)

{
  int iVar1;
  
  iVar1 = func_0058A8F0(param_1);
  if (iVar1 != 0) {
    func_0065D630((undefined4 *)(param_1 + 0x8bc),0x13);
  }
  return;
}

