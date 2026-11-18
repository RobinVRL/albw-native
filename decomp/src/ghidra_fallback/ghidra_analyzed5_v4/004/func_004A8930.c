#include "ghidra_types.h"

extern int func_00581A18(undefined4 param_1,float *param_2,int param_3);
extern int *DAT_004a8bcc;
extern int DAT_004a8bd0;

// USA 004A8930 <- EU 004A8908 (Ghidra, non-matching)
// GLOBAL DAT_004a8bcc int *
// GLOBAL DAT_004a8bd0 int

void func_004A8930(int param_1,float *param_2,int *param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  uVar1 = func_00581A18(param_1,param_2,
                        (int)*(short *)(*(int *)(*DAT_004a8bcc + 0x38) + DAT_004a8bd0));
  iVar2 = param_1 + 0x11c;
  if (uVar1 < 0x2a4) {
    iVar2 = param_1 + 0x11c + uVar1 * 0x48;
  }
  if (param_4 < 6) {
    iVar2 = iVar2 + param_4 * 0xc;
  }
  if (*param_3 < param_3[1]) {
    *(int *)(param_3[2] + *param_3 * 4) = iVar2;
    *param_3 = *param_3 + 1;
  }
  uVar3 = uVar1 - 0x1a;
  if ((int)uVar3 < 0) {
    uVar3 = uVar1 - 0x19;
    if ((int)uVar3 < 0) goto LAB_004a8a5c;
    iVar2 = param_1 + 0x11c;
    if (uVar3 < 0x2a4) {
      iVar2 = param_1 + 0x11c + uVar3 * 0x48;
    }
    iVar4 = *param_3;
    if (param_4 < 6) {
      iVar2 = iVar2 + param_4 * 0xc;
    }
    if (param_3[1] <= iVar4) goto LAB_004a8a5c;
  }
  else {
    iVar2 = param_1 + 0x11c;
    if (uVar3 < 0x2a4) {
      iVar2 = param_1 + 0x11c + uVar3 * 0x48;
    }
    if (param_4 < 6) {
      iVar2 = iVar2 + param_4 * 0xc;
    }
    if (*param_3 < param_3[1]) {
      *(int *)(param_3[2] + *param_3 * 4) = iVar2;
      *param_3 = *param_3 + 1;
    }
    uVar3 = uVar1 - 0x1b;
    if (-1 < (int)uVar3) {
      iVar2 = param_1 + 0x11c;
      if (uVar3 < 0x2a4) {
        iVar2 = param_1 + 0x11c + uVar3 * 0x48;
      }
      if (param_4 < 6) {
        iVar2 = iVar2 + param_4 * 0xc;
      }
      if (*param_3 < param_3[1]) {
        *(int *)(param_3[2] + *param_3 * 4) = iVar2;
        *param_3 = *param_3 + 1;
      }
    }
    iVar2 = param_1 + 0x11c;
    if (uVar1 - 0x19 < 0x2a4) {
      iVar2 = param_1 + 0x11c + (uVar1 - 0x19) * 0x48;
    }
    iVar4 = *param_3;
    if (param_4 < 6) {
      iVar2 = iVar2 + param_4 * 0xc;
    }
    if (param_3[1] <= iVar4) goto LAB_004a8a5c;
  }
  *(int *)(param_3[2] + iVar4 * 4) = iVar2;
  *param_3 = *param_3 + 1;
LAB_004a8a5c:
  uVar3 = uVar1 - 1;
  if (-1 < (int)uVar3) {
    iVar2 = param_1 + 0x11c;
    if (uVar3 < 0x2a4) {
      iVar2 = param_1 + 0x11c + uVar3 * 0x48;
    }
    if (param_4 < 6) {
      iVar2 = iVar2 + param_4 * 0xc;
    }
    if (*param_3 < param_3[1]) {
      *(int *)(param_3[2] + *param_3 * 4) = iVar2;
      *param_3 = *param_3 + 1;
    }
  }
  uVar3 = uVar1 + 1;
  if ((int)uVar3 < 0x2a4) {
    iVar2 = param_1 + 0x11c;
    if (uVar3 < 0x2a4) {
      iVar2 = iVar2 + uVar3 * 0x48;
    }
    if (param_4 < 6) {
      iVar2 = iVar2 + param_4 * 0xc;
    }
    if (*param_3 < param_3[1]) {
      *(int *)(param_3[2] + *param_3 * 4) = iVar2;
      *param_3 = *param_3 + 1;
    }
  }
  uVar3 = uVar1 + 0x1a;
  if ((int)uVar3 < 0x2a4) {
    iVar2 = param_1 + 0x11c;
    if (uVar3 < 0x2a4) {
      iVar2 = iVar2 + uVar3 * 0x48;
    }
    if (param_4 < 6) {
      iVar2 = iVar2 + param_4 * 0xc;
    }
    if (*param_3 < param_3[1]) {
      *(int *)(param_3[2] + *param_3 * 4) = iVar2;
      *param_3 = *param_3 + 1;
    }
    uVar3 = uVar1 + 0x1b;
    if ((int)uVar3 < 0x2a4) {
      iVar2 = param_1 + 0x11c;
      if (uVar3 < 0x2a4) {
        iVar2 = iVar2 + uVar3 * 0x48;
      }
      if (param_4 < 6) {
        iVar2 = iVar2 + param_4 * 0xc;
      }
      if (*param_3 < param_3[1]) {
        *(int *)(param_3[2] + *param_3 * 4) = iVar2;
        *param_3 = *param_3 + 1;
      }
    }
    iVar2 = param_1 + 0x11c;
    if (uVar1 + 0x19 < 0x2a4) {
      iVar2 = param_1 + 0x11c + (uVar1 + 0x19) * 0x48;
    }
    if (param_4 < 6) {
      iVar2 = iVar2 + param_4 * 0xc;
    }
    iVar4 = *param_3;
    if (param_3[1] <= iVar4) {
      return;
    }
  }
  else {
    uVar1 = uVar1 + 0x19;
    if (0x2a3 < (int)uVar1) {
      return;
    }
    iVar2 = param_1 + 0x11c;
    if (uVar1 < 0x2a4) {
      iVar2 = iVar2 + uVar1 * 0x48;
    }
    if (param_4 < 6) {
      iVar2 = iVar2 + param_4 * 0xc;
    }
    iVar4 = *param_3;
    if (param_3[1] <= iVar4) {
      return;
    }
  }
  *(int *)(param_3[2] + iVar4 * 4) = iVar2;
  *param_3 = *param_3 + 1;
  return;
}

