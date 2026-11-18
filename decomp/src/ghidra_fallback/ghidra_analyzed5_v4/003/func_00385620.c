#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_0014D994(float *param_1,float fparam_0,float fparam_1,float fparam_2);
extern int func_00386930(int param_1);
extern int func_00386CA8(uint param_1);
extern int func_004356B4(int *param_1);
extern int func_004A8BFC(int param_1,int param_2,uint param_3);
extern int func_004A9120(undefined4 param_1,int param_2);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern float DAT_00385858;
extern int DAT_0038585c;
extern uint DAT_00385860;
extern int *DAT_00385864;
extern float DAT_00385868;
extern float DAT_0038586c;
extern undefined4 DAT_00385870;
extern float DAT_00385874;
extern float DAT_00385878;
extern int *DAT_0038587c;
extern float DAT_00385880;
extern float DAT_00385884;
extern float DAT_00385888;

// USA 00385620 <- EU 003855FC (Ghidra, non-matching)
// GLOBAL DAT_00385858 float
// GLOBAL DAT_0038585c int
// GLOBAL DAT_00385860 uint
// GLOBAL DAT_00385864 int *
// GLOBAL DAT_00385868 float
// GLOBAL DAT_0038586c float
// GLOBAL DAT_00385870 undefined4
// GLOBAL DAT_00385874 float
// GLOBAL DAT_00385878 float
// GLOBAL DAT_0038587c int *
// GLOBAL DAT_00385880 float
// GLOBAL DAT_00385884 float
// GLOBAL DAT_00385888 float

undefined4 func_00385620(uint param_1)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(float *)(albw_frame + 0x8))
  #define local_34 (*(float *)(albw_frame + 0xc))
  #define fStack_30 (*(float *)(albw_frame + 0x10))
  #define local_2c (*(float *)(albw_frame + 0x14))
  #define fStack_28 (*(float *)(albw_frame + 0x18))
  #define fStack_24 (*(float *)(albw_frame + 0x1c))
  uVar1 = DAT_00385860;
  fVar9 = DAT_00385858;
  if (0 < *(int *)(param_1 + 300)) {
    *(int *)(param_1 + 300) = *(int *)(param_1 + 300) + -1;
  }
  iVar4 = DAT_0038585c;
  iVar5 = *(int *)(*(int *)(*(int *)(param_1 + 4) + 0x8dc) + 0x14);
  fVar6 = *(float *)(iVar5 + 8) / *(float *)(iVar5 + 0x14);
  *(float *)(param_1 + 0x118) = fVar6;
  if ((uint)((int)ALBW_AS_U32(fVar6) - iVar4) < uVar1) {
    *(undefined4 *)(param_1 + 300) = 6;
  }
  else {
    if (iVar4 < (int)ALBW_AS_U32(fVar6)) {
      fVar6 = fVar9;
    }
    *(float *)(param_1 + 0x118) = fVar6;
  }
  piVar2 = DAT_00385864;
  if (((*(char *)(param_1 + 0x35) == '\0') && (0 < *(int *)(param_1 + 300))) &&
     ((*(short *)(param_1 + 0x13a) == 3 || (*(int *)(param_1 + 0x10) < 0x1e)))) {
    iVar4 = *(int *)(*(int *)(*(int *)(param_1 + 0x3c) + 0x24) + 0x14) +
            *(int *)(param_1 + 0x130) * 0x30;
    uVar7 = *(undefined4 *)(iVar4 + 0xc);
    uVar8 = *(undefined4 *)(iVar4 + 0x2c);
    iVar4 = *(int *)(param_1 + 4);
    fVar9 = *(float *)(iVar4 + 0x3d4) + DAT_00385868;
    if (*(short *)(param_1 + 0x13a) == 3) {
      uVar7 = *(undefined4 *)(iVar4 + 0x3d0);
      uVar8 = *(undefined4 *)(iVar4 + 0x3d8);
    }
    *(undefined4 *)(param_1 + 0x4c) = uVar7;
    fVar6 = DAT_0038586c;
    *(float *)(param_1 + 0x50) = fVar9;
    *(undefined4 *)(param_1 + 0x54) = uVar8;
    uVar7 = DAT_00385870;
    *(float *)(param_1 + 0xa0) = *(float *)(param_1 + 0x124) * fVar6;
    *(undefined4 *)(param_1 + 0xa4) = uVar7;
    *(float *)(param_1 + 0xa8) = *(float *)(param_1 + 0x124) * fVar6;
    func_004356B4((int *)(param_1 + 0x48));
    fVar6 = DAT_00385878;
    fVar9 = DAT_00385874;
    if (*(short *)(param_1 + 0x13a) == 3) {
      func_0014D994((float *)(param_1 + 0x124),DAT_00385888,DAT_00385884,DAT_00385880);
    }
    else {
      *(float *)(param_1 + 0x128) = DAT_00385878;
      *(float *)(param_1 + 0x124) = fVar9;
    }
    piVar3 = DAT_0038587c;
    func_004D80A4(&local_38,**(uint **)(*DAT_0038587c + 0x24),fVar9);
    local_34 = fVar6;
    func_00115C70(&local_2c,*(float **)(*piVar3 + 0x1c),(float *)(*(int *)(param_1 + 4) + 0x3d0));
    if (((local_2c * local_38 + fStack_28 * local_34 + fStack_24 * fStack_30 < fVar6) &&
        (iVar4 = func_00386CA8(param_1), iVar4 != 0)) && (*(char *)(param_1 + 0x37) == '\0')) {
      if (*(char *)(param_1 + 0x34) == '\0') {
        *(undefined1 *)(param_1 + 0x34) = 1;
        func_004A8BFC(*piVar2,param_1 + 0xb4,3);
        iVar4 = *(int *)(param_1 + 4);
        uVar7 = *(undefined4 *)(iVar4 + 0x958);
        uVar8 = *(undefined4 *)(iVar4 + 0x95c);
        *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(iVar4 + 0x960);
        *(undefined4 *)(param_1 + 0xd8) = uVar7;
        *(undefined4 *)(param_1 + 0xdc) = uVar8;
      }
      goto LAB_003857dc;
    }
  }
  if (*(char *)(param_1 + 0x34) != '\0') {
    *(undefined1 *)(param_1 + 0x34) = 0;
    func_004A9120(*piVar2,param_1 + 0xb4);
  }
LAB_003857dc:
  return func_00386930(param_1);
}

