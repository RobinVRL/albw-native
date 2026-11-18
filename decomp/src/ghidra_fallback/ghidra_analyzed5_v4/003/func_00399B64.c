#include "ghidra_types.h"

extern int func_006686AC(undefined4 *param_1,undefined1 param_2);

// USA 00399B64 <- EU 00399B40 (Ghidra, non-matching)

undefined4 func_00399B64(int param_1)

{
  *(undefined1 *)(param_1 + 0x49) = 0;
  return func_006686AC((undefined4 *)(param_1 + 0x10),0);
}

