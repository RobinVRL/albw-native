#include "ghidra_types.h"

extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_00632AC4(int param_1,int param_2,undefined1 param_3);
extern int DAT_00632f34;
extern float DAT_00632f38;

// USA 00632F20 <- EU 00632EF8 (Ghidra, non-matching)
// GLOBAL DAT_00632f34 int
// GLOBAL DAT_00632f38 float

void func_00632F20(int param_1)

{
  int iVar1;
  
  iVar1 = func_0051D2F4((int *)(param_1 + 1000),*(int *)(param_1 + 0x818),DAT_00632f34,0x7fffffff,
                        DAT_00632f38);
  if (iVar1 != 0) {
    func_00632AC4(param_1,*(int *)(param_1 + 0x984),0);
  }
  return;
}

