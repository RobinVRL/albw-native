#include "ghidra_types.h"

extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_00625250(int param_1,int param_2,undefined1 param_3);
extern int DAT_006256c0;
extern float DAT_006256c4;

// USA 006256AC <- EU 00625684 (Ghidra, non-matching)
// GLOBAL DAT_006256c0 int
// GLOBAL DAT_006256c4 float

void func_006256AC(int param_1)

{
  int iVar1;
  
  iVar1 = func_0051D2F4((int *)(param_1 + 1000),*(int *)(param_1 + 0x818),DAT_006256c0,0x7fffffff,
                        DAT_006256c4);
  if (iVar1 != 0) {
    func_00625250(param_1,*(int *)(param_1 + 0x984),0);
  }
  return;
}

