#include "ghidra_types.h"

extern int func_00588BF0(int param_1,int param_2);
extern int func_0065B29C(undefined4 *param_1,undefined1 param_2);

// USA 001B59D8 <- EU 001B59D8 (Ghidra, non-matching)

undefined4 func_001B59D8(int param_1)

{
  bool bVar1;
  
  bVar1 = func_00588BF0(param_1,0);
  if (bVar1) {
    return func_0065B29C((undefined4 *)(param_1 + 0x8bc),10);
  }
  *(undefined4 *)(param_1 + 0x3d0) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x3d4) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0x3d8) = *(undefined4 *)(param_1 + 0x10);
  return 0;
}

