#include "ghidra_types.h"

extern int func_00588BF0(int param_1,int param_2);
extern int func_0065D9FC(undefined4 *param_1,undefined1 param_2);

// USA 00214964 <- EU 00214964 (Ghidra, non-matching)

void func_00214964(int param_1)

{
  bool bVar1;
  
  bVar1 = func_00588BF0(param_1,0);
  if (bVar1) {
    func_0065D9FC((undefined4 *)(param_1 + 0x8bc),1);
  }
  return;
}

