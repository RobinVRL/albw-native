#include "ghidra_types.h"

extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_00613D54(int param_1,int param_2,undefined1 param_3);
extern int DAT_006141d8;
extern float DAT_006141dc;

// USA 006141C4 <- EU 0061419C (Ghidra, non-matching)
// GLOBAL DAT_006141d8 int
// GLOBAL DAT_006141dc float

void func_006141C4(int param_1)

{
  int iVar1;
  
  iVar1 = func_0051D2F4((int *)(param_1 + 1000),*(int *)(param_1 + 0x818),DAT_006141d8,0x7fffffff,
                        DAT_006141dc);
  if (iVar1 != 0) {
    func_00613D54(param_1,*(int *)(param_1 + 0x984),0);
  }
  return;
}

