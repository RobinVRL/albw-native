#include "ghidra_types.h"

extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_0062FB20(int param_1,int param_2,undefined1 param_3);
extern int DAT_0062ff90;
extern float DAT_0062ff94;

// USA 0062FF7C <- EU 0062FF54 (Ghidra, non-matching)
// GLOBAL DAT_0062ff90 int
// GLOBAL DAT_0062ff94 float

void func_0062FF7C(int param_1)

{
  int iVar1;
  
  iVar1 = func_0051D2F4((int *)(param_1 + 1000),*(int *)(param_1 + 0x818),DAT_0062ff90,0x7fffffff,
                        DAT_0062ff94);
  if (iVar1 != 0) {
    func_0062FB20(param_1,*(int *)(param_1 + 0x984),0);
  }
  return;
}

