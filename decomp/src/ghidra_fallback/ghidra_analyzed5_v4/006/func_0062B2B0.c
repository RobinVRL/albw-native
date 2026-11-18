#include "ghidra_types.h"

extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_0062AE54(int param_1,int param_2,undefined1 param_3);
extern int DAT_0062b2c4;
extern float DAT_0062b2c8;

// USA 0062B2B0 <- EU 0062B288 (Ghidra, non-matching)
// GLOBAL DAT_0062b2c4 int
// GLOBAL DAT_0062b2c8 float

void func_0062B2B0(int param_1)

{
  int iVar1;
  
  iVar1 = func_0051D2F4((int *)(param_1 + 1000),*(int *)(param_1 + 0x818),DAT_0062b2c4,0x7fffffff,
                        DAT_0062b2c8);
  if (iVar1 != 0) {
    func_0062AE54(param_1,*(int *)(param_1 + 0x984),0);
  }
  return;
}

