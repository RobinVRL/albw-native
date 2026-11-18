#include "ghidra_types.h"

extern int func_003F9538(int param_1,int *param_2,undefined *param_3,int param_4);

// USA 003F7C78 <- EU 003F7C58 (Ghidra, non-matching)

void func_003F7C78(int param_1,int *param_2,undefined *param_3,int param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0xc) + (int)param_3 * 4);
  if (param_2 == (int *)0x0) {
    param_2 = *(int **)(iVar1 + 0x1c);
  }
  func_003F9538(iVar1,param_2,param_3,param_4);
  (**(code **)(*param_2 + 0xc))(param_2,*(undefined4 *)(*(int *)(param_1 + 0xc) + (int)param_3 * 4))
  ;
  *(undefined4 *)(*(int *)(param_1 + 0xc) + (int)param_3 * 4) = 0;
  return;
}

