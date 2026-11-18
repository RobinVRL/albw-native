#include "ghidra_types.h"

extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_006260FC(int param_1,int param_2,undefined1 param_3);
extern int DAT_0062656c;
extern float DAT_00626570;

// USA 00626558 <- EU 00626530 (Ghidra, non-matching)
// GLOBAL DAT_0062656c int
// GLOBAL DAT_00626570 float

void func_00626558(int param_1)

{
  int iVar1;
  
  iVar1 = func_0051D2F4((int *)(param_1 + 1000),*(int *)(param_1 + 0x818),DAT_0062656c,0x7fffffff,
                        DAT_00626570);
  if (iVar1 != 0) {
    func_006260FC(param_1,*(int *)(param_1 + 0x984),0);
  }
  return;
}

