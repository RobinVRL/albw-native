#include "ghidra_types.h"


// USA 003FC784 <- EU 003FC764 (Ghidra, non-matching)

undefined4 func_003FC784(undefined4 param_1,int param_2,uint param_3,int param_4)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  
  uVar2 = 0;
  piVar9 = *(int **)(param_4 + 0x28);
  uVar7 = 0;
  if (param_3 != 0) {
    do {
      uVar3 = *(uint *)(param_2 + uVar7 * 4);
      uVar4 = uVar3 & 0x1ffffff;
      uVar1 = (uVar3 << 3) >> 0x1c;
      if (uVar1 != 1) {
        uVar4 = uVar4 << 2;
      }
      if ((uVar3 >> 0x1d != 2) || (iVar8 = *(int *)(param_4 + 0x20), iVar8 == 0)) {
        iVar8 = *(int *)(param_4 + (uVar3 >> 0x1d) * 4);
      }
      iVar5 = *(int *)(iVar8 + uVar4);
      switch(uVar1) {
      case 0:
      case 1:
      case 2:
      case 4:
      case 9:
      case 0xe:
        break;
      case 3:
        if (*(int *)(param_4 + 0x20) != 0) {
          iVar5 = iVar5 + (*(int *)(param_4 + 8) - *(int *)(param_4 + 0x20));
        }
        break;
      case 5:
      case 6:
      case 7:
      case 8:
      case 10:
      case 0xb:
      case 0xc:
      case 0xd:
        iVar5 = *piVar9;
        piVar9 = piVar9 + 1;
        break;
      default:
        uVar2 = 0x80000080;
      }
      switch(uVar1) {
      default:
        iVar6 = 0;
        break;
      case 1:
        iVar6 = 1;
        break;
      case 2:
      case 3:
        iVar6 = 2;
        break;
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
        iVar6 = 3;
        break;
      case 9:
      case 10:
      case 0xb:
      case 0xc:
      case 0xd:
        iVar6 = 4;
      }
      uVar7 = uVar7 + 1;
      *(int *)(iVar8 + uVar4) = iVar5 - *(int *)(param_4 + iVar6 * 4);
    } while (uVar7 < param_3);
  }
  return uVar2;
}

