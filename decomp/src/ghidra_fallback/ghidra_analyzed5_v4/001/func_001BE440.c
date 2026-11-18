#include "ghidra_types.h"

extern int func_0014E2A0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5 ,int param_6);
extern int *DAT_001be494;

// USA 001BE440 <- EU 001BE440 (Ghidra, non-matching)
// GLOBAL DAT_001be494 int *

undefined4 func_001BE440(int param_1)

{
  if (*(int *)(*(int *)(*DAT_001be494 + 0x28) + 4) == 0x3f800000) {
    *(undefined1 *)(*(int *)(param_1 + 0x444) + 0x44) = 1;
  }
  else {
    *(undefined1 *)(*(int *)(param_1 + 0x444) + 0x44) = 0;
  }
  return func_0014E2A0(param_1,*(undefined4 *)(param_1 + 0x440),param_1 + 0x458,0x100,0,0);
}

