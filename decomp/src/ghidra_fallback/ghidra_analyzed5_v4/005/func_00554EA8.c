#include "ghidra_types.h"


// USA 00554EA8 <- EU 00554E80 (Ghidra, non-matching)

void func_00554EA8(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *(int *)(param_1 + 0x7c);
  uVar4 = 0;
  do {
    iVar1 = (int)uVar4 >> 5;
    uVar2 = 1 << (uVar4 & 0x1f);
    if (((*(uint *)(iVar3 + 0x1c + iVar1 * 4) & uVar2) != 0) && (uVar4 < 0x32)) {
      *(uint *)(param_2 + iVar1 * 4) = uVar2 | *(uint *)(param_2 + iVar1 * 4);
    }
    uVar4 = uVar4 + 1;
  } while ((int)uVar4 < 0x32);
  *param_3 = *(undefined4 *)(iVar3 + 0x14);
  *param_4 = *(undefined4 *)(iVar3 + 0x18);
  return;
}

