#include "ghidra_types.h"

extern int func_00110848(int param_1);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_001507D8(int param_1,int *param_2,int param_3);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_00275438(int param_1);
extern int func_003413DC(int param_1,float *param_2,int *param_3);
extern int func_0034CA20(undefined4 *param_1);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_004356B4(int *param_1);
extern int func_00491938(float *param_1,uint param_2,uint param_3,uint param_4);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004A3138(int param_1,undefined4 *param_2,float fparam_0);
extern int func_004CEAF0(int param_1);
extern int func_00520F54(int param_1,float *param_2,undefined4 param_3);
extern int func_00520FA8(int param_1,int *param_2);
extern int func_0053B348(int param_1,float *param_2);
extern int func_005811E8(int *param_1);
extern float DAT_0013a13c;
extern int DAT_0013a140;
extern undefined DAT_0013a144;
extern int DAT_0013a14c;
extern float DAT_0013a150;
extern undefined DAT_0013a154;
extern float DAT_0013a174;
extern undefined DAT_0013a178;
extern float DAT_0013a18c;
extern undefined DAT_0013a190;
extern float DAT_0013a198;
extern float DAT_0013a19c;
extern float DAT_0013a31c;
extern char *DAT_0013a320;
extern float DAT_0013a324;
extern int *DAT_0013a328;
extern char s_SE_LiftIce_MELT_0013a32c[];
extern char s_SE_LiftIce_REVIVAL_0013a160[];
extern char s__SE_LiftIce_GROW_0013a17b[];
extern char s_cf_0013a158[];
extern undefined4 _DAT_0013a154;
extern undefined4 _DAT_0013a178;

// USA 00139CF0 <- EU 00139CF0 (Ghidra, non-matching)
// GLOBAL DAT_0013a13c float
// GLOBAL DAT_0013a140 int
// GLOBAL DAT_0013a144 undefined
// GLOBAL DAT_0013a14c int
// GLOBAL DAT_0013a150 float
// GLOBAL DAT_0013a154 undefined
// GLOBAL DAT_0013a174 float
// GLOBAL DAT_0013a178 undefined
// GLOBAL DAT_0013a18c float
// GLOBAL DAT_0013a190 undefined
// GLOBAL DAT_0013a198 float
// GLOBAL DAT_0013a19c float
// GLOBAL DAT_0013a31c float
// GLOBAL DAT_0013a320 char *
// GLOBAL DAT_0013a324 float
// GLOBAL DAT_0013a328 int *
// GLOBAL s_SE_LiftIce_MELT_0013a32c string
// GLOBAL s_SE_LiftIce_REVIVAL_0013a160 string

