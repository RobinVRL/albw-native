// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_004356B4(int *param_1);
extern int func_00491E80(float *param_1,uint param_2,uint param_3,uint param_4);
extern int func_004A8304(undefined4 param_1,int param_2);
extern int func_004CEA18(int param_1,int param_2,uint param_3);
extern int func_004CEAF0(int param_1);
extern int func_004ED9C8(int param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00556A90();
extern int func_00584C14(int param_1,int *param_2);
extern float func_00590EC8(float fparam_0,float fparam_1);
extern float DAT_002504f8;
extern int DAT_002504fc;
extern float DAT_00250500;
extern float DAT_00250504;
extern float DAT_00250508;
extern int *DAT_0025050c;
extern int *DAT_00250510;
extern uint *DAT_00250514;
extern undefined4 *DAT_00250518;
extern undefined4 DAT_0025051c;
extern float DAT_00250520;
extern int DAT_00250524;
extern float DAT_00250528;
extern float DAT_0025052c;
extern float DAT_00250530;
extern float DAT_00250534;
extern undefined4 *DAT_00250538;

// USA 002500F4 <- EU 002500F4 (Ghidra, non-matching)
// GLOBAL DAT_002504f8 float
// GLOBAL DAT_002504fc int
// GLOBAL DAT_00250500 float
// GLOBAL DAT_00250504 float
// GLOBAL DAT_00250508 float
// GLOBAL DAT_0025050c int *
// GLOBAL DAT_00250510 int *
// GLOBAL DAT_00250514 uint *
// GLOBAL DAT_00250518 undefined4 *
// GLOBAL DAT_0025051c undefined4
// GLOBAL DAT_00250520 float
// GLOBAL DAT_00250524 int
// GLOBAL DAT_00250528 float
// GLOBAL DAT_0025052c float
// GLOBAL DAT_00250530 float
// GLOBAL DAT_00250534 float
// GLOBAL DAT_00250538 undefined4 *

void func_002500F4(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 extraout_r1;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  bool bVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_48 (*(float *)(albw_frame + 0x8))
  #define local_44 (*(undefined4 *)(albw_frame + 0xc))
  #define local_40 (*(undefined4 *)(albw_frame + 0x10))
  #define local_3c (*(float *)(albw_frame + 0x14))
  #define local_38 (*(float *)(albw_frame + 0x18))
  #define local_34 (*(float *)(albw_frame + 0x1c))
  piVar8 = (int *)(param_1 + 0x480);
  iVar2 = *(int *)(param_1 + 0x480);
  *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 0x40000000;
  uVar6 = *(uint *)(param_1 + 1000);
  piVar7 = (int *)0x0;
  func_00491E80((float *)(iVar2 + 0x80),0,uVar6,0);
  iVar2 = *piVar8;
  *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 0x40000000;
  *(undefined4 *)(iVar2 + 0x8c) = *(undefined4 *)(param_1 + 0x3d0);
  *(undefined4 *)(iVar2 + 0x9c) = *(undefined4 *)(param_1 + 0x3d4);
  uVar5 = *(undefined4 *)(param_1 + 0x3d8);
  *(undefined4 *)(iVar2 + 0xac) = uVar5;
  if (*(char *)(param_1 + 0x420) == '\0') {
    return;
  }
  func_00169A80(*(int **)(param_1 + 0x484),uVar5,uVar6,piVar7);
  uVar5 = 0;
  func_00168E9C(*(int **)(param_1 + 0x484),*(int *)(param_1 + 0x480),(int *)0x0);
  func_00169A80(*(int **)(param_1 + 0x488),extraout_r1,uVar5,piVar7);
  func_00168E9C(*(int **)(param_1 + 0x488),*piVar8,(int *)0x0);
  func_004CEAF0(*piVar8);
  cVar1 = *(char *)(param_1 + 0x420);
  if ((cVar1 != '\x01' && cVar1 != '\x02') &&
     ((cVar1 != '\x03' || (*(char *)(param_1 + 0x48e) == '\0')))) goto LAB_002504c4;
  local_3c = DAT_002504f8;
  if ((*(char *)(param_1 + 0x48c) != '\0') &&
     (iVar2 = *(int *)(*(int *)(param_1 + 0x484) + 0x14), *(char *)(iVar2 + 0x1c) == '\0')) {
    if (*(float *)(iVar2 + 0x10) < DAT_002504f8) {
      if (*(float *)(iVar2 + 8) <= DAT_002504f8) goto LAB_00250234;
    }
    else if (*(float *)(iVar2 + 8) == *(float *)(iVar2 + 0x14)) {
LAB_00250234:
      local_44 = *(undefined4 *)
                  (DAT_002504fc +
                  (*(float *)(param_1 + 0x440) == *(float *)(param_1 + 0x448) ^ 1) * 4);
      local_48 = DAT_00250500;
      fVar12 = DAT_002504f8;
      uVar6 = func_00584C14(*(int *)(param_1 + 0x480),(int *)&local_48);
      func_004CEA18(*piVar8,0,uVar6);
      *(undefined1 *)(param_1 + 0x48c) = 0;
      *(undefined1 *)(param_1 + 0x493) = 1;
      local_3c = fVar12;
    }
  }
  local_38 = *(float *)(*(int *)(*(int *)(*(int *)(param_1 + 0x480) + 0x24) + 0xc) + 0x6c);
  uVar10 = CONCAT44(local_38,local_3c);
  if ((*(char *)(param_1 + 0x493) == '\0') && (local_3c <= local_38)) {
    *(undefined1 *)(param_1 + 0x493) = 1;
  }
  local_38 = local_38 + *(float *)(param_1 + 0x444) * DAT_00250504;
  local_34 = local_3c;
  func_00115C54(&local_48,(float *)(param_1 + 0x3d0),&local_3c);
  iVar2 = *(int *)(param_1 + 0x460);
  *(float *)(iVar2 + 4) = local_48;
  *(undefined4 *)(iVar2 + 8) = local_44;
  *(undefined4 *)(iVar2 + 0xc) = local_40;
  func_004356B4(*(int **)(param_1 + 0x460));
  iVar2 = *(int *)(param_1 + 0x464);
  *(float *)(iVar2 + 4) = local_48;
  *(undefined4 *)(iVar2 + 8) = local_44;
  *(undefined4 *)(iVar2 + 0xc) = local_40;
  func_004356B4(*(int **)(param_1 + 0x464));
  if (*(char *)(param_1 + 0x48f) == '\0') {
    return;
  }
  fVar12 = DAT_00250508;
  if (*(char *)(param_1 + 0x49c) == '\0') {
    if (*(int *)(param_1 + 0x498) < 0x3f800000) {
      iVar2 = 0;
      if (*(char *)(param_1 + 0x495) == '\0') {
        puVar3 = (undefined4 *)func_0052FBA0(*DAT_00250510 + 0x3dbbc,*(uint *)(param_1 + 0x4a0));
        if (((*DAT_00250514 & 1) == 0) && (iVar4 = func_00100174((int *)DAT_00250514), iVar4 != 0))
        {
          *DAT_00250518 = DAT_0025051c;
        }
        if ((puVar3 == (undefined4 *)0x0) ||
           (iVar4 = (**(code **)*puVar3)(puVar3,DAT_00250518), iVar4 == 0)) {
          puVar3 = (undefined4 *)0x0;
        }
        if (puVar3 != (undefined4 *)0x0) {
          iVar2 = puVar3[0x1e9];
        }
      }
      else {
        iVar2 = func_00556A90(*DAT_0025050c);
      }
      if (iVar2 == *(int *)(param_1 + 0x2cc)) {
        *(undefined1 *)(param_1 + 0x49c) = 1;
      }
      else if (*(char *)(param_1 + 0x49c) == '\0') goto LAB_00250434;
      goto LAB_00250414;
    }
LAB_00250434:
    fVar11 = ALBW_AS_F32(((ulonglong)uVar10 >> 0x20)) / *(float *)(param_1 + 0x444) + fVar12;
    if (DAT_00250524 < (int)ALBW_AS_U32(fVar11)) goto LAB_00250450;
    if (fVar11 < ALBW_AS_F32(uVar10)) {
      *(float *)(param_1 + 0x498) = DAT_00250528;
    }
    else {
      fVar11 = fVar11 * DAT_0025052c;
      fVar12 = DAT_00250528;
      func_00590EC8(fVar11,DAT_00250530);
      *(float *)(param_1 + 0x498) = fVar12 + fVar11 * DAT_00250534;
    }
  }
  else {
LAB_00250414:
    fVar11 = *(float *)(param_1 + 0x498) + DAT_00250520;
    *(float *)(param_1 + 0x498) = fVar11;
    if ((int)ALBW_AS_U32(fVar11) < 0x3f800001) {
      fVar12 = fVar11;
    }
LAB_00250450:
    *(float *)(param_1 + 0x498) = fVar12;
  }
  *(float *)(*(int *)(param_1 + 0x46c) + 0x58) =
       *(float *)(param_1 + 0x440) * *(float *)(param_1 + 0x498);
  *(float *)(*(int *)(param_1 + 0x46c) + 0x60) =
       *(float *)(param_1 + 0x448) * *(float *)(param_1 + 0x498);
  func_004356B4(*(int **)(param_1 + 0x46c));
  func_004ED9C8(*(int *)(param_1 + 0x468));
LAB_002504c4:
  bVar9 = *(char *)(param_1 + 0x48f) != '\0';
  cVar1 = '\0';
  if (bVar9) {
    cVar1 = *(char *)(param_1 + 0x493);
  }
  if (bVar9 && cVar1 != '\0') {
    func_004A8304(*DAT_00250538,*(int *)(param_1 + 0x468));
    *(undefined1 *)(param_1 + 0x48f) = 0;
  }
  return;
}

