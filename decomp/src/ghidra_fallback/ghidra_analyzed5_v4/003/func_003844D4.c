#include "ghidra_types.h"

extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_0010BAB4(undefined4 param_1);
extern int func_00133870(int param_1,uint param_2,int param_3);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00169608(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_0016A2A4(uint *param_1,uint param_2,int *param_3);
extern int func_0016A2FC(undefined4 *param_1,int param_2,undefined4 param_3,int param_4);
extern int func_0019B04C(uint param_1);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern int func_002C2D00(int *param_1);
extern int func_0036D0C8(int *param_1,int param_2);
extern int func_003839B4(int param_1);
extern int func_00383F14(int param_1);
extern int func_004CF478(int param_1,int param_2);
extern int func_0055326C(void);
extern int func_00564A78(int param_1,int *param_2);
extern int func_00584D1C(int param_1,int param_2,int *param_3);
extern int DAT_00384894;
extern undefined DAT_00384898;
extern int DAT_003848b0;
extern uint DAT_003848b4;
extern int DAT_003848b8;
extern int *DAT_003848bc;
extern undefined4 DAT_003848c0;
extern undefined4 *DAT_003848c4;
extern int *DAT_003848c8;
extern int *DAT_003848cc;
extern int *DAT_003848d0;
extern int *DAT_003848d4;
extern int *DAT_003848d8;
extern int *DAT_003848dc;
extern uint *DAT_003848e0;
extern undefined4 DAT_003848e4;
extern int *DAT_003848e8;
extern int DAT_003848ec;
extern int *DAT_00384c6c;
extern char s_Link_Change_00384c70[];

// USA 003844D4 <- EU 003844B0 (Ghidra, non-matching)
// GLOBAL DAT_00384894 int
// GLOBAL DAT_00384898 undefined
// GLOBAL DAT_003848b0 int
// GLOBAL DAT_003848b4 uint
// GLOBAL DAT_003848b8 int
// GLOBAL DAT_003848bc int *
// GLOBAL DAT_003848c0 undefined4
// GLOBAL DAT_003848c4 undefined4 *
// GLOBAL DAT_003848c8 int *
// GLOBAL DAT_003848cc int *
// GLOBAL DAT_003848d0 int *
// GLOBAL DAT_003848d4 int *
// GLOBAL DAT_003848d8 int *
// GLOBAL DAT_003848dc int *
// GLOBAL DAT_003848e0 uint *
// GLOBAL DAT_003848e4 undefined4
// GLOBAL DAT_003848e8 int *
// GLOBAL DAT_003848ec int
// GLOBAL DAT_00384c6c int *
// GLOBAL s_Link_Change_00384c70 string

/* WARNING: Removing unreachable block (ram,0x00384c30) */

int * func_003844D4(int *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  ushort *puVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint in_fpscr;
  float fVar16;
  ulonglong uVar17;
  _Alignas(8) unsigned char albw_frame[0x140];
  #define iStack_140 (*(int *)(albw_frame + 0x0))
  #define local_13c (*(undefined4 *)(albw_frame + 0x4))
  #define iStack_138 (*(int *)(albw_frame + 0x8))
  #define local_134 (*(undefined4 *)(albw_frame + 0xc))
  #define local_130 (*(undefined4 *)(albw_frame + 0x10))
  #define local_12c (*(undefined4 *)(albw_frame + 0x14))
  #define local_128 (*(uint *)(albw_frame + 0x18))
  #define local_124 (*(undefined1 *)(albw_frame + 0x1c))
  #define local_123 (*(undefined1 *)(albw_frame + 0x1d))
  #define local_120 (*(undefined4 *)(albw_frame + 0x20))
  #define local_11c (*(undefined4 *)(albw_frame + 0x24))
  #define local_118 (*(undefined4 *)(albw_frame + 0x28))
  #define local_114 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_110 (*(undefined4 *)(albw_frame + 0x30))
  #define local_10c (*(undefined4 *)(albw_frame + 0x34))
  #define local_108 (*(undefined1 *)(albw_frame + 0x38))
  #define local_107 (*(undefined1 *)(albw_frame + 0x39))
  #define local_100 (*(int *)(albw_frame + 0x40))
  #define local_fc (*(undefined * *)(albw_frame + 0x44))
  #define aiStack_f0 ((int *)(albw_frame + 0x50))
  #define iStack_90 (*(int *)(albw_frame + 0xb0))
  #define pcStack_8c (*(char * *)(albw_frame + 0xb4))
  #define aiStack_88 ((int *)(albw_frame + 0xb8))
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = param_2;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  puVar1 = (undefined4 *)func_0010BAB4(0xa8);
  iVar7 = DAT_00384894;
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    local_fc = &DAT_00384898;
    local_100 = DAT_00384894;
    puVar2 = func_0016A2FC(puVar1,1,&local_100,1);
  }
  param_1[9] = (int)puVar2;
  param_1[10] = -1;
  param_1[0xb] = -1;
  param_1[0xc] = -1;
  iVar12 = DAT_003848b0;
  param_1[0xd] = -1;
  param_1[0xe] = -1;
  uVar4 = DAT_003848b4;
  uVar17 = (ulonglong)DAT_003848b4;
  param_1[0x10] = iVar12;
  param_1[0x11] = iVar12;
  param_1[0x12] = uVar4;
  *(undefined2 *)(param_1 + 0x13) = 0;
  *(undefined2 *)((int)param_1 + 0x4e) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined1 *)(param_1 + 0x16) = 1;
  *(undefined1 *)((int)param_1 + 0x59) = 0;
  iVar12 = DAT_003848b8;
  *(undefined1 *)((int)param_1 + 0x5a) = 1;
  param_1[0x1a] = 0;
  param_1[0x19] = -1;
  param_1[0x17] = iVar12;
  param_1[0x18] = (int)param_1;
  piVar3 = DAT_003848bc;
  param_1[0x1b] = 0;
  uVar10 = DAT_003848c0;
  iVar14 = *(int *)(*piVar3 + 0x10);
  iStack_140 = iVar7;
  local_13c = DAT_003848c0;
  local_130 = 0;
  local_12c = 0;
  local_128 = 0;
  iStack_138 = iVar7;
  local_134 = DAT_003848c0;
  local_108 = 1;
  local_124 = 0;
  local_123 = 0;
  local_10c = 0;
  local_11c = 0;
  local_110 = 0;
  local_120 = 0;
  local_114 = 0;
  local_118 = 0;
  local_107 = 0xc4;
  iVar12 = *(int *)(*(int *)(param_1[4] + 0x2d0) + 0x1cc);
  func_0036D0C8(param_1 + 3,0);
  puVar2 = DAT_003848c4;
  if (param_1[3] == 0) {
    iVar15 = 1;
  }
  else {
    iVar15 = func_0010983C(*DAT_003848c4,param_1[3]);
  }
  if (**(char **)(param_1[4] + 0x8bc) == '\0' || iVar12 == 0) {
    iVar13 = *(int *)(*(int *)(param_1[4] + 0x2d0) + 0x1c8);
    if (*(int *)(iVar13 + 200) != 0) {
      puVar1 = *(undefined4 **)(iVar13 + 0xd0);
      goto LAB_00384638;
    }
  }
  else if (*(int *)(iVar12 + 200) != 0) {
    puVar1 = *(undefined4 **)(iVar12 + 0xd0);
LAB_00384638:
    local_130 = *puVar1;
    goto LAB_0038463c;
  }
  local_130 = 0;
