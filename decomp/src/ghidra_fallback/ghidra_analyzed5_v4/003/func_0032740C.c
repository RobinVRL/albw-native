#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_001663BC(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4, undefined1 param_5);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00169608(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_0016A2FC(undefined4 *param_1,int param_2,undefined4 param_3,int param_4);
extern int func_00324964(int param_1);
extern int func_003249B4(int param_1);
extern int func_003249E0(int param_1,uint param_2);
extern int func_00324A30(undefined4 *param_1,uint *param_2);
extern int func_0032651C(int param_1,undefined4 param_2);
extern int func_00326DAC(int param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_003C30DC(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined1 param_4, float fparam_0,float fparam_1);
extern undefined4 func_004A7F00(int param_1,int param_2,uint param_3);
extern int func_004CEA18(int param_1,int param_2,uint param_3);
extern int func_004ECF6C(int param_1);
extern int func_004ED9C8(int param_1);
extern int func_004EDAD0(int param_1,uint *param_2);
extern int func_004EDC9C(undefined4 *param_1);
extern float func_0054DE3C(int param_1,uint param_2,int param_3);
extern int func_00588BF0(int param_1,int param_2);
extern int func_00588C14(int param_1,int param_2,uint param_3);
extern undefined DAT_0000000a;
extern int DAT_0032776c;
extern int *DAT_00327770;
extern int DAT_00327774;
extern int DAT_00327778;
extern undefined DAT_0032777c;
extern undefined4 *DAT_0032778c;
extern int DAT_00327790;
extern float DAT_00327794;
extern float DAT_00327798;
extern undefined4 DAT_0032779c;
extern float DAT_003277a0;
extern undefined4 DAT_003277a4;
extern undefined4 DAT_003277a8;
extern int *DAT_003277ac;
extern float DAT_00327928;

// USA 0032740C <- EU 003273E8 (Ghidra, non-matching)
// GLOBAL DAT_0000000a undefined
// GLOBAL DAT_0032776c int
// GLOBAL DAT_00327770 int *
// GLOBAL DAT_00327774 int
// GLOBAL DAT_00327778 int
// GLOBAL DAT_0032777c undefined
// GLOBAL DAT_0032778c undefined4 *
// GLOBAL DAT_00327790 int
// GLOBAL DAT_00327794 float
// GLOBAL DAT_00327798 float
// GLOBAL DAT_0032779c undefined4
// GLOBAL DAT_003277a0 float
// GLOBAL DAT_003277a4 undefined4
// GLOBAL DAT_003277a8 undefined4
// GLOBAL DAT_003277ac int *
// GLOBAL DAT_00327928 float

undefined4 * func_0032740C(undefined4 *param_1,uint *param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int extraout_r1;
  int extraout_r1_00;
  undefined4 uVar11;
  int *piVar12;
  int *piVar13;
  int iVar14;
  bool bVar15;
  float fVar16;
  float fVar17;
  _Alignas(8) unsigned char albw_frame[0xb0];
  #define local_ac ((uint *)(albw_frame + 0x4))
  #define local_a4 (*(undefined4 * *)(albw_frame + 0xc))
  #define local_a0 (*(undefined4 *)(albw_frame + 0x10))
  #define local_9c (*(float *)(albw_frame + 0x14))
  #define iStack_98 (*(int *)(albw_frame + 0x18))
  #define local_94 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_90 (*(int *)(albw_frame + 0x20))
  #define local_8c (*(uint *)(albw_frame + 0x24))
  #define local_58 (*(undefined4 *)(albw_frame + 0x58))
  #define local_54 (*(undefined1 *)(albw_frame + 0x5c))
  #define local_50 ((uint *)(albw_frame + 0x60))
  #define iStack_48 (*(int *)(albw_frame + 0x68))
  #define iStack_44 (*(int *)(albw_frame + 0x6c))
  #define local_40 (*(int *)(albw_frame + 0x70))
  #define local_3c (*(undefined * *)(albw_frame + 0x74))
  piVar3 = (int *)func_00324A30(param_1,param_2);
  iVar14 = DAT_0032776c;
  piVar3[200] = DAT_0032776c + 0x5c;
  *piVar3 = iVar14;
  *(undefined1 *)((int)piVar3 + 0x475) = 0;
  iVar14 = DAT_00327774;
  *(bool *)((int)piVar3 + 0x476) = (*(uint *)(*DAT_00327770 + 0x2b4) & 8) != 0;
  *(undefined1 *)((int)piVar3 + 0x477) = 0;
  *(undefined1 *)(piVar3 + 0x11e) = 0;
  *(undefined1 *)((int)piVar3 + 0x479) = 0;
  *(undefined1 *)((int)piVar3 + 0x47a) = 0;
  *(undefined1 *)(piVar3 + 0x123) = 4;
  piVar3[0x124] = 0;
  piVar3[0x125] = 0;
  piVar3[0x126] = iVar14;
  puVar4 = (undefined4 *)func_0010BAB4(0x48);
  puVar5 = (undefined4 *)0x0;
  if (puVar4 != (undefined4 *)0x0) {
    puVar5 = func_004EDC9C(puVar4);
  }
  piVar3[0x127] = (int)puVar5;
  puVar5 = (undefined4 *)func_0010BAB4(0x108);
  iVar1 = DAT_00327778;
  iVar6 = 0;
  if (puVar5 != (undefined4 *)0x0) {
    local_3c = &DAT_0032777c;
    local_40 = DAT_00327778;
    local_50[0] = piVar3[0xb3];
    iVar6 = func_001663BC(puVar5,&local_40,local_50[0],7,1);
  }
  puVar5 = DAT_0032778c;
  piVar3[0x128] = iVar6;
  piVar3[0x129] = 0;
  piVar3[299] = 0;
  fVar17 = DAT_00327794;
  iVar6 = puVar5[3];
  piVar3[300] = puVar5[2];
  piVar3[0x12d] = iVar6;
  fVar16 = DAT_00327798;
  piVar3[0x12a] = DAT_00327790;
  puVar4 = func_003C30DC(piVar3 + 0x12e,piVar3,piVar3 + 0xf4,0,fVar17,fVar16);
  fVar17 = DAT_003277a0;
  piVar3 = (int *)0x0;
  *puVar4 = DAT_0032779c;
  *(undefined2 *)(puVar4 + 0x1f) = 0;
  puVar4[0x20] = 0;
  puVar7 = puVar4 + -0x12e;
  if (param_3 == 0) {
    uVar8 = func_0014E428((int)puVar7,0,0,0,1,0,0);
    puVar4[-10] = uVar8;
  }
  else {
    uVar8 = func_0014E428((int)puVar7,1,0,0,1,0,0);
    puVar4[-10] = uVar8;
    puVar9 = (undefined4 *)func_0010BAB4(0xa8);
    puVar10 = (undefined4 *)0x0;
    if (puVar9 != (undefined4 *)0x0) {
      puVar10 = func_0016A2FC(puVar9,1,DAT_003277a4,1);
    }
    puVar4[-9] = puVar10;
    iStack_48 = iVar1;
    iStack_44 = param_3;
    func_00169608((uint *)puVar4[-9],0,&iStack_48,*(int *)(puVar4[-0x7a] + 0x1c8));
    func_0016A02C(puVar4[-9],-1,(int *)0xffffffff,0);
    local_a4 = &local_a0;
    local_ac[1] = 3;
    piVar3 = (int *)&DAT_0000000a;
    local_58 = 10;
    local_54 = 0;
    local_ac[0] = 1;
    local_a0 = 0;
    local_94 = DAT_003277a8;
    local_8c = (uint)(puVar4 + -9) | 0xff;
    local_9c = fVar17;
    iStack_98 = iVar14;
    local_90 = iVar14;
    func_0016898C(puVar4[-9],local_ac);
  }
  puVar4[-0x33] = puVar4 + -4;
  func_003249E0((int)puVar7,0);
  func_00324964((int)puVar7);
  piVar12 = puVar4 + -0x2b;
  if (puVar4[-0x2b] != 0) {
    fVar16 = func_0054DE3C(puVar7,0,1);
    puVar4[-8] = ALBW_AS_U32(fVar16);
  }
  *(undefined2 *)(puVar4[-0x2b] + 0x28) = 0x60;
  *(uint *)(*piVar12 + 0x2c) = *(uint *)(*piVar12 + 0x2c) & 0xfffff8ff | 0x200;
  *(uint *)(*piVar12 + 0x2c) = *(uint *)(*piVar12 + 0x2c) & 0xffffe7ff | 0x1000;
  *(uint *)(*piVar12 + 0x2c) = *(uint *)(*piVar12 + 0x2c) | 0x80;
  piVar13 = puVar4 + -7;
  *(int *)(puVar4[-7] + 0x18) = *piVar12;
  local_50[0] = puVar4[-0x7b];
  func_004EDAD0(puVar4[-7],local_50);
  func_004ED9C8(*piVar13);
  uVar8 = 1;
  *(undefined2 *)(*piVar13 + 0x2c) = *(undefined2 *)(puVar4 + -0x119);
  func_004A7F00(*DAT_003277ac,*piVar13,1);
  iVar14 = 4;
  bVar15 = *(short *)((int)puVar4 + -0x482) != 0;
  *(bool *)((int)puVar4 + -0x3f) = *(short *)(puVar4 + -0x122) == 1;
  bVar2 = func_00588BF0((int)puVar7,0);
  if (*(short *)((int)puVar4 + -0x486) == 1) {
    iVar14 = 5;
    func_003249B4((int)puVar7);
  }
  else if (*(short *)((int)puVar4 + -0x486) == 2) {
    iVar14 = 6;
  }
  if (*(char *)((int)puVar4 + -0x42) == '\x01') {
    iVar14 = 7;
  }
  else if (iVar14 == 4) {
    if ((bVar15 & ~bVar2) != 0) {
      iVar14 = 0;
    }
  }
  else if (bVar15 && bVar2) {
    if (iVar14 == 5) {
      func_00324964((int)puVar7);
    }
    else if (iVar14 == 6) {
      puVar4[-0x39] = ALBW_AS_U32(ALBW_AS_F32(puVar4[-0x39]) + DAT_00327928);
    }
    iVar14 = 4;
  }
  func_0032651C((int)puVar7,iVar14);
  bVar2 = func_00588BF0((int)puVar7,1);
  iVar14 = extraout_r1;
  if (bVar2) {
    *(undefined1 *)((int)puVar4 + -0x43) = 1;
    if (puVar4[-9] != 0) {
      iVar14 = *(int *)(puVar4[-9] + 0x14);
      if (*(float *)(iVar14 + 8) != fVar17) {
        *(float *)(iVar14 + 8) = fVar17;
        *(undefined1 *)(iVar14 + 0x26) = 1;
      }
    }
    func_004CEA18(puVar4[-10],0,0);
    func_004CEA18(puVar4[-10],0,1);
    uVar8 = 1;
    func_00588C14((int)puVar7,1,1);
    func_003249B4((int)puVar7);
    iVar14 = extraout_r1_00;
    if (*(char *)((int)puVar4 + -0x42) == '\x01') {
      iVar14 = *(byte *)(*DAT_00327770 + 0x2e3) + 1;
      *(char *)(*DAT_00327770 + 0x2e3) = (char)iVar14;
    }
  }
  func_00326DAC((int)puVar7,iVar14,uVar8,piVar3);
  puVar4[-5] = 0;
  uVar8 = *puVar5;
  uVar11 = puVar5[1];
  puVar4[-3] = puVar7;
  puVar4[-2] = uVar8;
  puVar4[-1] = uVar11;
  func_004ECF6C((int)puVar7);
  if (*(short *)((int)puVar4 + -0x48a) != 2) {
    puVar4[-0x76] = puVar4[-0x76] | 9;
  }
  if (*(short *)((int)puVar4 + -0x486) == 1) {
    *(undefined1 *)((int)puVar4 + -0x3e) = 1;
  }
  return puVar7;
}

