#include "ghidra_types.h"


// USA 003F8470 <- EU 003F8450 (Ghidra, non-matching)

int func_003F8470(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1 + *(int *)(param_2 + 0x198) * 4;
  iVar1 = *(int *)(param_2 + 0x278);
  if (*(int *)(iVar2 + 0x120) == param_2) {
    *(int *)(iVar2 + 0x120) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 0x27c) = 0;
    }
    iVar2 = param_1 + *(int *)(param_2 + 0x198) * 4;
    if (*(int *)(iVar2 + 0x220) == param_2) {
      *(undefined4 *)(iVar2 + 0x220) = 0;
    }
  }
  else {
    if (*(int *)(iVar2 + 0x220) == param_2) {
      *(undefined4 *)(iVar2 + 0x220) = *(undefined4 *)(param_2 + 0x27c);
    }
    if (*(int *)(param_2 + 0x278) != 0) {
      *(undefined4 *)(*(int *)(param_2 + 0x278) + 0x27c) = *(undefined4 *)(param_2 + 0x27c);
    }
    if (*(int *)(param_2 + 0x27c) != 0) {
      *(undefined4 *)(*(int *)(param_2 + 0x27c) + 0x278) = *(undefined4 *)(param_2 + 0x278);
    }
  }
  *(undefined4 *)(param_2 + 0x278) = 0;
  *(undefined4 *)(param_2 + 0x27c) = 0;
  return iVar1;
}

