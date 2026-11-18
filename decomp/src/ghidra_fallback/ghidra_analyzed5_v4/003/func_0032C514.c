#include "ghidra_types.h"

extern int func_00328984(int param_1);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);

// USA 0032C514 <- EU 0032C4F0 (Ghidra, non-matching)

undefined4 func_0032C514(int param_1)

{
  *(undefined1 *)(param_1 + 0xc93) = 1;
  func_00328984(param_1);
  *(undefined4 *)(param_1 + 0xc60) = 1;
  return func_004FC07C(param_1,5,0x10,0);
}

