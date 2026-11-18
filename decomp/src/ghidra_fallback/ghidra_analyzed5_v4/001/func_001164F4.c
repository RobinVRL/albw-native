#include "ghidra_types.h"


// USA 001164F4 <- EU 001164F4 (Ghidra, non-matching)

undefined4 * func_001164F4(undefined4 *param_1,uint param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  
  if (param_2 < 4) {
    if ((bool)((byte)(param_2 >> 1) & 1)) {
      puVar4 = (undefined1 *)((int)param_1 + 1);
      *(undefined1 *)param_1 = 0;
      param_1 = (undefined4 *)((int)param_1 + 2);
      *puVar4 = 0;
    }
    puVar3 = param_1;
    if ((int)(param_2 << 0x1f) < 0) {
      puVar3 = (undefined4 *)((int)param_1 + 1);
      *(undefined1 *)param_1 = 0;
    }
    return puVar3;
  }
  if (((uint)param_1 & 3) != 0) {
    iVar6 = 4 - ((uint)param_1 & 3);
    puVar3 = param_1;
    if (iVar6 != 2) {
      puVar3 = (undefined4 *)((int)param_1 + 1);
      *(undefined1 *)param_1 = 0;
    }
    param_2 = param_2 - iVar6;
    param_1 = puVar3;
    if (1 < iVar6) {
      param_1 = (undefined4 *)((int)puVar3 + 2);
      *(undefined2 *)puVar3 = 0;
    }
  }
  bVar7 = 0x1f < param_2;
  uVar5 = param_2 - 0x20;
  do {
    if (bVar7) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      param_1 = param_1 + 8;
      bVar7 = 0x1f < uVar5;
      uVar5 = uVar5 - 0x20;
    }
  } while (bVar7);
  if ((bool)((byte)(uVar5 >> 4) & 1)) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1 = param_1 + 4;
  }
  if ((int)(uVar5 << 0x1c) < 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1 = param_1 + 2;
  }
  uVar1 = uVar5 << 0x1e;
  puVar3 = param_1;
  if ((bool)((byte)((uVar5 << 0x1c) >> 0x1e) & 1)) {
    puVar3 = param_1 + 1;
    *param_1 = 0;
  }
  if (uVar1 == 0) {
    return puVar3;
  }
  puVar2 = puVar3;
  if ((int)uVar1 < 0) {
    puVar2 = (undefined4 *)((int)puVar3 + 2);
    *(undefined2 *)puVar3 = 0;
  }
  puVar3 = puVar2;
  if ((uVar1 & 0x40000000) != 0) {
    puVar3 = (undefined4 *)((int)puVar2 + 1);
    *(undefined1 *)puVar2 = 0;
  }
  return puVar3;
}

