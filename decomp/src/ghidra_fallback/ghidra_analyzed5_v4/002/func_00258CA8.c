#include "ghidra_types.h"

extern int func_00110DDC(undefined4 *param_1,int param_2);

// USA 00258CA8 <- EU 00258CD0 (Ghidra, non-matching)

void func_00258CA8(int param_1,int param_2)

{
  func_00110DDC((undefined4 *)(param_1 + 0xc),param_2);
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  *(undefined1 *)(param_1 + 100) = 0;
  return;
}

