#include "ghidra_types.h"

extern int func_002AED24(int param_1);
extern float func_002B0D7C(int param_1,int param_2,uint param_3,int param_4,float fparam_0);
extern int func_002B193C(int param_1,int param_2,float fparam_0);
extern float DAT_002af508;

// USA 002AF4DC <- EU 002AF4B8 (Ghidra, non-matching)
// GLOBAL DAT_002af508 float

undefined4 func_002AF4DC(int param_1)

{
  float fparam_0;
  
  if (*(short *)(*(int *)(param_1 + 0x34) + 0x508) < 1) {
    return func_002B193C(param_1,0xe,DAT_002af508);
  }
  fparam_0 = DAT_002af508;
  func_002AED24(param_1);
  func_002B0D7C(param_1,0xe,8,(int)*(char *)(param_1 + 0xa4),fparam_0);
  return 0;
}

