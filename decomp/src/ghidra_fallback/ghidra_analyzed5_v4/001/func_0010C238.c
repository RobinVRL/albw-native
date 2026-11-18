#include "ghidra_types.h"

extern int func_0010D18C(uint *param_1,int param_2,int param_3,int param_4,int param_5);

// USA 0010C238 <- EU 0010C238 (Ghidra, non-matching)

int func_0010C238(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ushort uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  
  if (param_2 == 0) {
    param_2 = 1;
  }
  iVar11 = 0;
  uVar5 = param_2 + 3U & 0xfffffffc;
  uVar9 = ~*(ushort *)(param_1 + 0x36) & 1;
  if (param_3 < 0) {
    iVar2 = *(int *)(param_1 + 0x28);
    iVar4 = 0;
    uVar3 = 0xffffffff;
    if (iVar2 != 0) {
      uVar8 = 0;
      do {
        uVar10 = *(uint *)(iVar2 + 4);
        uVar12 = (uVar10 + iVar2 + 0x10) - uVar5 & ~(0xffffffffU - param_3);
        if (((-1 < (int)(uVar12 - (iVar2 + 0x10))) && (uVar10 < uVar3)) &&
           ((iVar4 = iVar2, uVar9 != 0 || (uVar8 = uVar12, uVar3 = uVar10, uVar10 == uVar5))))
        break;
        uVar12 = uVar8;
        iVar2 = *(int *)(iVar2 + 8);
        uVar8 = uVar12;
      } while (iVar2 != 0);
      if (iVar4 != 0) {
        iVar11 = func_0010D18C((uint *)(param_1 + 0x24),iVar4,uVar12,uVar5,1);
      }
    }
  }
  else {
    uVar12 = *(uint *)(param_1 + 0x24);
    uVar3 = 0;
    uVar8 = 0xffffffff;
    if (uVar12 != 0) {
      uVar10 = 0;
      do {
        uVar13 = *(uint *)(uVar12 + 4);
        uVar6 = (uVar12 + 0x10 + param_3) - 1 & ~(param_3 - 1U);
        uVar7 = (uVar6 - (uVar12 + 0x10)) + uVar5;
        uVar1 = uVar7;
        if (uVar13 >= uVar7) {
          uVar1 = uVar8;
        }
      } while ((((uVar13 < uVar7 || uVar8 < uVar13) || uVar13 == uVar1) ||
               ((uVar3 = uVar12, uVar9 == 0 && (uVar8 = uVar13, uVar10 = uVar6, uVar13 != uVar5))))
              && (uVar6 = uVar10, uVar12 = *(uint *)(uVar12 + 0xc), uVar10 = uVar6, uVar12 != 0));
      if (uVar3 != 0) {
        iVar11 = func_0010D18C((uint *)(param_1 + 0x24),uVar3,uVar6,uVar5,0);
      }
    }
  }
  return iVar11;
}

