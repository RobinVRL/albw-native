#include "ghidra_types.h"

extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_0061A37C(int param_1,int param_2,undefined1 param_3);
extern int DAT_0061a7ec;
extern float DAT_0061a7f0;

// USA 0061A7D8 <- EU 0061A7B0 (Ghidra, non-matching)
// GLOBAL DAT_0061a7ec int
// GLOBAL DAT_0061a7f0 float

void func_0061A7D8(int param_1)

{
  int iVar1;
  
  iVar1 = func_0051D2F4((int *)(param_1 + 1000),*(int *)(param_1 + 0x818),DAT_0061a7ec,0x7fffffff,
                        DAT_0061a7f0);
  if (iVar1 != 0) {
    func_0061A37C(param_1,*(int *)(param_1 + 0x984),0);
  }
  return;
}

