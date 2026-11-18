#include "ghidra_types.h"

extern int func_004BFF60(int param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4, undefined1 param_5,undefined4 param_6,undefined4 *param_7,float fparam_0);
extern int DAT_0018481c;

// USA 001847A8 <- EU 001847A8 (Ghidra, non-matching)
// GLOBAL DAT_0018481c int

void func_001847A8(int *param_1)

{
  float fparam_0;
  
  (**(code **)(*param_1 + 0xac))(param_1,3,0xffffffff);
  if ((uint)*(byte *)((int)param_1 + 0x852) == (int)(char)param_1[0x217]) {
    fparam_0 = ALBW_AS_F32(param_1[0x22e]);
  }
  else {
    fparam_0 = ALBW_AS_F32(param_1[0x22d]);
  }
  func_004BFF60((int)param_1,0,0,0,0,param_1[0xfa],param_1 + 0xf4,fparam_0);
  *(undefined2 *)(DAT_0018481c + (int)param_1) = 200;
  return;
}

