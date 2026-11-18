#include "ghidra_types.h"

extern int func_001B9AAC(int param_1,int param_2);
extern int func_00273B3C(int param_1,int param_2);

// USA 00273B10 <- EU 00273B38 (Ghidra, non-matching)

undefined4 func_00273B10(int param_1,int param_2)

{
  if (*(char *)(param_1 + 0x477) != '\0') {
    func_00273B3C(param_1,param_2);
  }
  return func_001B9AAC(param_1,param_2);
}

