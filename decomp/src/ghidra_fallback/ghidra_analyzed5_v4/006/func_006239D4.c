#include "ghidra_types.h"

extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_00623578(int param_1,int param_2,undefined1 param_3);
extern int DAT_006239e8;
extern float DAT_006239ec;

// USA 006239D4 <- EU 006239AC (Ghidra, non-matching)
// GLOBAL DAT_006239e8 int
// GLOBAL DAT_006239ec float

void func_006239D4(int param_1)

{
  int iVar1;
  
  iVar1 = func_0051D2F4((int *)(param_1 + 1000),*(int *)(param_1 + 0x818),DAT_006239e8,0x7fffffff,
                        DAT_006239ec);
  if (iVar1 != 0) {
    func_00623578(param_1,*(int *)(param_1 + 0x984),0);
  }
  return;
}

