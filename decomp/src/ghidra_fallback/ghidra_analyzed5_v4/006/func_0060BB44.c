#include "ghidra_types.h"

extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_0060B6E8(int param_1,int param_2,undefined1 param_3);
extern int DAT_0060bb58;
extern float DAT_0060bb5c;

// USA 0060BB44 <- EU 0060BB1C (Ghidra, non-matching)
// GLOBAL DAT_0060bb58 int
// GLOBAL DAT_0060bb5c float

void func_0060BB44(int param_1)

{
  int iVar1;
  
  iVar1 = func_0051D2F4((int *)(param_1 + 1000),*(int *)(param_1 + 0x818),DAT_0060bb58,0x7fffffff,
                        DAT_0060bb5c);
  if (iVar1 != 0) {
    func_0060B6E8(param_1,*(int *)(param_1 + 0x984),0);
  }
  return;
}

