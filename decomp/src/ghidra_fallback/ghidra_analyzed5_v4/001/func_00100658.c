#include "ghidra_types.h"

extern int func_00300028(uint *param_1);
extern int func_00300054(uint *param_1);
extern undefined1 DAT_001006d0;

// GLOBAL DAT_001006d0 undefined1
// USA 00100658 <- EU 00100658 (Ghidra, function missing from the decomp table)

undefined4 func_00100658(uint *param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined1 uVar1;
  uint uVar2;
  undefined1 *puVar3;
  int iVar4;
  bool bVar5;
  
  iVar4 = 3;
  uVar2 = *param_1 & 0x800;
  if (param_3 < 7) {
    if (uVar2 == 0) {
      puVar3 = (undefined1 *)0x1006dc;
    }
    else {
      puVar3 = (undefined1 *)0x1006d8;
    }
  }
  else if (uVar2 == 0) {
    puVar3 = (undefined1 *)0x1006d4;
  }
  else {
    puVar3 = &DAT_001006d0;
  }
  *param_1 = *param_1 & 0xffffffef;
  uVar2 = param_1[6];
  param_1[6] = uVar2 - 3;
  if (param_4 != 0) {
    param_1[6] = uVar2 - 4;
  }
  func_00300028(param_1);
  if (param_4 == 0) {
    uVar2 = param_1[8];
  }
  else {
    (*(code *)param_1[1])(param_4,param_1[2]);
    uVar2 = param_1[8] + 1;
    param_1[8] = uVar2;
  }
  param_1[8] = uVar2 + 3;
  while (bVar5 = iVar4 != 0, iVar4 = iVar4 + -1, bVar5) {
    uVar1 = *puVar3;
    puVar3 = puVar3 + 1;
    (*(code *)param_1[1])(uVar1,param_1[2]);
  }
  return func_00300054(param_1);
}

