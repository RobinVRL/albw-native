#include "ghidra_types.h"

extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_006383A4(int param_1,int param_2,undefined1 param_3);
extern int DAT_00638814;
extern float DAT_00638818;

// USA 00638800 <- EU 006387D8 (Ghidra, non-matching)
// GLOBAL DAT_00638814 int
// GLOBAL DAT_00638818 float

void func_00638800(int param_1)

{
  int iVar1;
  
  iVar1 = func_0051D2F4((int *)(param_1 + 1000),*(int *)(param_1 + 0x818),DAT_00638814,0x7fffffff,
                        DAT_00638818);
  if (iVar1 != 0) {
    func_006383A4(param_1,*(int *)(param_1 + 0x984),0);
  }
  return;
}

