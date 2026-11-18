#include "ghidra_types.h"


// USA 0023194C <- EU 0023194C (Ghidra, non-matching)

void func_0023194C(int param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint in_fpscr;
  undefined4 uVar5;
  
  iVar4 = *(int *)(param_1 + 8);
  if ((iVar4 != 0) && (uVar1 = (uint)*(short *)(param_1 + 2), -1 < (int)uVar1)) {
    uVar2 = *(uint *)(iVar4 + 8);
    uVar3 = uVar2;
    if (uVar1 < uVar2) {
      uVar3 = *(uint *)(iVar4 + 0xc);
    }
    uVar5 = ALBW_AS_U32(VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x15) & 3));
    if (uVar1 < uVar2) {
      iVar4 = uVar3 + uVar1 * 0x38;
    }
    else {
      iVar4 = *(int *)(iVar4 + 0xc);
    }
    *(undefined4 *)(iVar4 + 0x14) = uVar5;
    *(undefined4 *)(*(int *)(iVar4 + 0x10) + 0x10) = uVar5;
  }
  return;
}

