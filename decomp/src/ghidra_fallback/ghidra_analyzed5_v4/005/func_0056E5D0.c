#include "ghidra_types.h"

extern int func_0056EB4C(undefined4 param_1,undefined4 *param_2,int param_3,int param_4,undefined4 param_5 );

// USA 0056E5D0 <- EU 0056E5A8 (Ghidra, non-matching)

undefined4 func_0056E5D0(int *param_1,int param_2,int param_3)

{
  byte bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  bool bVar5;
  char cVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  byte *pbVar10;
  undefined1 *puVar11;
  byte *pbVar12;
  uint uVar13;
  int iVar14;
  bool bVar15;
  
  iVar9 = *(int *)(param_2 + 300);
  uVar7 = 0;
  iVar14 = 0;
  pbVar10 = *(byte **)(param_2 + 0x20);
  bVar5 = false;
  bVar15 = true;
  *(byte **)(param_2 + 0x20) = pbVar10 + 1;
  uVar13 = (uint)*pbVar10;
  if (uVar13 == 0xa2) {
    *(byte **)(param_2 + 0x20) = pbVar10 + 2;
    uVar13 = (uint)pbVar10[1];
    bVar15 = *(char *)(param_2 + 0x24) != '\0';
  }
  if (uVar13 == 0xa3) {
    pbVar10 = *(byte **)(param_2 + 0x20);
    iVar14 = 2;
    *(byte **)(param_2 + 0x20) = pbVar10 + 1;
    uVar13 = (uint)*pbVar10;
  }
  else if (uVar13 == 0xa4) {
    pbVar10 = *(byte **)(param_2 + 0x20);
    iVar14 = 4;
    *(byte **)(param_2 + 0x20) = pbVar10 + 1;
    uVar13 = (uint)*pbVar10;
  }
  else if (uVar13 == 0xa5) {
    pbVar10 = *(byte **)(param_2 + 0x20);
    iVar14 = 5;
    *(byte **)(param_2 + 0x20) = pbVar10 + 1;
    uVar13 = (uint)*pbVar10;
  }
  if (uVar13 == 0xa0) {
    pbVar10 = *(byte **)(param_2 + 0x20);
    *(byte **)(param_2 + 0x20) = pbVar10 + 1;
    bVar1 = *pbVar10;
    uVar7 = 4;
LAB_0056e6b0:
    uVar13 = (uint)bVar1;
    bVar5 = true;
  }
  else if (uVar13 == 0xa1) {
    pbVar10 = *(byte **)(param_2 + 0x20);
    *(byte **)(param_2 + 0x20) = pbVar10 + 1;
    bVar1 = *pbVar10;
    uVar7 = 5;
    goto LAB_0056e6b0;
  }
  if ((uVar13 & 0x80) == 0) {
    puVar11 = *(undefined1 **)(param_2 + 0x20);
    if (!bVar5) {
      uVar7 = 3;
    }
    *(undefined1 **)(param_2 + 0x20) = puVar11 + 1;
    uVar2 = *puVar11;
    uVar8 = func_0056EB4C(param_1,(undefined4 *)(param_2 + 0x20),iVar9,param_2,uVar7);
    iVar9 = (int)*(char *)(param_2 + 0xf4) + uVar13;
    if (!bVar15) {
      return 0;
    }
    uVar7 = UnsignedSaturate(iVar9,7);
    UnsignedDoesSaturate(iVar9,7);
    if ((*(char *)(param_2 + 0x7a) == '\0') && (param_3 != 0)) {
      uVar13 = uVar8;
      if ((int)uVar8 < 1) {
        uVar13 = 0xffffffff;
      }
      (**(code **)(*param_1 + 0xc))
                (param_1,param_2,uVar7,uVar2,uVar13,(int)*(char *)(param_2 + 0x26));
    }
    cVar6 = *(char *)(param_2 + 0x25);
    if (cVar6 == '\0') {
      return 0;
    }
    if (uVar8 == 0) {
      cVar6 = '\x01';
    }
    *(uint *)(param_2 + 0x7c) = uVar8;
    if (uVar8 != 0) {
      return 0;
    }
    *(char *)(param_2 + 0x80) = cVar6;
    return 0;
  }
  switch((int)(uVar13 & 0xf0) >> 4) {
  case 8:
    if (uVar13 == 0x88) {
      puVar11 = *(undefined1 **)(param_2 + 0x20);
      *(undefined1 **)(param_2 + 0x20) = puVar11 + 1;
      uVar2 = *puVar11;
      *(undefined1 **)(param_2 + 0x20) = puVar11 + 2;
      uVar3 = puVar11[1];
      *(undefined1 **)(param_2 + 0x20) = puVar11 + 3;
      uVar4 = puVar11[2];
      *(undefined1 **)(param_2 + 0x20) = puVar11 + 4;
      if (!bVar15) {
        return 0;
      }
      (**(code **)(*param_1 + 8))
                (param_1,param_2,0x88,uVar2,(uint)CONCAT21(CONCAT11(uVar3,uVar4),puVar11[3]));
      return 0;
    }
    if (uVar13 < 0x88) {
      if (uVar13 == 0x80) {
        if (!bVar5) {
          uVar7 = 3;
        }
        uVar13 = func_0056EB4C(param_1,(undefined4 *)(param_2 + 0x20),iVar9,param_2,uVar7);
        if (!bVar15) {
          return 0;
        }
        *(uint *)(param_2 + 0x7c) = uVar13;
        return 0;
      }
      if (uVar13 != 0x81) {
        return 0;
      }
      if (!bVar5) {
        uVar7 = 3;
      }
      func_0056EB4C(param_1,(undefined4 *)(param_2 + 0x20),iVar9,param_2,uVar7);
    }
    else if (uVar13 == 0x89) {
      iVar9 = *(int *)(param_2 + 0x20);
      *(int *)(param_2 + 0x20) = iVar9 + 1;
      *(int *)(param_2 + 0x20) = iVar9 + 2;
      *(int *)(param_2 + 0x20) = iVar9 + 3;
    }
    else {
      if (uVar13 != 0x8a) {
        return 0;
      }
      iVar9 = *(int *)(param_2 + 0x20);
      *(int *)(param_2 + 0x20) = iVar9 + 1;
      *(int *)(param_2 + 0x20) = iVar9 + 2;
      *(int *)(param_2 + 0x20) = iVar9 + 3;
    }
    break;
  case 9:
    break;
  default:
    goto LAB_0056e9fc;
  case 0xb:
  case 0xc:
  case 0xd:
    if (!bVar5) {
      uVar7 = 1;
    }
    func_0056EB4C(param_1,(undefined4 *)(param_2 + 0x20),iVar9,param_2,uVar7);
    if (iVar14 != 0) {
      func_0056EB4C(param_1,(undefined4 *)(param_2 + 0x20),iVar9,param_2,iVar14);
    }
    if (!bVar15) {
      return 0;
    }
    goto LAB_0056e834;
  case 0xe:
    if (!bVar5) {
      uVar7 = 2;
    }
    func_0056EB4C(param_1,(undefined4 *)(param_2 + 0x20),iVar9,param_2,uVar7);
    break;
  case 0xf:
    if (uVar13 == 0xf0) {
      pbVar12 = *(byte **)(param_2 + 0x20);
      pbVar10 = pbVar12 + 1;
      *(byte **)(param_2 + 0x20) = pbVar10;
      uVar8 = (uint)*pbVar12;
      uVar13 = uVar8 & 0xf0;
      if (uVar13 != 0xa0) {
        if (uVar13 < 0xa0) {
          if (uVar13 != 0x80 && uVar13 != 0x90) {
            return 0;
          }
          *(byte **)(param_2 + 0x20) = pbVar12 + 2;
          bVar1 = *pbVar10;
          if (!bVar5) {
            uVar7 = 2;
          }
          uVar13 = func_0056EB4C(param_1,(undefined4 *)(param_2 + 0x20),iVar9,param_2,uVar7);
          if (!bVar15) {
            return 0;
          }
          (**(code **)(*param_1 + 8))(param_1,param_2,uVar8 + 0xf000,bVar1,(int)(short)uVar13);
          return 0;
        }
        if (uVar13 != 0xb0) {
          if (uVar13 != 0xe0) {
            return 0;
          }
          if (!bVar5) {
            uVar7 = 2;
          }
          uVar13 = func_0056EB4C(param_1,(undefined4 *)(param_2 + 0x20),iVar9,param_2,uVar7);
          uVar13 = uVar13 & 0xffff;
          goto joined_r0x0056eb00;
        }
      }
      *(byte **)(param_2 + 0x20) = pbVar12 + 2;
      uVar13 = (uint)*pbVar10;
joined_r0x0056eb00:
      if (!bVar15) {
        return 0;
      }
      (**(code **)(*param_1 + 8))(param_1,param_2,uVar8 + 0xf000,uVar13,0);
      return 0;
    }
    if (uVar13 == 0xfe) {
      *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + 2;
      return 0;
    }
    if (uVar13 == 0xff) {
      if (!bVar15) {
        return 0;
      }
      return 1;
    }
  }
  if (bVar15) {
LAB_0056e834:
    (**(code **)(*param_1 + 8))(param_1,param_2,uVar13);
  }
LAB_0056e9fc:
  return 0;
}

