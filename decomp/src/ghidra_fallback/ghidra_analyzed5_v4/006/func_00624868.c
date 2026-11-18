#include "ghidra_types.h"

extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_0062440C(int param_1,int param_2,undefined1 param_3);
extern int DAT_0062487c;
extern float DAT_00624880;

// USA 00624868 <- EU 00624840 (Ghidra, non-matching)
// GLOBAL DAT_0062487c int
// GLOBAL DAT_00624880 float

void func_00624868(int param_1)

{
  int iVar1;
  
  iVar1 = func_0051D2F4((int *)(param_1 + 1000),*(int *)(param_1 + 0x818),DAT_0062487c,0x7fffffff,
                        DAT_00624880);
  if (iVar1 != 0) {
    func_0062440C(param_1,*(int *)(param_1 + 0x984),0);
  }
  return;
}

