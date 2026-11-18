#include "ghidra_types.h"

extern int func_00149BD4(byte *param_1,int param_2);

// USA 001DE0CC <- EU 001DE0CC (Ghidra, non-matching)

undefined4 func_001DE0CC(int param_1,int param_2)

{
  func_00149BD4((byte *)(param_1 + 0x598),param_2);
  return 1;
}

