#include "ghidra_types.h"

extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_0061D008(int param_1,int param_2,undefined1 param_3);
extern int DAT_0061d478;
extern float DAT_0061d47c;

// USA 0061D464 <- EU 0061D43C (Ghidra, non-matching)
// GLOBAL DAT_0061d478 int
// GLOBAL DAT_0061d47c float

void func_0061D464(int param_1)

{
  int iVar1;
  
  iVar1 = func_0051D2F4((int *)(param_1 + 1000),*(int *)(param_1 + 0x818),DAT_0061d478,0x7fffffff,
                        DAT_0061d47c);
  if (iVar1 != 0) {
    func_0061D008(param_1,*(int *)(param_1 + 0x984),0);
  }
  return;
}