/* WARNING: Removing unreachable block (ram,0x00139fe4) */
/* WARNING: Removing unreachable block (ram,0x00139fe8) */
/* WARNING: Removing unreachable block (ram,0x00139ff8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void func_00139CF0(int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  int *piVar5;
  code *pcVar6;
  int *extraout_r1;
  int *extraout_r1_00;
  int *piVar7;
  float *pfVar8;
  uint in_fpscr;
  float fVar9;
  float fVar10;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_58 (*(int *)(albw_frame + 0x8))
  #define local_54 (*(char * *)(albw_frame + 0xc))
  #define local_48 (*(float *)(albw_frame + 0x18))
  #define iStack_44 (*(int *)(albw_frame + 0x1c))
  #define local_40 (*(int *)(albw_frame + 0x20))
  #define local_3c (*(char * *)(albw_frame + 0x24))
  #define fStack_38 (*(float *)(albw_frame + 0x28))
  #define local_34 (*(char * *)(albw_frame + 0x2c))
  uVar1 = *(uint *)(param_1[0x10b] + (char)param_1[0x105] * 8 + 4);
  pcVar6 = *(code **)(param_1[0x10b] + (char)param_1[0x105] * 8);
  if ((uVar1 & 1) != 0) {
    pcVar6 = *(code **)(pcVar6 + *(int *)(param_1[0x109] + ((int)uVar1 >> 1)));
  }
  (*pcVar6)((int)(param_1[0x109]) + ((int)uVar1 >> 1));
  iVar2 = param_1[0x104] + 1;
  param_1[0x104] = iVar2;
  if (param_1[0x108] != 0) {
    fVar9 = (float)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(param_1[0x108],1,fVar9);
  }
  iVar2 = DAT_0013a140;
  fVar9 = DAT_0013a13c;
  if ((uint)param_1[0x11a] < (uint)param_1[0x11b]) {
    param_1[0x11a] = param_1[0x11a] + 1;
  }
  if ((uint)param_1[0x11d] < (uint)param_1[0x11e]) {
    param_1[0x11d] = param_1[0x11d] + 1;
  }
  if ((char)param_1[0x128] == '\0') {
    if (*(char *)((int)param_1 + 0x4a2) == '\0') {
      if ((uint)param_1[0x11e] <= (uint)param_1[0x11d]) {
        *(undefined1 *)((int)param_1 + 0x4a1) = 0;
      }
    }
    else {
      pfVar8 = (float *)(param_1 + 0x126);
      iVar3 = func_005811E8((int *)pfVar8);
      if (iVar3 == 0) {
        if (param_1[0xd1] == 0) {
          *pfVar8 = 0.0;
          param_1[0x127] = 0;
        }
        else {
          fVar4 = *pfVar8;
          if ((fVar4 != 0.0) && (*(int *)((int)ALBW_AS_U32(fVar4) + 0x1c) == param_1[0x127])) {
            func_00110848((int)ALBW_AS_U32(fVar4));
          }
          func_004A1B9C((int *)&local_48,param_1[0xd1],(uint *)(s_cf_0013a158));
          *pfVar8 = local_48;
          param_1[0x127] = iStack_44;
        }
        local_3c = s_SE_LiftIce_REVIVAL_0013a160;
        local_40 = iVar2;
        func_00150A84(param_1,&local_40,0);
      }
      param_1[0x121] = (int)ALBW_AS_U32(fVar9);
      *(undefined1 *)((int)param_1 + 0x4a1) = 0;
    }
    if ((uint)param_1[0x11b] <= (uint)param_1[0x11a]) {
      param_1[0x121] = (int)ALBW_AS_U32((ALBW_AS_F32(param_1[0x121]) + DAT_0013a174));
    }
  }
  else {
    iVar3 = func_005811E8(param_1 + 0x124);
    if (iVar3 == 0) {
      pfVar8 = (float *)(param_1 + 0x124);
      if (param_1[0xd1] == 0) {
        *pfVar8 = 0.0;
        param_1[0x125] = 0;
      }
      else {
        fVar4 = *pfVar8;
        if ((fVar4 != 0.0) && (*(int *)((int)ALBW_AS_U32(fVar4) + 0x1c) == param_1[0x125])) {
          func_00110848((int)ALBW_AS_U32(fVar4));
        }
        func_004A1B9C((int *)&local_48,param_1[0xd1],(uint *)&DAT_0013a144);
        *pfVar8 = local_48;
        param_1[0x125] = iStack_44;
      }
    }
    iVar3 = DAT_0013a14c;
    param_1[0x11b] = 0xb4;
    param_1[0x11c] = iVar3;
    param_1[0x11a] = 0;
    if (*(char *)((int)param_1 + 0x4a1) == '\0') {
      param_1[0x121] = (int)ALBW_AS_U32((ALBW_AS_F32(param_1[0x121]) - DAT_0013a150));
      iVar3 = _DAT_0013a154;
      param_1[0x11e] = 0x5a;
      param_1[0x11f] = iVar3;
      param_1[0x11d] = 0;
      *(undefined1 *)((int)param_1 + 0x4a1) = 1;
    }
  }
  fVar10 = ALBW_AS_F32(param_1[0x121]);
  fVar4 = ALBW_AS_F32(_DAT_0013a178);
  if ((ALBW_AS_F32(_DAT_0013a178) <= fVar10) && (fVar4 = fVar10, fVar9 < fVar10)) {
    fVar4 = fVar9;
  }
  param_1[0x121] = (int)ALBW_AS_U32(fVar4);
  if (ALBW_AS_F32(param_1[0x120]) < fVar4) {
    local_54 = s__SE_LiftIce_GROW_0013a17b + 1;
    local_58 = iVar2;
    func_001507D8((int)param_1,&local_58,0);
  }
  pfVar8 = (float *)(param_1 + 0x120);
  fVar9 = *pfVar8 + DAT_0013a18c;
  if ((ALBW_AS_F32(param_1[0x121]) <= fVar9) || (fVar9 < *pfVar8)) {
    *pfVar8 = ALBW_AS_F32(param_1[0x121]);
  }
  else {
    *pfVar8 = fVar9;
  }
  pfVar8 = (float *)(param_1 + 0x122);
  *(undefined1 *)(param_1 + 0x128) = 0;
  *(undefined1 *)((int)param_1 + 0x4a2) = 0;
  iVar3 = func_005811E8((int *)pfVar8);
  if (iVar3 == 0) {
    if (param_1[0xd1] == 0) {
      *pfVar8 = 0.0;
      param_1[0x123] = 0;
    }
    else {
      fVar9 = *pfVar8;
      if ((fVar9 != 0.0) && (*(int *)((int)ALBW_AS_U32(fVar9) + 0x1c) == param_1[0x123])) {
        func_00110848((int)ALBW_AS_U32(fVar9));
      }
      func_004A1B9C((int *)&local_48,param_1[0xd1],(uint *)&DAT_0013a190);
      *pfVar8 = local_48;
      param_1[0x123] = iStack_44;
    }
  }
  fVar10 = *pfVar8;
  fVar9 = DAT_0013a198;
  fVar4 = DAT_0013a19c;
  if ((fVar10 != 0.0) && (*(int *)((int)ALBW_AS_U32(fVar10) + 0x1c) == param_1[0x123])) {
    func_004A3138((int)ALBW_AS_U32(fVar10),param_1 + 0xf4,ALBW_AS_F32(param_1[0x120]) * DAT_0013a198);
  }
  iVar3 = func_005811E8(param_1 + 0x124);
  piVar7 = extraout_r1;
  if (iVar3 != 0) {
    iVar3 = param_1[0x124];
    piVar7 = param_1 + 0xf4;
    if ((iVar3 != 0) && (*(int *)(iVar3 + 0x1c) == param_1[0x125])) {
      func_004A3138(iVar3,piVar7,ALBW_AS_F32(param_1[0x120]) * fVar4);
      piVar7 = extraout_r1_00;
    }
  }
  piVar5 = (int *)param_1[0x10e];
  if (piVar5 != (int *)0x0) {
    piVar7 = (int *)*piVar5;
  }
  if (piVar5 != (int *)0x0 && piVar7 != (int *)0x0) {
    func_00275438((int)piVar5);
    func_0053B348(param_1[0x10e],(float *)(param_1 + 0xf4));
    iVar3 = param_1[0x10d];
    if (iVar3 != 0) {
      *(uint *)(iVar3 + 0x164) = *(uint *)(iVar3 + 0x164) | 0x40000000;
      func_00491938((float *)(iVar3 + 0x80),0,param_1[0xfa],0);
      iVar3 = param_1[0x10d];
      *(uint *)(iVar3 + 0x164) = *(uint *)(iVar3 + 0x164) | 0x40000000;
      *(int *)(iVar3 + 0x8c) = param_1[0xf4];
      *(int *)(iVar3 + 0x9c) = param_1[0xf5];
      *(int *)(iVar3 + 0xac) = param_1[0xf6];
      func_004CEAF0(param_1[0x10d]);
    }
    piVar7 = param_1 + 0x110;
    if (param_1[0x110] != 0) {
      fStack_38 = *(float *)(param_1[0x110] + 0x5c) * DAT_0013a31c;
      local_3c = DAT_0013a320;
      local_34 = DAT_0013a320;
      iVar3 = *piVar7;
      fVar9 = ALBW_AS_F32(param_1[0x120]) * fVar9;
      *(int *)(iVar3 + 100) = param_1[0x120];
      *(float *)(iVar3 + 0x60) = fVar9;
      *(float *)(iVar3 + 0x58) = fVar9;
      iVar3 = *piVar7;
      func_00115C54(&local_48,(float *)(param_1 + 0xf4),(float *)&local_3c);
      *(float *)(iVar3 + 4) = local_48;
      *(int *)(iVar3 + 8) = iStack_44;
      *(int *)(iVar3 + 0xc) = local_40;
      func_004356B4((int *)*piVar7);
    }
    iVar3 = param_1[0x10d];
    if (iVar3 != 0) {
      fVar9 = ALBW_AS_F32(param_1[0x120]) * DAT_0013a324;
      *(uint *)(iVar3 + 0x164) = *(uint *)(iVar3 + 0x164) | 0x40000000;
      *(float *)(iVar3 + 0x74) = fVar9;
      *(float *)(iVar3 + 0x78) = fVar9;
      *(float *)(iVar3 + 0x7c) = fVar9;
    }
  }
  piVar7 = DAT_0013a328;
  if ((*(int *)param_1[0x111] != 0) && (*DAT_0013a328 != 0)) {
    func_00520F54((int)param_1,&local_48,*(undefined4 *)(*DAT_0013a328 + 0x1c));
    local_58 = 0;
    func_00520FA8((int)param_1,&local_58);
    func_003413DC(*piVar7,&local_48,&local_58);
  }
  func_0034CA20((undefined4 *)param_1[0x111]);
  if (*(char *)((int)param_1 + 0x4a1) != '\0') {
    local_54 = s_SE_LiftIce_MELT_0013a32c;
    local_58 = iVar2;
    func_001507D8((int)param_1,&local_58,0);
  }
  return;
}

