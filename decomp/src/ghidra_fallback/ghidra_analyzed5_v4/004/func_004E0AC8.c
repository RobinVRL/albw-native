#include "ghidra_types.h"

extern int func_0037C574(int param_1,int param_2);
extern int func_0037CBE0(int param_1);

// USA 004E0AC8 <- EU 004E0AA0 (Ghidra, non-matching)

undefined4 func_004E0AC8(int param_1)

{
  func_0037CBE0(param_1);
  if (*(short *)(param_1 + 0x5a) < 0) {
    return func_0037C574(param_1,-1);
  }
  return 0;
}

