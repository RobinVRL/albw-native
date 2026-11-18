#include "ghidra_types.h"

extern int func_00111EF0(int *param_1,int *param_2);

// USA 0040D930 <- EU 0040D910 (Ghidra, non-matching)

void func_0040D930(int *param_1,int param_2)

{
  func_00111EF0(param_1 + 3,(int *)(param_2 + 0x104));
  func_00111EF0(param_1,(int *)(param_2 + 0xfc));
  *(undefined4 *)(param_2 + 0x10) = 0;
  return;
}

