#include "ghidra_types.h"

extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_006356F4(int param_1,int param_2,undefined1 param_3);
extern int DAT_00635b64;
extern float DAT_00635b68;

// USA 00635B50 <- EU 00635B28 (Ghidra, non-matching)
// GLOBAL DAT_00635b64 int
// GLOBAL DAT_00635b68 float

void func_00635B50(int param_1)

{
  int iVar1;
  
  iVar1 = func_0051D2F4((int *)(param_1 + 1000),*(int *)(param_1 + 0x818),DAT_00635b64,0x7fffffff,
                        DAT_00635b68);
  if (iVar1 != 0) {
    func_006356F4(param_1,*(int *)(param_1 + 0x984),0);
  }
  return;
}

