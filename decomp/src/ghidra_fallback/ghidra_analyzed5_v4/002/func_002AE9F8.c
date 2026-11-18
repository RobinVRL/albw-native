#include "ghidra_types.h"

extern int func_002AED24(int param_1);
extern float func_002B0D7C(int param_1,int param_2,uint param_3,int param_4,float fparam_0);
extern int func_002B193C(int param_1,int param_2,float fparam_0);
extern float DAT_002aea28;
extern float DAT_002aea2c;

// USA 002AE9F8 <- EU 002AE9D4 (Ghidra, non-matching)
// GLOBAL DAT_002aea28 float
// GLOBAL DAT_002aea2c float

undefined4 func_002AE9F8(int param_1)

{
  if (*(short *)(*(int *)(param_1 + 0x34) + 0x508) < 1) {
    return func_002B193C(param_1,0x11,DAT_002aea28);
  }
  func_002AED24(param_1);
  func_002B0D7C(param_1,0x11,0xf,(int)*(char *)(param_1 + 0xa4),DAT_002aea2c);
  return 0;
}

