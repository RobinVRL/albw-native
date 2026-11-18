#include "ghidra_types.h"

extern int func_002C34A4(int param_1,int param_2);

// USA 00151148 <- EU 00151148 (Ghidra, non-matching)

undefined4 func_00151148(int param_1,int param_2)

{
  float in_s0;
  
  func_002C34A4(*(int *)(param_1 + 0x1c),param_2);
  return ALBW_AS_U32(in_s0);
}

