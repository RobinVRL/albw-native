#include "ghidra_types.h"

extern ulonglong func_00110710(uint param_1,uint param_2);
extern int func_00111A64(uint *param_1);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115DAC(float *param_1,float *param_2,float *param_3,float fparam_0);
extern int func_001E64E4(int param_1,float *param_2,int *param_3,uint param_4,uint param_5);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_0058E2B8(int *param_1);
extern int func_0068C690(float *param_1);
extern float DAT_001e6330;
extern float DAT_001e6334;
extern int DAT_001e6338;
extern int DAT_001e633c;
extern float DAT_001e6340;
extern float DAT_001e6344;
extern float DAT_001e6348;
extern int DAT_001e634c;
extern float DAT_001e6350;
extern int DAT_001e6354;
extern int *DAT_001e6358;
extern float DAT_001e64d0;
extern float *DAT_001e64d4;
extern float *DAT_001e64d8;
extern uint DAT_001e64dc;
extern uint DAT_001e64e0;

// USA 001E5FC4 <- EU 001E5FC4 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 uint
// GLOBAL DAT_001e6330 float
// GLOBAL DAT_001e6334 float
// GLOBAL DAT_001e6338 int
// GLOBAL DAT_001e633c int
// GLOBAL DAT_001e6340 float
// GLOBAL DAT_001e6344 float
// GLOBAL DAT_001e6348 float
// GLOBAL DAT_001e634c int
// GLOBAL DAT_001e6350 float
// GLOBAL DAT_001e6354 int
// GLOBAL DAT_001e6358 int *
// GLOBAL DAT_001e64d0 float
// GLOBAL DAT_001e64d4 float *
// GLOBAL DAT_001e64d8 float *
// GLOBAL DAT_001e64dc uint
// GLOBAL DAT_001e64e0 uint

/* WARNING: Variable defined which should be unmapped: objStack_80 */

undefined4
func_001E5FC4(uint *param_1,float *param_2,int *param_3,uint *param_4,uint param_5,float fparam_0)

