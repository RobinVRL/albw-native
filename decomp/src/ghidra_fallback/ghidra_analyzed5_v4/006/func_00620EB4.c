#include "ghidra_types.h"

extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_00620A58(int param_1,int param_2,undefined1 param_3);
extern int DAT_00620ec8;
extern float DAT_00620ecc;

// USA 00620EB4 <- EU 00620E8C (Ghidra, non-matching)
// GLOBAL DAT_00620ec8 int
// GLOBAL DAT_00620ecc float

void func_00620EB4(int param_1)

{
  int iVar1;
  
  iVar1 = func_0051D2F4((int *)(param_1 + 1000),*(int *)(param_1 + 0x818),DAT_00620ec8,0x7fffffff,
                        DAT_00620ecc);
  if (iVar1 != 0) {
    func_00620A58(param_1,*(int *)(param_1 + 0x984),0);
  }
  return;
}

