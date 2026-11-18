#include "ghidra_types.h"

extern int func_00110848(int param_1);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_0014D994(float *param_1,float fparam_0,float fparam_1,float fparam_2);
extern int func_003521F0(int param_1,undefined4 param_2);
extern int func_00386930(int param_1);
extern int func_00386CA8(uint param_1);
extern int func_004356B4(int *param_1);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004A8BFC(int param_1,int param_2,uint param_3);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern uint *DAT_00385e8c;
extern float DAT_00385e90;
extern float DAT_00385e94;
extern float DAT_00385e98;
extern undefined4 DAT_00385e9c;
extern undefined4 DAT_00385ea0;
extern int *DAT_00385ea4;
extern int *DAT_00385ea8;
extern float DAT_00385eac;
extern float DAT_00385eb0;
extern float DAT_00385eb4;

// USA 00385C50 <- EU 00385C2C (Ghidra, non-matching)
// GLOBAL DAT_00385e8c uint *
// GLOBAL DAT_00385e90 float
// GLOBAL DAT_00385e94 float
// GLOBAL DAT_00385e98 float
// GLOBAL DAT_00385e9c undefined4
// GLOBAL DAT_00385ea0 undefined4
// GLOBAL DAT_00385ea4 int *
// GLOBAL DAT_00385ea8 int *
// GLOBAL DAT_00385eac float
// GLOBAL DAT_00385eb0 float
// GLOBAL DAT_00385eb4 float

void func_00385C50(uint param_1)

{
  char cVar1;
  uint *puVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float *pfVar9;
  float fVar10;
  float fVar11;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(float *)(albw_frame + 0x0))
  #define local_3c (*(float *)(albw_frame + 0x4))
  #define fStack_38 (*(float *)(albw_frame + 0x8))
  #define local_34 (*(float *)(albw_frame + 0xc))
  #define fStack_30 (*(float *)(albw_frame + 0x10))
  #define fStack_2c (*(float *)(albw_frame + 0x14))
  cVar1 = *(char *)(param_1 + 0x3b);
  if (cVar1 == '\x04') {
    uVar7 = 1;
  }
  else if (cVar1 == '\x05') {
    uVar7 = 2;
  }
  else if (cVar1 == '\x06') {
    uVar7 = 3;
  }
  else {
    uVar7 = 0;
  }
  func_003521F0(*(int *)(param_1 + 4) + 0x324,uVar7);
  puVar2 = DAT_00385e8c;
  if (*(short *)(param_1 + 0x13a) != 3) {
    iVar5 = *(int *)(param_1 + 4);
    pfVar9 = (float *)(param_1 + 0x1c4);
    if (*(int *)(iVar5 + 0x344) == 0) {
      *pfVar9 = 0.0;
      *(undefined4 *)(param_1 + 0x1c8) = 0;
    }
    else {
      fVar6 = *pfVar9;
      if ((fVar6 != 0.0) && (*(int *)((int)ALBW_AS_U32(fVar6) + 0x1c) == *(int *)(param_1 + 0x1c8))) {
        func_00110848((int)ALBW_AS_U32(fVar6));
      }
      func_004A1B9C((int *)&local_40,*(int *)(iVar5 + 0x344),puVar2);
      *pfVar9 = local_40;
      *(float *)(param_1 + 0x1c8) = local_3c;
    }
    func_00386930(param_1);
  }
  *(undefined1 *)(param_1 + 0x3a) = 0xff;
  fVar11 = DAT_00385e94;
  fVar6 = DAT_00385e90;
  *(float *)(param_1 + 0x124) = DAT_00385e90;
  *(float *)(param_1 + 0x128) = fVar11;
  *(undefined1 *)(param_1 + 0x35) = 0;
  *(short *)(param_1 + 0xe4) = *(short *)(param_1 + 0xe4) << 1;
  *(undefined1 *)(param_1 + 0x37) = 0;
  *(undefined4 *)(param_1 + 300) = 1;
  if ((*(short *)(param_1 + 0x13a) == 3) || (*(int *)(param_1 + 0x10) < 0x1e)) {
    iVar5 = *(int *)(*(int *)(*(int *)(param_1 + 0x3c) + 0x24) + 0x14) +
            *(int *)(param_1 + 0x130) * 0x30;
    uVar7 = *(undefined4 *)(iVar5 + 0xc);
    uVar8 = *(undefined4 *)(iVar5 + 0x2c);
    iVar5 = *(int *)(param_1 + 4);
    fVar10 = *(float *)(iVar5 + 0x3d4) + DAT_00385e98;
    if (*(short *)(param_1 + 0x13a) == 3) {
      uVar7 = *(undefined4 *)(iVar5 + 0x3d0);
      uVar8 = *(undefined4 *)(iVar5 + 0x3d8);
    }
    *(undefined4 *)(param_1 + 0x4c) = uVar7;
    uVar3 = DAT_00385ea0;
    *(float *)(param_1 + 0x50) = fVar10;
    uVar7 = DAT_00385e9c;
    *(undefined4 *)(param_1 + 0x54) = uVar8;
    *(undefined4 *)(param_1 + 0xa0) = uVar7;
    *(undefined4 *)(param_1 + 0xa4) = uVar3;
    *(undefined4 *)(param_1 + 0xa8) = uVar7;
    func_004356B4((int *)(param_1 + 0x48));
    if (*(short *)(param_1 + 0x13a) == 3) {
      func_0014D994((float *)(param_1 + 0x124),DAT_00385eb4,DAT_00385eb0,DAT_00385eac);
    }
    else {
      *(float *)(param_1 + 0x124) = fVar6;
      *(float *)(param_1 + 0x128) = fVar11;
    }
    piVar4 = DAT_00385ea4;
    func_004D80A4(&local_40,**(uint **)(*DAT_00385ea4 + 0x24),fVar6);
    local_3c = fVar11;
    func_00115C70(&local_34,*(float **)(*piVar4 + 0x1c),(float *)(*(int *)(param_1 + 4) + 0x3d0));
    if (local_34 * local_40 + fStack_30 * local_3c + fStack_2c * fStack_38 < fVar11) {
      func_00386CA8(param_1);
    }
  }
  piVar4 = DAT_00385ea8;
  if (*(char *)(param_1 + 0x34) == '\0') {
    *(undefined1 *)(param_1 + 0x34) = 1;
    func_004A8BFC(*piVar4,param_1 + 0xb4,3);
    iVar5 = *(int *)(param_1 + 4);
    uVar7 = *(undefined4 *)(iVar5 + 0x958);
    uVar8 = *(undefined4 *)(iVar5 + 0x95c);
    *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(iVar5 + 0x960);
    *(undefined4 *)(param_1 + 0xd8) = uVar7;
    *(undefined4 *)(param_1 + 0xdc) = uVar8;
  }
  return;
}

