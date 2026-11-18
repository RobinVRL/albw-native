#include "ghidra_types.h"

extern int func_0014E2A0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5 ,int param_6);

// USA 001363D0 <- EU 001363D0 (Ghidra, non-matching)

undefined4 func_001363D0(int param_1)

{
  return func_0014E2A0(param_1,*(undefined4 *)(param_1 + 0x47c),param_1 + 0x48c,0x1200,0,0);
}

