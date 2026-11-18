#include "ghidra_types.h"

extern int func_00110490(undefined4 *param_1,uint param_2);
extern int DAT_003f7f7c;

// USA 003F7D70 <- EU 003F7D50 (Ghidra, non-matching)
// GLOBAL DAT_003f7f7c int

void func_003F7D70(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar1 = *(int *)(param_1 + 0x10);
  func_00110490((undefined4 *)(iVar1 + 0x20),0x100);
  func_00110490((undefined4 *)(iVar1 + 0x120),0x100);
  func_00110490((undefined4 *)(iVar1 + 0x220),0x100);
  func_00110490((undefined4 *)(iVar1 + 0x340),0x100);
  if (0 < (int)*(uint *)(iVar1 + 0x448)) {
    uVar2 = *(uint *)(iVar1 + 0x448) & 1;
    if (uVar2 == 1) {
      *(undefined4 *)(*(int *)(iVar1 + 800) + 0xd4) = 0;
    }
    uVar4 = (uint)(uVar2 == 1);
    if ((int)uVar2 < *(int *)(iVar1 + 0x448)) {
      do {
        iVar3 = uVar4 + 1;
        uVar2 = uVar2 + 2;
        *(undefined4 *)(*(int *)(iVar1 + 800) + uVar4 * 0x2b0 + 0xd4) = 0;
        uVar4 = uVar4 + 2;
        *(undefined4 *)(*(int *)(iVar1 + 800) + iVar3 * 0x2b0 + 0xd4) = 0;
      } while ((int)uVar2 < *(int *)(iVar1 + 0x448));
    }
  }
  if (0 < (int)*(uint *)(iVar1 + 0x44c)) {
    uVar2 = *(uint *)(iVar1 + 0x44c) & 1;
    if (uVar2 == 1) {
      *(undefined4 *)(*(int *)(iVar1 + 0x32c) + 0x138) = 0;
    }
    uVar4 = (uint)(uVar2 == 1);
    if ((int)uVar2 < *(int *)(iVar1 + 0x44c)) {
      do {
        iVar3 = uVar4 + 1;
        uVar2 = uVar2 + 2;
        *(undefined4 *)(*(int *)(iVar1 + 0x32c) + uVar4 * 0x158 + 0x138) = 0;
        uVar4 = uVar4 + 2;
        *(undefined4 *)(*(int *)(iVar1 + 0x32c) + iVar3 * 0x158 + 0x138) = 0;
      } while ((int)uVar2 < *(int *)(iVar1 + 0x44c));
    }
  }
  iVar3 = DAT_003f7f7c;
  if (0 < (int)*(uint *)(iVar1 + 0x450)) {
    uVar2 = *(uint *)(iVar1 + 0x450) & 1;
    if (uVar2 == 1) {
      *(undefined4 *)(*(int *)(iVar1 + 0x33c) + DAT_003f7f7c) = 0;
    }
    uVar4 = (uint)(uVar2 == 1);
    if ((int)uVar2 < *(int *)(iVar1 + 0x450)) {
      do {
        iVar5 = uVar4 + 1;
        uVar2 = uVar2 + 2;
        *(undefined4 *)(*(int *)(iVar1 + 0x33c) + iVar3 + uVar4 * 0x5880) = 0;
        uVar4 = uVar4 + 2;
        *(undefined4 *)(*(int *)(iVar1 + 0x33c) + iVar3 + iVar5 * 0x5880) = 0;
      } while ((int)uVar2 < *(int *)(iVar1 + 0x450));
    }
  }
  if (0 < (int)*(uint *)(iVar1 + 0x18)) {
    uVar2 = *(uint *)(iVar1 + 0x18) & 1;
    if (uVar2 == 1) {
      *(undefined4 *)(*(int *)(iVar1 + 0x14) + 4) = 0;
    }
    uVar4 = (uint)(uVar2 == 1);
    if ((int)uVar2 < *(int *)(iVar1 + 0x18)) {
      do {
        iVar3 = uVar4 + 1;
        uVar2 = uVar2 + 2;
        *(undefined4 *)(*(int *)(iVar1 + 0x14) + uVar4 * 0x288 + 4) = 0;
        uVar4 = uVar4 + 2;
        *(undefined4 *)(*(int *)(iVar1 + 0x14) + iVar3 * 0x288 + 4) = 0;
      } while ((int)uVar2 < *(int *)(iVar1 + 0x18));
    }
  }
  *(undefined4 *)(iVar1 + 0x474) = 0;
  *(undefined4 *)(iVar1 + 0x328) = *(undefined4 *)(iVar1 + 0x448);
  *(undefined4 *)(iVar1 + 0x330) = 0;
  return;
}

