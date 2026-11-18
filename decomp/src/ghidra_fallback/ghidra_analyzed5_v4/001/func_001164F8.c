#include "ghidra_types.h"


// USA 001164F8 <- EU 001164F8 (Ghidra, function missing from the decomp table)

undefined4 * func_001164F8(undefined4 *param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  
  uVar2 = (undefined1)param_3;
  if (param_2 < 4) {
    if ((bool)((byte)(param_2 >> 1) & 1)) {
      puVar5 = (undefined1 *)((int)param_1 + 1);
      *(undefined1 *)param_1 = uVar2;
      param_1 = (undefined4 *)((int)param_1 + 2);
      *puVar5 = uVar2;
    }
    puVar4 = param_1;
    if ((int)(param_2 << 0x1f) < 0) {
      puVar4 = (undefined4 *)((int)param_1 + 1);
      *(undefined1 *)param_1 = uVar2;
    }
    return puVar4;
  }
  if (((uint)param_1 & 3) != 0) {
    iVar7 = 4 - ((uint)param_1 & 3);
    puVar4 = param_1;
    if (iVar7 != 2) {
      puVar4 = (undefined4 *)((int)param_1 + 1);
      *(undefined1 *)param_1 = uVar2;
    }
    param_2 = param_2 - iVar7;
    param_1 = puVar4;
    if (1 < iVar7) {
      param_1 = (undefined4 *)((int)puVar4 + 2);
      *(short *)puVar4 = (short)param_3;
    }
  }
  bVar8 = 0x1f < param_2;
  uVar6 = param_2 - 0x20;
  do {
    if (bVar8) {
      *param_1 = param_3;
      param_1[1] = param_3;
      param_1[2] = param_3;
      param_1[3] = param_3;
      param_1[4] = param_3;
      param_1[5] = param_3;
      param_1[6] = param_3;
      param_1[7] = param_3;
      param_1 = param_1 + 8;
      bVar8 = 0x1f < uVar6;
      uVar6 = uVar6 - 0x20;
    }
  } while (bVar8);
  if ((bool)((byte)(uVar6 >> 4) & 1)) {
    *param_1 = param_3;
    param_1[1] = param_3;
    param_1[2] = param_3;
    param_1[3] = param_3;
    param_1 = param_1 + 4;
  }
  if ((int)(uVar6 << 0x1c) < 0) {
    *param_1 = param_3;
    param_1[1] = param_3;
    param_1 = param_1 + 2;
  }
  uVar1 = uVar6 << 0x1e;
  puVar4 = param_1;
  if ((bool)((byte)((uVar6 << 0x1c) >> 0x1e) & 1)) {
    puVar4 = param_1 + 1;
    *param_1 = param_3;
  }
  if (uVar1 == 0) {
    return puVar4;
  }
  puVar3 = puVar4;
  if ((int)uVar1 < 0) {
    puVar3 = (undefined4 *)((int)puVar4 + 2);
    *(short *)puVar4 = (short)param_3;
  }
  puVar4 = puVar3;
  if ((uVar1 & 0x40000000) != 0) {
    puVar4 = (undefined4 *)((int)puVar3 + 1);
    *(undefined1 *)puVar3 = uVar2;
  }
  return puVar4;
}

