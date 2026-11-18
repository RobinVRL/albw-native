#include "ghidra_types.h"

extern int func_001683EC(int param_1);
extern int func_0023251C(int param_1);

// USA 004747B4 <- EU 0047478C (Ghidra, non-matching)

void func_001B6DE0(int param_1)

{
  float in_s0;
  
  func_0023251C(param_1);
  if (*(int *)(param_1 + 0x1c) != 0) {
    func_001683EC(*(int *)(param_1 + 0x1c));
    return;
  }
  return;
}

