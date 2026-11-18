#include "ghidra_types.h"

extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_00629D84(int param_1,int param_2,undefined1 param_3);
extern int DAT_0062a1f8;
extern float DAT_0062a1fc;

// USA 0062A1E4 <- EU 0062A1BC (Ghidra, non-matching)
// GLOBAL DAT_0062a1f8 int
// GLOBAL DAT_0062a1fc float

void func_0062A1E4(int param_1)

{
  int iVar1;
  
  iVar1 = func_0051D2F4((int *)(param_1 + 1000),*(int *)(param_1 + 0x818),DAT_0062a1f8,0x7fffffff,
                        DAT_0062a1fc);
  if (iVar1 != 0) {
    func_00629D84(param_1,*(int *)(param_1 + 0x984),0);
  }
  return;
}

