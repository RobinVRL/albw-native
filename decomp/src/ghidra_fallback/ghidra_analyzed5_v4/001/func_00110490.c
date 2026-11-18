#include "ghidra_types.h"


// USA 00110490 <- EU 00110490 (Ghidra, non-matching)

undefined4 * func_00110490(undefined4 *param_1,uint param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  bool bVar5;
  
  bVar5 = 0x1f < param_2;
  uVar4 = param_2 - 0x20;
  do {
    if (bVar5) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      param_1 = param_1 + 8;
      bVar5 = 0x1f < uVar4;
      uVar4 = uVar4 - 0x20;
    }
  } while (bVar5);
  if ((bool)((byte)(uVar4 >> 4) & 1)) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1 = param_1 + 4;
  }
  if ((int)(uVar4 << 0x1c) < 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1 = param_1 + 2;
  }
  uVar1 = uVar4 << 0x1e;
  puVar3 = param_1;
  if ((bool)((byte)((uVar4 << 0x1c) >> 0x1e) & 1)) {
    puVar3 = param_1 + 1;
    *param_1 = 0;
  }
  if (uVar1 != 0) {
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
  return puVar3;
}

