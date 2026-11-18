#include "ghidra_types.h"

extern int func_002AED24(int param_1);
extern float func_002B0D7C(int param_1,int param_2,uint param_3,int param_4,float fparam_0);
extern int func_002B193C(int param_1,int param_2,float fparam_0);
extern float DAT_002ae248;
extern float DAT_002ae24c;

// USA 002AE214 <- EU 002AE1F0 (Ghidra, non-matching)
// GLOBAL DAT_002ae248 float
// GLOBAL DAT_002ae24c float

undefined4 func_002AE214(int param_1)

{
  if (*(short *)(*(int *)(param_1 + 0x34) + 0x508) < 1) {
    return func_002B193C(param_1,0xf,DAT_002ae248);
  }
  func_002AED24(param_1);
  func_002B0D7C(param_1,0xf,8,(int)*(char *)(param_1 + 0xa4),DAT_002ae24c);
  return 0;
}

