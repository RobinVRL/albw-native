#include "ghidra_types.h"

extern int *DAT_00404f00;

// USA 00404CF0 <- EU 00404CD0 (Ghidra, non-matching)
// GLOBAL DAT_00404f00 int *

void * func_00404CF0(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 ((int *)(albw_frame + 0x0))
  #define local_10 ((int *)(albw_frame + 0x10))
  switch((uint)(*(int *)(param_1 + 8) << 0x10) >> 0x18) {
  case 0:
    uVar1 = 7;
    break;
  case 1:
    uVar1 = 8;
    break;
  case 2:
    uVar1 = 9;
    break;
  case 3:
    uVar1 = 5;
    break;
  case 4:
    uVar1 = 6;
    break;
  case 5:
    uVar1 = 3;
    break;
  case 6:
    uVar1 = 1;
    break;
  case 7:
    uVar1 = 2;
    break;
  case 8:
    uVar1 = 4;
    break;
  case 9:
    uVar1 = 0;
    break;
  case 10:
    uVar1 = 0xc;
    break;
  case 0xb:
    uVar1 = 0xd;
    break;
  default:
    goto switchD_00404ce8_caseD_c;
  case 0x12:
    uVar1 = 10;
    break;
  case 0x13:
    uVar1 = 0xb;
  }
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
switchD_00404ce8_caseD_c:
  local_10[0] = *DAT_00404f00;
  local_10[1] = DAT_00404f00[1];
  local_20[1] = DAT_00404f00[3];
  local_20[0] = DAT_00404f00[2];
  local_20[2] = DAT_00404f00[4];
  uVar2 = *(uint *)(param_1 + 8);
  uVar5 = *(uint *)(param_1 + 0x10);
  if ((uVar2 & 0x30000) == 0) {
    *(uint *)(param_1 + 0x18) = uVar5 >> 0x10 | uVar5 << 0x10;
    iVar3 = *(int *)((int)local_10 + ((uVar2 & 0x70) >> 2));
    if ((iVar3 == 3 || iVar3 == 4) || (iVar3 == 5)) {
      iVar6 = 1;
    }
    else {
      iVar6 = 0;
    }
    if (*(int *)(param_1 + 0x1c) == 0xc) {
      iVar4 = 2;
    }
    else {
      iVar4 = 0;
    }
    uVar2 = ((uVar2 << 0x18) >> 0x1f) << 1 | iVar6 << 2 | iVar4 << 4 |
            local_20[(uVar2 << 0x1c) >> 0x1e] << 8 | local_20[uVar2 & 3] << 0xc;
    if (iVar3 == 2 || iVar3 == 5) goto LAB_00404ed8;
  }
  else {
    *(uint *)(param_1 + 0x18) = uVar5;
    iVar3 = *(int *)((int)local_10 + ((uVar2 & 0x70) >> 2));
    if ((iVar3 == 3 || iVar3 == 4) || (iVar3 == 5)) {
      iVar6 = 1;
    }
    else {
      iVar6 = 0;
    }
    if (*(int *)(param_1 + 0x1c) == 0xc) {
      iVar4 = 2;
    }
    else {
      iVar4 = 0;
    }
    uVar2 = ((uVar2 << 0x18) >> 0x1f) << 1 | iVar6 << 2 | iVar4 << 4 | local_20[uVar2 & 3] << 8 |
            local_20[(uVar2 << 0x1c) >> 0x1e] << 0xc;
    if (iVar3 == 2 || iVar3 == 5) {
LAB_00404ed8:
      iVar3 = 1;
      goto LAB_00404edc;
    }
  }
  iVar3 = 0;
LAB_00404edc:
  *(uint *)(param_1 + 0x14) = uVar2 | iVar3 << 0x18;
  return (void *)param_1;
}

