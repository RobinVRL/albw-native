#include "ghidra_types.h"

extern int func_002AFEF0(undefined4 *param_1,int param_2,uint param_3,int param_4,int param_5, float fparam_0);
extern int func_002B0754(undefined4 *param_1,int param_2);
extern float DAT_002ac9dc;

// USA 002AC998 <- EU 002AC974 (Ghidra, non-matching)
// GLOBAL DAT_002ac9dc float

undefined4 func_002AC998(undefined4 *param_1)

{
  if (*(short *)(param_1[0xd] + 0x508) < 1) {
    return func_002B0754(param_1,0xf);
  }
  if (*(char *)(param_1 + 0x29) != '\0') {
    return func_002AFEF0(param_1,0,0,1,1,DAT_002ac9dc);
  }
  return func_002AFEF0(param_1,0,0,0,0,DAT_002ac9dc);
}

