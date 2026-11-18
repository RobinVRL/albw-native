// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_002313DC(int param_1);
extern int func_00231524(int param_1);
extern int func_003FF904(int param_1,int param_2);
extern int func_003FFE34(int param_1,int param_2);
extern int func_005568A4(int param_1);
extern int func_00556984();
extern int func_005569F8();
extern int func_00584B94(int param_1,int param_2);
extern int *DAT_0043fb1c;
extern int *DAT_0043fb20;

// USA 0043F904 <- EU 0043F8E4 (Ghidra, non-matching)
// GLOBAL DAT_0043fb1c int *
// GLOBAL DAT_0043fb20 int *

void func_0043F904(int param_1)

{
  byte bVar1;
  bool bVar2;
  int *piVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  pbVar4 = (byte *)(param_1 + 0x177);
  iVar7 = *DAT_0043fb1c;
  *(byte *)(param_1 + 0x177) = *(byte *)(param_1 + 0x177) & 0xdf;
  bVar1 = func_005568A4(iVar7);
  if (bVar1 < 0x29) {
    *pbVar4 = *pbVar4 & 0xef;
    *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined2 *)(param_1 + 0x112) = 0;
    *(undefined2 *)(param_1 + 0x110) = 0;
    if ((*DAT_0043fb20 == 0) || (bVar2 = func_00584B94(*DAT_0043fb20,0xec), !bVar2)) {
      func_002313DC(param_1 + 0x110);
      bVar1 = *pbVar4 & 0xf9;
    }
    else {
      func_00231524(param_1 + 0x110);
      bVar1 = *pbVar4 | 4;
    }
    *pbVar4 = bVar1;
  }
  else {
    *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined2 *)(param_1 + 0x112) = 1;
    *(undefined2 *)(param_1 + 0x110) = 0;
    func_00231524(param_1 + 0x110);
    *pbVar4 = *pbVar4 | 0x10;
  }
  uVar5 = 0;
  bVar1 = func_00556984(iVar7);
  *(byte *)(param_1 + 0x176) = bVar1;
  if (bVar1 < 6) {
    if (bVar1 == 0) goto LAB_0043fa48;
  }
  else {
    *(undefined1 *)(param_1 + 0x176) = 1;
  }
  do {
    piVar3 = (int *)(param_1 + 0xfc);
    if (uVar5 < 5) {
      piVar3 = piVar3 + uVar5;
    }
    iVar6 = *piVar3;
    func_00231524(iVar6 + 0x34);
    *(undefined1 *)(iVar6 + 0x40) = 1;
    *(undefined4 *)(iVar6 + 0x30) = *(undefined4 *)(iVar6 + 0x1c);
    *(undefined2 *)(iVar6 + 0x2a) = 0;
    *(undefined2 *)(iVar6 + 0x28) = 0;
    func_00231524(iVar6 + 0x28);
    func_003FF904(*(int *)(iVar6 + 0x24),*(int *)(iVar6 + 0x20));
    func_003FFE34(*(int *)(iVar6 + 0x24),*(int *)(iVar6 + 0x20));
    uVar5 = uVar5 + 1;
  } while ((int)uVar5 < (int)(uint)*(byte *)(param_1 + 0x176));
LAB_0043fa48:
  bVar1 = func_005569F8(iVar7);
  *(byte *)(param_1 + 0x175) = bVar1;
  uVar8 = (uint)*(byte *)(param_1 + 0x176) + (uint)bVar1;
  if (5 < uVar8) {
    *(byte *)(param_1 + 0x175) = '\x05' - *(byte *)(param_1 + 0x176);
  }
  for (; (int)uVar5 < (int)uVar8; uVar5 = uVar5 + 1) {
    piVar3 = (int *)(param_1 + 0xfc);
    if (uVar5 < 5) {
      piVar3 = piVar3 + uVar5;
    }
    iVar7 = *piVar3;
    func_002313DC(iVar7 + 0x34);
    *(undefined1 *)(iVar7 + 0x40) = 0;
    *(undefined4 *)(iVar7 + 0x30) = *(undefined4 *)(iVar7 + 0x1c);
    *(undefined2 *)(iVar7 + 0x2a) = 0;
    *(undefined2 *)(iVar7 + 0x28) = 0;
    func_00231524(iVar7 + 0x28);
    func_003FF904(*(int *)(iVar7 + 0x24),*(int *)(iVar7 + 0x20));
    func_003FFE34(*(int *)(iVar7 + 0x24),*(int *)(iVar7 + 0x20));
  }
  for (; (int)uVar5 < 5; uVar5 = uVar5 + 1) {
    piVar3 = (int *)(param_1 + 0xfc);
    if (uVar5 < 5) {
      piVar3 = piVar3 + uVar5;
    }
    iVar7 = *piVar3;
    *(undefined1 *)(iVar7 + 0x40) = 2;
    *(undefined4 *)(iVar7 + 0x30) = *(undefined4 *)(iVar7 + 0x1c);
    *(undefined2 *)(iVar7 + 0x2a) = 2;
    *(undefined2 *)(iVar7 + 0x28) = 0;
    func_00231524(iVar7 + 0x28);
  }
  return;
}

