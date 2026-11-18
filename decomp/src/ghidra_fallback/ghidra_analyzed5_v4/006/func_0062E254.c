#include "ghidra_types.h"

extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_0062DDF8(int param_1,int param_2,undefined1 param_3);
extern int DAT_0062e268;
extern float DAT_0062e26c;

// USA 0062E254 <- EU 0062E22C (Ghidra, non-matching)
// GLOBAL DAT_0062e268 int
// GLOBAL DAT_0062e26c float

void func_0062E254(int param_1)

{
  int iVar1;
  
  iVar1 = func_0051D2F4((int *)(param_1 + 1000),*(int *)(param_1 + 0x818),DAT_0062e268,0x7fffffff,
                        DAT_0062e26c);
  if (iVar1 != 0) {
    func_0062DDF8(param_1,*(int *)(param_1 + 0x984),0);
  }
  return;
}

