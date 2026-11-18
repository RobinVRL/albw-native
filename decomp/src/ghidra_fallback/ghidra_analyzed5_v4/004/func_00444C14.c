#include "ghidra_types.h"

extern int func_0066CB14(undefined4 *param_1,undefined1 param_2);

// USA 00444C14 <- EU 00444BF4 [EDITED REGION: check by hand] (Ghidra, non-matching)

undefined4 func_00444C14(int param_1)

{
  if (*(short *)(param_1 + 0x4b8) == 0) {
    if (*(byte *)(param_1 + 0x4bb) < 0x2f) {
      return func_0066CB14((undefined4 *)(param_1 + 0x74),3);
    }
    if (*(char *)(param_1 + 0x4bd) != '\0') {
      func_0066CB14((undefined4 *)(param_1 + 0x74),5);
    }
  }
  else {
    *(short *)(param_1 + 0x4b8) = *(short *)(param_1 + 0x4b8) + -1;
  }
  return 0;
}

