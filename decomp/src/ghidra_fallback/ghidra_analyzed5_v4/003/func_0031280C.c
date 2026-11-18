#include "ghidra_types.h"

extern int func_001157FC(float *param_1,float *param_2,float *param_3);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_001E8268(int param_1,int *param_2,undefined4 *param_3,undefined4 *param_4);
extern int func_004904CC(float fparam_0,float fparam_1);
extern int func_00491E80(float *param_1,uint param_2,uint param_3,uint param_4);
extern int func_004BCAE0(int param_1,int param_2);
extern int func_00588F08(int param_1);
extern int func_00588F14(int param_1);
extern int *DAT_00312b08;
extern float DAT_00312b0c;
extern float DAT_00312b10;
extern float DAT_00312b14;
extern float DAT_00312b18;
extern float DAT_00312b1c;
extern float DAT_00312b20;
extern float DAT_00312b24;
extern int DAT_00312b28;
extern float DAT_00312b2c;

// USA 0031280C <- EU 003127E8 (Ghidra, non-matching)
// GLOBAL DAT_00312b08 int *
// GLOBAL DAT_00312b0c float
// GLOBAL DAT_00312b10 float
// GLOBAL DAT_00312b14 float
// GLOBAL DAT_00312b18 float
// GLOBAL DAT_00312b1c float
// GLOBAL DAT_00312b20 float
// GLOBAL DAT_00312b24 float
// GLOBAL DAT_00312b28 int
// GLOBAL DAT_00312b2c float

/* WARNING: Removing unreachable block (ram,0x00312898) */
/* WARNING: Removing unreachable block (ram,0x0031289c) */
/* WARNING: Removing unreachable block (ram,0x003128ac) */
/* WARNING: Removing unreachable block (ram,0x00312a28) */
/* WARNING: Removing unreachable block (ram,0x00312a2c) */
/* WARNING: Removing unreachable block (ram,0x00312a30) */
/* WARNING: Removing unreachable block (ram,0x00312a40) */

void func_0031280C(int param_1)

