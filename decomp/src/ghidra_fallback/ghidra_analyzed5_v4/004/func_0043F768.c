#include "ghidra_types.h"

extern int func_001B6C04(int param_1);
extern int func_0031C064(int param_1,uint param_2);
extern int func_0043F904(int param_1);
extern int func_004B948C(int param_1,int param_2);
extern int func_0055696C(int param_1,int param_2);
extern int *DAT_0043f8dc;
extern int *DAT_0043f8e0;

// USA 0043F768 <- EU 0043F748 (Ghidra, non-matching)
// GLOBAL DAT_0043f8dc int *
// GLOBAL DAT_0043f8e0 int *

void func_0043F768(int param_1)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  
  func_001B6C04(param_1);
  func_0043F904(param_1);
  *(undefined1 *)(param_1 + 0x17c) = 0xff;
  *(undefined1 *)(*(int *)(param_1 + 0x170) + 0xe) = 1;
  pbVar7 = (byte *)(param_1 + 0x177);
  iVar3 = *DAT_0043f8dc;
  if ((*DAT_0043f8e0 == 0) || (iVar4 = func_0055696C(*DAT_0043f8e0,0x26), iVar4 == 0)) {
    if (*(int *)(param_1 + 0x158) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = **(undefined4 **)(param_1 + 0x160);
    }
    *(undefined4 *)(param_1 + 0x16c) = uVar5;
    bVar2 = *pbVar7 & 0x7f;
LAB_0043f800:
    *pbVar7 = bVar2;
  }
  else {
    if (*(uint *)(param_1 + 0x158) < 2) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(*(int *)(param_1 + 0x160) + 4);
    }
    *(int *)(param_1 + 0x16c) = iVar4;
    if (-1 < *(char *)(param_1 + 0x177)) {
      *(undefined1 *)(iVar4 + 0xea) = 1;
      *(undefined1 *)(param_1 + 0x17c) = 0;
      bVar2 = *pbVar7 | 0x80;
      goto LAB_0043f800;
    }
  }
  func_004B948C(param_1,*(int *)(param_1 + 0x16c));
  *(undefined1 *)(*(int *)(param_1 + 0x16c) + 0xe) = 1;
  iVar4 = 0;
  do {
    iVar1 = iVar4 * 4;
    iVar4 = iVar4 + 1;
    *(undefined1 *)(*(int *)(param_1 + 0xfc + iVar1) + 0xe) = 1;
  } while (iVar4 != 5);
  *(undefined1 *)(param_1 + 0x86) = 1;
  *(undefined1 *)(param_1 + 0xb2) = 1;
  *(undefined1 *)(param_1 + 0xde) = 1;
  uVar8 = 1;
  *(undefined1 *)(*(int *)(param_1 + 0x74) + 0xe) = 1;
  if (*(char *)(iVar3 + 0x18) == '\0') {
    if (*(int *)(iVar3 + 0x1c) != 0x2a) goto LAB_0043f888;
  }
  else if ((*(char *)(iVar3 + 0x18) != '\x05') || (*(int *)(iVar3 + 0x1c) != 9)) goto LAB_0043f888;
  uVar8 = 0;
LAB_0043f888:
  func_0031C064(*(int *)(param_1 + 0x16c),uVar8);
  iVar4 = *(int *)(param_1 + 0x1c);
  iVar3 = *(int *)(param_1 + 0x178);
  if (iVar3 != 0) {
    bVar2 = *(byte *)(iVar3 + 0x44);
    uVar6 = bVar2 & 1;
    if ((bVar2 & 1) != 0) {
      uVar6 = 1;
    }
    if ((uVar6 != uVar8) && (*(byte *)(iVar3 + 0x44) = bVar2 & 0xfe | (byte)uVar8, uVar8 != 0)) {
      *(byte *)(iVar4 + 0x70) = *(byte *)(iVar4 + 0x70) | 2;
    }
  }
  return;
}

