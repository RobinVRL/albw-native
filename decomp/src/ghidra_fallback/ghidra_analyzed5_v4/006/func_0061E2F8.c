#include "ghidra_types.h"

extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_0061DE9C(int param_1,int param_2,undefined1 param_3);
extern int DAT_0061e30c;
extern float DAT_0061e310;

// USA 0061E2F8 <- EU 0061E2D0 (Ghidra, non-matching)
// GLOBAL DAT_0061e30c int
// GLOBAL DAT_0061e310 float

void func_0061E2F8(int param_1)

{
  int iVar1;
  
  iVar1 = func_0051D2F4((int *)(param_1 + 1000),*(int *)(param_1 + 0x818),DAT_0061e30c,0x7fffffff,
                        DAT_0061e310);
  if (iVar1 != 0) {
    func_0061DE9C(param_1,*(int *)(param_1 + 0x984),0);
  }
  return;
}

