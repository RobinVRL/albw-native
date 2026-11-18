#include "ghidra_types.h"

extern int func_001139F8(int param_1);
extern int func_00600660(int param_1);

// USA 003FCE5C <- EU 003FCE3C (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// PARAM param_6 Stack[0x4]:4 int
// PARAM param_7 Stack[0x8]:4 uint *

void func_003FCE5C(uint *param_1,undefined4 param_2,int param_3,uint param_4,int param_5,int param_6
                  ,uint *param_7)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  byte bVar10;
  uint uVar11;
  ulonglong uVar12;
  
  uVar8 = 0;
  bVar10 = ~(*(byte *)(param_6 + 0x40) >> 2) & 1;
  iVar1 = func_00600660(0x20000);
  uVar2 = func_001139F8(iVar1);
  uVar9 = 0;
  uVar7 = 0;
  uVar11 = *param_7;
  uVar12 = (ulonglong)uVar11;
  if (param_4 != 0) {
    do {
      uVar3 = *(uint *)(param_3 + uVar7 * 4);
      uVar5 = (uVar3 << 3) >> 0x1c;
      uVar11 = uVar3 & 0x1ffffff;
      iVar1 = *(int *)(param_5 + 0x20);
      if (uVar5 != 1) {
        uVar11 = uVar11 << 2;
      }
      if ((uVar3 >> 0x1d != 2) || (iVar4 = iVar1, iVar1 == 0)) {
        iVar4 = *(int *)(param_5 + (uVar3 >> 0x1d) * 4);
      }
      puVar6 = (uint *)(iVar4 + uVar11);
      switch(uVar5) {
      default:
        iVar4 = 0;
        break;
      case 1:
        iVar4 = 1;
        break;
      case 2:
      case 3:
        iVar4 = 2;
        break;
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
        iVar4 = 3;
        break;
      case 9:
      case 10:
      case 0xb:
      case 0xc:
      case 0xd:
        iVar4 = 4;
      }
      uVar11 = *(int *)(param_5 + iVar4 * 4) + *puVar6;
      switch(uVar5) {
      case 3:
        if (iVar1 != 0) {
          uVar11 = iVar1 + *puVar6;
        }
      case 0:
      case 1:
      case 2:
      case 4:
      case 9:
        *puVar6 = uVar11;
        break;
      case 5:
      case 10:
        uVar5 = func_001139F8(uVar11);
        *puVar6 = uVar5 >> 3;
        goto joined_r0x003fcfd4;
      case 6:
      case 0xb:
        iVar1 = func_001139F8(uVar11);
        *puVar6 = iVar1 - uVar2;
joined_r0x003fcfd4:
        if (bVar10 != 0) {
LAB_003fd01c:
          uVar9 = uVar9 + 1;
          puVar6 = (uint *)(*param_7 + 3 & 0xfffffffc);
          *param_7 = (uint)(puVar6 + 1);
          *puVar6 = uVar11;
        }
        break;
      case 7:
      case 0xc:
        iVar1 = func_001139F8(uVar11);
        *puVar6 = iVar1 - uVar2 | 0x80000000;
        goto joined_r0x003fd018;
      case 8:
      case 0xd:
        iVar1 = func_001139F8(uVar11);
        *puVar6 = iVar1 - uVar2;
joined_r0x003fd018:
        if (bVar10 == 0) break;
        goto LAB_003fd01c;
      case 0xe:
        *puVar6 = uVar2 >> 3;
        break;
      default:
        uVar8 = 0x80000080;
      }
      uVar11 = (uint)uVar12;
      uVar7 = uVar7 + 1;
    } while (uVar7 < param_4);
  }
  if (bVar10 != 0) {
    param_4 = (uint)*(ushort *)(param_6 + 0x42);
  }
  if (bVar10 != 0 && param_4 != uVar9) {
    uVar8 = 0x80000080;
  }
  *param_1 = uVar11;
  param_1[1] = uVar8;
  return;
}

