#include "ghidra_types.h"

extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int DAT_001b48dc;
extern int DAT_001b48e0;
extern float DAT_001b48e4;

// USA 001B48C4 <- EU 001B48C4 (Ghidra, non-matching)
// GLOBAL DAT_001b48dc int
// GLOBAL DAT_001b48e0 int
// GLOBAL DAT_001b48e4 float

undefined4 func_001B48C4(int param_1)

{
  return func_0051D2F4((int *)(param_1 + 1000),*(int *)(param_1 + 0x954),DAT_001b48e0,DAT_001b48dc,
                DAT_001b48e4);
}

