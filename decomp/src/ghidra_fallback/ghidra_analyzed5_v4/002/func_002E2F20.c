#include "ghidra_types.h"

extern int func_003F7C78(int param_1,int *param_2,undefined *param_3,int param_4);
extern int func_003F7D78(int param_1);

// USA 002E2F20 <- EU 002E2EFC (Ghidra, non-matching)

void func_002E2F20(int param_1)

{
  int iVar1;
  int in_r3;
  
  func_003F7D78(*(int *)(param_1 + 0x10));
  iVar1 = *(int *)(param_1 + 0x30);
  if (1 < *(uint *)(param_1 + 0x2c)) {
    iVar1 = iVar1 + 8;
  }
  if (*(int *)(iVar1 + 4) != 0) {
    func_003F7C78(*(int *)(param_1 + 0x10),(int *)0x0,(undefined *)0x1,in_r3);
    iVar1 = *(int *)(param_1 + 0x30);
    if (1 < *(uint *)(param_1 + 0x2c)) {
      iVar1 = iVar1 + 8;
    }
    *(undefined4 *)(iVar1 + 4) = 0;
  }
  return;
}