{
  int iVar1;
  uint uVar2;
  float *pfVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  bool bVar8;
  uint in_fpscr;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define objStack_80 ((uint *)(albw_frame + 0x0))
  #define local_70 (*(float *)(albw_frame + 0x10))
  #define local_6c (*(float *)(albw_frame + 0x14))
  #define local_68 (*(float *)(albw_frame + 0x18))
  #define local_64 (*(float *)(albw_frame + 0x1c))
  #define local_60 (*(float *)(albw_frame + 0x20))
  #define fStack_5c (*(float *)(albw_frame + 0x24))
  #define local_4c (*(float *)(albw_frame + 0x34))
  #define local_48 (*(float *)(albw_frame + 0x38))
  #define local_44 (*(float *)(albw_frame + 0x3c))
  #define local_3c (*(float *)(albw_frame + 0x44))
  #define fStack_38 (*(float *)(albw_frame + 0x48))
  #define fStack_34 (*(float *)(albw_frame + 0x4c))
  #define local_30 ((int *)(albw_frame + 0x50))
  if (param_5 == 0) {
    param_5 = *param_1;
  }
  if (param_4 == (uint *)0x0) {
    param_4 = param_1 + 8;
  }
  piVar6 = param_3;
  objStack_80[0] = param_5;
  func_001E64E4((int)param_1,param_2,param_3,(int)(char)*param_4,param_5);
  iVar5 = *(int *)(param_5 + 0x28);
  if (iVar5 != 0) {
    piVar6 = *(int **)(param_5 + 0x20);
  }
  if (iVar5 == 0 || piVar6 <= (int *)(int)(char)*param_4) {
    return 0;
  }
  iVar5 = *(int *)(iVar5 + (char)*param_4 * 4);
  if (iVar5 == 0) {
    return 0;
  }
  local_70 = *(float *)(iVar5 + 0x18);
  local_6c = *(float *)(iVar5 + 0x1c);
  local_68 = *(float *)(iVar5 + 0x20);
  local_4c = DAT_001e6330;
  local_48 = DAT_001e6330;
  local_44 = DAT_001e6330;
  func_00115C70(&local_4c,&local_70,param_2);
  iVar1 = func_0068C690(&local_4c);
  fVar10 = DAT_001e6334;
  func_0051D2F4((int *)(param_1 + 4),iVar1,param_1[6],param_1[5],DAT_001e6334);
  if (param_3 != (int *)0x0) {
    func_0051D2F4(param_3,param_1[4],DAT_001e6338 >> 2,DAT_001e6338,fVar10);
  }
  if ((int)ALBW_AS_U32(fparam_0) < DAT_001e633c) {
    fparam_0 = DAT_001e6340;
  }
  fVar10 = DAT_001e6344;
  if (*(char *)((int)param_1 + 0x27) != '\0') {
    objStack_80[0] = *param_3 - param_1[4];
    iVar1 = func_0058E2B8((int *)objStack_80);
    fVar9 = (float)VectorUnsignedToFloat(iVar1,(byte)(in_fpscr >> 0x15) & 3);
    fVar9 = fVar10 - fVar9 * DAT_001e6348;
    fparam_0 = fparam_0 * fVar9 * fVar9;
  }
  if (DAT_001e634c <=
      (int)ALBW_AS_U32(((*param_2 - local_70) * (*param_2 - local_70) +
           (param_2[2] - local_68) * (param_2[2] - local_68)))) {
    func_00115C70(&local_3c,param_2,&local_70);
    local_64 = local_3c;
    local_60 = fStack_38;
    fStack_5c = fStack_34;
    iVar1 = func_0068C690(&local_64);
    func_00115C70(&local_64,(float *)(param_1 + 1),&local_70);
    local_30[0] = func_0068C690(&local_64);
    local_30[0] = iVar1 - local_30[0];
    uVar2 = func_0058E2B8(local_30);
    iVar1 = DAT_001e6354;
    fVar9 = DAT_001e6350;
    if (uVar2 < 0x40000001) {
      pfVar3 = (float *)(DAT_001e6354 + (param_1[4] >> 0x18) * 0x10);
      fVar10 = (float)VectorUnsignedToFloat(param_1[4] & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
      *param_2 = *param_2 + (*pfVar3 + pfVar3[1] * fVar10 * DAT_001e6350) * fparam_0;
      iVar1 = iVar1 + (param_1[4] >> 0x18) * 0x10;
      fVar10 = (float)VectorUnsignedToFloat(param_1[4] & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
      param_2[2] = param_2[2] +
                   (*(float *)(iVar1 + 8) + *(float *)(iVar1 + 0xc) * fVar10 * fVar9) * fparam_0;
      return 0;
    }
  }
  bVar8 = false;
  if (*(char *)((int)param_1 + 0x23) == '\0') {
    if (*(char *)((int)param_1 + 0x22) != '\0') goto LAB_001e6238;
LAB_001e6258:
    if (*(char *)(iVar5 + 0xb1) == '\0') goto LAB_001e626c;
LAB_001e6264:
    uVar7 = 3;
  }
  else {
    if ((char)param_1[9] == '\0') goto LAB_001e6258;
LAB_001e6238:
    bVar8 = true;
    if ((*(char *)(iVar5 + 0xb0) != '\0') && (*(char *)(param_5 + 4) == '\0')) goto LAB_001e6264;
LAB_001e626c:
    uVar7 = 1;
  }
  local_6c = param_2[1];
  func_00115C70(&local_64,&local_70,param_2);
  fVar9 = SQRT(local_64 * local_64 + local_60 * local_60 + fStack_5c * fStack_5c);
  if (fparam_0 < fVar9) {
    fVar10 = fVar10 / fVar9;
    local_64 = local_64 * fVar10;
    fStack_5c = fStack_5c * fVar10;
    local_60 = local_60 * fVar10;
    func_00115DAC(param_2,&local_64,param_2,fparam_0);
    return uVar7;
  }
  iVar5 = 1;
  *param_2 = local_70;
  param_2[1] = local_6c;
  param_2[2] = local_68;
  param_1[1] = (uint)ALBW_AS_U32(local_70);
  param_1[2] = (uint)ALBW_AS_U32(param_2[1]);
  param_1[3] = (uint)ALBW_AS_U32(param_2[2]);
  *(char *)((int)param_1 + 0x21) = (char)*param_4;
  if (*(char *)((int)param_1 + 0x25) != '\0') {
    uVar2 = func_00111A64((uint *)(*DAT_001e6358 + 0x660));
    iVar5 = (int)((ulonglong)uVar2 * 3 >> 0x20) + 1;
  }
  cVar4 = (char)*param_4;
  uVar2 = *(uint *)(param_5 + 0x20);
  if (bVar8) {
    iVar5 = -iVar5;
  }
  iVar5 = cVar4 + iVar5;
  iVar1 = uVar2 - 1;
  if (!bVar8) {
    if (iVar1 < iVar5) goto LAB_001e63a0;
  }
  else if (iVar5 < 0) {
LAB_001e63a0:
    uVar7 = 4;
    if (*(char *)(param_5 + 4) == '\0') {
      if (*(char *)((int)param_1 + 0x23) == '\0') {
        if (*(char *)((int)param_1 + 0x22) == '\0') {
          *(undefined1 *)((int)param_1 + 0x22) = 1;
        }
        else {
          *(undefined1 *)((int)param_1 + 0x22) = 0;
        }
        if (bVar8) {
          cVar4 = cVar4 + '\x01';
        }
        else {
          cVar4 = cVar4 + -1;
        }
        iVar5 = (int)cVar4;
        *(char *)param_4 = cVar4;
        if (iVar5 < 0) {
          *(char *)param_4 = '\0';
          goto LAB_001e6424;
        }
        if (iVar5 <= iVar1) {
          iVar1 = iVar5;
        }
      }
      else if (bVar8) goto LAB_001e63b8;
    }
    else if (!bVar8) {
LAB_001e63b8:
      iVar1 = 0;
    }
    *(char *)param_4 = (char)iVar1;
    goto LAB_001e6424;
  }
  uVar7 = 2;
  *(char *)param_4 = (char)iVar5;
LAB_001e6424:
  if (param_5 != 0) {
    iVar5 = *(int *)(param_5 + 0x28);
    fVar10 = *param_2;
    pfVar3 = param_2 + 2;
    if (iVar5 != 0) {
      uVar2 = *(uint *)(param_5 + 0x20);
    }
    if (iVar5 != 0 && (uint)(int)(char)*param_4 < uVar2) {
      iVar5 = *(int *)(iVar5 + (char)*param_4 * 4);
    }
    else {
      iVar5 = 0;
    }
    bVar8 = *(char *)((int)param_1 + 0x25) != '\0';
    if (bVar8) {
      param_2 = DAT_001e64d4;
    }
    if (!bVar8) {
      param_2 = DAT_001e64d8;
    }
    fVar10 = fVar10 - *(float *)(iVar5 + 0x18);
    fVar9 = *pfVar3 - *(float *)(iVar5 + 0x20);
    uVar2 = (uint)((SQRT(fVar10 * fVar10 + fVar9 * fVar9) * DAT_001e64d0) / ALBW_AS_F32(param_1[7]));
    if ((int)uVar2 < 1) {
      param_1[5] = DAT_001e64dc;
    }
    else {
      uVar11 = func_00110710(0x80000000,uVar2);
      param_1[5] = (uint)uVar11;
      if ((int)(uint)uVar11 < (int)param_2) {
        param_1[5] = (uint)param_2;
      }
    }
    param_1[6] = DAT_001e64e0;
  }
  return uVar7;
}

