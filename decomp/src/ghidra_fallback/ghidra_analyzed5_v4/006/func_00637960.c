#include "ghidra_types.h"

extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_0063741C(int param_1,int param_2,undefined1 param_3);
extern int DAT_00637974;
extern float DAT_00637978;

// USA 00637960 <- EU 00637938 (Ghidra, non-matching)
// GLOBAL DAT_00637974 int
// GLOBAL DAT_00637978 float

void func_00637960(int param_1)

{
  int iVar1;
  
  iVar1 = func_0051D2F4((int *)(param_1 + 1000),*(int *)(param_1 + 0x818),DAT_00637974,0x7fffffff,
                        DAT_00637978);
  if (iVar1 != 0) {
    func_0063741C(param_1,*(int *)(param_1 + 0x984),0);
  }
  return;
}

