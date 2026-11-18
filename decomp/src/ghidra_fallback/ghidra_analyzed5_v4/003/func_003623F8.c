#include "ghidra_types.h"

extern int func_0010B3EC(undefined4 *param_1,int param_2,int param_3);
extern int func_0010DA7C(undefined4 *param_1,undefined4 param_2,int param_3);
extern int func_004356B4(int *param_1);
extern int func_00435B54(undefined4 *param_1,undefined4 *param_2);
extern int func_004A9948(int param_1,int param_2,uint param_3);
extern int func_004EDEA0(int param_1,uint *param_2);
extern int func_004EE484(undefined4 *param_1);
extern undefined4 DAT_003627bc;
extern float DAT_003627c0;
extern undefined4 DAT_003627c4;
extern float DAT_003627c8;
extern undefined4 DAT_003627cc;
extern undefined4 DAT_003627d0;
extern undefined4 *DAT_003627d4;
extern undefined4 DAT_003627d8;
extern undefined4 DAT_003627dc;
extern int *DAT_003627e0;

// USA 003623F8 <- EU 003623D4 (Ghidra, non-matching)
// GLOBAL DAT_003627bc undefined4
// GLOBAL DAT_003627c0 float
// GLOBAL DAT_003627c4 undefined4
// GLOBAL DAT_003627c8 float
// GLOBAL DAT_003627cc undefined4
// GLOBAL DAT_003627d0 undefined4
// GLOBAL DAT_003627d4 undefined4 *
// GLOBAL DAT_003627d8 undefined4
// GLOBAL DAT_003627dc undefined4
// GLOBAL DAT_003627e0 int *

