#include "ghidra_types.h"

extern int func_001164F4(undefined4 *param_1,uint param_2);

// USA 00320D34 <- EU 00320D10 (Ghidra, non-matching)

undefined4 func_00320D34(int param_1)

{
  *(uint *)(param_1 + 0x2b4) = *(uint *)(param_1 + 0x2b4) & 0xfffffffe;
  return func_001164F4((undefined4 *)(param_1 + 0x10),0x60);
}

