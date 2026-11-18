#include "ghidra_types.h"

extern int func_0031BC9C(int param_1);
extern int DAT_00460150;

// USA 0045FFD4 <- EU 0045FFAC (Ghidra, non-matching)
// GLOBAL DAT_00460150 int

void func_0045FFD4(int param_1,int *param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined2 uVar8;
  undefined4 *puVar9;
  int iVar10;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(undefined2 *)(albw_frame + 0x8))
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  iVar4 = DAT_00460150;
  local_38 = 0x100;
  iVar2 = param_2[2];
  iVar5 = *param_2;
  iVar10 = 0;
  uVar8 = local_38;
  do {
    local_38 = uVar8;
    bVar1 = *(byte *)(iVar4 + iVar10);
    uVar8 = local_38;
    for (puVar9 = (undefined4 *)param_2[2]; (*(undefined1 *)((char *)&local_38 + 1)) = (undefined1)((ushort)uVar8 >> 8),
        puVar9 != (undefined4 *)(iVar2 + iVar5 * 4); puVar9 = puVar9 + 1) {
      uVar3 = func_0031BC9C((int)(char)*(undefined4 *)*puVar9);
      if (uVar3 == bVar1) {
        local_38 = CONCAT11((*(undefined1 *)((char *)&local_38 + 1)),(char)*(undefined4 *)*puVar9);
        iVar6 = *(int *)(param_1 + 0xd0);
        iVar7 = *(int *)(param_1 + 200);
        uVar8 = local_38;
        if (iVar6 < iVar7) {
          *(int *)(param_1 + 0xd0) = iVar6 + 1;
          iVar6 = iVar6 + *(int *)(param_1 + 0xcc);
          if (iVar7 <= iVar6) {
            iVar6 = iVar6 - iVar7;
          }
          *(undefined2 *)(*(int *)(param_1 + 0xc4) + iVar6 * 2) = local_38;
        }
      }
      local_38 = uVar8;
      uVar8 = local_38;
    }
    iVar10 = iVar10 + 1;
  } while (iVar10 < 0x1d);
  local_38 = CONCAT11((*(undefined1 *)((char *)&local_38 + 1)),0xff);
  iVar4 = *(int *)(param_1 + 0xd0);
  iVar2 = *(int *)(param_1 + 200);
  if (iVar4 < iVar2) {
    *(int *)(param_1 + 0xd0) = iVar4 + 1;
    iVar4 = iVar4 + *(int *)(param_1 + 0xcc);
    if (iVar2 <= iVar4) {
      iVar4 = iVar4 - iVar2;
    }
    *(undefined2 *)(*(int *)(param_1 + 0xc4) + iVar4 * 2) = local_38;
  }
  iVar4 = *(int *)(param_1 + 0xd0);
  if (iVar4 < 7) {
    iVar4 = 10 - iVar4;
    if (iVar4 < 1) {
      return;
    }
  }
  else {
    if (param_3 != 0) {
      return;
    }
    if (0x15 - iVar4 < 4) {
      return;
    }
    iVar4 = 4;
  }
  iVar4 = iVar4 + 1;
  local_38 = 0xff;
  uVar8 = (short)puVar9;
  if (1 < iVar4) {
    uVar8 = local_38;
  }
  iVar2 = 1;
  if (1 < iVar4) {
    do {
      iVar5 = *(int *)(param_1 + 0xd0);
      iVar10 = *(int *)(param_1 + 200);
      if (iVar5 < iVar10) {
        *(int *)(param_1 + 0xd0) = iVar5 + 1;
        iVar5 = iVar5 + *(int *)(param_1 + 0xcc);
        if (iVar10 <= iVar5) {
          iVar5 = iVar5 - iVar10;
        }
        *(undefined2 *)(*(int *)(param_1 + 0xc4) + iVar5 * 2) = uVar8;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar4);
  }
  return;
}

