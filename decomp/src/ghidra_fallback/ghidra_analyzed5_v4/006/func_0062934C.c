#include "ghidra_types.h"

extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_00628EF0(int param_1,int param_2,undefined1 param_3);
extern int DAT_00629360;
extern float DAT_00629364;

// USA 0062934C <- EU 00629324 (Ghidra, non-matching)
// GLOBAL DAT_00629360 int
// GLOBAL DAT_00629364 float

void func_0062934C(int param_1)

{
  int iVar1;
  
  iVar1 = func_0051D2F4((int *)(param_1 + 1000),*(int *)(param_1 + 0x818),DAT_00629360,0x7fffffff,
                        DAT_00629364);
  if (iVar1 != 0) {
    func_00628EF0(param_1,*(int *)(param_1 + 0x984),0);
  }
  return;
}

