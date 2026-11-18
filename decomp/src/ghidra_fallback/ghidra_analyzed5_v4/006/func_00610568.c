#include "ghidra_types.h"

extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_0061010C(int param_1,int param_2,undefined1 param_3);
extern int DAT_0061057c;
extern float DAT_00610580;

// USA 00610568 <- EU 00610540 (Ghidra, non-matching)
// GLOBAL DAT_0061057c int
// GLOBAL DAT_00610580 float

void func_00610568(int param_1)

{
  int iVar1;
  
  iVar1 = func_0051D2F4((int *)(param_1 + 1000),*(int *)(param_1 + 0x818),DAT_0061057c,0x7fffffff,
                        DAT_00610580);
  if (iVar1 != 0) {
    func_0061010C(param_1,*(int *)(param_1 + 0x984),0);
  }
  return;
}

