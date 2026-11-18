#include "ghidra_types.h"


// USA 003F856C <- EU 003F854C (Ghidra, non-matching)

int func_003F856C(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  do {
    uVar2 = *(int *)(param_1 + 0x330) + 1U & *(uint *)(param_1 + 0x458);
    *(uint *)(param_1 + 0x330) = uVar2;
    if (*(int *)(*(int *)(param_1 + 0x32c) + uVar2 * 0x158 + 0x138) == 0) {
      *(int *)(param_1 + 0x478) = *(int *)(param_1 + 0x478) + 1;
      *(undefined4 *)(*(int *)(param_1 + 0x32c) + *(int *)(param_1 + 0x330) * 0x158 + 0x14c) =
           param_2;
      return *(int *)(param_1 + 0x32c) + *(int *)(param_1 + 0x330) * 0x158;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < *(int *)(param_1 + 0x44c));
  return 0;
}

