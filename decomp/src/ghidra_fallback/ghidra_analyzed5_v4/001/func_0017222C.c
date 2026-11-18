#include "ghidra_types.h"

extern int func_00172018(int param_1,undefined4 param_2);

// USA 0017222C <- EU 0017222C (Ghidra, non-matching)

undefined4 func_0017222C(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_2 < 9) {
    if (*(char *)(param_1 + 0x70) != '\t') {
      func_00172018(param_1,4);
    }
    *(undefined4 *)(param_1 + 0x2c8) = 0;
    *(undefined4 *)(param_1 + 0x2c0) = param_3;
    *(undefined4 *)(param_1 + 0x2c4) = param_4;
    *(undefined1 *)(param_1 + 0x2e0) = 0;
    *(undefined4 *)(param_1 + 0x2d8) = 0;
    *(undefined4 *)(param_1 + 0x2dc) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x2cc) = 0;
    *(char *)(param_1 + 0x70) = (char)param_2;
    *(uint *)(param_1 + 0x2b4) = *(uint *)(param_1 + 0x2b4) & 0xfffffff9;
                    /* WARNING: Could not recover jumptable at 0x001722a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    return (*(code *)**(undefined4 **)(param_1 + 0x74 + param_2 * 0x10))();
  }
  return 0;
}

