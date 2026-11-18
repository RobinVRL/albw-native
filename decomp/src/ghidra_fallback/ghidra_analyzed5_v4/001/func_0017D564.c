#include "ghidra_types.h"

extern int func_006592AC(undefined4 *param_1,int param_2);

// USA 0017D564 <- EU 0017D564 (Ghidra, non-matching)

undefined4 func_0017D564(int param_1)

{
  return func_006592AC((undefined4 *)(param_1 + 0x788),1);
}

