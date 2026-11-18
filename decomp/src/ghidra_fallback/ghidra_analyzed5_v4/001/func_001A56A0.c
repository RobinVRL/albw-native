#include "ghidra_types.h"

extern int func_001A59B8(int param_1);
extern int func_004F68AC();

// USA 001A56A0 <- EU 001A56A0 (Ghidra, non-matching)

undefined4 func_001A56A0(int param_1,int param_2)

{
  undefined4 in_r2;
  float *in_r3;
  
  func_001A59B8(param_1);
  return func_004F68AC(param_1,param_2,in_r2,in_r3);
}

