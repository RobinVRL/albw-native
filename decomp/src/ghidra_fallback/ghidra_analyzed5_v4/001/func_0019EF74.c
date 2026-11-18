#include "ghidra_types.h"

extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_0010BAB4(undefined4 param_1);
extern int func_00133870(int param_1,uint param_2,int param_3);
extern int func_0014DF18(int param_1,undefined4 param_2,int param_3,uint param_4,undefined1 param_5, undefined1 param_6);
extern int func_0014EB8C(int param_1,undefined4 param_2,undefined2 *param_3,uint *param_4,undefined2 param_5, undefined4 param_6,undefined2 param_7);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00169608(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_00169688(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_0016A2FC(undefined4 *param_1,int param_2,undefined4 param_3,int param_4);
extern int func_0036D0C8(int *param_1,int param_2);
extern int func_004356B4(int *param_1);
extern int func_004EE484(undefined4 *param_1);
extern int func_004FC1CC(int param_1,int param_2,byte param_3,float fparam_0);
extern int func_004FCE34(int param_1,int param_2);
extern int func_005330A8(int param_1,int param_2,int *param_3);
extern int func_0054D964(int param_1,uint param_2);
extern int func_0054DDF4(int param_1,uint param_2);
extern int func_00588BE4(int param_1);
extern uint DAT_0019f31c;
extern undefined4 *DAT_0019f320;
extern undefined4 DAT_0019f324;
extern undefined4 DAT_0019f328;
extern undefined4 DAT_0019f32c;
extern int *DAT_0019f330;
extern int *DAT_0019f334;
extern undefined4 *DAT_0019f338;
extern undefined4 DAT_0019f33c;
extern int DAT_0019f340;
extern int DAT_0019f344;
extern undefined4 DAT_0019f348;
extern int DAT_0019f34c;
extern int DAT_0019f660;
extern undefined4 *DAT_0019f664;
extern int DAT_0019f668;
extern undefined4 DAT_0019f66c;

// USA 0019EF74 <- EU 0019EF74 (Ghidra, non-matching)
// GLOBAL DAT_0019f31c uint
// GLOBAL DAT_0019f320 undefined4 *
// GLOBAL DAT_0019f324 undefined4
// GLOBAL DAT_0019f328 undefined4
// GLOBAL DAT_0019f32c undefined4
// GLOBAL DAT_0019f330 int *
// GLOBAL DAT_0019f334 int *
// GLOBAL DAT_0019f338 undefined4 *
// GLOBAL DAT_0019f33c undefined4
// GLOBAL DAT_0019f340 int
// GLOBAL DAT_0019f344 int
// GLOBAL DAT_0019f348 undefined4
// GLOBAL DAT_0019f34c int
// GLOBAL DAT_0019f660 int
// GLOBAL DAT_0019f664 undefined4 *
// GLOBAL DAT_0019f668 int
// GLOBAL DAT_0019f66c undefined4

void func_0019EF74(int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  int iVar12;
  uint unaff_r9;
  uint unaff_r10;
  undefined8 uVar13;
  float fVar15;
  ulonglong uVar14;
  undefined8 uVar16;
  float fparam_0;
  undefined4 uVar18;
  longlong lVar17;
  undefined8 uVar19;
  _Alignas(8) unsigned char albw_frame[0x110];
  #define local_110 ((uint *)(albw_frame + 0x0))
  #define local_108 (*(undefined4 * *)(albw_frame + 0x8))
  #define local_104 (*(undefined4 *)(albw_frame + 0xc))
  #define local_100 (*(undefined4 *)(albw_frame + 0x10))
  #define local_fc (*(undefined4 *)(albw_frame + 0x14))
  #define local_f8 (*(undefined4 *)(albw_frame + 0x18))
  #define local_f4 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_f0 (*(uint *)(albw_frame + 0x20))
  #define local_bc (*(undefined4 *)(albw_frame + 0x54))
  #define local_b8 (*(undefined1 *)(albw_frame + 0x58))
  #define local_b4 ((uint *)(albw_frame + 0x5c))
  #define local_ac (*(undefined4 * *)(albw_frame + 0x64))
  #define local_a8 (*(undefined4 *)(albw_frame + 0x68))
  #define local_a4 (*(undefined4 *)(albw_frame + 0x6c))
  #define local_a0 (*(undefined4 *)(albw_frame + 0x70))
  #define local_9c (*(undefined4 *)(albw_frame + 0x74))
  #define local_98 (*(undefined4 *)(albw_frame + 0x78))
  #define local_94 (*(uint *)(albw_frame + 0x7c))
  #define local_60 (*(undefined4 *)(albw_frame + 0xb0))
  #define local_5c (*(undefined1 *)(albw_frame + 0xb4))
  #define local_58 (*(int *)(albw_frame + 0xb8))
  #define local_54 (*(int *)(albw_frame + 0xbc))
  #define local_50 (*(int *)(albw_frame + 0xc0))
  #define local_4c (*(int *)(albw_frame + 0xc4))
  #define local_48 (*(int *)(albw_frame + 0xc8))
  iVar1 = func_0054DDF4(param_1,2);
  local_54 = param_1 + 0x1000;
  *(int *)(param_1 + 0x1228) = iVar1;
  iVar1 = func_0054DDF4(param_1,1);
  uVar14 = (ulonglong)DAT_0019f31c;
  lVar17 = uVar14 << 0x20;
  iVar12 = 0;
  *(int *)(local_54 + 0x22c) = iVar1;
  local_48 = param_1 + 0xa10;
  func_00588BE4(param_1);
  func_0036D0C8((int *)(param_1 + 0x8bc),0);
  func_0036D0C8((int *)(param_1 + 0x8c0),0);
  func_0036D0C8((int *)(param_1 + 0x8c4),0);
  iVar1 = *(int *)(param_1 + 0x8bc);
  if (iVar1 == 0) {
    local_50 = 1;
  }
  else {
    local_50 = func_0010983C(*DAT_0019f320,iVar1);
  }
  uVar11 = DAT_0019f32c;
  local_58 = param_1 + 0x5a8;
  uVar19 = CONCAT44(DAT_0019f328,DAT_0019f324);
  do {
    uVar18 = (undefined4)((ulonglong)lVar17 >> 0x20);
    puVar10 = (undefined4 *)(local_48 + iVar12 * 0x48);
    uVar6 = *(undefined4 *)(param_1 + 0x3d4);
    uVar7 = *(undefined4 *)(param_1 + 0x3d0);
    puVar10[2] = *(undefined4 *)(param_1 + 0x3d8);
    puVar10[1] = uVar6;
    *puVar10 = uVar7;
    uVar6 = (undefined4)uVar14;
    uVar13 = CONCAT44((int)uVar19,uVar6);
    puVar10[6] = *(undefined4 *)(param_1 + 1000);
    puVar10[10] = (int)uVar19;
    *(undefined1 *)(puVar10 + 0xc) = 0;
    *(undefined1 *)((int)puVar10 + 0x31) = 0;
    *(undefined1 *)((int)puVar10 + 0x32) = 0;
    if (iVar12 == 3) {
      puVar10[7] = uVar18;
      puVar10[8] = uVar18;
      puVar10[9] = uVar18;
      piVar3 = DAT_0019f330;
      puVar10[0xb] = uVar18;
      uVar2 = func_005330A8(param_1,0,piVar3);
    }
    else {
      puVar10[7] = uVar6;
      puVar10[8] = uVar6;
      puVar10[9] = uVar6;
      piVar3 = DAT_0019f334;
      puVar10[0xb] = uVar6;
      uVar2 = func_005330A8(param_1,0,piVar3);
    }
    uVar16 = *(undefined8 *)(puVar10 + 7);
    lVar17 = CONCAT44(uVar18,puVar10[9]);
    piVar3 = func_0014DF18(*(int *)(param_1 + 0x2d0),*DAT_0019f338,DAT_0019f338[1],uVar2,0,0);
    puVar10[3] = piVar3;
    piVar3[0x59] = piVar3[0x59] | 0x40000000;
    piVar3[0x1d] = (int)uVar16;
    piVar3[0x1e] = (int)((ulonglong)uVar16 >> 0x20);
    piVar3[0x1f] = (int)lVar17;
    if (*(int *)(param_1 + 0x8c0) == 0) {
      local_4c = 1;
    }
    else {
      local_4c = func_0010983C(*DAT_0019f320,*(int *)(param_1 + 0x8c0));
    }
    puVar4 = (undefined4 *)func_0010BAB4(0xa8);
    puVar5 = (undefined4 *)0x0;
    if (puVar4 != (undefined4 *)0x0) {
      puVar5 = func_0016A2FC(puVar4,7,DAT_0019f33c,1);
    }
    iVar1 = DAT_0019f340;
    uVar2 = 0;
    puVar10[4] = puVar5;
    do {
      iVar8 = *(int *)(*(int *)(param_1 + 0x2d0) + 0x1c8);
      if (iVar12 == 3) {
        func_00169688((uint *)puVar10[4],uVar2,(int *)(iVar1 + uVar2 * 8),iVar8);
      }
      else {
        func_00169688((uint *)puVar10[4],uVar2,(int *)(DAT_0019f344 + uVar2 * 8),iVar8);
      }
      func_00133870(puVar10[4],uVar2,puVar10[3]);
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < 7);
    func_0016A02C(puVar10[4],-1,(int *)0xffffffff,0);
    local_a0 = (undefined4)((ulonglong)lVar17 >> 0x20);
    uVar16 = CONCAT44(DAT_0019f348,local_a0);
    local_a4 = (undefined4)((ulonglong)uVar13 >> 0x20);
    local_b4[1] = 3;
    local_ac = &local_a8;
    local_60 = 10;
    local_5c = 0;
    local_b4[0] = 1;
    local_a8 = 0;
    local_9c = DAT_0019f348;
    unaff_r10 = unaff_r10 | 0xff;
    local_98 = local_a0;
    local_94 = unaff_r10;
    func_0016898C(puVar10[4],local_b4);
    iVar1 = *(int *)(puVar10[4] + 0x14);
    fVar15 = ALBW_AS_F32(((ulonglong)uVar13 >> 0x20));
    if (*(float *)(iVar1 + 8) != fVar15) {
      *(float *)(iVar1 + 8) = fVar15;
      *(undefined1 *)(iVar1 + 0x26) = 1;
    }
    if (local_4c != 1) {
      func_0010983C(*DAT_0019f320,local_4c);
    }
    if (*(int *)(param_1 + 0x8c4) == 0) {
      iVar1 = 1;
    }
    else {
      iVar1 = func_0010983C(*DAT_0019f320,*(int *)(param_1 + 0x8c4));
    }
    puVar4 = (undefined4 *)func_0010BAB4(0xa8);
    puVar5 = (undefined4 *)0x0;
    if (puVar4 != (undefined4 *)0x0) {
      puVar5 = func_0016A2FC(puVar4,2,DAT_0019f33c,1);
    }
    iVar8 = DAT_0019f34c;
    uVar2 = 0;
    puVar10[5] = puVar5;
    do {
      iVar9 = *(int *)(*(int *)(param_1 + 0x2d0) + 0x1c8);
      if (iVar12 == 3) {
        func_00169608((uint *)puVar10[5],uVar2,(int *)(iVar8 + uVar2 * 8),iVar9);
      }
      else {
        func_00169608((uint *)puVar10[5],uVar2,(int *)(DAT_0019f660 + uVar2 * 8),iVar9);
      }
      func_00133870(puVar10[5],uVar2,puVar10[3]);
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < 2);
    if (iVar1 != 1) {
      func_0010983C(*DAT_0019f320,iVar1);
    }
    func_0016A02C(puVar10[5],-1,(int *)0xffffffff,0);
    local_108 = &local_104;
    local_100 = (undefined4)((ulonglong)uVar13 >> 0x20);
    local_fc = (undefined4)uVar16;
    local_f8 = (undefined4)((ulonglong)uVar16 >> 0x20);
    local_bc = 10;
    local_110[1] = 3;
    local_b8 = 0;
    local_104 = 0;
    local_110[0] = 1;
    unaff_r9 = unaff_r9 | 0xff;
    local_f4 = local_fc;
    local_f0 = unaff_r9;
    func_0016898C(puVar10[5],local_110);
    fparam_0 = ALBW_AS_F32(((ulonglong)uVar16 >> 0x20));
    iVar1 = *(int *)(puVar10[5] + 0x14);
    fVar15 = ALBW_AS_F32(((ulonglong)uVar13 >> 0x20));
    if (*(float *)(iVar1 + 8) != fVar15) {
      *(float *)(iVar1 + 8) = fVar15;
      *(undefined1 *)(iVar1 + 0x26) = 1;
    }
    uVar14 = CONCAT44(fVar15,ALBW_AS_F32(uVar13) * ALBW_AS_F32(((ulonglong)uVar19 >> 0x20)));
    *(float *)(*(int *)(puVar10[5] + 0x14) + 0x10) = fVar15;
    puVar5 = (undefined4 *)func_0010BAB4(100);
    uVar6 = 0;
    if (puVar5 != (undefined4 *)0x0) {
      uVar6 = func_004EE484(puVar5);
    }
    puVar10[0xd] = uVar6;
    puVar4 = (undefined4 *)func_0010BAB4(0x10);
    puVar5 = DAT_0019f664;
    if (puVar4 != (undefined4 *)0x0) {
      puVar4[1] = 0;
      uVar6 = puVar5[1];
      puVar4[2] = *puVar5;
      puVar4[3] = uVar6;
      *puVar4 = uVar11;
    }
    puVar10[0x10] = puVar4;
    puVar5 = (undefined4 *)func_0010BAB4(0x10);
    iVar1 = DAT_0019f668;
    if (puVar5 != (undefined4 *)0x0) {
      puVar5[1] = 0;
      uVar6 = *(undefined4 *)(iVar1 + 0xbc);
      puVar5[2] = *(undefined4 *)(iVar1 + 0xb8);
      puVar5[3] = uVar6;
      *puVar5 = uVar11;
    }
    puVar10[0x11] = puVar5;
    iVar1 = func_0054D964(param_1,0);
    puVar10[0xf] = iVar1;
    puVar10[0xe] = iVar1;
    if (iVar1 != 0) {
      *(uint *)(iVar1 + 0x2c) = *(uint *)(iVar1 + 0x2c) | 0x140000;
    }
    func_004356B4((int *)puVar10[0xe]);
    func_004356B4((int *)puVar10[0xf]);
    iVar1 = DAT_0019f668;
    iVar8 = puVar10[0x10];
    uVar6 = *(undefined4 *)(DAT_0019f668 + 0x98);
    uVar7 = *(undefined4 *)(DAT_0019f668 + 0x9c);
    *(int *)(iVar8 + 4) = param_1;
    *(undefined4 *)(iVar8 + 8) = uVar6;
    *(undefined4 *)(iVar8 + 0xc) = uVar7;
    local_110[0] = *(uint *)(param_1 + 0x2cc);
    if (iVar12 == 3) {
      func_0014EB8C(puVar10[0xd],puVar10[0xe],*(undefined2 **)(local_54 + 0x22c),local_110,
                    *(undefined2 *)(param_1 + 0x54),puVar10[0x10],(short)DAT_0019f66c);
      *(uint *)(puVar10[0xe] + 0x2c) = *(uint *)(puVar10[0xe] + 0x2c) | 8;
      iVar8 = puVar10[0x11];
      uVar6 = *(undefined4 *)(iVar1 + 0xa0);
      uVar7 = *(undefined4 *)(iVar1 + 0xa4);
      *(int *)(iVar8 + 4) = param_1;
      *(undefined4 *)(iVar8 + 8) = uVar6;
      *(undefined4 *)(iVar8 + 0xc) = uVar7;
    }
    else {
      func_0014EB8C(puVar10[0xd],puVar10[0xe],*(undefined2 **)(local_54 + 0x228),local_110,
                    *(undefined2 *)(param_1 + 0x54),puVar10[0x10],(short)DAT_0019f66c);
      *(uint *)(puVar10[0xe] + 0x2c) = *(uint *)(puVar10[0xe] + 0x2c) | 8;
      *(undefined2 *)(puVar10[0xf] + 0x28) = 0xe0;
      iVar8 = puVar10[0x11];
      uVar6 = *(undefined4 *)(iVar1 + 0xa8);
      uVar7 = *(undefined4 *)(iVar1 + 0xac);
      *(int *)(iVar8 + 4) = param_1;
      *(undefined4 *)(iVar8 + 8) = uVar6;
      *(undefined4 *)(iVar8 + 0xc) = uVar7;
    }
    func_004FC1CC(param_1,puVar10[3],0xb,fparam_0);
    func_004FCE34(local_58,puVar10[0xd]);
    iVar12 = iVar12 + 1;
  } while (iVar12 != 4);
  if (local_50 != 1) {
    func_0010983C(*DAT_0019f320,local_50);
  }
  iVar1 = 0;
  do {
    uVar11 = *(undefined4 *)(param_1 + 0x3d4);
    uVar6 = *(undefined4 *)(param_1 + 0x3d8);
    puVar10 = (undefined4 *)(param_1 + 0xb34 + iVar1 * 0x10);
    iVar1 = iVar1 + 1;
    *puVar10 = *(undefined4 *)(param_1 + 0x3d0);
    puVar10[1] = uVar11;
    puVar10[2] = uVar6;
    puVar10[3] = *(undefined4 *)(param_1 + 1000);
  } while (iVar1 != 100);
  return;
}

