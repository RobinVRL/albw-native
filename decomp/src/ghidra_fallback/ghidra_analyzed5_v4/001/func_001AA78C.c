#include "ghidra_types.h"

extern int func_0065AAC8(undefined4 *param_1,undefined1 param_2);
extern int DAT_001aa7f8;
extern undefined4 DAT_001aa7fc;

// USA 001AA78C <- EU 001AA78C (Ghidra, non-matching)
// GLOBAL DAT_001aa7f8 int
// GLOBAL DAT_001aa7fc undefined4

void func_001AA78C(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(*(int *)(param_1 + 0x510) + 4) == '\0') {
    if (0 < *(short *)(DAT_001aa7f8 + param_1)) {
      *(undefined4 *)(param_1 + 0x93c) = 0;
      func_0065AAC8((undefined4 *)(param_1 + 0x904),0);
      uVar1 = DAT_001aa7fc;
      *(undefined4 *)(param_1 + 0x94c) = 0;
      *(undefined4 *)(param_1 + 0x950) = uVar1;
      *(undefined4 *)(param_1 + 0x948) = 0;
      return;
    }
    func_0065AAC8((undefined4 *)(param_1 + 0x904),9);
  }
  return;
}