LAB_0038463c:
  local_128 = local_128 | 1;
  piVar3 = func_002C2D00(&iStack_140);
  param_1[5] = (int)piVar3;
  if (iVar15 != 1) {
    func_0010983C(*puVar2,iVar15);
  }
  uVar4 = func_00564A78(param_1[5],DAT_003848c8);
  param_1[10] = uVar4;
  uVar4 = func_00564A78(param_1[5],DAT_003848cc);
  param_1[0xb] = uVar4;
  uVar4 = func_00564A78(param_1[5],DAT_003848d0);
  param_1[0xc] = uVar4;
  uVar4 = func_00564A78(param_1[5],DAT_003848d4);
  param_1[0xd] = uVar4;
  uVar4 = func_00564A78(param_1[5],DAT_003848d8);
  param_1[0xe] = uVar4;
  uVar4 = func_00564A78(param_1[5],DAT_003848dc);
  param_1[0xf] = uVar4;
  func_0036D0C8(param_1 + 2,0);
  if (param_1[2] == 0) {
    iVar15 = 1;
  }
  else {
    iVar15 = func_0010983C(*puVar2,param_1[2]);
  }
  if (**(char **)(param_1[4] + 0x8bc) == '\0' || iVar12 == 0) {
    local_130 = *(undefined4 *)(iVar14 + 0x90);
  }
  else if (*(uint *)(iVar12 + 200) < 2) {
    local_130 = 0;
  }
  else {
    local_130 = *(undefined4 *)(*(int *)(iVar12 + 0xd0) + 4);
  }
  local_13c = uVar10;
  local_134 = uVar10;
  local_11c = 0;
  local_12c = 0;
  local_128 = 0;
  local_120 = 0;
  local_108 = 1;
  local_124 = 1;
  local_118 = 0;
  local_114 = 0;
  local_10c = 0;
  local_107 = 0xc4;
  local_123 = 1;
  local_110 = *(undefined4 *)(param_1[5] + 0x24);
  piVar3 = func_002C2D00(&iStack_140);
  param_1[6] = (int)piVar3;
  (**(code **)(*piVar3 + 0x10))(piVar3,0xa0);
  *(uint *)(param_1[6] + 0x164) = *(uint *)(param_1[6] + 0x164) | 0x90000;
  if (iVar15 != 1) {
    func_0010983C(*puVar2,iVar15);
  }
  func_0036D0C8(param_1,0);
  if (*param_1 == 0) {
    iVar12 = 1;
  }
  else {
    iVar12 = func_0010983C(*puVar2,*param_1);
  }
  puVar5 = (undefined4 *)func_0010BAB4(0xa8);
  puVar1 = (undefined4 *)0x0;
  if (puVar5 != (undefined4 *)0x0) {
    func_0019B04C(*DAT_003848e0);
    puVar1 = func_0016A2FC(puVar5,0xb0,DAT_003848e4,1);
  }
  param_1[7] = (int)puVar1;
  uVar4 = 0;
  *(int *)(param_1[4] + 0x34c) = param_1[5];
  *(int *)(param_1[4] + 0x350) = param_1[7];
  *(undefined2 *)(param_1[4] + 0x358) = 0xb0;
  do {
    func_0016A2A4((uint *)param_1[7],uVar4,*(int **)(iVar14 + 0x110 + (short)uVar4 * 4));
    uVar4 = uVar4 + 1;
  } while ((int)uVar4 < 0xb0);
  func_0016A02C(param_1[7],-1,(int *)0xffffffff,0);
  func_00584D1C(param_1[5],param_1[7],DAT_003848e8);
  iVar15 = DAT_003848ec;
  iVar13 = 0;
  do {
    uVar4 = func_00564A78(param_1[5],(int *)(iVar15 + iVar13 * 8));
    iVar8 = param_1[7];
    iVar9 = *(int *)(iVar8 + 0x98);
    if (iVar9 < *(int *)(iVar8 + 0x9c)) {
      *(int *)(iVar8 + 0x98) = iVar9 + 1;
      *(short *)(*(int *)(iVar8 + 0xa0) + iVar9 * 2) = (short)uVar4;
    }
    iVar13 = iVar13 + 1;
  } while (iVar13 < 2);
  if (iVar12 != 1) {
    func_0010983C(*puVar2,iVar12);
  }
  func_0036D0C8(param_1 + 1,0);
  if (param_1[1] == 0) {
    iVar12 = 1;
  }
  else {
    iVar12 = func_0010983C(*puVar2,param_1[1]);
  }
  puVar5 = (undefined4 *)func_0010BAB4(0xa8);
  puVar1 = (undefined4 *)0x0;
  if (puVar5 != (undefined4 *)0x0) {
    func_0019B04C(*DAT_003848e0);
    puVar1 = func_0016A2FC(puVar5,0xb0,DAT_003848e4,1);
  }
  uVar4 = 0;
  param_1[8] = (int)puVar1;
  do {
    func_0016A2A4((uint *)param_1[8],uVar4,*(int **)(iVar14 + 0x110 + (short)uVar4 * 4));
    uVar10 = (undefined4)uVar17;
    uVar4 = uVar4 + 1;
  } while ((int)uVar4 < 0xb0);
  func_0016A02C(param_1[8],-1,(int *)0xffffffff,0);
  func_00584D1C(param_1[5],param_1[8],DAT_00384c6c);
  if (iVar12 != 1) {
    func_0010983C(*puVar2,iVar12);
  }
  *(undefined1 *)((int)param_1 + 0x59) = 1;
  func_004CF478(param_1[6],1);
  if (**(char **)(param_1[4] + 0x8bc) == '\0') {
    iVar12 = func_0055326C();
    pcStack_8c = s_Link_Change_00384c70;
    iStack_90 = iVar7;
    func_00169608((uint *)param_1[9],0,&iStack_90,iVar12);
    func_0016A02C(param_1[9],-1,(int *)0xffffffff,0);
    func_00133870(param_1[9],0,param_1[5]);
    piVar3 = (int *)0x0;
    puVar6 = (uint *)func_002C11E8(aiStack_88,0,10,0);
    iVar14 = param_1[9];
    func_0016898C(iVar14,puVar6);
    *(undefined4 *)(*(int *)(param_1[9] + 0x14) + 0x10) = uVar10;
    uVar10 = *(undefined4 *)(param_1[9] + 0xc);
    iVar12 = *(int *)(param_1[9] + 0x14);
    fVar16 = (float)VectorSignedToFloat((int)*(char *)(*(int *)(param_1[4] + 0x8bc) + 0xb),
                                        (byte)(in_fpscr >> 0x15) & 3);
    if (*(float *)(iVar12 + 8) != fVar16) {
      *(float *)(iVar12 + 8) = fVar16;
      *(undefined1 *)(iVar12 + 0x26) = 1;
    }
    func_00169A80((int *)param_1[9],uVar10,iVar14,piVar3);
  }
  piVar3 = DAT_003848d0;
  (**(code **)(*DAT_003848d0 + 8))(DAT_003848d0);
  local_fc = (undefined *)piVar3[1];
  local_100 = iVar7;
  uVar4 = func_00564A78(param_1[5],&local_100);
  param_1[0x19] = uVar4;
  puVar6 = (uint *)(*(int *)(*(int *)(param_1[5] + 0x24) + 0xc) + uVar4 * 0x40);
  *puVar6 = *puVar6 | 0x10;
  puVar6 = (uint *)(*(int *)(*(int *)(param_1[5] + 0x24) + 0xc) + param_1[0xf] * 0x40);
  *puVar6 = *puVar6 | 0x10;
  puVar6 = (uint *)(*(int *)(*(int *)(param_1[5] + 0x24) + 0xc) + param_1[0xd] * 0x40);
  *puVar6 = *puVar6 | 0x10;
  *(int **)(param_1[5] + 0x16c) = param_1 + 0x17;
  puVar6 = (uint *)func_002C11E8(aiStack_f0,0,10,0);
  func_0016898C(param_1[7],puVar6);
  puVar6 = (uint *)func_002C11E8(aiStack_f0,0,10,0);
  func_0016898C(param_1[8],puVar6);
  iVar12 = *(int *)(*(int *)(param_1[5] + 0x20) + 4);
  iVar7 = 0;
  if (0 < iVar12) {
    do {
      puVar11 = (ushort *)(**(int **)(param_1[5] + 0x20) + iVar7 * 0x154);
      if (puVar11 != (ushort *)0x0) {
        *puVar11 = *puVar11 | 0x400;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar12);
  }
  func_00383F14((int)param_1);
  func_003839B4((int)param_1);
  return param_1;
}

