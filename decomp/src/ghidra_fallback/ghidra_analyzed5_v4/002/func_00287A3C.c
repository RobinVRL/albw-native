#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00169688(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_0016A2FC(undefined4 *param_1,int param_2,undefined4 param_3,int param_4);
extern int func_0028765C(int param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_004356B4(int *param_1);
extern undefined4 func_004A7F00(int param_1,int param_2,uint param_3);
extern int func_004ED9C8(int param_1);
extern int func_004EDAD0(int param_1,uint *param_2);
extern int func_004EDC9C(undefined4 *param_1);
extern int func_0054D964(int param_1,uint param_2);
extern undefined DAT_0000000a;
extern float DAT_00287d14;
extern int DAT_00287d18;
extern int *DAT_00287d1c;
extern int DAT_00287d20;
extern int DAT_00287d24;
extern int DAT_00287d28;
extern undefined4 DAT_00287d2c;
extern int DAT_00287d38;
extern undefined4 DAT_00287d3c;
extern undefined4 DAT_00287d40;
extern int *DAT_00287d44;
extern char s_Float_00287d30[];

// USA 00287A3C <- EU 00287A64 (Ghidra, non-matching)
// GLOBAL DAT_0000000a undefined
// GLOBAL DAT_00287d14 float
// GLOBAL DAT_00287d18 int
// GLOBAL DAT_00287d1c int *
// GLOBAL DAT_00287d20 int
// GLOBAL DAT_00287d24 int
// GLOBAL DAT_00287d28 int
// GLOBAL DAT_00287d2c undefined4
// GLOBAL DAT_00287d38 int
// GLOBAL DAT_00287d3c undefined4
// GLOBAL DAT_00287d40 undefined4
// GLOBAL DAT_00287d44 int *
// GLOBAL s_Float_00287d30 string

int * func_00287A3C(undefined4 *param_1,uint *param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  uint unaff_r10;
  float fVar10;
  _Alignas(8) unsigned char albw_frame[0xb0];
  #define local_a4 ((uint *)(albw_frame + 0xc))
  #define local_9c (*(undefined4 * *)(albw_frame + 0x14))
  #define local_98 (*(undefined4 *)(albw_frame + 0x18))
  #define local_94 (*(float *)(albw_frame + 0x1c))
  #define uStack_90 (*(undefined4 *)(albw_frame + 0x20))
  #define local_8c (*(undefined4 *)(albw_frame + 0x24))
  #define local_88 (*(undefined4 *)(albw_frame + 0x28))
  #define local_84 (*(uint *)(albw_frame + 0x2c))
  #define local_50 (*(undefined4 *)(albw_frame + 0x60))
  #define local_4c (*(undefined1 *)(albw_frame + 0x64))
  #define local_44 (*(uint *)(albw_frame + 0x6c))
  #define local_40 (*(int *)(albw_frame + 0x70))
  #define local_3c (*(char * *)(albw_frame + 0x74))
  piVar2 = func_00150E40(param_1,param_2);
  iVar5 = DAT_00287d18;
  piVar2[200] = DAT_00287d18 + 0x54;
  *piVar2 = iVar5;
  fVar10 = DAT_00287d14;
  *(undefined1 *)((int)piVar2 + 0x415) = 0;
  piVar2[0x107] = (int)ALBW_AS_U32(fVar10);
  puVar3 = (undefined4 *)func_0010BAB4(0x48);
  puVar4 = (undefined4 *)0x0;
  if (puVar3 != (undefined4 *)0x0) {
    puVar4 = func_004EDC9C(puVar3);
  }
  piVar2[0x10a] = (int)puVar4;
  piVar9 = piVar2 + 0x10a;
  iVar5 = func_0054D964((int)piVar2,0);
  piVar1 = DAT_00287d1c;
  piVar2[0x10b] = iVar5;
  piVar2[0x10d] = 0;
  iVar5 = piVar1[5];
  piVar8 = piVar2 + 0x10b;
  piVar2[0x10e] = piVar1[4];
  piVar2[0x10f] = iVar5;
  piVar2[0x10c] = DAT_00287d20;
  iVar5 = piVar1[1];
  piVar2[0x112] = *piVar1;
  piVar2[0x113] = iVar5;
  piVar2[0x110] = DAT_00287d24;
  piVar2[0x111] = (int)piVar2;
  iVar5 = DAT_00287d28;
  *(bool *)(piVar2 + 0x105) = ALBW_AS_F32(param_2[0x11]) != fVar10;
  piVar2[0x108] = 0xb4;
  piVar2[0x107] = iVar5;
  uVar6 = param_2[4];
  piVar2[0x106] = uVar6;
  *(uint *)(piVar2[0x10b] + 0x58) = uVar6;
  *(undefined2 *)(*piVar8 + 0x28) = 0x124;
  iVar5 = *piVar8;
  *(int *)(iVar5 + 4) = piVar2[0xf4];
  *(int *)(iVar5 + 8) = piVar2[0xf5];
  *(int *)(iVar5 + 0xc) = piVar2[0xf6];
  func_004356B4((int *)*piVar8);
  iVar5 = func_0014E428((int)piVar2,0,0,0,1,0,0);
  piVar2[0x103] = iVar5;
  puVar3 = (undefined4 *)func_0010BAB4(0xa8);
  puVar4 = (undefined4 *)0x0;
  if (puVar3 != (undefined4 *)0x0) {
    puVar4 = func_0016A2FC(puVar3,1,DAT_00287d2c,1);
  }
  piVar2[0x104] = (int)puVar4;
  local_40 = DAT_00287d38;
  local_3c = s_Float_00287d30;
  func_00169688((uint *)piVar2[0x104],0,&local_40,*(int *)(piVar2[0xb4] + 0x1c8));
  func_0016A02C(piVar2[0x104],-1,(int *)0xffffffff,0);
  local_9c = &local_98;
  local_a4[1] = 3;
  piVar8 = (int *)&DAT_0000000a;
  local_50 = 10;
  local_4c = 0;
  local_a4[0] = 1;
  local_98 = 0;
  local_8c = DAT_00287d40;
  local_88 = DAT_00287d3c;
  local_84 = unaff_r10 | 0xff;
  uStack_90 = DAT_00287d3c;
  local_94 = fVar10;
  func_0016898C(piVar2[0x104],local_a4);
  iVar5 = *(int *)(piVar2[0x104] + 0x14);
  if (*(float *)(iVar5 + 8) != fVar10) {
    *(float *)(iVar5 + 8) = fVar10;
    *(undefined1 *)(iVar5 + 0x26) = 1;
  }
  *(undefined1 *)(piVar2 + 0x109) = 1;
  *(undefined1 *)((int)piVar2 + 0x425) = 0;
  *(int *)(piVar2[0x10a] + 0x18) = piVar2[0x10b];
  func_004ED9C8(*piVar9);
  local_44 = piVar2[0xb3];
  func_004EDAD0(*piVar9,&local_44);
  *(short *)(*piVar9 + 0x2c) = (short)piVar2[0x15];
  *(int **)(*piVar9 + 0x28) = piVar2 + 0x110;
  func_004A7F00(*DAT_00287d44,*piVar9,0);
  iVar5 = piVar1[2];
  iVar7 = piVar1[3];
  piVar2[0x10d] = (int)piVar2;
  piVar2[0x10e] = iVar5;
  piVar2[0x10f] = iVar7;
  func_0028765C((int)piVar2,iVar5,iVar7,piVar8);
  return piVar2;
}

