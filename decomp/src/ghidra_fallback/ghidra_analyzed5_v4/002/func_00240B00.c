#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_002C2D00(int *param_1);
extern int func_004356B4(int *param_1);
extern int func_004994B0(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,...);
extern int func_004A879C(int param_1,int param_2,uint param_3);
extern int func_004CEAF0(int param_1);
extern int func_004D7EB0(float *param_1,uint param_2,uint param_3,float *param_4);
extern int func_004EDAD0(int param_1,uint *param_2);
extern int func_004EDC9C(undefined4 *param_1);
extern int func_00527934(int param_1,int *param_2);
extern int func_00533400(int param_1,int *param_2);
extern int func_0054D964(int param_1,uint param_2);
extern float func_0054DE3C(int param_1,uint param_2,int param_3);
extern int DAT_00240ed4;
extern int DAT_00240ed8;
extern undefined4 DAT_00240edc;
extern int DAT_00240ee0;
extern int DAT_00240ee4;
extern float DAT_00240ee8;
extern int *DAT_00240eec;
extern undefined4 DAT_00240efc;
extern undefined4 DAT_00240f00;
extern undefined4 DAT_00240f04;
extern undefined4 DAT_00240f08;
extern undefined4 DAT_00240f0c;
extern undefined4 DAT_00240f10;
extern undefined4 DAT_00240f14;
extern undefined4 DAT_00240f18;
extern undefined4 DAT_00240f1c;
extern undefined4 DAT_00240f20;
extern undefined4 DAT_00240f24;
extern char s_StatueHint_00240ef0[];

// USA 00240B00 <- EU 00240B00 (Ghidra, non-matching)
// GLOBAL DAT_00240ed4 int
// GLOBAL DAT_00240ed8 int
// GLOBAL DAT_00240edc undefined4
// GLOBAL DAT_00240ee0 int
// GLOBAL DAT_00240ee4 int
// GLOBAL DAT_00240ee8 float
// GLOBAL DAT_00240eec int *
// GLOBAL DAT_00240efc undefined4
// GLOBAL DAT_00240f00 undefined4
// GLOBAL DAT_00240f04 undefined4
// GLOBAL DAT_00240f08 undefined4
// GLOBAL DAT_00240f0c undefined4
// GLOBAL DAT_00240f10 undefined4
// GLOBAL DAT_00240f14 undefined4
// GLOBAL DAT_00240f18 undefined4
// GLOBAL DAT_00240f1c undefined4
// GLOBAL DAT_00240f20 undefined4
// GLOBAL DAT_00240f24 undefined4
// GLOBAL s_StatueHint_00240ef0 string

