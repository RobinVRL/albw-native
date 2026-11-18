#include "ghidra_types.h"

extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_00611198(int param_1,int param_2,undefined1 param_3);
extern int DAT_00611608;
extern float DAT_0061160c;

// USA 006115F4 <- EU 006115CC (Ghidra, non-matching)
// GLOBAL DAT_00611608 int
// GLOBAL DAT_0061160c float

void func_006115F4(int param_1)

{
  int iVar1;
  
  iVar1 = func_0051D2F4((int *)(param_1 + 1000),*(int *)(param_1 + 0x818),DAT_00611608,0x7fffffff,
                        DAT_0061160c);
  if (iVar1 != 0) {
    func_00611198(param_1,*(int *)(param_1 + 0x984),0);
  }
  return;
}

