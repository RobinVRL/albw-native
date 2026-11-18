#include "ghidra_types.h"

extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_006194E8(int param_1,int param_2,undefined1 param_3);
extern int DAT_00619958;
extern float DAT_0061995c;

// USA 00619944 <- EU 0061991C (Ghidra, non-matching)
// GLOBAL DAT_00619958 int
// GLOBAL DAT_0061995c float

void func_00619944(int param_1)

{
  int iVar1;
  
  iVar1 = func_0051D2F4((int *)(param_1 + 1000),*(int *)(param_1 + 0x818),DAT_00619958,0x7fffffff,
                        DAT_0061995c);
  if (iVar1 != 0) {
    func_006194E8(param_1,*(int *)(param_1 + 0x984),0);
  }
  return;
}

