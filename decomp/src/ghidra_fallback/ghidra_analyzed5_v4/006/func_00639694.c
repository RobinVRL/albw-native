#include "ghidra_types.h"

extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_00639238(int param_1,int param_2,undefined1 param_3);
extern int DAT_006396a8;
extern float DAT_006396ac;

// USA 00639694 <- EU 0063966C (Ghidra, non-matching)
// GLOBAL DAT_006396a8 int
// GLOBAL DAT_006396ac float

void func_00639694(int param_1)

{
  int iVar1;
  
  iVar1 = func_0051D2F4((int *)(param_1 + 1000),*(int *)(param_1 + 0x818),DAT_006396a8,0x7fffffff,
                        DAT_006396ac);
  if (iVar1 != 0) {
    func_00639238(param_1,*(int *)(param_1 + 0x984),0);
  }
  return;
}

