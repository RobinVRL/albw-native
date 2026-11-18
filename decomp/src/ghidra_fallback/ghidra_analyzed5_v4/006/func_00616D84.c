#include "ghidra_types.h"

extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_00616924(int param_1,int param_2,undefined1 param_3);
extern int DAT_00616d98;
extern float DAT_00616d9c;

// USA 00616D84 <- EU 00616D5C (Ghidra, non-matching)
// GLOBAL DAT_00616d98 int
// GLOBAL DAT_00616d9c float

void func_00616D84(int param_1)

{
  int iVar1;
  
  iVar1 = func_0051D2F4((int *)(param_1 + 1000),*(int *)(param_1 + 0x818),DAT_00616d98,0x7fffffff,
                        DAT_00616d9c);
  if (iVar1 != 0) {
    func_00616924(param_1,*(int *)(param_1 + 0x984),0);
  }
  return;
}

