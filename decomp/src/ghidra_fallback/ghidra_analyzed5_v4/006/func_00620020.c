#include "ghidra_types.h"

extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_0061FBC4(int param_1,int param_2,undefined1 param_3);
extern int DAT_00620034;
extern float DAT_00620038;

// USA 00620020 <- EU 0061FFF8 (Ghidra, non-matching)
// GLOBAL DAT_00620034 int
// GLOBAL DAT_00620038 float

void func_00620020(int param_1)

{
  int iVar1;
  
  iVar1 = func_0051D2F4((int *)(param_1 + 1000),*(int *)(param_1 + 0x818),DAT_00620034,0x7fffffff,
                        DAT_00620038);
  if (iVar1 != 0) {
    func_0061FBC4(param_1,*(int *)(param_1 + 0x984),0);
  }
  return;
}

