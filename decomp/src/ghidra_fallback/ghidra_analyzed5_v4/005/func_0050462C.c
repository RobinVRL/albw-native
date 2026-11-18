#include "ghidra_types.h"

extern undefined4 DAT_00504668;
extern undefined4 DAT_0050466c;

// USA 0050462C <- EU 00504604 (Ghidra, non-matching)
// GLOBAL DAT_00504668 undefined4
// GLOBAL DAT_0050466c undefined4

void func_0050462C(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 in_s0;
  undefined4 in_s1;
  
  if (0 < *(int *)(param_1 + 0x54)) {
    in_s0 = DAT_0050466c;
    in_s1 = DAT_00504668;
  }
  uVar1 = 0;
  if (0 < *(int *)(param_1 + 0x54)) {
    do {
      if (uVar1 < *(uint *)(param_1 + 0x54)) {
        iVar2 = *(int *)(*(int *)(param_1 + 0x5c) + uVar1 * 4);
      }
      else {
        iVar2 = 0;
      }
      uVar1 = uVar1 + 1;
      *(undefined4 *)(iVar2 + 0x80) = 0x3c;
      *(undefined4 *)(iVar2 + 0x84) = in_s1;
      *(undefined4 *)(iVar2 + 0x7c) = 0;
      *(undefined4 *)(iVar2 + 0x78) = in_s0;
    } while ((int)uVar1 < *(int *)(param_1 + 0x54));
  }
  return;
}

