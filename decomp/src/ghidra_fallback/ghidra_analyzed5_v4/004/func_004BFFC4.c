#include "ghidra_types.h"

extern int func_001E6778(int *param_1,int param_2,uint param_3,undefined1 param_4,undefined1 param_5, float fparam_0);
extern int DAT_004c0040;

// USA 004BFFC4 <- EU 004BFF9C (Ghidra, non-matching)
// GLOBAL DAT_004c0040 int

void func_004BFFC4(int *param_1,uint param_2,undefined1 param_3)

{
  float fparam_0;
  int iVar1;
  
  iVar1 = DAT_004c0040;
  param_1[0x20d] = DAT_004c0040;
  if ((uint)*(byte *)((int)param_1 + 0x852) != (int)(char)param_1[0x217]) {
    (**(code **)(*param_1 + 0xac))(param_1,*(undefined1 *)((int)param_1 + 0x856),0xffffffff);
  }
  if ((uint)*(byte *)((int)param_1 + 0x852) == (int)(char)param_1[0x217]) {
    fparam_0 = ALBW_AS_F32(param_1[0x22e]);
  }
  else {
    fparam_0 = ALBW_AS_F32(param_1[0x22d]);
  }
  func_001E6778(param_1 + 0x1f1,(int)param_1,param_2,param_3,1,fparam_0);
  *(byte *)((int)param_1 + 0x7eb) = ~(byte)((uint)param_1[0x22b] >> 0xd) & 1;
  param_1[0xf7] = iVar1;
  param_1[0xf8] = iVar1;
  param_1[0xf9] = iVar1;
  return;
}

