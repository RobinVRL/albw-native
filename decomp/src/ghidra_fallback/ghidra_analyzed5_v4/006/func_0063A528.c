#include "ghidra_types.h"

extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_0063A0CC(int param_1,int param_2,undefined1 param_3);
extern int DAT_0063a53c;
extern float DAT_0063a540;

// USA 0063A528 <- EU 0063A500 (Ghidra, non-matching)
// GLOBAL DAT_0063a53c int
// GLOBAL DAT_0063a540 float

void func_0063A528(int param_1)

{
  int iVar1;
  
  iVar1 = func_0051D2F4((int *)(param_1 + 1000),*(int *)(param_1 + 0x818),DAT_0063a53c,0x7fffffff,
                        DAT_0063a540);
  if (iVar1 != 0) {
    func_0063A0CC(param_1,*(int *)(param_1 + 0x984),0);
  }
  return;
}

