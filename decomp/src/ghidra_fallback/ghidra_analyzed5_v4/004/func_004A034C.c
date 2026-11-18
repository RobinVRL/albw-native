#include "ghidra_types.h"

extern int func_0010C0B8(int param_1);
extern int func_0010EEE0(int param_1);
extern ulonglong func_00110710(uint param_1,uint param_2);

// USA 004A034C <- EU 004A0324 (Ghidra, non-matching)

undefined4 func_004A034C(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  
  iVar8 = 0;
  if ((*(uint *)(param_1 + 0x70) & 1) != 0) {
    func_0010C0B8(param_1 + 0x54);
    iVar8 = param_1 + 0x54;
  }
  uVar5 = param_1 + 0x8c;
  uVar6 = param_2 - 1;
  uVar2 = uVar5 + uVar6 & ~uVar6;
  *(uint *)(param_1 + 0x78) = uVar5;
  if ((param_3 == 0) || (uVar5 != uVar2)) {
    *(uint *)(param_1 + 0x78) = uVar2;
  }
  else {
    uVar2 = uVar2 + param_2;
    *(uint *)(param_1 + 0x78) = uVar2;
  }
  uVar6 = (*(int *)(param_1 + 0x74) + param_2) - 1U & ~uVar6;
  uVar5 = *(int *)(param_1 + 0x20) - (uVar2 - param_1);
  *(uint *)(param_1 + 0x74) = uVar6;
  *(uint *)(param_1 + 0x7c) = uVar5;
  uVar10 = func_00110710(uVar5,uVar6);
  iVar7 = (int)uVar10;
  iVar9 = iVar7 + -1;
  iVar3 = uVar6 + ((uint)((int)uVar6 >> 0x1f) >> 0x1e);
  *(uint *)(param_1 + 0x80) = iVar7 * uVar6;
  iVar1 = iVar3 >> 2;
  if (0 < iVar9) {
    iVar3 = 0;
    iVar7 = iVar7 + -1;
  }
  *(uint *)(param_1 + 0x84) = uVar2;
  if (0 < iVar9) {
    do {
      iVar7 = iVar7 + -1;
      *(uint *)(uVar2 + iVar3 * 4) = uVar2 + (iVar1 + iVar3) * 4;
      iVar3 = iVar3 + iVar1;
    } while (iVar7 != 0);
  }
  *(undefined4 *)(uVar2 + iVar1 * iVar9 * 4) = 0;
  *(uint *)(param_1 + 0x88) = uVar2;
  if (iVar8 == 0) {
    return iVar3;
  }
  uVar4 = func_0010EEE0(iVar8);
  return uVar4;
}

