#include "ghidra_types.h"

extern int func_00110490(undefined4 *param_1,uint param_2);
extern int DAT_003f7f7c;

// USA 003F7D78 <- EU 003F7D58 (Ghidra, non-matching)
// GLOBAL DAT_003f7f7c int

void func_003F7D78(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  func_00110490((undefined4 *)(param_1 + 0x20),0x100);
  func_00110490((undefined4 *)(param_1 + 0x120),0x100);
  func_00110490((undefined4 *)(param_1 + 0x220),0x100);
  func_00110490((undefined4 *)(param_1 + 0x340),0x100);
  if (0 < (int)*(uint *)(param_1 + 0x448)) {
    uVar1 = *(uint *)(param_1 + 0x448) & 1;
    if (uVar1 == 1) {
      *(undefined4 *)(*(int *)(param_1 + 800) + 0xd4) = 0;
    }
    uVar3 = (uint)(uVar1 == 1);
    if ((int)uVar1 < *(int *)(param_1 + 0x448)) {
      do {
        iVar2 = uVar3 + 1;
        uVar1 = uVar1 + 2;
        *(undefined4 *)(*(int *)(param_1 + 800) + uVar3 * 0x2b0 + 0xd4) = 0;
        uVar3 = uVar3 + 2;
        *(undefined4 *)(*(int *)(param_1 + 800) + iVar2 * 0x2b0 + 0xd4) = 0;
      } while ((int)uVar1 < *(int *)(param_1 + 0x448));
    }
  }
  if (0 < (int)*(uint *)(param_1 + 0x44c)) {
    uVar1 = *(uint *)(param_1 + 0x44c) & 1;
    if (uVar1 == 1) {
      *(undefined4 *)(*(int *)(param_1 + 0x32c) + 0x138) = 0;
    }
    uVar3 = (uint)(uVar1 == 1);
    if ((int)uVar1 < *(int *)(param_1 + 0x44c)) {
      do {
        iVar2 = uVar3 + 1;
        uVar1 = uVar1 + 2;
        *(undefined4 *)(*(int *)(param_1 + 0x32c) + uVar3 * 0x158 + 0x138) = 0;
        uVar3 = uVar3 + 2;
        *(undefined4 *)(*(int *)(param_1 + 0x32c) + iVar2 * 0x158 + 0x138) = 0;
      } while ((int)uVar1 < *(int *)(param_1 + 0x44c));
    }
  }
  iVar2 = DAT_003f7f7c;
  if (0 < (int)*(uint *)(param_1 + 0x450)) {
    uVar1 = *(uint *)(param_1 + 0x450) & 1;
    if (uVar1 == 1) {
      *(undefined4 *)(*(int *)(param_1 + 0x33c) + DAT_003f7f7c) = 0;
    }
    uVar3 = (uint)(uVar1 == 1);
    if ((int)uVar1 < *(int *)(param_1 + 0x450)) {
      do {
        iVar4 = uVar3 + 1;
        uVar1 = uVar1 + 2;
        *(undefined4 *)(*(int *)(param_1 + 0x33c) + iVar2 + uVar3 * 0x5880) = 0;
        uVar3 = uVar3 + 2;
        *(undefined4 *)(*(int *)(param_1 + 0x33c) + iVar2 + iVar4 * 0x5880) = 0;
      } while ((int)uVar1 < *(int *)(param_1 + 0x450));
    }
  }
  if (0 < (int)*(uint *)(param_1 + 0x18)) {
    uVar1 = *(uint *)(param_1 + 0x18) & 1;
    if (uVar1 == 1) {
      *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 0;
    }
    uVar3 = (uint)(uVar1 == 1);
    if ((int)uVar1 < *(int *)(param_1 + 0x18)) {
      do {
        iVar2 = uVar3 + 1;
        uVar1 = uVar1 + 2;
        *(undefined4 *)(*(int *)(param_1 + 0x14) + uVar3 * 0x288 + 4) = 0;
        uVar3 = uVar3 + 2;
        *(undefined4 *)(*(int *)(param_1 + 0x14) + iVar2 * 0x288 + 4) = 0;
      } while ((int)uVar1 < *(int *)(param_1 + 0x18));
    }
  }
  *(undefined4 *)(param_1 + 0x474) = 0;
  *(undefined4 *)(param_1 + 0x328) = *(undefined4 *)(param_1 + 0x448);
  *(undefined4 *)(param_1 + 0x330) = 0;
  return;
}

