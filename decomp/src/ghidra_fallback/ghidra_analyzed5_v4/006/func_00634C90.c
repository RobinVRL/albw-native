#include "ghidra_types.h"

extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_00634834(int param_1,int param_2,undefined1 param_3);
extern int DAT_00634ca4;
extern float DAT_00634ca8;

// USA 00634C90 <- EU 00634C68 (Ghidra, non-matching)
// GLOBAL DAT_00634ca4 int
// GLOBAL DAT_00634ca8 float

void func_00634C90(int param_1)

{
  int iVar1;
  
  iVar1 = func_0051D2F4((int *)(param_1 + 1000),*(int *)(param_1 + 0x818),DAT_00634ca4,0x7fffffff,
                        DAT_00634ca8);
  if (iVar1 != 0) {
    func_00634834(param_1,*(int *)(param_1 + 0x984),0);
  }
  return;
}

