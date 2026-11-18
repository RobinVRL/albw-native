#include "ghidra_types.h"

extern float func_0041E694(int param_1,float fparam_0,float fparam_1);
extern undefined4 DAT_00405768;
extern undefined4 DAT_0040576c;

// USA 00405684 <- EU 00405664 (Ghidra, non-matching)
// GLOBAL DAT_00405768 undefined4
// GLOBAL DAT_0040576c undefined4

void func_00405684(int param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  undefined4 uVar4;
  
  uVar4 = DAT_00405768;
  param_2[4] = DAT_00405768;
  param_2[5] = uVar4;
  param_2[9] = *(undefined4 *)(param_1 + 0xb4);
  if (*(int *)(param_1 + 0xb4) != 0) {
    func_0041E694((int)param_2,*(float *)(param_1 + 0xb8),*(float *)(param_1 + 0xbc));
    param_2[0xe] = *(undefined4 *)(param_1 + 0xc0);
    param_2[0xd] = *(undefined4 *)(param_1 + 0xc4);
    if ((*(byte *)(param_1 + 0xf4) & 0x40) == 0) {
      param_2[0xc] = DAT_0040576c;
    }
    else {
      param_2[0xc] = *(undefined4 *)(param_1 + 0x3c);
    }
  }
  if (*(int *)(param_1 + 200) != 0) {
    param_2[0x11] = *(int *)(param_1 + 200);
  }
  bVar3 = *(byte *)(param_1 + 0xf4) & 3;
  uVar2 = 0;
  if (bVar3 == 1) goto LAB_0040571c;
  if (bVar3 == 2) {
LAB_00405710:
    uVar2 = 1;
  }
  else {
    if (bVar3 != 3) {
      if ((*(byte *)(param_1 + 0xd0) & 3) == 0) goto LAB_00405710;
      if ((*(byte *)(param_1 + 0xd0) & 3) != 2) goto LAB_0040571c;
    }
    uVar2 = 2;
  }
LAB_0040571c:
  bVar3 = *(byte *)(param_1 + 0xd0);
  if ((bVar3 & 3) == 0) {
    uVar2 = uVar2 | 0x10;
  }
  else if ((bVar3 & 3) == 2) {
    uVar2 = uVar2 | 0x20;
  }
  uVar1 = ((uint)bVar3 << 0x1c) >> 0x1e;
  if (uVar1 == 0) {
    uVar2 = uVar2 | 0x100;
  }
  else if (uVar1 == 2) {
    uVar2 = uVar2 | 0x200;
  }
  param_2[0x10] = uVar2;
  uVar4 = *(undefined4 *)(param_1 + 0xb0);
  *param_2 = *(undefined4 *)(param_1 + 0xac);
  param_2[1] = uVar4;
  param_2[8] = *(undefined4 *)(param_1 + 0xd4);
  return;
}

