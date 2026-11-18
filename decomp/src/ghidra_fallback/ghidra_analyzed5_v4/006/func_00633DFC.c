#include "ghidra_types.h"

extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_006339A0(int param_1,int param_2,undefined1 param_3);
extern int DAT_00633e10;
extern float DAT_00633e14;

// USA 00633DFC <- EU 00633DD4 (Ghidra, non-matching)
// GLOBAL DAT_00633e10 int
// GLOBAL DAT_00633e14 float

void func_00633DFC(int param_1)

{
  int iVar1;
  
  iVar1 = func_0051D2F4((int *)(param_1 + 1000),*(int *)(param_1 + 0x818),DAT_00633e10,0x7fffffff,
                        DAT_00633e14);
  if (iVar1 != 0) {
    func_006339A0(param_1,*(int *)(param_1 + 0x984),0);
  }
  return;
}

