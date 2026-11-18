#include "ghidra_types.h"

extern int func_001DD0C0(int param_1,int param_2,int param_3,int param_4);
extern int *DAT_0016b984;
extern int *DAT_0016b988;
extern int *DAT_0016b98c;

// USA 0016B8DC <- EU 0016B8DC (Ghidra, non-matching)
// GLOBAL DAT_0016b984 int *
// GLOBAL DAT_0016b988 int *
// GLOBAL DAT_0016b98c int *

void func_0016B8DC(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  bool bVar5;
  
  iVar1 = *(int *)(param_1 + 0xf74);
  if (iVar1 == 0) {
    return;
  }
  uVar3 = *(uint *)(*DAT_0016b984 + 0xf74);
  if (uVar3 != 0) {
    param_3 = *(int *)(uVar3 + 0x20);
  }
  if (uVar3 == 0 || param_3 == 0) {
LAB_0016b920:
    if (*(char *)(*DAT_0016b988 + 0x18) != '\x11') {
      uVar4 = 0;
      goto LAB_0016b938;
    }
  }
  else {
    bVar5 = *(int *)(param_3 + 4) != 0;
    if (bVar5) {
      uVar3 = (uint)*(byte *)(uVar3 + 0x35);
    }
    if (!bVar5 || uVar3 == 0) goto LAB_0016b920;
  }
  uVar4 = 1;
LAB_0016b938:
  if (*(int *)(iVar1 + 0x14) == 0) {
    uVar3 = 3;
  }
  else {
    uVar3 = *(uint *)(*(int *)(iVar1 + 0x14) + 4);
  }
  uVar2 = 0;
  if (*(int *)(iVar1 + 8) != 0) {
    uVar2 = *(uint *)(*(int *)(iVar1 + 8) + 4);
  }
  func_001DD0C0(*DAT_0016b98c,uVar2 & 0xffff,uVar3 & 0xffff,uVar4);
  *(undefined1 *)(param_1 + 0xf95) = *(undefined1 *)(param_1 + 0xfa5);
  *(undefined4 *)(param_1 + 0xf98) = *(undefined4 *)(param_1 + 0xf74);
  return;
}

