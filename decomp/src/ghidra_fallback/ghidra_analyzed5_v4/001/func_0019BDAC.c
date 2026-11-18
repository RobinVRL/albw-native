#include "ghidra_types.h"

extern int func_00659F64(undefined4 *param_1,undefined1 param_2);
extern int *DAT_0019bdfc;

// USA 0019BDAC <- EU 0019BDAC (Ghidra, non-matching)
// GLOBAL DAT_0019bdfc int *

undefined4 func_0019BDAC(int param_1)

{
  if (*(int *)(*DAT_0019bdfc + 0x44) == 0) {
    return 0;
  }
  if (*(int *)(*DAT_0019bdfc + 0x44) == *(int *)(param_1 + 0x418)) {
    if (*(uint *)(param_1 + 0x444) <= *(uint *)(param_1 + 0x440)) {
      return func_00659F64((undefined4 *)(param_1 + 0x41c),2);
    }
    *(uint *)(param_1 + 0x440) = *(uint *)(param_1 + 0x440) + 1;
    return 0;
  }
  return 0;
}

