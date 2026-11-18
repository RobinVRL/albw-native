#include "ghidra_types.h"

extern int func_0010C0B8(int param_1);
extern int func_0010EEE0(int param_1);
extern ulonglong func_00110710(uint param_1,uint param_2);
extern int func_0049B044(int param_1,undefined4 *param_2,undefined4 *param_3);

// USA 004A028C <- EU 004A0264 (Ghidra, non-matching)

undefined4 func_004A028C(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  
  iVar6 = 0;
  if ((*(uint *)(param_1 + 0x70) & 1) != 0) {
    func_0010C0B8(param_1 + 0x54);
    iVar6 = param_1 + 0x54;
  }
  func_0049B044(param_1,(undefined4 *)0x0,(undefined4 *)0x0);
  uVar7 = *(uint *)(param_1 + 0x74);
  uVar9 = func_00110710(*(uint *)(param_1 + 0x7c),uVar7);
  iVar5 = (int)uVar9;
  *(uint *)(param_1 + 0x80) = iVar5 * uVar7;
  iVar2 = uVar7 + ((uint)((int)uVar7 >> 0x1f) >> 0x1e);
  iVar4 = *(int *)(param_1 + 0x78);
  iVar8 = iVar5 + -1;
  iVar1 = iVar2 >> 2;
  if (0 < iVar8) {
    iVar2 = 0;
    iVar5 = iVar5 + -1;
  }
  *(int *)(param_1 + 0x84) = iVar4;
  if (0 < iVar8) {
    do {
      iVar5 = iVar5 + -1;
      *(int *)(iVar4 + iVar2 * 4) = iVar4 + (iVar1 + iVar2) * 4;
      iVar2 = iVar2 + iVar1;
    } while (iVar5 != 0);
  }
  *(undefined4 *)(iVar4 + iVar1 * iVar8 * 4) = 0;
  *(int *)(param_1 + 0x88) = iVar4;
  if (iVar6 != 0) {
    uVar3 = func_0010EEE0(iVar6);
    return uVar3;
  }
  return iVar2;
}

