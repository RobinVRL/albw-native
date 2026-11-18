#include "ghidra_types.h"

extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_006218EC(int param_1,int param_2,undefined1 param_3);
extern int DAT_00621d5c;
extern float DAT_00621d60;

// USA 00621D48 <- EU 00621D20 (Ghidra, non-matching)
// GLOBAL DAT_00621d5c int
// GLOBAL DAT_00621d60 float

void func_00621D48(int param_1)

{
  int iVar1;
  
  iVar1 = func_0051D2F4((int *)(param_1 + 1000),*(int *)(param_1 + 0x818),DAT_00621d5c,0x7fffffff,
                        DAT_00621d60);
  if (iVar1 != 0) {
    func_006218EC(param_1,*(int *)(param_1 + 0x984),0);
  }
  return;
}

