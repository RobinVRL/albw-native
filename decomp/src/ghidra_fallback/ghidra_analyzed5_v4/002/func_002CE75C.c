#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_004905E0(float fparam_0);
extern int func_004A8030(int param_1,int *param_2,uint param_3);
extern int func_004D7F70(float *param_1,uint param_2);
extern float DAT_002ce970;
extern float *DAT_002ce974;
extern float DAT_002ce978;
extern int *DAT_002ce97c;
extern float DAT_002ce980;
extern undefined4 DAT_002ce984;
extern float DAT_002ce988;

// USA 002CE75C <- EU 002CE738 (Ghidra, non-matching)
// GLOBAL DAT_002ce970 float
// GLOBAL DAT_002ce974 float *
// GLOBAL DAT_002ce978 float
// GLOBAL DAT_002ce97c int *
// GLOBAL DAT_002ce980 float
// GLOBAL DAT_002ce984 undefined4
// GLOBAL DAT_002ce988 float

void func_002CE75C(uint param_1)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  _Alignas(8) unsigned char albw_frame[0xc0];
  #define local_bc (*(float *)(albw_frame + 0x4))
  #define local_b8 (*(float *)(albw_frame + 0x8))
  #define fStack_b4 (*(float *)(albw_frame + 0xc))
  #define local_b0 (*(float * *)(albw_frame + 0x10))
  #define local_ac (*(undefined4 *)(albw_frame + 0x14))
  #define local_a8 (*(undefined4 *)(albw_frame + 0x18))
  #define local_a4 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_a0 (*(uint *)(albw_frame + 0x20))
  #define local_9c (*(undefined4 *)(albw_frame + 0x24))
  #define local_98 (*(undefined4 *)(albw_frame + 0x28))
  #define local_94 (*(float * *)(albw_frame + 0x2c))
  #define local_90 (*(undefined4 * *)(albw_frame + 0x30))
  #define local_8c (*(float *)(albw_frame + 0x34))
  #define local_88 (*(undefined1 *)(albw_frame + 0x38))
  #define local_87 (*(undefined1 *)(albw_frame + 0x39))
  #define local_84 (*(undefined4 *)(albw_frame + 0x3c))
  #define uStack_80 (*(undefined4 *)(albw_frame + 0x40))
  #define uStack_7c (*(undefined4 *)(albw_frame + 0x44))
  #define local_78 (*(float *)(albw_frame + 0x48))
  #define local_74 (*(float *)(albw_frame + 0x4c))
  #define local_70 (*(undefined4 *)(albw_frame + 0x50))
  #define local_6c (*(float *)(albw_frame + 0x54))
  #define fStack_68 (*(float *)(albw_frame + 0x58))
  #define local_64 (*(float *)(albw_frame + 0x5c))
  #define local_60 (*(float * *)(albw_frame + 0x60))
  #define local_5c (*(undefined4 *)(albw_frame + 0x64))
  #define local_58 (*(undefined4 *)(albw_frame + 0x68))
  #define local_54 (*(undefined4 *)(albw_frame + 0x6c))
  #define local_50 (*(uint *)(albw_frame + 0x70))
  #define local_4c (*(undefined4 *)(albw_frame + 0x74))
  #define local_48 (*(undefined4 *)(albw_frame + 0x78))
  #define local_44 (*(float * *)(albw_frame + 0x7c))
  #define local_40 (*(undefined4 * *)(albw_frame + 0x80))
  #define local_3c (*(float *)(albw_frame + 0x84))
  #define local_38 (*(undefined1 *)(albw_frame + 0x88))
  #define local_37 (*(undefined1 *)(albw_frame + 0x89))
  pfVar1 = DAT_002ce974;
  local_84 = *(undefined4 *)(param_1 + 0x3d0);
  uStack_80 = *(undefined4 *)(param_1 + 0x3d4);
  uStack_7c = *(undefined4 *)(param_1 + 0x3d8);
  local_78 = *(float *)(param_1 + 0x3d0);
  local_70 = *(undefined4 *)(param_1 + 0x3d8);
  local_74 = *(float *)(param_1 + 0x3d4) - DAT_002ce970;
  local_bc = *DAT_002ce974;
  local_b8 = DAT_002ce974[1];
  fStack_b4 = DAT_002ce974[2];
  local_a0 = param_1 & 0xffff0000 | 0xffff;
  local_ac = 0;
  local_a8 = 0;
  local_a4 = 0;
  local_98 = 0;
  local_8c = DAT_002ce978;
  local_88 = 0;
  local_87 = 1;
  local_9c = 3;
  local_b0 = &local_bc;
  fVar3 = DAT_002ce970;
  fVar4 = DAT_002ce978;
  local_94 = &local_78;
  local_90 = &local_84;
  iVar2 = func_004A8030(*DAT_002ce97c,(int *)&local_b0,0xff);
  if (iVar2 != 0) {
    *(float *)(param_1 + 0x494) = fVar3 - local_b8;
  }
  local_70 = DAT_002ce984;
  fVar3 = DAT_002ce980;
  local_90 = &local_84;
  local_78 = fVar4;
  local_74 = fVar4;
  func_004D7F70(&local_78,*(uint *)(param_1 + 1000));
  func_00115C54(&local_78,&local_78,(float *)(param_1 + 0x3d0));
  local_50 = param_1 & 0xffff0000 | 0xffff;
  local_5c = 0;
  local_58 = 0;
  local_54 = 0;
  local_48 = 0;
  local_38 = 0;
  local_37 = 1;
  local_6c = *pfVar1;
  fStack_68 = pfVar1[1];
  local_64 = pfVar1[2];
  local_4c = 9;
  local_60 = &local_6c;
  local_44 = &local_78;
  local_40 = &local_84;
  local_3c = fVar4;
  iVar2 = func_004A8030(*DAT_002ce97c,(int *)&local_60,0xff);
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0x480) = 0x40000000;
  }
  else {
    fVar3 = fVar3 - SQRT(local_6c * local_6c + local_64 * local_64);
    if (fVar3 < fVar4) {
      fVar3 = -fVar3;
      if (DAT_002ce988 < fVar3) {
        iVar2 = func_004905E0(DAT_002ce988 / fVar3);
        iVar2 = iVar2 + -0x40000000;
      }
      else {
        iVar2 = func_004905E0(fVar3 / DAT_002ce988);
        iVar2 = -iVar2;
      }
    }
    else if (DAT_002ce988 < fVar3) {
      iVar2 = func_004905E0(DAT_002ce988 / fVar3);
      iVar2 = 0x40000000 - iVar2;
    }
    else {
      iVar2 = func_004905E0(fVar3 / DAT_002ce988);
    }
    *(int *)(param_1 + 0x480) = iVar2;
  }
  *(float *)(param_1 + 0x3dc) = fVar4;
  *(float *)(param_1 + 0x3e0) = fVar4;
  *(float *)(param_1 + 0x3e4) = fVar4;
  *(undefined4 *)(param_1 + 0x484) = 0;
  *(float *)(param_1 + 0x498) = fVar4;
  return;
}

