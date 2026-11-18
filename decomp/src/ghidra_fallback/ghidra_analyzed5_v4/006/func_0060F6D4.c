#include "ghidra_types.h"

extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_0060F278(int param_1,int param_2,undefined1 param_3);
extern int DAT_0060f6e8;
extern float DAT_0060f6ec;

// USA 0060F6D4 <- EU 0060F6AC (Ghidra, non-matching)
// GLOBAL DAT_0060f6e8 int
// GLOBAL DAT_0060f6ec float

void func_0060F6D4(int param_1)

{
  int iVar1;
  
  iVar1 = func_0051D2F4((int *)(param_1 + 1000),*(int *)(param_1 + 0x818),DAT_0060f6e8,0x7fffffff,
                        DAT_0060f6ec);
  if (iVar1 != 0) {
    func_0060F278(param_1,*(int *)(param_1 + 0x984),0);
  }
  return;
}

