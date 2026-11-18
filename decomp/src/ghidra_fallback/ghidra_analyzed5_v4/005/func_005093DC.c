#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_0058C060(int param_1,uint param_2);
extern int func_0066B43C(undefined4 *param_1,undefined1 param_2);
extern int *DAT_005094ac;
extern uint DAT_005094b0;
extern undefined4 DAT_005094b4;

// USA 005093DC <- EU 005093B4 (Ghidra, non-matching)
// GLOBAL DAT_005094ac int *
// GLOBAL DAT_005094b0 uint
// GLOBAL DAT_005094b4 undefined4

void func_005093DC(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  undefined8 uVar6;
  
  uVar4 = *(uint *)(*(int *)(*(int *)(param_1 + 0x40c) + 0x24) + 0x14);
  iVar3 = uVar4 + *(int *)(param_1 + 0x478) * 0x30;
  *(undefined4 *)(param_1 + 0x444) = *(undefined4 *)(iVar3 + 0xc);
  *(undefined4 *)(param_1 + 0x448) = *(undefined4 *)(iVar3 + 0x1c);
  *(undefined4 *)(param_1 + 0x44c) = *(undefined4 *)(iVar3 + 0x2c);
  *(int *)(param_1 + 0x440) = *DAT_005094ac + 0x40000000;
  uVar6 = func_00114608(DAT_005094b0,uVar4);
  iVar3 = (int)uVar6;
  bVar5 = *(char *)(param_1 + 0x534) != '\0';
  iVar1 = iVar3;
  if (bVar5) {
    iVar1 = -iVar3;
  }
  *(int *)(param_1 + 0x438) = *(int *)(param_1 + 0x438) + iVar1;
  if (bVar5) {
    iVar3 = -iVar3;
  }
  *(int *)(param_1 + 0x43c) = *(int *)(param_1 + 0x43c) + iVar3;
  if (*(uint *)(param_1 + 0x488) < *(uint *)(param_1 + 0x48c)) {
    *(uint *)(param_1 + 0x488) = *(uint *)(param_1 + 0x488) + 1;
  }
  else {
    iVar3 = func_0058C060(param_1,*(uint *)(param_1 + 0x48c));
    uVar2 = DAT_005094b4;
    if (iVar3 != 0) {
      *(undefined4 *)(param_1 + 0x48c) = 0x3c;
      *(undefined4 *)(param_1 + 0x490) = uVar2;
      *(undefined4 *)(param_1 + 0x488) = 0;
      *(undefined4 *)(param_1 + 0x438) = 0;
      *(undefined4 *)(param_1 + 0x43c) = *(undefined4 *)(param_1 + 1000);
      func_0066B43C((undefined4 *)(param_1 + 0x510),3);
      *(undefined1 *)(param_1 + 0x536) = 0;
    }
  }
  return;
}

