#include "ghidra_types.h"

extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern float func_00115DC8(float *param_1);
extern int func_00432F74(undefined4 *param_1);
extern int func_004356B4(int *param_1);
extern int func_004A8F40(int param_1,int *param_2,uint param_3);
extern int func_004A99FC(int param_1,int param_2,undefined4 param_3,uint param_4,int *param_5);
extern int func_004A9ADC(int param_1,undefined4 param_2,uint param_3,int *param_4);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_0068B2DC(float *param_1,float fparam_0,float fparam_1,float fparam_2,float fparam_3, float fparam_4,float fparam_5);
extern float DAT_004a9efc;
extern int *DAT_004a9f00;
extern int *DAT_004a9f04;
extern int DAT_004a9f08;
extern uint DAT_004a9f0c;
extern int DAT_004a9f10;

// USA 004A9BDC <- EU 004A9BB4 (Ghidra, non-matching)
// GLOBAL DAT_004a9efc float
// GLOBAL DAT_004a9f00 int *
// GLOBAL DAT_004a9f04 int *
// GLOBAL DAT_004a9f08 int
// GLOBAL DAT_004a9f0c uint
// GLOBAL DAT_004a9f10 int

uint func_004A9BDC(int param_1,uint *param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  uint unaff_r8;
  int iVar8;
  float fparam_0;
  float fVar9;
  float fVar10;
  ulonglong uVar11;
  _Alignas(8) unsigned char albw_frame[0x100];
  #define iStack_fc (*(int *)(albw_frame + 0x4))
  #define local_f8 (*(float *)(albw_frame + 0x8))
  #define local_f4 (*(undefined4 *)(albw_frame + 0xc))
  #define local_f0 (*(undefined4 *)(albw_frame + 0x10))
  #define local_ec (*(undefined4 *)(albw_frame + 0x14))
  #define local_e8 (*(undefined4 *)(albw_frame + 0x18))
  #define local_e4 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_e0 (*(undefined4 *)(albw_frame + 0x20))
  #define local_dc (*(undefined4 *)(albw_frame + 0x24))
  #define local_d8 (*(undefined4 *)(albw_frame + 0x28))
  #define local_d4 (*(undefined2 *)(albw_frame + 0x2c))
  #define local_d0 (*(undefined4 *)(albw_frame + 0x30))
  #define local_a4 (*(float *)(albw_frame + 0x5c))
  #define local_a0 (*(float * *)(albw_frame + 0x60))
  #define local_9c (*(undefined4 *)(albw_frame + 0x64))
  #define local_98 (*(undefined4 *)(albw_frame + 0x68))
  #define local_94 (*(undefined4 *)(albw_frame + 0x6c))
  #define uStack_90 (*(uint *)(albw_frame + 0x70))
  #define local_8c (*(undefined4 *)(albw_frame + 0x74))
  #define local_88 (*(undefined4 *)(albw_frame + 0x78))
  #define local_84 (*(int * *)(albw_frame + 0x7c))
  #define local_80 (*(undefined1 *)(albw_frame + 0x80))
  #define local_70 (*(float *)(albw_frame + 0x90))
  #define local_6c (*(float *)(albw_frame + 0x94))
  #define fStack_68 (*(float *)(albw_frame + 0x98))
  #define afStack_58 ((float *)(albw_frame + 0xa8))
  #define afStack_4c ((float *)(albw_frame + 0xb4))
  #define local_30 (*(int *)(albw_frame + 0xd0))
  #define puStack_2c (*(uint * *)(albw_frame + 0xd4))
  #define uStack_28 (*(uint *)(albw_frame + 0xd8))
  uVar11 = (ulonglong)(uint)ALBW_AS_U32(DAT_004a9efc);
  local_30 = param_1;
  puStack_2c = param_2;
  uStack_28 = param_3;
  func_0068B2DC(afStack_58,DAT_004a9efc,DAT_004a9efc,DAT_004a9efc,DAT_004a9efc,DAT_004a9efc,
                DAT_004a9efc);
  uVar7 = 0;
  bVar1 = false;
  iVar8 = 0;
  iVar2 = func_0052FBA0(*DAT_004a9f00 + 0x3dbbc,param_2[3]);
  if ((iVar2 == 0) || (iVar2 = (int)*(short *)(iVar2 + 0x54), iVar2 < 0)) {
    iVar2 = (int)*(short *)(*(int *)(*DAT_004a9f04 + 0x38) + 0x15b40);
  }
  if ((iVar2 < 0) ||
     (iVar8 = *(int *)(*DAT_004a9f04 + 0x38) + iVar2 * DAT_004a9f08 * 4 + 0x1c3c, iVar8 == 0)) {
    bVar1 = true;
  }
  uStack_90 = unaff_r8 & 0xffff0000 | DAT_004a9f0c;
  local_a0 = (float *)0x0;
  local_8c = 0xff;
  local_9c = 0;
  local_98 = 0;
  local_94 = 0;
  local_88 = 0;
  local_84 = (int *)0x0;
  local_80 = 0;
  func_0010E3C4((uint *)&local_a0,param_2,0x24);
  local_70 = *(float *)((int)local_84 + 4);
  local_6c = *(float *)((int)local_84 + 8);
  fStack_68 = *(float *)((int)local_84 + 0xc);
  func_00115C70(&local_70,&local_70,(float *)((int)local_84 + 0x10));
  fparam_0 = ALBW_AS_F32(uVar11);
  uVar3 = (uint)*(ushort *)((int)local_84 + 0x54);
  piVar4 = (int *)uVar3;
  if (uVar3 == 6) {
    piVar4 = local_84;
  }
  if (uVar3 == 6) {
    fparam_0 = *(float *)((int)piVar4 + 0x58);
  }
  else {
    piVar5 = piVar4;
    if (piVar4 == (int *)0x7) {
      piVar5 = local_84;
    }
    if (piVar4 == (int *)0x7) {
      fparam_0 = *(float *)((int)piVar5 + 100);
    }
  }
  func_00432F74(&iStack_fc);
  uVar3 = param_2[7];
  local_f8 = *(float *)(uVar3 + 0x10);
  local_f4 = *(undefined4 *)(uVar3 + 0x14);
  local_f0 = *(undefined4 *)(uVar3 + 0x18);
  uVar3 = param_2[7];
  local_e0 = *(undefined4 *)(uVar3 + 0x10);
  local_dc = *(undefined4 *)(uVar3 + 0x14);
  local_d8 = *(undefined4 *)(uVar3 + 0x18);
  local_ec = *(undefined4 *)(uVar3 + 0x10);
  local_e8 = *(undefined4 *)(uVar3 + 0x14);
  local_e4 = *(undefined4 *)(uVar3 + 0x18);
  local_d4 = *(undefined2 *)(param_2[7] + 0x28);
  local_d0 = *(undefined4 *)(param_2[7] + 0x2c);
  local_a4 = fparam_0;
  func_004356B4(&iStack_fc);
  fVar9 = SQRT(local_70 * local_70 + local_6c * local_6c + fStack_68 * fStack_68);
  local_84 = &iStack_fc;
  func_00115DC8(&local_70);
  func_00115D70(&local_70,&local_70,fparam_0);
  if (DAT_004a9f10 < (int)ALBW_AS_U32(fVar9)) {
    uVar3 = func_004A8F40(local_30,(int *)param_2,param_3);
  }
  else {
    if (bVar1) {
      while( true ) {
        uVar3 = 0;
        do {
          if ((param_3 & 1 << (uVar3 & 0xff)) != 0) {
            uVar6 = func_004A9ADC(local_30,afStack_58,uVar3,(int *)&local_a0);
            uVar7 = uVar7 | uVar6;
          }
          uVar3 = uVar3 + 1;
        } while ((int)uVar3 < 0xf);
        if (uVar7 != 0) break;
        if (fVar9 <= ALBW_AS_F32(uVar11)) {
          return 0;
        }
        fVar10 = ALBW_AS_F32(uVar11) + fparam_0;
        uVar11 = (ulonglong)(uint)ALBW_AS_U32(fVar10);
        if (fVar10 < fVar9) {
          func_00115C54(&local_f8,&local_f8,&local_70);
        }
        else {
          uVar3 = param_2[7];
          local_f0 = *(undefined4 *)(uVar3 + 0xc);
          local_f8 = *(float *)(uVar3 + 4);
          local_f4 = *(undefined4 *)(uVar3 + 8);
        }
        func_004356B4(&iStack_fc);
      }
LAB_004a9ecc:
      if (local_a0 != (float *)0x0) {
        func_00115C54(local_a0,local_a0,afStack_58);
        func_00115C54(local_a0,local_a0,afStack_4c);
        return uVar7;
      }
      return uVar7;
    }
    while( true ) {
      uVar3 = 0;
      do {
        if ((param_3 & 1 << (uVar3 & 0xff)) != 0) {
          uVar6 = func_004A99FC(local_30,iVar8,afStack_58,uVar3,(int *)&local_a0);
          uVar7 = uVar7 | uVar6;
        }
        uVar3 = uVar3 + 1;
      } while ((int)uVar3 < 0xf);
      if (uVar7 != 0) goto LAB_004a9ecc;
      uVar3 = 0;
      if (fVar9 <= ALBW_AS_F32(uVar11)) break;
      fVar10 = ALBW_AS_F32(uVar11) + fparam_0;
      uVar11 = (ulonglong)(uint)ALBW_AS_U32(fVar10);
      if (fVar10 < fVar9) {
        func_00115C54(&local_f8,&local_f8,&local_70);
      }
      else {
        uVar3 = param_2[7];
        local_f0 = *(undefined4 *)(uVar3 + 0xc);
        local_f8 = *(float *)(uVar3 + 4);
        local_f4 = *(undefined4 *)(uVar3 + 8);
      }
      func_004356B4(&iStack_fc);
    }
  }
  return uVar3;
}

