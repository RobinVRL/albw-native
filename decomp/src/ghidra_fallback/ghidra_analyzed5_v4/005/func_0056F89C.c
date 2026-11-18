#include "ghidra_types.h"

extern int DAT_0056f8b0;

// USA 0056F89C <- EU 0056F874 (Ghidra, non-matching)
// GLOBAL DAT_0056f8b0 int

void func_0056F89C(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = 0;
  uVar3 = 0;
  iVar1 = (**(code **)(*param_2 + 0x50))(param_2);
  if (iVar1 == 1) {
    uVar2 = *(undefined4 *)(DAT_0056f8b0 + 0x18);
    uVar3 = *(undefined4 *)(DAT_0056f8b0 + 0x1c);
  }
  *param_1 = 0;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  return;
}

