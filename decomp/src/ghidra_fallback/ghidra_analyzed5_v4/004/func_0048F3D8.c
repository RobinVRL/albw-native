#include "ghidra_types.h"

extern undefined4 *DAT_0048f470;
extern undefined4 *DAT_0048f474;
extern undefined4 DAT_0048f478;

// USA 0048F3D8 <- EU 0048F3B0 (Ghidra, non-matching)
// GLOBAL DAT_0048f470 undefined4 *
// GLOBAL DAT_0048f474 undefined4 *
// GLOBAL DAT_0048f478 undefined4

void func_0048F3D8(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  puVar2 = (undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x11c) = 0;
  *puVar2 = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  uVar5 = *(uint *)(param_1 + 0x108);
  if (0 < (int)uVar5) {
    uVar3 = uVar5 & 1;
    uVar4 = (uint)(uVar3 == 1);
    if (uVar3 == 1) {
      *(undefined4 *)(param_1 + 0x38) = 0;
    }
    if ((int)uVar3 < (int)uVar5) {
      do {
        puVar2[uVar4 + 10] = 0;
        uVar3 = uVar3 + 2;
        puVar2[uVar4 + 0xb] = 0;
        uVar4 = uVar4 + 2;
      } while ((int)uVar3 < *(int *)(param_1 + 0x108));
    }
  }
  uVar1 = DAT_0048f478;
  puVar2 = DAT_0048f470;
  *(undefined4 *)(param_1 + 0x120) = *DAT_0048f470;
  *(undefined4 *)(param_1 + 0x124) = puVar2[1];
  puVar2 = DAT_0048f474;
  *(undefined4 *)(param_1 + 0x20) = *DAT_0048f474;
  *(undefined4 *)(param_1 + 0x24) = puVar2[1];
  *(undefined4 *)(param_1 + 0x128) = uVar1;
  *(undefined4 *)(param_1 + 300) = uVar1;
  *(undefined4 *)(param_1 + 0x130) = uVar1;
  *(undefined4 *)(param_1 + 0x134) = uVar1;
  *(undefined4 *)(param_1 + 0x138) = uVar1;
  *(undefined4 *)(param_1 + 0x13c) = uVar1;
  return;
}

