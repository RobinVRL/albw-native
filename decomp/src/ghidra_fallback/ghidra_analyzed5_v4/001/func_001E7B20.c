#include "ghidra_types.h"

extern int func_00588BF0(int param_1,int param_2);
extern int func_0065CFDC(undefined4 *param_1,undefined1 param_2);

// USA 001E7B20 <- EU 001E7B20 (Ghidra, non-matching)

void func_001E7B20(int param_1)

{
  bool bVar1;
  
  bVar1 = func_00588BF0(param_1,0);
  if (bVar1) {
    func_0065CFDC((undefined4 *)(param_1 + 0x788),1);
  }
  return;
}

