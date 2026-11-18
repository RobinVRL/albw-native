#include "ghidra_types.h"

extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_00615A90(int param_1,int param_2,undefined1 param_3);
extern int DAT_00615f00;
extern float DAT_00615f04;

// USA 00615EEC <- EU 00615EC4 (Ghidra, non-matching)
// GLOBAL DAT_00615f00 int
// GLOBAL DAT_00615f04 float

void func_00615EEC(int param_1)

{
  int iVar1;
  
  iVar1 = func_0051D2F4((int *)(param_1 + 1000),*(int *)(param_1 + 0x818),DAT_00615f00,0x7fffffff,
                        DAT_00615f04);
  if (iVar1 != 0) {
    func_00615A90(param_1,*(int *)(param_1 + 0x984),0);
  }
  return;
}

