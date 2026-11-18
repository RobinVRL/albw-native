#include "ghidra_types.h"

extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_00627E58(int param_1,int param_2,undefined1 param_3);
extern int DAT_006282d8;
extern float DAT_006282dc;

// USA 006282C4 <- EU 0062829C (Ghidra, non-matching)
// GLOBAL DAT_006282d8 int
// GLOBAL DAT_006282dc float

void func_006282C4(int param_1)

{
  int iVar1;
  
  iVar1 = func_0051D2F4((int *)(param_1 + 1000),*(int *)(param_1 + 0x818),DAT_006282d8,0x7fffffff,
                        DAT_006282dc);
  if (iVar1 != 0) {
    func_00627E58(param_1,*(int *)(param_1 + 0x984),0);
  }
  return;
}

