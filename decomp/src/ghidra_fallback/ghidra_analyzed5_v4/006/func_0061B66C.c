#include "ghidra_types.h"

extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_0061B210(int param_1,int param_2,undefined1 param_3);
extern int DAT_0061b680;
extern float DAT_0061b684;

// USA 0061B66C <- EU 0061B644 (Ghidra, non-matching)
// GLOBAL DAT_0061b680 int
// GLOBAL DAT_0061b684 float

void func_0061B66C(int param_1)

{
  int iVar1;
  
  iVar1 = func_0051D2F4((int *)(param_1 + 1000),*(int *)(param_1 + 0x818),DAT_0061b680,0x7fffffff,
                        DAT_0061b684);
  if (iVar1 != 0) {
    func_0061B210(param_1,*(int *)(param_1 + 0x984),0);
  }
  return;
}

