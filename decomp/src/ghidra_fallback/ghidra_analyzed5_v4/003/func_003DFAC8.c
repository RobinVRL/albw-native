#include "ghidra_types.h"

extern int func_0010AA9C(void);
extern int DAT_003dfc60;
extern int DAT_003dfc64;

// USA 003DFAC8 <- EU 003DFAA8 (Ghidra, non-matching)
// GLOBAL DAT_003dfc60 int
// GLOBAL DAT_003dfc64 int

undefined4 func_003DFAC8(int param_1,int param_2,uint *param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  ushort uVar3;
  undefined2 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined2 *puVar7;
  uint uVar8;
  uint *puVar9;
  bool bVar10;
  undefined2 local_24;
  
  iVar1 = func_0010AA9C();
  if (iVar1 == 0) {
    return 0;
  }
  uVar8 = *param_3;
  uVar5 = param_3[1];
  if (0x7ffffff < uVar8 + 0xec000000) {
    return 0;
  }
  uVar6 = uVar8;
  if ((param_4 & 0xc) == 0) {
    if ((param_4 & 3) == 1) {
      uVar6 = uVar8 + uVar5;
    }
    if ((param_4 & 3) == 2) {
      uVar6 = uVar6 + uVar5 * 2;
    }
  }
  uVar2 = param_4 << 0x1c;
  if (uVar2 >> 0x1e == 1) {
    if ((param_4 & 3) == 1) {
      uVar6 = uVar6 + uVar5 * 2;
    }
    if ((param_4 & 3) == 2) {
      uVar6 = uVar6 + uVar5 * 4;
    }
  }
  bVar10 = uVar2 >> 0x1e == 2;
  if (bVar10) {
    uVar2 = param_4 & 3;
  }
  if (bVar10 && uVar2 == 1) {
    iVar1 = (int)((longlong)(int)(uVar5 + 0xd) * (longlong)DAT_003dfc60 +
                  ((ulonglong)(uVar5 + 0xd) << 0x20) >> 0x20);
    uVar6 = uVar6 + ((iVar1 >> 3) - (iVar1 >> 0x1f)) * 8;
  }
  if (uVar6 < 0x14000001) {
    return 0;
  }
  if (0x1c000000 < uVar6) {
    return 0;
  }
  puVar9 = *(uint **)(param_1 + (*(ushort *)(DAT_003dfc64 + param_1) & 1) * 0x60 + param_2 * 4 +
                     0x10b0);
  *(undefined2 *)((int)puVar9 + 0xbe) = *(undefined2 *)((int)param_3 + 0x12);
  puVar9[0x2c] = uVar5 >> 0x10 | uVar5 << 0x10;
  puVar9[0x2b] = uVar8 + 0xc000000 >> 0x10 | uVar8 << 0x10;
  local_24 = (undefined2)param_4;
  *(undefined2 *)(puVar9 + 0x2d) = local_24;
  *(ushort *)(puVar9 + 0x2f) = (ushort)puVar9[0x2f] & 0xfffd | ((short)(char)param_3[4] & 1U) << 1;
  if ((param_4 << 0x1c) >> 0x1e != 2) goto LAB_003dfc40;
  puVar4 = (undefined2 *)param_3[2];
  if (puVar4 == (undefined2 *)0x0) {
LAB_003dfc34:
    uVar3 = (ushort)puVar9[0x2f] & 0xfffe;
  }
  else {
    puVar7 = (undefined2 *)((int)puVar9 + 0xb6);
    iVar1 = 1;
    *(undefined2 *)((int)puVar9 + 0xb6) = *puVar4;
    do {
      iVar1 = iVar1 + -1;
      puVar7[1] = puVar4[1];
      puVar4 = puVar4 + 2;
      puVar7 = puVar7 + 2;
      *puVar7 = *puVar4;
    } while (iVar1 != 0);
    if (param_3[2] == 0) goto LAB_003dfc34;
    uVar3 = (ushort)puVar9[0x2f] | 1;
  }
  *(ushort *)(puVar9 + 0x2f) = uVar3;
LAB_003dfc40:
  *puVar9 = *puVar9 | 0x40200000;
  puVar9[0x29] = 0;
  return 1;
}

