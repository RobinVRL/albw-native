#include "ghidra_types.h"

extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_0062BEDC(int param_1,int param_2,undefined1 param_3);
extern int DAT_0062c34c;
extern float DAT_0062c350;

// USA 0062C338 <- EU 0062C310 (Ghidra, non-matching)
// GLOBAL DAT_0062c34c int
// GLOBAL DAT_0062c350 float

void func_0062C338(int param_1)

{
  int iVar1;
  
  iVar1 = func_0051D2F4((int *)(param_1 + 1000),*(int *)(param_1 + 0x818),DAT_0062c34c,0x7fffffff,
                        DAT_0062c350);
  if (iVar1 != 0) {
    func_0062BEDC(param_1,*(int *)(param_1 + 0x984),0);
  }
  return;
}

