#include "ghidra_types.h"

extern int func_003252B8(int param_1,int param_2,float fparam_0);
extern int func_003253F0(int param_1);

// USA 0035C8AC <- EU 0035C888 (Ghidra, non-matching)

undefined4 func_0035C8AC(int param_1)

{
  func_003253F0(param_1);
  func_003252B8(param_1,(int)*(char *)(param_1 + 0x490),*(float *)(param_1 + 0x4a8));
  return (undefined4)param_1;
}

