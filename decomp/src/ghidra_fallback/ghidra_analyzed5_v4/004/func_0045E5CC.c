#include "ghidra_types.h"

extern int func_0066D78C(undefined4 *param_1,undefined1 param_2);

// USA 0045E5CC <- EU 0045E5A4 (Ghidra, non-matching)

undefined4 func_0045E5CC(int param_1)

{
  if (*(char *)(param_1 + 0x9c) != '\x01' && *(char *)(param_1 + 0x9c) != '\x02') {
    return 0;
  }
  return func_0066D78C((undefined4 *)(param_1 + 0x98),3);
}

