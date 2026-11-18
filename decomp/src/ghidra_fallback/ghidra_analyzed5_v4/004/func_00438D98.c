#include "ghidra_types.h"

extern int func_0066C2E0(undefined4 *param_1,undefined1 param_2);

// USA 00438D98 <- EU 00438D78 (Ghidra, non-matching)

undefined4 func_00438D98(int param_1)

{
  if (*(char *)(param_1 + 0x1b2) == '\0') {
    if (*(char *)(*(int *)(param_1 + 0x1a4) + 0x5f) == '\0') {
      if (*(char *)(*(int *)(param_1 + 0x1a8) + 0x5f) != '\0') goto LAB_00438da8;
      if (*(char *)(*(int *)(param_1 + 0x1ac) + 0x5f) == '\0') {
        return 0;
      }
    }
  }
  else if (-1 < *(short *)(param_1 + 0x1b0)) {
LAB_00438da8:
    return func_0066C2E0((undefined4 *)(param_1 + 200),5);
  }
  return func_0066C2E0((undefined4 *)(param_1 + 200),4);
}