int * func_00240B00(undefined4 *param_1,uint *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  _Alignas(8) unsigned char albw_frame[0xd0];
  #define local_c8 (*(int *)(albw_frame + 0x8))
  #define uStack_c4 (*(undefined4 *)(albw_frame + 0xc))
  #define iStack_c0 (*(int *)(albw_frame + 0x10))
  #define local_bc (*(undefined4 *)(albw_frame + 0x14))
  #define local_b8 ((int *)(albw_frame + 0x18))
  #define local_ac (*(undefined1 *)(albw_frame + 0x24))
  #define local_ab (*(undefined1 *)(albw_frame + 0x25))
  #define local_a8 (*(undefined4 *)(albw_frame + 0x28))
  #define local_a4 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_a0 (*(undefined4 *)(albw_frame + 0x30))
  #define local_9c (*(undefined4 *)(albw_frame + 0x34))
  #define local_98 (*(undefined4 *)(albw_frame + 0x38))
  #define local_94 (*(undefined4 *)(albw_frame + 0x3c))
  #define local_90 (*(undefined1 *)(albw_frame + 0x40))
  #define local_8f (*(undefined1 *)(albw_frame + 0x41))
  #define local_8c (*(int *)(albw_frame + 0x44))
  #define uStack_88 (*(undefined4 *)(albw_frame + 0x48))
  #define iStack_84 (*(int *)(albw_frame + 0x4c))
  #define local_80 (*(undefined4 *)(albw_frame + 0x50))
  #define local_7c (*(int *)(albw_frame + 0x54))
  #define uStack_78 (*(undefined4 *)(albw_frame + 0x58))
  #define local_74 (*(undefined4 *)(albw_frame + 0x5c))
  #define local_70 (*(undefined1 *)(albw_frame + 0x60))
  #define local_6f (*(undefined1 *)(albw_frame + 0x61))
  #define local_6c (*(undefined4 *)(albw_frame + 0x64))
  #define local_68 (*(undefined4 *)(albw_frame + 0x68))
  #define local_64 (*(undefined4 *)(albw_frame + 0x6c))
  #define local_60 (*(undefined4 *)(albw_frame + 0x70))
  #define local_5c (*(undefined4 *)(albw_frame + 0x74))
  #define local_58 (*(undefined4 *)(albw_frame + 0x78))
  #define local_54 (*(undefined1 *)(albw_frame + 0x7c))
  #define local_53 (*(undefined1 *)(albw_frame + 0x7d))
  #define local_50 (*(undefined4 *)(albw_frame + 0x80))
  #define local_3c (*(uint *)(albw_frame + 0x94))
  #define local_38 (*(int *)(albw_frame + 0x98))
  #define local_34 (*(char * *)(albw_frame + 0x9c))
  piVar1 = func_00150E40(param_1,param_2);
  iVar2 = DAT_00240ed4;
  piVar1[200] = DAT_00240ed4 + 0x54;
  *piVar1 = iVar2;
  piVar1[0x103] = 0;
  piVar1[0x104] = 0;
  iVar2 = func_0054D964((int)piVar1,0);
  piVar1[0x105] = iVar2;
  puVar3 = (undefined4 *)func_0010BAB4(0x48);
  puVar4 = (undefined4 *)0x0;
  if (puVar3 != (undefined4 *)0x0) {
    puVar4 = func_004EDC9C(puVar3);
  }
  piVar1[0x106] = (int)puVar4;
  piVar1[0x107] = param_2[7];
  piVar1[0x109] = (int)(piVar1 + 0x10b);
  piVar1[0x10a] = 0x14;
  iVar2 = DAT_00240ed8;
  piVar8 = piVar1 + 0xf4;
  *(undefined1 *)(piVar1[0x109] + 0x13) = 0;
  piVar1[0x108] = DAT_00240ee0;
  *(undefined1 *)piVar1[0x109] = 0;
  piVar1[0x108] = DAT_00240ee4;
  uVar10 = *(undefined8 *)piVar8;
  fVar11 = ALBW_AS_F32(piVar1[0xf6]);
  fVar9 = func_0054DE3C(piVar1,0,1);
  iVar5 = piVar1[0x105];
  fVar11 = fVar11 + DAT_00240ee8;
  *(int *)(iVar5 + 4) = (int)uVar10;
  *(float *)(iVar5 + 8) = fVar9 + ALBW_AS_F32(((ulonglong)uVar10 >> 0x20));
  *(float *)(iVar5 + 0xc) = fVar11;
  func_004356B4((int *)piVar1[0x105]);
  *(int *)(piVar1[0x106] + 0x18) = piVar1[0x105];
  local_3c = piVar1[0xb3];
  func_004EDAD0(piVar1[0x106],&local_3c);
  local_50 = 0xa4;
  *(undefined2 *)(*(int *)(piVar1[0x106] + 0x18) + 0x28) = 0xa4;
  *(short *)(piVar1[0x106] + 0x2c) = (short)piVar1[0x15];
  func_004A879C(*DAT_00240eec,piVar1[0x106],2);
  local_34 = s_StatueHint_00240ef0;
  local_38 = iVar2;
  iVar5 = func_00527934(piVar1[0xb4],&local_38);
  local_34 = s_StatueHint_00240ef0;
  local_38 = iVar2;
  local_b8[0] = func_00533400(iVar5,&local_38);
  local_c8 = iVar2;
  uStack_c4 = DAT_00240efc;
  iStack_c0 = iVar2;
  piVar7 = local_b8;
  local_bc = DAT_00240efc;
  local_b8[1] = 0;
  local_90 = 1;
  local_ac = 0;
  local_9c = 0;
  local_ab = 0;
  local_94 = 0;
  local_a4 = 0;
  local_b8[2] = 1;
  local_98 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_8f = 0xc4;
  piVar6 = func_002C2D00(&local_c8);
  piVar1[0x103] = (int)piVar6;
  switch(*(ushort *)(piVar1 + 0xb) & 0xff) {
  case 0:
    func_004994B0((int)(piVar1 + 0x108),DAT_00240f00,(uint)piVar7,piVar8);
    break;
  case 1:
    func_004994B0((int)(piVar1 + 0x108),DAT_00240f04,(uint)piVar7,piVar8);
    break;
  case 2:
    func_004994B0((int)(piVar1 + 0x108),DAT_00240f08,(uint)piVar7,piVar8);
    break;
  case 3:
    func_004994B0((int)(piVar1 + 0x108),DAT_00240f0c,(uint)piVar7,piVar8);
    break;
  case 4:
    func_004994B0((int)(piVar1 + 0x108),DAT_00240f10,(uint)piVar7,piVar8);
    break;
  case 5:
    func_004994B0((int)(piVar1 + 0x108),DAT_00240f14,(uint)piVar7,piVar8);
    break;
  case 6:
    func_004994B0((int)(piVar1 + 0x108),DAT_00240f18,(uint)piVar7,piVar8);
    break;
  case 7:
    func_004994B0((int)(piVar1 + 0x108),DAT_00240f1c,(uint)piVar7,piVar8);
    break;
  case 8:
    func_004994B0((int)(piVar1 + 0x108),DAT_00240f20,(uint)piVar7,piVar8);
    break;
  case 9:
    func_004994B0((int)(piVar1 + 0x108),DAT_00240f24,(uint)piVar7,piVar8);
  }
  local_7c = func_00533400(iVar5,piVar1 + 0x108);
  local_8c = iVar2;
  uStack_88 = DAT_00240efc;
  iStack_84 = iVar2;
  local_80 = DAT_00240efc;
  uStack_78 = 0;
  local_54 = 1;
  local_70 = 0;
  local_60 = 0;
  local_6f = 0;
  local_58 = 0;
  local_68 = 0;
  local_74 = 1;
  local_5c = 0;
  local_6c = 0;
  local_64 = 0;
  local_53 = 0xc4;
  piVar6 = func_002C2D00(&local_8c);
  piVar1[0x104] = (int)piVar6;
  iVar2 = piVar1[0x103];
  *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 0x40000000;
  func_004D7EB0((float *)(iVar2 + 0x80),piVar1[0x107],piVar1[0xfa],(float *)(piVar1 + 0xf4));
  iVar2 = piVar1[0x104];
  *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 0x40000000;
  func_004D7EB0((float *)(iVar2 + 0x80),piVar1[0x107],piVar1[0xfa],(float *)(piVar1 + 0xf4));
  func_004CEAF0(piVar1[0x103]);
  func_004CEAF0(piVar1[0x104]);
  return piVar1;
}

