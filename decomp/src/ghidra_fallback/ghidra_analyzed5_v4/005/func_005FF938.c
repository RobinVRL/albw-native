#include "ghidra_types.h"

extern int func_00110490(undefined4 *param_1,uint param_2);

// USA 005FF938 <- EU 005FF910 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 undefined4 *

undefined4 func_005FF938(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,
                  undefined4 *param_5)

{
  if (param_1 != (undefined4 *)0x0) {
    func_00110490(param_1,0x44);
    param_1[0xb] = 0x300;
    param_1[3] = 0;
    param_1[2] = param_2;
    param_1[1] = param_3;
    param_1[8] = 0;
    param_1[4] = 0;
    param_1[10] = 0;
    param_1[9] = 0;
    param_1[0xd] = 0;
    param_1[6] = param_5;
    param_1[7] = param_4;
    param_1[0xc] = 0;
    return func_00110490(param_5,param_4 * 0x1c);
  }
  return 0;
}

