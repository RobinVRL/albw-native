#include "ghidra_types.h"

extern int func_0010CF7C(undefined4 *param_1,undefined1 param_2);

// USA 002589D8 <- EU 00258A00 (Ghidra, non-matching)

undefined4 func_002589D8(int param_1)

{
  return func_0010CF7C((undefined4 *)(param_1 + 0x14),0);
}

