#include "ghidra_types.h"

extern int func_00446980(int param_1,float *param_2,int param_3);
extern int func_00532C2C(int param_1);
extern int func_0066CD9C(undefined4 *param_1,undefined1 param_2);

// USA 0044DFC4 <- EU 0044DF9C (Ghidra, non-matching)

void func_0044DFC4(int param_1)

{
  int iVar1;
  
  iVar1 = func_00532C2C(param_1 + 0x8c);
  if (iVar1 < 1) {
    if (*(int *)(param_1 + 300) != 0) {
      func_00446980(*(int *)(param_1 + 300),(float *)(param_1 + 0xe8),
                    (uint)*(byte *)(param_1 + 0x108));
    }
    func_0066CD9C((undefined4 *)(param_1 + 0xb0),0);
  }
  return;
}

