#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_0030B1D0(int param_1);
extern int func_0051ACB0(int param_1);
extern int func_005568D4(int param_1);
extern int func_005822A0(int param_1,uint param_2,undefined4 param_3);
extern int func_00584A80(int param_1,uint param_2);
extern int func_00584B94(int param_1,int param_2);
extern int func_0058D8B4(int param_1);
extern int *DAT_0030bc34;
extern int *DAT_0030bc38;
extern uint DAT_0030bc3c;
extern int *DAT_0030bc40;
extern int *DAT_0030bc44;
extern int *DAT_0030bc48;
extern int DAT_0030bc4c;
extern int *DAT_0030bc50;

// USA 0030B934 <- EU 0030B910 (Ghidra, non-matching)
// GLOBAL DAT_0030bc34 int *
// GLOBAL DAT_0030bc38 int *
// GLOBAL DAT_0030bc3c uint
// GLOBAL DAT_0030bc40 int *
// GLOBAL DAT_0030bc44 int *
// GLOBAL DAT_0030bc48 int *
// GLOBAL DAT_0030bc4c int
// GLOBAL DAT_0030bc50 int *

int func_0030B934(int param_1)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  bool bVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint uVar11;
  
  iVar7 = DAT_0030bc4c;
  piVar3 = DAT_0030bc40;
  piVar2 = DAT_0030bc34;
  iVar6 = *(int *)(param_1 + 0xf0);
  switch(*(undefined2 *)(iVar6 + 10)) {
  case 0:
  case 1:
  case 2:
    puVar9 = *(undefined4 **)(param_1 + 0x130);
    if (puVar9 != (undefined4 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0030b99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar7 = (**(code **)*puVar9)
                        (puVar9,*(ushort *)(iVar6 + 0xc) & 0xff,*(uint *)(iVar6 + 4) & 0xffff);
      return iVar7;
    }
  default:
    iVar7 = func_0030B1D0(param_1);
    return iVar7;
  case 3:
  case 4:
  case 5:
    iVar7 = 0;
    if (*DAT_0030bc40 != 0) {
      iVar7 = func_0058D8B4(*DAT_0030bc40);
      if (iVar7 < 0) {
        iVar7 = *(ushort *)(*(int *)(param_1 + 0xf0) + 10) - 2;
      }
      if (*piVar3 != 0) {
        func_0051ACB0(*piVar3);
      }
    }
    break;
  case 6:
    uVar5 = func_005568D4(*DAT_0030bc44);
    if ((uint)uVar5 < *(uint *)(*(int *)(param_1 + 0xf0) + 4)) {
      return 1;
    }
    return 0;
  case 7:
    uVar11 = func_00111A64((uint *)(*DAT_0030bc48 + 0x660));
    if (*(uint *)(*(int *)(param_1 + 0xf0) + 4) <= (uint)((ulonglong)uVar11 * 100 >> 0x20)) {
      return 1;
    }
    return 0;
  case 8:
    uVar11 = func_00111A64((uint *)(*DAT_0030bc48 + 0x660));
    uVar11 = (uint)((ulonglong)uVar11 * 100 >> 0x20);
    uVar8 = *(uint *)(*(int *)(param_1 + 0xf0) + 4);
    uVar10 = uVar8 & 0xffff;
    if (uVar11 < uVar10) {
      return 0;
    }
    if (uVar11 < uVar10 + (uVar8 >> 0x10)) {
      return 1;
    }
    return 2;
  case 9:
    uVar11 = func_00111A64((uint *)(*DAT_0030bc48 + 0x660));
    uVar11 = (uint)((ulonglong)uVar11 * 100 >> 0x20);
    uVar10 = *(uint *)(*(int *)(param_1 + 0xf0) + 4);
    uVar8 = uVar10 & 0xffff;
    if (uVar11 < uVar8) {
      return 0;
    }
    uVar1 = (uVar10 << 8) >> 0x18;
    if (uVar11 < uVar8 + uVar1) {
      return 1;
    }
    if (uVar11 < uVar1 + uVar8 + (uVar10 >> 0x18)) {
      return 2;
    }
    iVar7 = 3;
    break;
  case 10:
    bVar4 = func_00584A80(*DAT_0030bc34,*(uint *)(iVar6 + 4) & 0xffff);
    iVar7 = 0;
    if (bVar4) {
      return 1;
    }
    break;
  case 0xb:
    bVar4 = func_005822A0(*DAT_0030bc38,*(uint *)(iVar6 + 4),0);
    iVar7 = 0;
    if (bVar4) {
      return 1;
    }
    break;
  case 0xc:
    uVar11 = *(uint *)(iVar6 + 4);
    if (uVar11 - 0x3e9 < DAT_0030bc3c) {
      uVar11 = uVar11 - 1000;
    }
    bVar4 = func_005822A0(*DAT_0030bc38,uVar11,1);
    iVar7 = 0;
    if (bVar4) {
      return 1;
    }
    break;
  case 0xd:
    uVar11 = *(uint *)(iVar6 + 4);
    if (uVar11 - 0x7d1 < DAT_0030bc3c) {
      uVar11 = uVar11 - 2000;
    }
    bVar4 = func_005822A0(*DAT_0030bc38,uVar11,2);
    iVar7 = 0;
    if (bVar4) {
      return 1;
    }
    break;
  case 0xe:
    uVar11 = *(uint *)(iVar6 + 4);
    if (uVar11 - 0xbb9 < DAT_0030bc3c) {
      uVar11 = uVar11 - 3000;
    }
    bVar4 = func_005822A0(*DAT_0030bc38,uVar11,3);
    iVar7 = 0;
    if (bVar4) {
      return 1;
    }
    break;
  case 0xf:
    iVar6 = 0;
    uVar11 = 0;
    do {
      bVar4 = func_00584B94(*piVar2,(uint)*(ushort *)(iVar7 + uVar11 * 2));
      if (bVar4) {
        iVar6 = iVar6 + 1;
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < 7);
    if (*(int *)(*(int *)(param_1 + 0xf0) + 4) != iVar6) {
      return 1;
    }
    return 0;
  case 0x10:
    if (*(char *)(*DAT_0030bc50 + 0x70) == '\x04') {
      return 1;
    }
    return 0;
  }
  return iVar7;
}

