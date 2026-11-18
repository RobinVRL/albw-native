#include "ghidra_types.h"

extern int func_001994AC(int param_1);
extern int func_00199500(int param_1);
extern int func_00231488(int param_1,float fparam_0);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_0043FC74(int param_1);
extern int func_004401C8(int param_1);
extern float func_00532B54(int param_1);
extern int func_00532C78(int param_1);
extern int *DAT_0043f740;
extern float DAT_0043f744;

// USA 0043F5C4 <- EU 0043F5A4 (Ghidra, non-matching)
// GLOBAL DAT_0043f740 int *
// GLOBAL DAT_0043f744 float

void func_0043F5C4(int param_1)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  undefined2 uVar4;
  uint uVar5;
  byte *pbVar6;
  float fVar7;
  
  if (*(char *)(param_1 + 0x17c) != -1) {
    func_004401C8(param_1);
    goto LAB_0043f6e8;
  }
  func_0043FC74(param_1);
  bVar3 = *(byte *)(param_1 + 0x177);
  pbVar6 = (byte *)(param_1 + 0x177);
  if (((-1 < (int)((uint)bVar3 << 0x1b)) && ((bVar3 & 4) != 0 && (bVar3 & 8) != 0)) &&
     (bVar1 = func_00532C78(param_1 + 0x110), !bVar1)) {
    *pbVar6 = *pbVar6 & 0xf7 | 0x10;
  }
  if ((*(byte *)(param_1 + 0x177) & 1) == 0) {
    func_001994AC(*(int *)(param_1 + 0x170));
  }
  else {
    func_00199500(*(int *)(param_1 + 0x170));
  }
  uVar5 = 0;
  iVar2 = *(int *)(*DAT_0043f740 + 0xf8);
  if (iVar2 != 0) {
    if (*(char *)(iVar2 + 0xd) == '\x01') {
      if (*(char *)(iVar2 + 0xe) == '\x01') goto LAB_0043f6fc;
    }
    else if ((*(char *)(iVar2 + 0xd) == '\x03') && (*(char *)(iVar2 + 0xe) == '\x03')) {
LAB_0043f6fc:
      uVar5 = 1;
      goto LAB_0043f68c;
    }
    uVar5 = 0;
  }
LAB_0043f68c:
  if (uVar5 != (*(byte *)(param_1 + 0x177) & 0x20) >> 5) {
    bVar1 = func_00532C78(param_1 + 0x128);
    if (bVar1) {
      fVar7 = func_00532B54(param_1 + 0x128);
      func_00231488(param_1 + 0x128,-fVar7);
    }
    else {
      if (uVar5 == 0) {
        uVar4 = 3;
      }
      else {
        uVar4 = 2;
      }
      *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_1 + 0x1c);
      *(undefined2 *)(param_1 + 0x12a) = uVar4;
      *(undefined2 *)(param_1 + 0x128) = 0;
      func_002317C0((undefined2 *)(param_1 + 0x128),DAT_0043f744);
    }
    *pbVar6 = *pbVar6 ^ 0x20;
    pbVar6 = (byte *)(*(int *)(param_1 + 0x170) + 0x79);
    bVar3 = *pbVar6;
    if (uVar5 == 0) {
      bVar3 = bVar3 & 0xfb;
    }
    else {
      bVar3 = bVar3 | 4;
    }
    *pbVar6 = bVar3;
  }
LAB_0043f6e8:
  *(byte *)(*(int *)(param_1 + 0x1c) + 0x70) = *(byte *)(*(int *)(param_1 + 0x1c) + 0x70) | 2;
  return;
}

