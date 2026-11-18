#include "ghidra_types.h"

extern int func_00230610(int param_1,undefined4 param_2);
extern int func_00626B54(int *param_1);

// USA 006530C8 <- EU 006530A0 (Ghidra, non-matching)

void func_006530C8(int param_1)

{
  func_00626B54((int *)param_1);
  if (*(char *)(param_1 + 0x9d3) == '\x02') {
    func_00230610(param_1 + 0x478,*(undefined4 *)(param_1 + 0x9bc));
    *(undefined1 *)(param_1 + 0x9d4) = 0;
    *(undefined1 *)(param_1 + 0x9d1) = 1;
  }
  else {
    *(undefined1 *)(param_1 + 0x9d1) = 0;
  }
  return;
}

