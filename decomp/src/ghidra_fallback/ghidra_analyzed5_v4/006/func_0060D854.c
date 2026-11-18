#include "ghidra_types.h"

extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_0060D3F8(int param_1,int param_2,undefined1 param_3);
extern int DAT_0060d868;
extern float DAT_0060d86c;

// USA 0060D854 <- EU 0060D82C (Ghidra, non-matching)
// GLOBAL DAT_0060d868 int
// GLOBAL DAT_0060d86c float

void func_0060D854(int param_1)

{
  int iVar1;
  
  iVar1 = func_0051D2F4((int *)(param_1 + 1000),*(int *)(param_1 + 0x818),DAT_0060d868,0x7fffffff,
                        DAT_0060d86c);
  if (iVar1 != 0) {
    func_0060D3F8(param_1,*(int *)(param_1 + 0x984),0);
  }
  return;
}

