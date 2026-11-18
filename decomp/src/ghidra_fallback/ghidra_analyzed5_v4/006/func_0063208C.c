#include "ghidra_types.h"

extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_00631C30(int param_1,int param_2,undefined1 param_3);
extern int DAT_006320a0;
extern float DAT_006320a4;

// USA 0063208C <- EU 00632064 (Ghidra, non-matching)
// GLOBAL DAT_006320a0 int
// GLOBAL DAT_006320a4 float

void func_0063208C(int param_1)

{
  int iVar1;
  
  iVar1 = func_0051D2F4((int *)(param_1 + 1000),*(int *)(param_1 + 0x818),DAT_006320a0,0x7fffffff,
                        DAT_006320a4);
  if (iVar1 != 0) {
    func_00631C30(param_1,*(int *)(param_1 + 0x984),0);
  }
  return;
}

