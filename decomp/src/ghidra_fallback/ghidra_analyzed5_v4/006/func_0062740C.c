#include "ghidra_types.h"

extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_00626FA4(int param_1,int param_2,undefined1 param_3);
extern int DAT_00627420;
extern float DAT_00627424;

// USA 0062740C <- EU 006273E4 (Ghidra, non-matching)
// GLOBAL DAT_00627420 int
// GLOBAL DAT_00627424 float

void func_0062740C(int param_1)

{
  int iVar1;
  
  iVar1 = func_0051D2F4((int *)(param_1 + 1000),*(int *)(param_1 + 0x818),DAT_00627420,0x7fffffff,
                        DAT_00627424);
  if (iVar1 != 0) {
    func_00626FA4(param_1,*(int *)(param_1 + 0x984),0);
  }
  return;
}

