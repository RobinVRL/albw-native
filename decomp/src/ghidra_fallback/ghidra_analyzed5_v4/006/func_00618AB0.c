#include "ghidra_types.h"

extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_00618654(int param_1,int param_2,undefined1 param_3);
extern int DAT_00618ac4;
extern float DAT_00618ac8;

// USA 00618AB0 <- EU 00618A88 (Ghidra, non-matching)
// GLOBAL DAT_00618ac4 int
// GLOBAL DAT_00618ac8 float

void func_00618AB0(int param_1)

{
  int iVar1;
  
  iVar1 = func_0051D2F4((int *)(param_1 + 1000),*(int *)(param_1 + 0x818),DAT_00618ac4,0x7fffffff,
                        DAT_00618ac8);
  if (iVar1 != 0) {
    func_00618654(param_1,*(int *)(param_1 + 0x984),0);
  }
  return;
}

