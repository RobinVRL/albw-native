#include "ghidra_types.h"

extern int func_002AFEF0(undefined4 *param_1,int param_2,uint param_3,int param_4,int param_5, float fparam_0);
extern float DAT_002ab2b0;

// USA 002AB2B4 <- EU 002AB290 (Ghidra, non-matching)
// GLOBAL DAT_002ab2b0 float

undefined4 func_002AB2B4(undefined4 *param_1)

{
  return func_002AFEF0(param_1,0,0,0,0,DAT_002ab2b0);
}

