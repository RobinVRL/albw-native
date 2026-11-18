#include "ghidra_types.h"

extern int func_0058A8F0(int param_1);
extern int func_0065D4EC(undefined4 *param_1,undefined1 param_2);

// USA 0020661C <- EU 0020661C (Ghidra, non-matching)

void func_0020661C(int param_1)

{
  int iVar1;
  
  iVar1 = func_0058A8F0(param_1);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x914) = 300;
    func_0065D4EC((undefined4 *)(param_1 + 0x8bc),7);
  }
  return;
}

