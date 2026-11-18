#include "ghidra_types.h"

extern int func_0012C790(int param_1);
extern int func_00167E04(int param_1,int param_2,uint param_3);
extern int func_001788DC(int param_1,undefined4 *param_2);
extern int func_001B6B38(int *param_1,undefined4 param_2,undefined4 param_3,int param_4);
extern int func_004994B0(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,...);
extern int func_00569310(float *param_1,int param_2);
extern int func_005826A4(int param_1,int *param_2,int *param_3,int *param_4);
extern int DAT_00444ff4;
extern int DAT_00444ff8;
extern int *DAT_00445014;
extern undefined2 *DAT_00445018;
extern undefined2 DAT_0044501c;
extern float DAT_00445024;
extern float DAT_00445028;
extern float DAT_0044502c;
extern float DAT_00445030;
extern float DAT_00445034;
extern int DAT_00445038;
extern undefined2 DAT_00445048;
extern char s_Job__02d_00444ffc[];
extern char s_Name__02d_0044503c[];
extern char s_StaffCredit_00445008[];
extern char s_cf_00444ffc[];
extern char s_cf_0044503c[];

// USA 00444C88 <- EU 00444C68 [EDITED REGION: check by hand] (Ghidra, non-matching)
// GLOBAL DAT_00444ff4 int
// GLOBAL DAT_00444ff8 int
// GLOBAL DAT_00445014 int *
// GLOBAL DAT_00445018 undefined2 *
// GLOBAL DAT_0044501c undefined2
// GLOBAL DAT_00445024 float
// GLOBAL DAT_00445028 float
// GLOBAL DAT_0044502c float
// GLOBAL DAT_00445030 float
// GLOBAL DAT_00445034 float
// GLOBAL DAT_00445038 int
// GLOBAL DAT_00445048 undefined2
// GLOBAL s_cf_00444ffc string
// GLOBAL s_cf_0044503c string
// GLOBAL s_StaffCredit_00445008 string

