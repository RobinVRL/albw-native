#include "ghidra_types.h"

extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_006177C0(int param_1,int param_2,undefined1 param_3);
extern int DAT_00617c30;
extern float DAT_00617c34;

// USA 00617C1C <- EU 00617BF4 (Ghidra, non-matching)
// GLOBAL DAT_00617c30 int
// GLOBAL DAT_00617c34 float

void func_00617C1C(int param_1)

{
  int iVar1;
  
  iVar1 = func_0051D2F4((int *)(param_1 + 1000),*(int *)(param_1 + 0x818),DAT_00617c30,0x7fffffff,
                        DAT_00617c34);
  if (iVar1 != 0) {
    func_006177C0(param_1,*(int *)(param_1 + 0x984),0);
  }
  return;
}

