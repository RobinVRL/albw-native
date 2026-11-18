#include "ghidra_types.h"

extern int func_0040D864(int *param_1,undefined1 param_2,undefined4 param_3,int *param_4);

// USA 001DF950 <- EU 001DF950 (Ghidra, non-matching)

undefined4 func_001DF950(int param_1,undefined1 param_2,undefined4 param_3,int *param_4)

{
  if ((int *)**(undefined4 **)(param_1 + 0x24) != (int *)0x0) {
    return func_0040D864((int *)**(undefined4 **)(param_1 + 0x24),param_2,param_3,param_4);
  }
  return 0;
}

