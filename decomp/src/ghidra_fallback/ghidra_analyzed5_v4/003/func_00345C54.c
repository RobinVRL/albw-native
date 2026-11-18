#include "ghidra_types.h"


// USA 00345C54 <- EU 00345C30 (Ghidra, non-matching)

byte func_00345C54(undefined4 param_1,undefined4 param_2,byte *param_3)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  
  iVar1 = 0;
  switch(param_2) {
  case 0x97:
  case 0x98:
  case 0x99:
  case 0x9a:
    if (param_3 != (byte *)0x0) {
      uVar2 = (uint)*param_3;
      bVar6 = uVar2 == 1;
      if (bVar6) {
        uVar2 = *(uint *)(param_3 + 4);
      }
      if (!bVar6 || uVar2 != 0x25) {
        return 0;
      }
    }
    break;
  case 0x9b:
  case 0x9c:
    if (param_3 != (byte *)0x0) {
      uVar2 = (uint)*param_3;
      bVar6 = uVar2 == 0;
      if (bVar6) {
        uVar2 = *(uint *)(param_3 + 4);
      }
      if (!bVar6 || uVar2 != 0x21) {
        return 0;
      }
    }
    break;
  case 0x9d:
    if (param_3 != (byte *)0x0) {
      iVar4 = (int)(char)*param_3;
      if (iVar4 == 0) {
        iVar1 = *(int *)(param_3 + 4);
      }
      bVar6 = iVar4 == 0 && iVar1 == 6;
      bVar5 = iVar4 == 0;
      if (bVar5) {
        iVar4 = *(int *)(param_3 + 4);
      }
      if (bVar5 && iVar4 == 0x1a) goto LAB_00345d04;
LAB_00345d0c:
      bVar3 = 0;
      goto LAB_00345d10;
    }
LAB_00345e74:
    bVar6 = true;
    goto LAB_00345d04;
  case 0x9e:
  case 0x9f:
  case 0xa0:
  case 0xa1:
  case 0xa2:
    if (param_3 == (byte *)0x0) goto LAB_00345e74;
    iVar4 = (int)(char)*param_3;
    if (iVar4 == 2) {
      iVar1 = *(int *)(param_3 + 4);
    }
    bVar6 = iVar4 == 2 && iVar1 == 0;
    bVar5 = iVar4 != 3;
    if (!bVar5) {
      iVar4 = *(int *)(param_3 + 4);
    }
    if (bVar5 || iVar4 != 3) goto LAB_00345d0c;
    goto LAB_00345d04;
  case 0xa3:
  case 0xa4:
    if (param_3 != (byte *)0x0) {
      uVar2 = (uint)*param_3;
      bVar6 = uVar2 == 5;
      if (bVar6) {
        uVar2 = *(uint *)(param_3 + 4);
      }
      if (!bVar6 || uVar2 != 9) {
        return 0;
      }
    }
    break;
  case 0xa5:
  case 0xa6:
    bVar6 = true;
    if (param_3 == (byte *)0x0) {
LAB_00345da4:
      bVar3 = 1;
    }
    else {
      iVar4 = (int)(char)*param_3;
      iVar1 = 0;
      if (iVar4 == 9) {
        iVar1 = *(int *)(param_3 + 4);
      }
      bVar6 = iVar4 == 9 && iVar1 == 2;
      bVar5 = iVar4 == 0;
      if (bVar5) {
        iVar4 = *(int *)(param_3 + 4);
      }
      if (bVar5 && iVar4 == 0x13) goto LAB_00345da4;
      bVar3 = 0;
    }
    bVar6 = (bool)(bVar6 | bVar3);
    if (param_3 != (byte *)0x0) {
      uVar2 = (uint)*param_3;
      bVar5 = uVar2 != 1;
      if (!bVar5) {
        uVar2 = *(uint *)(param_3 + 4);
      }
      if (bVar5 || uVar2 != 0xf) goto LAB_00345d0c;
    }
    goto LAB_00345d04;
  case 0xa7:
    if (param_3 == (byte *)0x0) goto LAB_00345e74;
    iVar4 = (int)(char)*param_3;
    if (iVar4 == 2) {
      iVar1 = *(int *)(param_3 + 4);
    }
    bVar6 = iVar4 == 2 && iVar1 == 0x12;
    bVar5 = iVar4 != 0;
    if (!bVar5) {
      iVar4 = *(int *)(param_3 + 4);
    }
    if (bVar5 || iVar4 != 10) goto LAB_00345d0c;
    goto LAB_00345d04;
  case 0xa8:
  case 0xa9:
    if (param_3 != (byte *)0x0) {
      uVar2 = (uint)*param_3;
      bVar6 = uVar2 == 2;
      if (bVar6) {
        uVar2 = *(uint *)(param_3 + 4);
      }
      if (!bVar6 || uVar2 != 0) {
        return 0;
      }
    }
    break;
  case 0xaa:
    if (param_3 == (byte *)0x0) goto LAB_00345e74;
    iVar4 = (int)(char)*param_3;
    if (iVar4 == 0) {
      iVar1 = *(int *)(param_3 + 4);
    }
    bVar6 = iVar4 == 0 && iVar1 == 0x28;
    bVar5 = iVar4 != 0;
    if (!bVar5) {
      iVar4 = *(int *)(param_3 + 4);
    }
    if (bVar5 || iVar4 != 0x2b) goto LAB_00345d0c;
LAB_00345d04:
    bVar3 = 1;
LAB_00345d10:
    return bVar6 | bVar3;
  case 0xab:
    if (param_3 != (byte *)0x0) {
      uVar2 = (uint)*param_3;
      bVar6 = uVar2 == 4;
      if (bVar6) {
        uVar2 = *(uint *)(param_3 + 4);
      }
      if (!bVar6 || uVar2 != 0xe) {
        return 0;
      }
    }
    break;
  case 0xac:
    if (param_3 != (byte *)0x0) {
      uVar2 = (uint)*param_3;
      bVar6 = uVar2 == 0;
      if (bVar6) {
        uVar2 = *(uint *)(param_3 + 4);
      }
      if (!bVar6 || uVar2 != 0x1a) {
        return 0;
      }
    }
    break;
  case 0xad:
  case 0xae:
    if (param_3 != (byte *)0x0) {
      uVar2 = (uint)*param_3;
      bVar6 = uVar2 == 2;
      if (bVar6) {
        uVar2 = *(uint *)(param_3 + 4);
      }
      if (!bVar6 || uVar2 != 0xb) {
        return 0;
      }
    }
    break;
  case 0xaf:
    if (param_3 != (byte *)0x0) {
      uVar2 = (uint)*param_3;
      bVar6 = uVar2 == 5;
      if (bVar6) {
        uVar2 = *(uint *)(param_3 + 4);
      }
      if (!bVar6 || uVar2 != 9) {
        return 0;
      }
    }
    break;
  default:
    return 0;
  }
  return 1;
}

