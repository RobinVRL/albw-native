#include "ghidra_types.h"

extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_0062EC8C(int param_1,int param_2,undefined1 param_3);
extern int DAT_0062f0fc;
extern float DAT_0062f100;

// USA 0062F0E8 <- EU 0062F0C0 (Ghidra, non-matching)
// GLOBAL DAT_0062f0fc int
// GLOBAL DAT_0062f100 float

void func_0062F0E8(int param_1)

{
  int iVar1;
  
  iVar1 = func_0051D2F4((int *)(param_1 + 1000),*(int *)(param_1 + 0x818),DAT_0062f0fc,0x7fffffff,
                        DAT_0062f100);
  if (iVar1 != 0) {
    func_0062EC8C(param_1,*(int *)(param_1 + 0x984),0);
  }
  return;
}

