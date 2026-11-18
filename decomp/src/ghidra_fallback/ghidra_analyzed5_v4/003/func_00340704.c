#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_003402A8(int param_1);
extern int func_00341328(int param_1);
extern int func_0038AF14(undefined1 *param_1);
extern int *DAT_00340870;
extern float DAT_00340874;
extern undefined4 DAT_00340878;
extern undefined4 DAT_0034087c;

// USA 00340704 <- EU 003406E0 (Ghidra, non-matching)
// GLOBAL DAT_00340870 int *
// GLOBAL DAT_00340874 float
// GLOBAL DAT_00340878 undefined4
// GLOBAL DAT_0034087c undefined4

void func_00340704(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  float fVar6;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(float *)(albw_frame + 0x8))
  #define local_34 (*(undefined4 *)(albw_frame + 0xc))
  #define local_30 (*(float *)(albw_frame + 0x10))
  #define local_2c (*(float *)(albw_frame + 0x14))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0x1c))
  if (*(int *)(*(int *)(param_1 + 0x4c) + 4) == 0x3f800000) {
    iVar1 = *(int *)(param_1 + 0x24);
    uVar2 = *(undefined4 *)(iVar1 + 0x3d8);
    uVar3 = *(undefined4 *)(iVar1 + 0x3d0);
    uVar5 = *(undefined4 *)(iVar1 + 0x3d4);
    *(undefined4 *)(param_1 + 0x70) = uVar2;
    *(undefined4 *)(param_1 + 0x68) = uVar3;
    *(undefined4 *)(param_1 + 0x6c) = uVar5;
    *(undefined4 *)(param_1 + 0x7c) = uVar2;
    *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x68);
    *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0x6c);
    iVar1 = *DAT_00340870;
    uVar2 = *(undefined4 *)(iVar1 + 0x1c);
    uVar3 = *(undefined4 *)(iVar1 + 0x20);
    *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(iVar1 + 0x18);
    *(undefined4 *)(param_1 + 0x84) = uVar2;
    *(undefined4 *)(param_1 + 0x88) = uVar3;
    *(undefined1 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_1 + 0x68);
    *(undefined4 *)(param_1 + 0x134) = *(undefined4 *)(param_1 + 0x6c);
    *(undefined4 *)(param_1 + 0x138) = *(undefined4 *)(param_1 + 0x70);
    *(undefined4 *)(param_1 + 0x13c) = *(undefined4 *)(param_1 + 0x74);
    *(undefined4 *)(param_1 + 0x140) = *(undefined4 *)(param_1 + 0x78);
    *(undefined4 *)(param_1 + 0x144) = *(undefined4 *)(param_1 + 0x7c);
    iVar1 = 0;
    *(undefined1 *)(param_1 + 0x154) = 0;
    do {
      iVar4 = param_1 + iVar1 * 0x28;
      *(undefined4 *)(iVar4 + 0x90) = *(undefined4 *)(param_1 + 0x68);
      iVar1 = iVar1 + 1;
      *(undefined4 *)(iVar4 + 0x94) = *(undefined4 *)(param_1 + 0x6c);
      *(undefined4 *)(iVar4 + 0x98) = *(undefined4 *)(param_1 + 0x70);
      *(undefined4 *)(iVar4 + 0x9c) = *(undefined4 *)(param_1 + 0x74);
      *(undefined4 *)(iVar4 + 0xa0) = *(undefined4 *)(param_1 + 0x78);
      *(undefined4 *)(iVar4 + 0xa4) = *(undefined4 *)(param_1 + 0x7c);
      uVar2 = *(undefined4 *)(param_1 + 0x84);
      uVar3 = *(undefined4 *)(param_1 + 0x88);
      *(undefined4 *)(iVar4 + 0xa8) = *(undefined4 *)(param_1 + 0x80);
      *(undefined4 *)(iVar4 + 0xac) = uVar2;
      *(undefined4 *)(iVar4 + 0xb0) = uVar3;
      *(undefined1 *)(iVar4 + 0xb4) = 0;
    } while (iVar1 < 4);
  }
  uVar2 = DAT_00340878;
  fVar6 = DAT_00340874;
  *(float *)(param_1 + 0x158) = DAT_00340874;
  *(undefined4 *)(param_1 + 0x15c) = uVar2;
  *(float *)(param_1 + 0x160) = fVar6;
  *(undefined4 *)(param_1 + 0x1e4) = 0;
  *(undefined1 *)(param_1 + 0x52b) = 0;
  *(undefined1 *)(param_1 + 0x52c) = 0;
  *(undefined1 *)(param_1 + 0x52d) = 0;
  func_003402A8(param_1);
  func_00341328(param_1);
  func_0038AF14((undefined1 *)(param_1 + 0x300));
  func_0038AF14((undefined1 *)(param_1 + 0x324));
  local_34 = DAT_0034087c;
  local_38 = fVar6;
  local_30 = fVar6;
  func_00115C54(&local_2c,(float *)(*(int *)(param_1 + 0x24) + 0x3d0),&local_38);
  *(float *)(param_1 + 0x504) = local_2c;
  *(undefined4 *)(param_1 + 0x508) = uStack_28;
  *(undefined4 *)(param_1 + 0x50c) = uStack_24;
  return;
}

