#include "ghidra_types.h"


// USA 00112D2C <- EU 00112D2C (Ghidra, non-matching)

void func_00112D2C(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = param_1 + param_3 * 4;
  if (*(int *)(iVar1 + 0x120) == 0) {
    *(int *)(iVar1 + 0x120) = param_2;
    *(undefined4 *)(param_2 + 0x27c) = 0;
    *(undefined4 *)(param_2 + 0x278) = 0;
  }
  else {
    *(int *)(*(int *)(iVar1 + 0x220) + 0x278) = param_2;
    uVar2 = *(undefined4 *)(iVar1 + 0x220);
    *(undefined4 *)(param_2 + 0x278) = 0;
    *(undefined4 *)(param_2 + 0x27c) = uVar2;
  }
  *(int *)(iVar1 + 0x220) = param_2;
  return;
}

