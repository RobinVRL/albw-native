#include "ghidra_types.h"

extern int func_00665670(undefined4 *param_1,undefined1 param_2);

// USA 00329940 <- EU 0032991C (Ghidra, non-matching)

undefined4 func_00329940(int param_1)

{
  if ((*(char *)(param_1 + 0x963) != '\0') && (*(char *)(param_1 + 0x964) == '\0')) {
    return 0;
  }
  if ((*(char *)(param_1 + 0xa3b) != '\0') && (*(char *)(param_1 + 0xa3c) == '\0')) {
    return 0;
  }
  return func_00665670((undefined4 *)(param_1 + 0xba8),0xb);
}

