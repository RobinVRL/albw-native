#include "ghidra_types.h"

extern int func_00110848(int param_1);
extern int func_00111A64(uint *param_1);
extern float func_00115DC8(float *param_1);
extern int func_00115E10(float *param_1,float *param_2,float *param_3);
extern float func_001A786C(int param_1,int param_2);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004A2E80(int param_1,float *param_2,float fparam_0);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_004D8240(float *param_1,uint param_2,uint param_3,float fparam_0);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int *piRam001a73b8;
extern undefined4 DAT_001a73b4;
extern float DAT_001a7d64;
extern undefined4 DAT_001a7d68;
extern int DAT_001a7d6c;
extern float DAT_001a7d70;
extern char s_Breath_001a73bc[];

// USA 001A72C4 <- EU 001A72C4 (Ghidra, non-matching)
// GLOBAL DAT_001a73b4 undefined4
// GLOBAL DAT_001a7d64 float
// GLOBAL DAT_001a7d68 undefined4
// GLOBAL DAT_001a7d6c int
// GLOBAL DAT_001a7d70 float
// GLOBAL UNK_001a73b8 int *
// GLOBAL s_Breath_001a73bc string

void func_001A72C4(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  float fVar6;
  undefined8 uVar7;
  float fparam_0;
  undefined4 uVar8;
  undefined8 uVar9;
  _Alignas(8) unsigned char albw_frame[0xb0];
  #define fStack_b0 (*(float *)(albw_frame + 0x0))
  #define fStack_ac (*(float *)(albw_frame + 0x4))
  #define fStack_a8 (*(float *)(albw_frame + 0x8))
  #define fStack_a0 (*(float *)(albw_frame + 0x10))
  #define fStack_9c (*(float *)(albw_frame + 0x14))
  #define fStack_98 (*(float *)(albw_frame + 0x18))
  #define uStack_94 (*(undefined4 *)(albw_frame + 0x1c))
  #define uStack_90 (*(undefined4 *)(albw_frame + 0x20))
  #define uStack_8c (*(undefined4 *)(albw_frame + 0x24))
  #define fStack_88 (*(float *)(albw_frame + 0x28))
  #define uStack_84 (*(undefined4 *)(albw_frame + 0x2c))
  #define uStack_80 (*(undefined4 *)(albw_frame + 0x30))
  #define uStack_7c (*(undefined4 *)(albw_frame + 0x34))
  #define fStack_78 (*(float *)(albw_frame + 0x38))
  #define uStack_74 (*(undefined4 *)(albw_frame + 0x3c))
  #define fStack_60 (*(float *)(albw_frame + 0x50))
  #define uStack_5c (*(undefined4 *)(albw_frame + 0x54))
  #define uStack_58 (*(undefined4 *)(albw_frame + 0x58))
  #define fStack_54 (*(float *)(albw_frame + 0x5c))
  #define uStack_50 (*(undefined4 *)(albw_frame + 0x60))
  #define uStack_4c (*(undefined4 *)(albw_frame + 0x64))
  #define fStack_40 (*(float *)(albw_frame + 0x70))
  #define fStack_3c (*(float *)(albw_frame + 0x74))
  #define fStack_38 (*(float *)(albw_frame + 0x78))
  #define fStack_34 (*(float *)(albw_frame + 0x7c))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x80))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x84))
  #define iStack_18 (*(int *)(albw_frame + 0x98))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0x9c))
  *(undefined1 *)(*(int *)(param_1 + 0x8e4) + 0x61) = 1;
  func_001A786C(param_1,0);
  *(undefined4 *)(param_1 + 0x928) = DAT_001a73b4;
  func_004FABDC(param_1,5,0xffffffff,0);
  if (*(short *)(param_1 + 0x30) == 0) {
    uVar1 = func_00111A64((uint *)(*piRam001a73b8 + 0x660));
    iVar2 = (int)((ulonglong)uVar1 * 0x14 >> 0x20) + 100;
  }
  else {
    uVar1 = func_00111A64((uint *)(*piRam001a73b8 + 0x660));
    iVar2 = (int)((ulonglong)uVar1 * 0x3c >> 0x20) + 0x78;
  }
  *(int *)(param_1 + 0x92c) = iVar2;
  piVar5 = (int *)(param_1 + 0x960);
  if (*(int *)(param_1 + 0x344) == 0) {
    *piVar5 = 0;
    *(undefined4 *)(param_1 + 0x964) = 0;
  }
  else {
    iVar2 = *piVar5;
    if ((iVar2 != 0) && (*(int *)(iVar2 + 0x1c) == *(int *)(param_1 + 0x964))) {
      func_00110848(iVar2);
    }
    func_004A1B9C(&iStack_18,*(int *)(param_1 + 0x344),(uint *)s_Breath_001a73bc);
    *piVar5 = iStack_18;
    *(undefined4 *)(param_1 + 0x964) = uStack_14;
  }
  piVar5 = (int *)(param_1 + 0x960);
  uVar7 = CONCAT44(DAT_001a7d64,DAT_001a7d68);
  iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x40c) + 0x24) + 0x14) +
          *(int *)(param_1 + 0x930) * 0x30;
  uVar8 = *(undefined4 *)(iVar2 + 0xc);
  uVar9 = CONCAT44(*(undefined4 *)(iVar2 + 0x2c),*(undefined4 *)(iVar2 + 0x1c));
  if (*(char *)(param_1 + 0x937) == '\0') {
    func_004D80A4(&fStack_b0,*(uint *)(param_1 + 1000),DAT_001a7d64);
    fStack_ac = ALBW_AS_F32(uVar7);
  }
  else {
    func_004D8240(&fStack_b0,*(uint *)(param_1 + 0x91c),*(uint *)(param_1 + 1000),DAT_001a7d64);
  }
  fparam_0 = ALBW_AS_F32(((ulonglong)uVar7 >> 0x20));
  if ((*piVar5 != 0) && (*(int *)(*piVar5 + 0x1c) == *(int *)(param_1 + 0x964))) {
    fStack_38 = ALBW_AS_F32(uVar7);
    fVar6 = fStack_b0 * fStack_38 + fStack_ac * fparam_0 + fStack_a8 * fStack_38;
    if (fVar6 <= fStack_38) {
      fVar6 = -fVar6;
    }
    fStack_40 = fStack_38;
    fStack_3c = fparam_0;
    if (DAT_001a7d6c < (int)ALBW_AS_U32(fVar6)) {
      fStack_40 = fparam_0;
      fStack_3c = fStack_38;
    }
    func_00115E10(&fStack_34,&fStack_40,&fStack_b0);
    fStack_54 = fStack_34;
    uStack_50 = uStack_30;
    uStack_4c = uStack_2c;
    func_00115DC8(&fStack_54);
    func_00115E10(&fStack_34,&fStack_b0,&fStack_54);
    fStack_60 = fStack_34;
    uStack_5c = uStack_30;
    uStack_58 = uStack_2c;
    func_00115DC8(&fStack_60);
    fStack_a0 = fStack_54;
    uStack_90 = uStack_50;
    uStack_80 = uStack_4c;
    fStack_9c = fStack_60;
    uStack_8c = uStack_5c;
    uStack_7c = uStack_58;
    fStack_98 = fStack_b0;
    fStack_88 = fStack_ac;
    fStack_78 = fStack_a8;
    uStack_84 = (undefined4)uVar9;
    uStack_74 = (undefined4)((ulonglong)uVar9 >> 0x20);
    uStack_94 = uVar8;
    func_004A2E80(*piVar5,&fStack_a0,fparam_0);
  }
  iVar2 = *piVar5;
  iVar3 = 0;
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0x1c) == *(int *)(param_1 + 0x964))) {
    if ((*(uint *)(iVar2 + 0x3c) & 4) == 0 && (*(uint *)(iVar2 + 0x3c) & 0x40) == 0) {
      iVar4 = *(int *)(iVar2 + 0x20);
      if ((iVar4 == 0) || (*(int *)(iVar2 + 0x24) != *(int *)(iVar4 + 0xc))) goto LAB_001a7d40;
      if (*(int *)(iVar4 + 4) < 1) {
        return;
      }
    }
    iVar3 = *(int *)(iVar2 + 0x20);
  }
LAB_001a7d40:
  if (iVar3 != 0) {
    *(float *)(iVar3 + 0x240) = *(float *)(param_1 + 0x95c) * DAT_001a7d70;
  }
  return;
}

