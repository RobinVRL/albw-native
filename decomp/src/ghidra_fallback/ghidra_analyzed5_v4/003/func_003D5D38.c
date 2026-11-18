#include "ghidra_types.h"

extern uint DAT_003d5e44;

// USA 003D5D38 <- EU 003D5D18 (Ghidra, non-matching)
// GLOBAL DAT_003d5e44 uint

undefined4 func_003D5D38(int param_1,int *param_2)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  
  iVar3 = *(int *)(param_1 + 0x10);
  iVar8 = *(int *)(param_1 + 0x14);
  iVar4 = iVar3 + 1;
  *(int *)(param_1 + 0x10) = iVar4;
  uVar9 = DAT_003d5e44;
  if (iVar4 == iVar8) {
    return 7;
  }
  iVar6 = *(int *)(param_1 + 0xc);
  uVar5 = (uint)*(ushort *)(iVar6 + iVar4 * 2);
  uVar7 = uVar5 - 0x30;
  uVar2 = (ushort)uVar7;
  uVar1 = (ushort)DAT_003d5e44;
  if (uVar7 < 4) {
    iVar4 = iVar3 + 2;
    *(int *)(param_1 + 0x10) = iVar4;
    if ((iVar4 != iVar8) && (uVar5 = *(ushort *)(iVar6 + iVar4 * 2) - 0x30, uVar5 < 8)) {
      iVar4 = iVar3 + 3;
      uVar5 = uVar9 & (uVar7 & 0xffff) << 3 | uVar5;
      uVar2 = (ushort)uVar5;
      *(int *)(param_1 + 0x10) = iVar4;
      if ((iVar4 != iVar8) && (uVar9 = *(ushort *)(iVar6 + iVar4 * 2) - 0x30, uVar9 < 8)) {
        uVar2 = uVar1 & (ushort)((uVar5 & 0xffff) << 3) | (ushort)uVar9;
        *(int *)(param_1 + 0x10) = iVar3 + 4;
      }
    }
    *(undefined1 *)(*param_2 + 8) = 0;
    *(ushort *)(*param_2 + 10) = uVar2;
  }
  else {
    if (3 < uVar5 - 0x34) {
      return 7;
    }
    iVar4 = iVar3 + 2;
    *(int *)(param_1 + 0x10) = iVar4;
    if ((iVar4 != iVar8) && (uVar9 = *(ushort *)(iVar6 + iVar4 * 2) - 0x30, uVar9 < 8)) {
      uVar2 = uVar1 & (ushort)((uVar7 & 0xffff) << 3) | (ushort)uVar9;
      *(int *)(param_1 + 0x10) = iVar3 + 3;
    }
    *(undefined1 *)(*param_2 + 8) = 0;
    *(ushort *)(*param_2 + 10) = uVar2;
  }
  return 0;
}

