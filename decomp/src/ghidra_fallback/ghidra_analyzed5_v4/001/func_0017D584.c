#include "ghidra_types.h"

extern int func_006592AC(undefined4 *param_1,int param_2);

// USA 0017D584 <- EU 0017D584 (Ghidra, non-matching)

undefined4 func_0017D584(int param_1)

{
  return func_006592AC((undefined4 *)(param_1 + 0x788),1);
}