int func_003623F8(undefined4 *param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar13;
  undefined8 uVar12;
  undefined4 uVar14;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 ((uint *)(albw_frame + 0x8))
  puVar2 = func_0010DA7C(param_1,0,3);
  *puVar2 = DAT_003627bc;
  puVar2[4] = param_2;
  puVar2[5] = param_2 + 0x3d0;
  puVar2[6] = param_2 + 1000;
  uVar9 = *(undefined4 *)(param_2 + 0x3d0);
  uVar13 = *(undefined4 *)(param_2 + 0x3d8);
  fVar10 = *(float *)(param_2 + 0x3d4) + DAT_003627c0;
  local_38[0] = 6;
  fVar11 = DAT_003627c0;
  puVar2 = (undefined4 *)func_00435B54(puVar2 + 7,local_38);
  uVar6 = DAT_003627c4;
  *puVar2 = DAT_003627c4;
  puVar2[1] = uVar9;
  puVar2[2] = ALBW_AS_U32(fVar10);
  puVar2[3] = uVar13;
  puVar2[0x16] = ALBW_AS_U32(fVar11);
  uVar9 = *(undefined4 *)puVar2[-2];
  uVar12 = *(undefined8 *)((undefined4 *)puVar2[-2] + 1);
  local_38[0] = 6;
  puVar2 = (undefined4 *)func_00435B54(puVar2 + 0x17,local_38);
  *puVar2 = uVar6;
  puVar2[1] = uVar9;
  puVar2[2] = (int)uVar12;
  puVar2[3] = (int)((ulonglong)uVar12 >> 0x20);
  puVar2[0x16] = ALBW_AS_U32(fVar11);
  puVar4 = (undefined4 *)puVar2[-0x19];
  uVar9 = *puVar4;
  uVar13 = puVar4[2];
  fVar10 = ALBW_AS_F32(puVar4[1]) + DAT_003627c8;
  local_38[0] = 6;
  fVar11 = DAT_003627c8;
  puVar2 = (undefined4 *)func_00435B54(puVar2 + 0x17,local_38);
  *puVar2 = uVar6;
  puVar2[1] = uVar9;
  puVar2[2] = ALBW_AS_U32(fVar10);
  puVar2[3] = uVar13;
  puVar2[0x16] = ALBW_AS_U32(fVar11);
  puVar4 = (undefined4 *)puVar2[-0x30];
  uVar13 = *puVar4;
  uVar14 = puVar4[2];
  fVar11 = ALBW_AS_F32(puVar4[1]) + fVar11;
  local_38[0] = 6;
  uVar9 = DAT_003627cc;
  puVar2 = (undefined4 *)func_00435B54(puVar2 + 0x17,local_38);
  *puVar2 = uVar6;
  puVar2[1] = uVar13;
  puVar2[2] = ALBW_AS_U32(fVar11);
  puVar2[3] = uVar14;
  puVar2[0x16] = uVar9;
  local_38[0] = 7;
  puVar2 = (undefined4 *)func_00435B54(puVar2 + 0x17,local_38);
  uVar6 = DAT_003627d0;
  *puVar2 = DAT_003627d0;
  puVar2[0x19] = uVar9;
  puVar2[0x1a] = uVar9;
  local_38[0] = 7;
  puVar2 = (undefined4 *)func_00435B54(puVar2 + 0x1b,local_38);
  *puVar2 = uVar6;
  puVar2[0x19] = uVar9;
  puVar2[0x1a] = uVar9;
  iVar3 = func_004EE484(puVar2 + 0x1b);
  iVar3 = func_004EE484((undefined4 *)(iVar3 + 100));
  puVar2 = DAT_003627d4;
  puVar4 = DAT_003627d4 + 10;
  *(undefined4 *)(iVar3 + 0x68) = 0;
  uVar9 = DAT_003627dc;
  uVar6 = DAT_003627d8;
  uVar13 = puVar2[0xb];
  *(undefined4 *)(iVar3 + 0x6c) = *puVar4;
  *(undefined4 *)(iVar3 + 0x70) = uVar13;
  *(undefined4 *)(iVar3 + 100) = uVar6;
  *(undefined4 *)(iVar3 + 0x84) = 0;
  local_38[0] = 0x1f;
  *(undefined2 *)(iVar3 + 0xa4) = 0x1f;
  *(undefined4 *)(iVar3 + 0xa8) = 0;
  *(undefined1 *)(iVar3 + 0x77) = 0;
  *(undefined4 *)(iVar3 + 0x78) = uVar9;
  *(undefined4 *)(iVar3 + 0x7c) = uVar9;
  *(undefined4 *)(iVar3 + 0x80) = uVar9;
  *(undefined4 *)(iVar3 + 0x88) = 0;
  *(undefined4 *)(iVar3 + 0x8c) = uVar9;
  *(undefined4 *)(iVar3 + 0x90) = uVar9;
  *(undefined4 *)(iVar3 + 0x94) = uVar9;
  *(undefined4 *)(iVar3 + 0x98) = uVar9;
  *(undefined4 *)(iVar3 + 0x9c) = uVar9;
  *(undefined4 *)(iVar3 + 0xa0) = uVar9;
  *(undefined4 *)(iVar3 + 0xb0) = 0;
  uVar9 = puVar2[10];
  uVar13 = puVar2[0xb];
  *(undefined4 *)(iVar3 + 0xac) = uVar6;
  *(undefined4 *)(iVar3 + 0xb4) = uVar9;
  *(undefined4 *)(iVar3 + 0xb8) = uVar13;
  *(undefined4 *)(iVar3 + 0xc0) = 0;
  uVar9 = puVar2[10];
  uVar13 = puVar2[0xb];
  *(undefined4 *)(iVar3 + 0xbc) = uVar6;
  *(undefined4 *)(iVar3 + 0xc4) = uVar9;
  *(undefined4 *)(iVar3 + 200) = uVar13;
  *(undefined4 *)(iVar3 + 0xcc) = 0;
  iVar5 = iVar3 + 0xe0;
  *(undefined4 *)(iVar3 + 0xd0) = 0;
  *(undefined4 *)(iVar3 + 0xd4) = 0;
  *(undefined4 *)(iVar3 + 0xd8) = 0;
  *(undefined4 *)(iVar3 + 0xdc) = 0;
  if (iVar5 != 0) {
    iVar7 = 0;
    iVar8 = 0x1f;
    *(int *)(iVar3 + 0xd8) = iVar5;
    do {
      iVar8 = iVar8 + -1;
      *(int *)(iVar5 + iVar7 * 4) = iVar5 + (iVar7 + 3) * 4;
      iVar7 = iVar7 + 3;
    } while (iVar8 != 0);
    *(undefined4 *)(iVar3 + 0x254) = 0;
    *(int *)(iVar3 + 0xdc) = iVar5;
    func_0010B3EC((undefined4 *)(iVar3 + 0xcc),0x20,iVar3 + 0x260);
  }
  *(undefined4 *)(iVar3 + 0x2e4) = 0;
  uVar9 = puVar2[10];
  uVar13 = puVar2[0xb];
  *(undefined4 *)(iVar3 + 0x2e0) = uVar6;
  *(undefined4 *)(iVar3 + 0x2e8) = uVar9;
  *(undefined4 *)(iVar3 + 0x2ec) = uVar13;
  iVar5 = iVar3 + -0x2c8;
  *(undefined4 *)(iVar3 + 0x2f4) = 0;
  uVar9 = puVar2[10];
  uVar13 = puVar2[0xb];
  *(undefined4 *)(iVar3 + 0x2f0) = uVar6;
  *(undefined4 *)(iVar3 + 0x2f8) = uVar9;
  *(undefined4 *)(iVar3 + 0x2fc) = uVar13;
  *(undefined4 *)(iVar3 + 0x300) = 0;
  *(undefined4 *)(iVar3 + 0x304) = 0;
  *(undefined1 *)(iVar3 + 0x308) = 0;
  *(undefined1 *)(iVar3 + 0x309) = 0;
  *(undefined1 *)(iVar3 + 0x30a) = 0;
  func_004356B4((int *)(iVar3 + -0x2ac));
  *(int *)(iVar3 + -0x54) = iVar3 + -0x2ac;
  local_38[0] = *(uint *)(param_2 + 0x2cc);
  func_004EDEA0(iVar3 + -100,local_38);
  piVar1 = DAT_003627e0;
  *(undefined1 *)(iVar3 + -0x43) = 0x11;
  *(undefined1 *)(iVar3 + -0x42) = 0;
  *(undefined2 *)(iVar3 + -0x34) = 0;
  func_004A9948(*piVar1,iVar3 + -100,8);
  func_004356B4((int *)(iVar3 + -0xd0));
  *(int *)(iVar3 + 0x10) = iVar3 + -0xd0;
  local_38[0] = *(uint *)(param_2 + 0x2cc);
  func_004EDEA0(iVar3,local_38);
  *(undefined1 *)(iVar3 + 0x21) = 0x11;
  *(undefined1 *)(iVar3 + 0x22) = 0;
  *(undefined2 *)(iVar3 + 0x30) = 0;
  func_004A9948(*piVar1,iVar3,0xe);
  *(uint *)(iVar3 + -0x224) = *(uint *)(iVar3 + -0x224) | 0x400000;
  uVar6 = *puVar2;
  uVar9 = puVar2[1];
  *(int *)(iVar3 + 0x68) = iVar5;
  *(undefined4 *)(iVar3 + 0x6c) = uVar6;
  *(undefined4 *)(iVar3 + 0x70) = uVar9;
  uVar6 = puVar2[2];
  uVar9 = puVar2[3];
  *(int *)(iVar3 + 0xb0) = iVar5;
  *(undefined4 *)(iVar3 + 0xb4) = uVar6;
  *(undefined4 *)(iVar3 + 0xb8) = uVar9;
  uVar6 = puVar2[4];
  uVar9 = puVar2[5];
  *(int *)(iVar3 + 0xc0) = iVar5;
  *(undefined4 *)(iVar3 + 0xc4) = uVar6;
  *(undefined4 *)(iVar3 + 200) = uVar9;
  uVar6 = puVar2[6];
  uVar9 = puVar2[7];
  *(int *)(iVar3 + 0x2e4) = iVar5;
  *(undefined4 *)(iVar3 + 0x2e8) = uVar6;
  *(undefined4 *)(iVar3 + 0x2ec) = uVar9;
  uVar6 = puVar2[8];
  uVar9 = puVar2[9];
  *(int *)(iVar3 + 0x2f4) = iVar5;
  *(undefined4 *)(iVar3 + 0x2f8) = uVar6;
  *(undefined4 *)(iVar3 + 0x2fc) = uVar9;
  return iVar5;
}

