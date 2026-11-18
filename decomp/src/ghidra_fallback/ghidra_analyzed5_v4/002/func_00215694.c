#include "ghidra_types.h"

extern int func_0065D9FC(undefined4 *param_1,undefined1 param_2);
extern int DAT_002156b0;

// USA 00215694 <- EU 00215694 (Ghidra, non-matching)
// GLOBAL DAT_002156b0 int

undefined4 func_00215694(int param_1)

{
  return func_0065D9FC((undefined4 *)(param_1 + 0x8bc),*(undefined1 *)(DAT_002156b0 + param_1));
}

