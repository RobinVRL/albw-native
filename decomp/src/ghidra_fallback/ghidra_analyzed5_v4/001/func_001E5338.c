#include "ghidra_types.h"

extern int func_0014DF18(int param_1,undefined4 param_2,int param_3,uint param_4,undefined1 param_5, undefined1 param_6);

// USA 001E5338 <- EU 001E5338 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 uint

undefined4 func_001E5338(int param_1,undefined4 param_2,undefined4 param_3,int param_4,uint param_5)

{
  return func_0014DF18(*(int *)(param_1 + 0x2d0),param_3,param_4,param_5,0,0);
}