undefined4 func_00444C88(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  int *piVar2;
  undefined2 *puVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  undefined4 extraout_r1;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  int *piVar11;
  bool bVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  _Alignas(8) unsigned char albw_frame[0xa0];
  #define local_98 (*(int *)(albw_frame + 0x8))
  #define local_94 (*(undefined1 * *)(albw_frame + 0xc))
  #define uStack_90 (*(undefined4 *)(albw_frame + 0x10))
  #define local_8c ((undefined1 *)(albw_frame + 0x14))
  #define uStack_7d (*(undefined1 *)(albw_frame + 0x23))
  #define local_78 (*(int *)(albw_frame + 0x28))
  #define local_74 (*(char * *)(albw_frame + 0x2c))
  #define local_70 (*(int *)(albw_frame + 0x30))
  #define local_6c (*(char * *)(albw_frame + 0x34))
  #define local_68 (*(undefined2 * *)(albw_frame + 0x38))
  #define local_64 (*(undefined4 *)(albw_frame + 0x3c))
  #define local_60 (*(int *)(albw_frame + 0x40))
  #define local_5c (*(undefined4 *)(albw_frame + 0x44))
  #define local_58 (*(undefined2 * *)(albw_frame + 0x48))
  #define local_54 (*(undefined2 * *)(albw_frame + 0x4c))
  #define fStack_40 (*(float *)(albw_frame + 0x60))
  #define local_3c (*(float *)(albw_frame + 0x64))
  #define local_34 (*(float *)(albw_frame + 0x6c))
  piVar9 = (int *)(param_1 + 0xc4);
  bVar4 = *(char *)(param_1 + 0x4ba) + 1;
  *(byte *)(param_1 + 0x4ba) = bVar4;
  if (0xb < bVar4) {
    *(undefined1 *)(param_1 + 0x4ba) = 0;
  }
  if (*(byte *)(param_1 + 0x4ba) < 0xc) {
    piVar9 = piVar9 + (uint)*(byte *)(param_1 + 0x4ba) * 0x15;
  }
  cVar1 = *(char *)((int)piVar9 + 0xd);
  bVar12 = cVar1 == '\0';
  if (bVar12) {
    cVar1 = *(char *)((int)piVar9 + 0xe);
  }
  if (!bVar12 || cVar1 != '\0') {
    func_0012C790((int)piVar9);
    func_001B6B38(piVar9,extraout_r1,param_3,param_4);
  }
  iVar10 = DAT_00444ff4;
  local_94 = local_8c;
  uStack_90 = 0x10;
  uStack_7d = 0;
  local_8c[0] = 0;
  local_68 = (undefined2 *)0x0;
  local_98 = DAT_00444ff8;
  local_5c = 0xffffffff;
  local_64 = 0;
  local_60 = 0;
  func_004994B0((int)&local_98,s_Job__02d_00444ffc,(uint)*(byte *)(param_1 + 0x4bb),param_4);
  (**(code **)(local_98 + 8))(&local_98);
  piVar2 = DAT_00445014;
  local_70 = iVar10;
  local_6c = local_94;
  local_74 = s_StaffCredit_00445008;
  local_78 = iVar10;
  iVar5 = func_005826A4(*DAT_00445014,(int *)&local_68,&local_78,&local_70);
  puVar3 = DAT_00445018;
  if (iVar5 == 0) {
    local_54 = &DAT_0044501c;
    local_58 = DAT_00445018;
    (**(code **)(DAT_00445018 + 4))(&local_58);
    local_68 = local_54;
    (**(code **)(local_58 + 4))(&local_58);
    local_60 = 0;
    do {
      if (local_54[local_60] == 0) {
        if (local_60 < 0x40001) goto LAB_00444dd4;
        break;
      }
      local_60 = local_60 + 1;
    } while (local_60 < 0x40001);
    local_60 = 0;
LAB_00444dd4:
    local_60 = local_60 << 1;
  }
  *(undefined2 *)(*(int *)(param_1 + 0x4b4) + 0x34) = 2;
  func_001788DC(*(int *)(param_1 + 0x4b4),&local_68);
  iVar5 = *(int *)(param_1 + 0x4b4);
  piVar11 = (int *)piVar9[0xe];
  *(undefined2 *)(iVar5 + 0x32) = 0;
  *(undefined1 *)(iVar5 + 0x3d) = 0;
  uVar8 = (uint)(*(ushort *)(iVar5 + 0x20) >> 1);
  (**(code **)(*piVar11 + 0x60))(piVar11,*(undefined4 *)(iVar5 + 8),0);
  func_00569310(&fStack_40,piVar9[0xe]);
  fVar15 = DAT_00445028;
  fVar14 = DAT_00445024;
  local_34 = local_34 - local_3c;
  if (local_34 <= DAT_00445024) {
    local_34 = -local_34;
  }
  piVar9[0x12] = (int)ALBW_AS_U32((local_34 * DAT_00445028));
  piVar9[0x11] = piVar9[0xe];
  func_00167E04(piVar9[7],piVar9[0xe],1);
  func_00167E04(piVar9[7],piVar9[0xf],0);
  func_00167E04(piVar9[7],piVar9[0x10],0);
  *(undefined1 *)((int)piVar9 + 0xe) = 1;
  uVar7 = (uint)*(byte *)(param_1 + 0x4ba);
  iVar5 = param_1 + 0xc4;
  iVar6 = param_1 + 0xc4;
  if (uVar7 < 0xc) {
    iVar5 = iVar5 + uVar7 * 0x54;
    iVar6 = param_1 + 0xc4 + uVar7 * 0x54;
  }
  bVar12 = *(int *)(iVar6 + 0x44) == 0;
  if (bVar12) {
    fVar14 = *(float *)(iVar6 + 0x48);
  }
  if (bVar12) {
    fVar14 = fVar14 * DAT_0044502c;
  }
  else {
    iVar6 = *(int *)(iVar6 + 0x38);
  }
  if (!bVar12) {
    fVar14 = *(float *)(iVar6 + 0xbc);
  }
  uVar13 = VectorFloatToUnsigned
                     (fVar15 + ((DAT_00445030 + *(float *)(iVar5 + 0x48) * DAT_0044502c) - fVar14) *
                               DAT_00445034,3);
  *(short *)(DAT_00445038 + param_1) = (short)uVar13;
  func_004994B0((int)&local_98,s_Name__02d_0044503c,(uint)*(byte *)(param_1 + 0x4bb),uVar8);
  (**(code **)(local_98 + 8))(&local_98);
  local_78 = iVar10;
  local_74 = local_94;
  local_70 = iVar10;
  local_6c = s_StaffCredit_00445008;
  iVar5 = func_005826A4(*piVar2,(int *)&local_68,&local_70,&local_78);
  iVar10 = 0;
  if (iVar5 == 0) {
    local_54 = &DAT_00445048;
    local_58 = puVar3;
    (**(code **)(puVar3 + 4))(&local_58);
    local_68 = local_54;
    (**(code **)(local_58 + 4))(&local_58);
    iVar5 = 0;
    do {
      if (local_54[iVar5] == 0) {
        if (iVar5 < 0x40001) {
          iVar10 = iVar5;
        }
        break;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0x40001);
    local_60 = iVar10 << 1;
  }
  *(undefined2 *)(*(int *)(param_1 + 0x4b4) + 0x34) = 1;
  return func_001788DC(*(int *)(param_1 + 0x4b4),&local_68);
}

