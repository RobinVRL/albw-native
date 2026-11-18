#include "ghidra_types.h"

extern int func_002AFEF0(undefined4 *param_1,int param_2,uint param_3,int param_4,int param_5, float fparam_0);
extern int func_002B0754(undefined4 *param_1,int param_2);
extern float DAT_002adfbc;

// USA 002ADF78 <- EU 002ADF54 (Ghidra, non-matching)
// GLOBAL DAT_002adfbc float

undefined4 func_002ADF78(undefined4 *param_1)

{
  if (*(short *)(param_1[0xd] + 0x508) < 1) {
    return func_002B0754(param_1,0xf);
  }
  if (*(char *)(param_1 + 0x29) != '\0') {
    return func_002AFEF0(param_1,0,0,1,1,DAT_002adfbc);
  }
  return func_002AFEF0(param_1,0,0,0,0,DAT_002adfbc);
}

