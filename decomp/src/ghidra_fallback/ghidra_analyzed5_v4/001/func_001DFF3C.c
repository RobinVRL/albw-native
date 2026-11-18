#include "ghidra_types.h"

extern int func_00110DDC(undefined4 *param_1,int param_2);
extern int DAT_001dff80;

// USA 001DFF3C <- EU 001DFF3C (Ghidra, non-matching)
// GLOBAL DAT_001dff80 int

undefined4 func_001DFF3C(int param_1,int param_2,int param_3)

{
  if (param_2 < 1) {
    if (*(char *)(param_1 + 0x109) != '\0') {
      *(undefined1 *)(param_1 + 0x109) = 0;
    }
    *(undefined4 *)(param_1 + 0xf8) = 0;
    *(undefined4 *)(param_1 + 0xf4) = 0xffffff;
    return func_00110DDC(*(undefined4 **)(param_1 + 0x24),param_3);
  }
  if (0xfffffe < param_2) {
    param_2 = DAT_001dff80;
  }
  *(int *)(param_1 + 0xf4) = param_2;
  *(int *)(param_1 + 0xf8) = param_3;
  return 0;
}

