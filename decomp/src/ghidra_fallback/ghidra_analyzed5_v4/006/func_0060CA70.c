#include "ghidra_types.h"

extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_0060C57C(int param_1,int param_2,undefined1 param_3);
extern int DAT_0060ca84;
extern float DAT_0060ca88;

// USA 0060CA70 <- EU 0060CA48 (Ghidra, non-matching)
// GLOBAL DAT_0060ca84 int
// GLOBAL DAT_0060ca88 float

void func_0060CA70(int param_1)

{
  int iVar1;
  
  iVar1 = func_0051D2F4((int *)(param_1 + 1000),*(int *)(param_1 + 0x818),DAT_0060ca84,0x7fffffff,
                        DAT_0060ca88);
  if (iVar1 != 0) {
    func_0060C57C(param_1,*(int *)(param_1 + 0x984),0);
  }
  return;
}

