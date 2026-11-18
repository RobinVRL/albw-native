#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115CE4(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_0014E4B0(int param_1,uint param_2);
extern int func_0014EEB8(int param_1,undefined4 *param_2,undefined4 param_3,float fparam_0);
extern int func_004356B4(int *param_1);
extern int func_004CEAF0(int param_1);
extern int func_004D7EB0(float *param_1,uint param_2,uint param_3,float *param_4);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_0051E5F8(int param_1,float *param_2,undefined4 param_3,float fparam_0,float fparam_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_006615C4(undefined4 *param_1,undefined1 param_2);
extern float DAT_002890ec;
extern int *DAT_002890f0;
extern undefined4 DAT_002890f4;
extern float DAT_002890f8;
extern float DAT_002890fc;
extern int *DAT_00289100;
extern float *DAT_00289104;
extern undefined4 DAT_00289108;

// USA 00288EAC <- EU 00288ED4 (Ghidra, non-matching)
// GLOBAL DAT_002890ec float
// GLOBAL DAT_002890f0 int *
// GLOBAL DAT_002890f4 undefined4
// GLOBAL DAT_002890f8 float
// GLOBAL DAT_002890fc float
// GLOBAL DAT_00289100 int *
// GLOBAL DAT_00289104 float *
// GLOBAL DAT_00289108 undefined4

void func_00288EAC(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fparam_0;
  undefined4 uVar7;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define local_74 (*(float *)(albw_frame + 0xc))
  #define fStack_70 (*(float *)(albw_frame + 0x10))
  #define local_6c (*(undefined4 *)(albw_frame + 0x14))
  #define local_64 (*(float *)(albw_frame + 0x1c))
  #define uStack_60 (*(undefined4 *)(albw_frame + 0x20))
  #define uStack_5c (*(undefined4 *)(albw_frame + 0x24))
  #define afStack_54 ((float *)(albw_frame + 0x2c))
  #define afStack_30 ((float *)(albw_frame + 0x50))
  piVar1 = DAT_002890f0;
  fparam_0 = DAT_002890ec;
  *(undefined4 *)(param_1 + 0x464) = 1;
  *(float *)(param_1 + 0x468) = fparam_0;
  *(undefined4 *)(param_1 + 0x460) = 0;
  *(undefined1 *)(param_1 + 0x484) = 0;
  iVar2 = func_0052FBA0(*piVar1 + 0x3dbbc,*(uint *)(param_1 + 0x50));
  fVar6 = DAT_002890f8;
  uVar7 = DAT_002890f4;
  if (iVar2 == 0) {
    iVar2 = func_0052FBA0(*piVar1 + 0x3dbbc,*(uint *)(param_1 + 0x50));
    if (iVar2 == 0) {
      *(undefined1 *)(param_1 + 0x2d7) = 1;
    }
    else {
      func_006615C4((undefined4 *)(param_1 + 0x40c),2);
    }
  }
  else {
    func_004D80A4(&fStack_70,*(uint *)(iVar2 + 1000),fparam_0);
    local_6c = uVar7;
    func_0051E5F8(*DAT_00289100,afStack_54,&fStack_70,fparam_0,DAT_002890fc);
    local_64 = *(float *)(param_1 + 0x3d0);
    uStack_60 = *(undefined4 *)(param_1 + 0x3d4);
    uStack_5c = *(undefined4 *)(param_1 + 0x3d8);
    func_00115CE4(afStack_30,afStack_54,DAT_00289104);
    uVar3 = *(undefined4 *)(iVar2 + 0x3d0);
    uVar4 = *(undefined4 *)(iVar2 + 0x3d8);
    fVar5 = *(float *)(iVar2 + 0x3d4) + fVar6;
    *(undefined4 *)(param_1 + 0x368) = uVar3;
    *(float *)(param_1 + 0x36c) = fVar5;
    *(undefined4 *)(param_1 + 0x370) = uVar4;
    *(undefined4 *)(param_1 + 0x3d0) = uVar3;
    *(float *)(param_1 + 0x3d4) = fVar5;
    *(undefined4 *)(param_1 + 0x3d8) = uVar4;
    func_00115C54((float *)(param_1 + 0x3d0),afStack_30,&local_64);
    func_0014E4B0(param_1,*(uint *)(param_1 + 1000));
    uVar3 = DAT_00289108;
    if (*(int *)(param_1 + 1000) + 0x20000000U >> 0x1e == 2) {
      *(float *)(param_1 + 0x47c) = fVar6;
    }
    else {
      *(undefined4 *)(param_1 + 0x47c) = uVar7;
    }
    iVar2 = func_0014EEB8(param_1,(undefined4 *)(param_1 + 0x478),uVar3,fVar6);
    if (iVar2 != 0) {
      *(undefined1 *)(param_1 + 0x484) = 1;
    }
  }
  iVar2 = *(int *)(param_1 + 0x430);
  func_004D80A4((float *)(iVar2 + 0x24),*(uint *)(param_1 + 1000),fparam_0);
  *(undefined4 *)(iVar2 + 0x28) = uVar7;
  iVar2 = *(int *)(param_1 + 0x458);
  *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 0x40000000;
  func_004D7EB0((float *)(iVar2 + 0x80),*(uint *)(param_1 + 0x45c),*(uint *)(param_1 + 1000),
                (float *)(param_1 + 0x3d0));
  func_004CEAF0(*(int *)(param_1 + 0x458));
  iVar2 = *(int *)(param_1 + 0x434);
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(param_1 + 0x3d0);
    *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(param_1 + 0x3d4);
    *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(param_1 + 0x3d8);
    func_004356B4(*(int **)(param_1 + 0x434));
  }
  func_00115D70(&local_74,(float *)(param_1 + 0x374),fVar6);
  *(float *)(param_1 + 0x3dc) = local_74;
  *(float *)(param_1 + 0x3e0) = fStack_70;
  *(undefined4 *)(param_1 + 0x3e4) = local_6c;
  return;
}

