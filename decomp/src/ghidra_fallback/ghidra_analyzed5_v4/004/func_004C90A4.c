#include "ghidra_types.h"

extern int func_004A26A8(int param_1,int param_2);

// USA 004C90A4 <- EU 004C907C (Ghidra, non-matching)

undefined4 func_004C90A4(int param_1)

{
  return func_004A26A8(*(int *)(param_1 + 0x10),-1);
}

