#include "ghidra_types.h"

extern undefined4 DAT_003d6870;

// USA 003D67B4 <- EU 003D6794 (Ghidra, non-matching)
// GLOBAL DAT_003d6870 undefined4

undefined4 func_003D67B4(int param_1,int *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  undefined4 unaff_r6;
  int iVar4;
  
  if (0 < param_3) {
    unaff_r6 = DAT_003d6870;
  }
  *(undefined1 *)(*param_2 + 8) = 0;
  *(undefined2 *)(*param_2 + 10) = 0;
  iVar4 = 0;
  if (0 < param_3) {
    do {
      uVar2 = (ushort)unaff_r6 & *(short *)(*param_2 + 10) << 4;
      *(ushort *)(*param_2 + 10) = uVar2;
      if (*(int *)(param_1 + 0x10) == *(int *)(param_1 + 0x14)) {
        return 6;
      }
      uVar1 = *(ushort *)(*(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x10) * 2);
      uVar3 = (uint)uVar1;
      if (uVar3 - 0x30 < 10) {
        *(ushort *)(*param_2 + 10) = uVar2 | (ushort)(uVar3 - 0x30);
      }
      else if (uVar3 - 0x61 < 6) {
        *(ushort *)(*param_2 + 10) = uVar1 - 0x57 | uVar2;
      }
      else {
        if (5 < uVar3 - 0x41) {
          return 6;
        }
        *(ushort *)(*param_2 + 10) = uVar1 - 0x37 | uVar2;
      }
      iVar4 = iVar4 + 1;
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    } while (iVar4 < param_3);
  }
  return 0;
}

