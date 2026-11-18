#include "ghidra_types.h"

extern int func_006657B4(undefined4 *param_1,undefined1 param_2);

// USA 003327FC <- EU 003327D8 (Ghidra, non-matching)

undefined4 func_003327FC(int param_1)

{
  if (*(char *)(param_1 + 0x516) != '\0') {
    return 0;
  }
  if ((int)*(float *)(param_1 + 0x48) == 1 || (int)*(float *)(param_1 + 0x48) == 3) {
    return func_006657B4((undefined4 *)(param_1 + 0x4c0),5);
  }
  return 0;
}

