#include "ghidra_types.h"

extern int func_00537B38(int param_1);
extern int func_0055696C(int param_1,int param_2);
extern int func_00556BB0(int param_1);
extern int func_00584B94(int param_1,int param_2);
extern int *DAT_004267b4;
extern int *DAT_004267b8;

// USA 004265BC <- EU 0042659C (Ghidra, non-matching)
// GLOBAL DAT_004267b4 int *
// GLOBAL DAT_004267b8 int *

uint func_004265BC(undefined4 param_1)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *DAT_004267b4;
  switch(param_1) {
  case 0:
    uVar4 = func_00537B38(iVar3);
    if ((1 < uVar4) && (uVar4 != 2 && uVar4 != 3)) {
      uVar4 = 0;
    }
    break;
  case 1:
    iVar3 = func_0055696C(iVar3,0x1f);
    if (iVar3 == 2) {
      return 4;
    }
    if (iVar3 == 3) {
      uVar4 = 5;
    }
    else {
      if (iVar3 != 4) {
        return 4;
      }
      uVar4 = 6;
    }
    break;
  case 2:
    iVar3 = func_0055696C(iVar3,1);
    if ((iVar3 == 2) || (iVar3 != 3)) {
      return 7;
    }
    uVar4 = 8;
    break;
  case 3:
    bVar1 = func_00584B94(*DAT_004267b8,0xfa);
    if (bVar1) {
      uVar4 = 10;
    }
    else {
      uVar4 = 9;
    }
    return uVar4;
  case 4:
    iVar3 = func_0055696C(iVar3,0x1e);
    if ((iVar3 == 2) || (iVar3 != 3)) {
      return 0xb;
    }
    uVar4 = 0xc;
    break;
  case 5:
    return 0xd;
  case 6:
    iVar3 = func_0055696C(iVar3,0x1c);
    if (iVar3 == 0) {
      uVar4 = 0xe;
    }
    else {
      uVar4 = 0xf;
    }
    return uVar4;
  case 7:
    return 0x10;
  case 8:
    return 0x11;
  case 9:
    return 0x12;
  case 10:
    return 0x13;
  case 0xb:
    return 0x14;
  case 0xc:
    bVar2 = func_00556BB0(iVar3);
    return bVar2 + 0x15;
  case 0xd:
    return 0x19;
  case 0xe:
    return 0x1a;
  case 0xf:
    return 0x1b;
  case 0x10:
    return 0x1d;
  case 0x11:
    return 0x1c;
  case 0x12:
    return 0x1e;
  case 0x13:
    return 0x20;
  case 0x14:
    return 0x24;
  case 0x15:
    return 0x25;
  case 0x16:
    return 0x1f;
  case 0x17:
    return 0x21;
  case 0x18:
    return 0x22;
  case 0x19:
    return 0x23;
  default:
    return 0x26;
  }
  return uVar4;
}

