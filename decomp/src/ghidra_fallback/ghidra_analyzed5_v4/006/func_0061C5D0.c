#include "ghidra_types.h"

extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_0061C0A4(int param_1,int param_2,undefined1 param_3);
extern int DAT_0061c5e4;
extern float DAT_0061c5e8;

// USA 0061C5D0 <- EU 0061C5A8 (Ghidra, non-matching)
// GLOBAL DAT_0061c5e4 int
// GLOBAL DAT_0061c5e8 float

void func_0061C5D0(int param_1)

{
  int iVar1;
  
  iVar1 = func_0051D2F4((int *)(param_1 + 1000),*(int *)(param_1 + 0x818),DAT_0061c5e4,0x7fffffff,
                        DAT_0061c5e8);
  if (iVar1 != 0) {
    func_0061C0A4(param_1,*(int *)(param_1 + 0x984),0);
  }
  return;
}

