#include "ghidra_types.h"

extern int func_0066D78C(undefined4 *param_1,undefined1 param_2);

// USA 0045E5C4 <- EU 0045E59C (Ghidra, non-matching)

undefined4 func_0045E5C4(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(int *)(param_1 + 0x1c) + 0x9c);
  if (cVar1 != '\x01' && cVar1 != '\x02') {
    return 0;
  }
  return func_0066D78C((undefined4 *)(*(int *)(param_1 + 0x1c) + 0x98),3);
}

