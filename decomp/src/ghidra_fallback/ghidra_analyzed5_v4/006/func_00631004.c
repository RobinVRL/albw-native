#include "ghidra_types.h"

extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_00630BA8(int param_1,int param_2,undefined1 param_3);
extern int DAT_00631018;
extern float DAT_0063101c;

// USA 00631004 <- EU 00630FDC (Ghidra, non-matching)
// GLOBAL DAT_00631018 int
// GLOBAL DAT_0063101c float

void func_00631004(int param_1)

{
  int iVar1;
  
  iVar1 = func_0051D2F4((int *)(param_1 + 1000),*(int *)(param_1 + 0x818),DAT_00631018,0x7fffffff,
                        DAT_0063101c);
  if (iVar1 != 0) {
    func_00630BA8(param_1,*(int *)(param_1 + 0x984),0);
  }
  return;
}

