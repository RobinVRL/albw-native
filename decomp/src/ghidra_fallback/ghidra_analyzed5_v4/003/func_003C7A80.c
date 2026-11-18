#include "ghidra_types.h"

extern longlong func_003C9D1C(uint *param_1,uint param_2,uint param_3,uint param_4,int param_5);

// USA 003C7A80 <- EU 003C7A5C (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 uint

longlong func_003C7A80(int param_1,undefined4 param_2,uint param_3,uint param_4,uint param_5)

{
  longlong lVar1;
  
  lVar1 = func_003C9D1C((uint *)(param_1 + 8),param_5,param_3,param_4,param_5);
  return lVar1;
}

