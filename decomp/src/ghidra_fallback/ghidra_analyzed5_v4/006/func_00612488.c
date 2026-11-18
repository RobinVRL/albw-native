#include "ghidra_types.h"

extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_0061202C(int param_1,int param_2,undefined1 param_3);
extern int DAT_0061249c;
extern float DAT_006124a0;

// USA 00612488 <- EU 00612460 (Ghidra, non-matching)
// GLOBAL DAT_0061249c int
// GLOBAL DAT_006124a0 float

void func_00612488(int param_1)

{
  int iVar1;
  
  iVar1 = func_0051D2F4((int *)(param_1 + 1000),*(int *)(param_1 + 0x818),DAT_0061249c,0x7fffffff,
                        DAT_006124a0);
  if (iVar1 != 0) {
    func_0061202C(param_1,*(int *)(param_1 + 0x984),0);
  }
  return;
}

