#include "ghidra_types.h"

extern int func_004BCAE0(int param_1,int param_2);

// USA 0060BB88 <- EU 0060BB60 (Ghidra, non-matching)

void func_0060BB88(int param_1)

{
  *(undefined1 *)(param_1 + 0x361) = 1;
  func_004BCAE0(param_1,1);
  *(undefined1 *)(param_1 + 0x85e) = 0;
  return;
}

