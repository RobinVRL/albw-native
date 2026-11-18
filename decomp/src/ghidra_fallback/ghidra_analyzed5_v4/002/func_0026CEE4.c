#include "ghidra_types.h"

extern int func_004FCD5C(int param_1,int param_2);
extern int func_004FD038(int param_1,undefined1 param_2);

// USA 0026CEE4 <- EU 0026CF0C (Ghidra, non-matching)

undefined4 func_0026CEE4(int param_1)

{
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) & 0xfffffffe;
  func_004FCD5C(param_1 + 0x5a8,0);
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) & 0xfffffffb;
  return func_004FD038(param_1 + 0x5a8,0);
}

