#include "ghidra_types.h"

extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_00614BFC(int param_1,int param_2,undefined1 param_3);
extern int DAT_0061506c;
extern float DAT_00615070;

// USA 00615058 <- EU 00615030 (Ghidra, non-matching)
// GLOBAL DAT_0061506c int
// GLOBAL DAT_00615070 float

void func_00615058(int param_1)

{
  int iVar1;
  
  iVar1 = func_0051D2F4((int *)(param_1 + 1000),*(int *)(param_1 + 0x818),DAT_0061506c,0x7fffffff,
                        DAT_00615070);
  if (iVar1 != 0) {
    func_00614BFC(param_1,*(int *)(param_1 + 0x984),0);
  }
  return;
}

