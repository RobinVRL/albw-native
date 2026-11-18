#include "ghidra_types.h"

extern int func_00537C00(int param_1,uint param_2);
extern int func_0055696C(int param_1,int param_2);
extern int *DAT_0030b908;
extern int *DAT_0030b90c;

// USA 0030B1D0 <- EU 0030B1AC (Ghidra, non-matching)
// GLOBAL DAT_0030b908 int *
// GLOBAL DAT_0030b90c int *

undefined4 func_0030B1D0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 ((int *)(albw_frame + 0x8))
  piVar1 = DAT_0030b908;
  switch(*(undefined2 *)(*(int *)(param_1 + 0xf0) + 10)) {
  case 0x11:
    iVar3 = func_0055696C(*DAT_0030b908,2);
    if (iVar3 != *(int *)(*(int *)(param_1 + 0xf0) + 4)) {
      return 0;
    }
    break;
  case 0x12:
    iVar3 = func_0055696C(*DAT_0030b908,3);
    if (iVar3 != *(int *)(*(int *)(param_1 + 0xf0) + 4)) {
      return 0;
    }
    break;
  case 0x13:
    iVar3 = func_0055696C(*DAT_0030b908,4);
    if (iVar3 != *(int *)(*(int *)(param_1 + 0xf0) + 4)) {
      return 0;
    }
    break;
  case 0x14:
    iVar3 = func_0055696C(*DAT_0030b908,6);
    if (iVar3 != *(int *)(*(int *)(param_1 + 0xf0) + 4)) {
      return 0;
    }
    break;
  case 0x15:
    iVar3 = func_0055696C(*DAT_0030b908,7);
    if (iVar3 != *(int *)(*(int *)(param_1 + 0xf0) + 4)) {
      return 0;
    }
    break;
  case 0x16:
    iVar3 = func_0055696C(*DAT_0030b908,8);
    if (iVar3 != *(int *)(*(int *)(param_1 + 0xf0) + 4)) {
      return 0;
    }
    break;
  case 0x17:
    iVar3 = func_0055696C(*DAT_0030b908,9);
    if (iVar3 != *(int *)(*(int *)(param_1 + 0xf0) + 4)) {
      return 0;
    }
    break;
  case 0x18:
    iVar3 = func_0055696C(*DAT_0030b908,10);
    if (iVar3 != *(int *)(*(int *)(param_1 + 0xf0) + 4)) {
      return 0;
    }
    break;
  case 0x19:
    iVar3 = func_0055696C(*DAT_0030b908,0xb);
    if (iVar3 != *(int *)(*(int *)(param_1 + 0xf0) + 4)) {
      return 0;
    }
    break;
  case 0x1a:
    iVar3 = func_0055696C(*DAT_0030b908,1);
    if (iVar3 != *(int *)(*(int *)(param_1 + 0xf0) + 4)) {
      return 0;
    }
    break;
  case 0x1b:
    iVar3 = func_0055696C(*DAT_0030b908,0xc);
    if (iVar3 != *(int *)(*(int *)(param_1 + 0xf0) + 4)) {
      return 0;
    }
    break;
  case 0x1c:
    iVar3 = func_0055696C(*DAT_0030b908,0xd);
    if (iVar3 != *(int *)(*(int *)(param_1 + 0xf0) + 4)) {
      return 0;
    }
    break;
  case 0x1d:
    iVar3 = func_0055696C(*DAT_0030b908,0xe);
    if (iVar3 != *(int *)(*(int *)(param_1 + 0xf0) + 4)) {
      return 0;
    }
    break;
  case 0x1e:
    iVar3 = func_0055696C(*DAT_0030b908,0xf);
    if (iVar3 != *(int *)(*(int *)(param_1 + 0xf0) + 4)) {
      return 0;
    }
    break;
  case 0x1f:
    uVar4 = 0;
    local_28[0] = *DAT_0030b90c;
    local_28[1] = DAT_0030b90c[1];
    local_28[2] = DAT_0030b90c[2];
    local_28[3] = DAT_0030b90c[3];
    local_28[4] = DAT_0030b90c[4];
    iVar3 = *DAT_0030b908;
    do {
      iVar2 = func_0055696C(iVar3,local_28[uVar4]);
      if ((iVar2 != 0) && (iVar2 = func_00537C00(iVar3,uVar4), iVar2 != 0xb && iVar2 != 0xd)) {
        return 0;
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < 5);
    break;
  case 0x20:
    uVar4 = 0;
    do {
      iVar3 = func_00537C00(*piVar1,uVar4);
      if (iVar3 == 1) {
        return 0;
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < 5);
    break;
  case 0x21:
    uVar4 = 0;
    do {
      iVar3 = func_00537C00(*piVar1,uVar4);
      if (iVar3 == 2) {
        return 0;
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < 5);
    break;
  case 0x22:
    uVar4 = 0;
    do {
      iVar3 = func_00537C00(*piVar1,uVar4);
      if (iVar3 == 5) {
        return 0;
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < 5);
    break;
  case 0x23:
    uVar4 = 0;
    do {
      iVar3 = func_00537C00(*piVar1,uVar4);
      if (iVar3 == 6) {
        return 0;
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < 5);
    break;
  case 0x24:
    uVar4 = 0;
    do {
      iVar3 = func_00537C00(*piVar1,uVar4);
      if (iVar3 == 7) {
        return 0;
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < 5);
    break;
  default:
    return 0xffffffff;
  case 0x26:
    uVar4 = 0;
    do {
      iVar3 = func_00537C00(*piVar1,uVar4);
      if (iVar3 == 9) {
        return 0;
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < 5);
    break;
  case 0x27:
    uVar4 = 0;
    do {
      iVar3 = func_00537C00(*piVar1,uVar4);
      if (iVar3 == 10) {
        return 0;
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < 5);
    break;
  case 0x28:
    uVar4 = 0;
    do {
      iVar3 = func_00537C00(*piVar1,uVar4);
      if (iVar3 == 0xb) {
        return 0;
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < 5);
    break;
  case 0x29:
    uVar4 = 0;
    do {
      iVar3 = func_00537C00(*piVar1,uVar4);
      if (iVar3 == 0xd) {
        return 0;
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < 5);
    break;
  case 0x2a:
    uVar4 = 0;
    do {
      iVar3 = func_00537C00(*piVar1,uVar4);
      if (iVar3 == 0xc) {
        return 0;
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < 5);
    break;
  case 0x2b:
    iVar3 = func_0055696C(*DAT_0030b908,0x11);
    if (iVar3 != *(int *)(*(int *)(param_1 + 0xf0) + 4)) {
      return 0;
    }
    break;
  case 0x2c:
    iVar3 = func_0055696C(*DAT_0030b908,0x10);
    if (iVar3 != *(int *)(*(int *)(param_1 + 0xf0) + 4)) {
      return 0;
    }
    break;
  case 0x2d:
    iVar3 = func_0055696C(*DAT_0030b908,0);
    if (iVar3 != *(int *)(*(int *)(param_1 + 0xf0) + 4)) {
      return 0;
    }
    break;
  case 0x2e:
    iVar3 = func_0055696C(*DAT_0030b908,0x17);
    if (iVar3 != *(int *)(*(int *)(param_1 + 0xf0) + 4)) {
      return 0;
    }
    break;
  case 0x2f:
    iVar3 = func_0055696C(*DAT_0030b908,0x18);
    if (iVar3 != *(int *)(*(int *)(param_1 + 0xf0) + 4)) {
      return 0;
    }
    break;
  case 0x30:
    iVar3 = func_0055696C(*DAT_0030b908,0x19);
    if (iVar3 != *(int *)(*(int *)(param_1 + 0xf0) + 4)) {
      return 0;
    }
    break;
  case 0x31:
    iVar3 = func_0055696C(*DAT_0030b908,0x1a);
    if (iVar3 != *(int *)(*(int *)(param_1 + 0xf0) + 4)) {
      return 0;
    }
    break;
  case 0x32:
    iVar3 = func_0055696C(*DAT_0030b908,0x20);
    if (iVar3 != *(int *)(*(int *)(param_1 + 0xf0) + 4)) {
      return 0;
    }
    break;
  case 0x33:
    iVar3 = func_0055696C(*DAT_0030b908,0x1c);
    if (iVar3 != *(int *)(*(int *)(param_1 + 0xf0) + 4)) {
      return 0;
    }
    break;
  case 0x34:
    iVar3 = func_0055696C(*DAT_0030b908,0x1d);
    if (iVar3 != *(int *)(*(int *)(param_1 + 0xf0) + 4)) {
      return 0;
    }
    break;
  case 0x35:
    iVar3 = func_0055696C(*DAT_0030b908,0x1e);
    if (iVar3 != *(int *)(*(int *)(param_1 + 0xf0) + 4)) {
      return 0;
    }
    break;
  case 0x36:
    iVar3 = func_0055696C(*DAT_0030b908,0x1f);
    if (iVar3 != *(int *)(*(int *)(param_1 + 0xf0) + 4)) {
      return 0;
    }
    break;
  case 0x37:
    iVar3 = func_0055696C(*DAT_0030b908,0x21);
    if (iVar3 != *(int *)(*(int *)(param_1 + 0xf0) + 4)) {
      return 0;
    }
    break;
  case 0x38:
    iVar3 = func_0055696C(*DAT_0030b908,0x24);
    if (iVar3 != *(int *)(*(int *)(param_1 + 0xf0) + 4)) {
      return 0;
    }
    break;
  case 0x39:
    uVar4 = func_0055696C(*DAT_0030b908,0x2c);
    if (uVar4 < 3) {
      return 0;
    }
  }
  return 1;
}

