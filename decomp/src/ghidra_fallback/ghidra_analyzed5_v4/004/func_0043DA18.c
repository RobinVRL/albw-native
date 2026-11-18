#include "ghidra_types.h"

extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_002BECAC(int param_1,int param_2);
extern float DAT_0043da4c;

// USA 0043DA18 <- EU 0043D9F8 (Ghidra, non-matching)
// GLOBAL DAT_0043da4c float

void func_0043DA18(int param_1)

{
  float fparam_0;
  
  func_002BECAC(*(int *)(param_1 + 0x120),1);
  *(undefined4 *)(param_1 + 0x11c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined2 *)(param_1 + 0x116) = 7;
  fparam_0 = DAT_0043da4c;
  *(undefined2 *)(param_1 + 0x114) = 0;
  func_002317C0((undefined2 *)(param_1 + 0x114),fparam_0);
  *(byte *)(param_1 + 0x176) = *(byte *)(param_1 + 0x176) | 1;
  *(undefined2 *)(param_1 + 0x174) = 0;
  return;
}

