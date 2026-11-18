#include "ghidra_types.h"

extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_00636588(int param_1,int param_2,undefined1 param_3);
extern int DAT_006369f8;
extern float DAT_006369fc;

// USA 006369E4 <- EU 006369BC (Ghidra, non-matching)
// GLOBAL DAT_006369f8 int
// GLOBAL DAT_006369fc float

void func_006369E4(int param_1)

{
  int iVar1;
  
  iVar1 = func_0051D2F4((int *)(param_1 + 1000),*(int *)(param_1 + 0x818),DAT_006369f8,0x7fffffff,
                        DAT_006369fc);
  if (iVar1 != 0) {
    func_00636588(param_1,*(int *)(param_1 + 0x984),0);
  }
  return;
}

