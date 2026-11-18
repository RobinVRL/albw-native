#include "ghidra_types.h"

extern int func_0057049C(int param_1,int param_2);

// USA 00588250 <- EU 00588228 (Ghidra, non-matching)

undefined4 func_00588250(int param_1,undefined4 param_2)

{
  return func_0057049C(*(int *)(param_1 + 0x48),param_2);
}