{
  bool bVar1;
  float *pfVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  _Alignas(8) unsigned char albw_frame[0xd0];
  #define local_d0 (*(float *)(albw_frame + 0x0))
  #define local_cc (*(float *)(albw_frame + 0x4))
  #define local_c8 (*(float *)(albw_frame + 0x8))
  #define local_c4 (*(float *)(albw_frame + 0xc))
  #define fStack_c0 (*(float *)(albw_frame + 0x10))
  #define local_bc (*(float *)(albw_frame + 0x14))
  #define local_b8 (*(float *)(albw_frame + 0x18))
  #define local_b4 (*(float *)(albw_frame + 0x1c))
  #define local_b0 (*(float *)(albw_frame + 0x20))
  #define local_ac (*(undefined4 *)(albw_frame + 0x24))
  #define local_a8 (*(float *)(albw_frame + 0x28))
  #define local_a4 (*(float *)(albw_frame + 0x2c))
  #define local_a0 (*(float *)(albw_frame + 0x30))
  #define local_9c (*(undefined4 *)(albw_frame + 0x34))
  #define local_98 (*(float *)(albw_frame + 0x38))
  #define local_94 (*(float *)(albw_frame + 0x3c))
  #define local_90 (*(float *)(albw_frame + 0x40))
  #define local_8c (*(undefined4 *)(albw_frame + 0x44))
  #define afStack_88 ((float *)(albw_frame + 0x48))
  #define local_7c (*(float *)(albw_frame + 0x54))
  #define local_6c (*(undefined4 *)(albw_frame + 0x64))
  #define local_5c (*(undefined4 *)(albw_frame + 0x74))
  #define local_54 (*(float *)(albw_frame + 0x7c))
  #define fStack_50 (*(float *)(albw_frame + 0x80))
  #define local_4c (*(float *)(albw_frame + 0x84))
  #define local_48 (*(float *)(albw_frame + 0x88))
  #define local_44 (*(undefined4 *)(albw_frame + 0x8c))
  #define local_40 (*(undefined4 *)(albw_frame + 0x90))
  fVar11 = DAT_00312b1c;
  fVar10 = DAT_00312b10;
  fVar8 = DAT_00312b0c;
  iVar5 = *DAT_00312b08;
  if (iVar5 != 0) {
    pfVar2 = (float *)(param_1 + 0xa50);
    fVar9 = *pfVar2;
    fVar6 = (DAT_00312b14 - fVar9) * DAT_00312b18;
    if (fVar6 <= DAT_00312b1c) {
      fVar6 = -fVar6;
    }
    fVar7 = DAT_00312b0c;
    if ((DAT_00312b0c <= fVar6) && (fVar7 = fVar6, DAT_00312b10 < fVar6)) {
      fVar7 = DAT_00312b10;
    }
    fVar7 = fVar9 + fVar7;
    if ((DAT_00312b14 <= fVar7) || (fVar7 < fVar9)) {
      *pfVar2 = DAT_00312b14;
    }
    else {
      *pfVar2 = fVar7;
    }
    if (*(int *)(iVar5 + 0x18) != 0) {
      func_001E8268(*(int *)(iVar5 + 0x18),(int *)(param_1 + 0xa40),(undefined4 *)(param_1 + 0xa48),
                    (undefined4 *)(param_1 + 0xa54));
    }
    if (*(short *)(param_1 + 0xa32) != 0) {
      *(short *)(param_1 + 0xa32) = *(short *)(param_1 + 0xa32) + -1;
      return;
    }
    func_004BCAE0(param_1,1);
    pfVar2 = (float *)func_00588F14(iVar5);
    local_c4 = *pfVar2;
    fStack_c0 = pfVar2[1];
    local_bc = pfVar2[2];
    pfVar2 = (float *)func_00588F08(iVar5);
    local_54 = *pfVar2;
    fStack_50 = pfVar2[1];
    local_4c = pfVar2[2];
    func_00115C70(&local_d0,&local_54,&local_c4);
    uVar3 = func_004904CC(local_d0,local_c8);
    uVar4 = func_004904CC(local_cc,SQRT(local_d0 * local_d0 + local_c8 * local_c8));
    *(uint *)(param_1 + 0x828) = uVar4;
    *(uint *)(param_1 + 1000) = uVar3 + 0x80000000;
    *(float *)(param_1 + 0x3d0) = local_c4;
    *(float *)(param_1 + 0x3d4) = fStack_c0;
    *(float *)(param_1 + 0x3d8) = local_bc;
    func_00491E80(afStack_88,uVar4,uVar3,0);
    pfVar2 = (float *)(param_1 + 0xa2c);
    fVar9 = *pfVar2;
    fVar6 = (DAT_00312b20 - fVar9) * DAT_00312b24;
    if (fVar6 <= fVar11) {
      fVar6 = -fVar6;
    }
    if ((fVar8 <= fVar6) && (fVar8 = fVar6, fVar10 < fVar6)) {
      fVar8 = fVar10;
    }
    fVar8 = fVar9 + fVar8;
    if ((DAT_00312b20 <= fVar8) || (fVar8 < fVar9)) {
      bVar1 = true;
      *pfVar2 = DAT_00312b20;
    }
    else {
      bVar1 = false;
      *pfVar2 = fVar8;
    }
    local_ac = *(undefined4 *)(param_1 + 0xa2c);
    local_9c = *(undefined4 *)(DAT_00312b28 + 4);
    local_8c = *(undefined4 *)(DAT_00312b28 + 8);
    local_b8 = DAT_00312b2c;
    local_a4 = DAT_00312b2c;
    local_90 = DAT_00312b2c;
    local_b4 = fVar11;
    local_b0 = fVar11;
    local_a8 = fVar11;
    local_a0 = fVar11;
    local_98 = fVar11;
    local_94 = fVar11;
    func_001157FC(afStack_88,afStack_88,&local_b8);
    local_48 = local_7c;
    local_44 = local_6c;
    local_40 = local_5c;
    func_00115C54((float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3d0),&local_48);
    if (!bVar1) {
      return;
    }
  }
  if (*(short *)(param_1 + 0xa30) == 0) {
    *(undefined1 *)(param_1 + 0xa38) = 1;
  }
  else {
    *(short *)(param_1 + 0xa30) = *(short *)(param_1 + 0xa30) + -1;
  }
  return;
}

