#include "ghidra_types.h"

extern int func_003A0BBC(int param_1,uint *param_2);

// USA 0047F234 <- EU 0047F20C (Ghidra, non-matching)

undefined4 func_0047F234(int param_1,uint *param_2)

{
  if (*(int *)(param_1 + 0x10c) != 0) {
    return func_003A0BBC(*(int *)(param_1 + 0x10c),param_2);
  }
  return 0;
}

