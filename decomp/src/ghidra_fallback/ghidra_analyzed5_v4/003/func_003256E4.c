#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_004F9F40(int param_1,float *param_2);
extern int func_00520FC0(void);
extern int func_00521098(undefined4 param_1,int *param_2);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_0053F294(int param_1);
extern int func_0054E0F8(int *param_1);
extern float func_0054E4C4(undefined4 param_1,undefined4 *param_2,undefined4 param_3);
extern int func_0058E2B8(int *param_1);
extern int func_0068C690(float *param_1);
extern float DAT_00325a4c;
extern int *DAT_00325a50;
extern int *DAT_00325a54;
extern uint *DAT_00325a58;
extern undefined4 *DAT_00325a5c;
extern undefined4 DAT_00325a60;
extern float DAT_00325a64;

// USA 003256E4 <- EU 003256C0 (Ghidra, non-matching)
// GLOBAL DAT_00325a4c float
// GLOBAL DAT_00325a50 int *
// GLOBAL DAT_00325a54 int *
// GLOBAL DAT_00325a58 uint *
// GLOBAL DAT_00325a5c undefined4 *
// GLOBAL DAT_00325a60 undefined4
// GLOBAL DAT_00325a64 float

undefined4 func_003256E4(int *param_1,uint *param_2)

{
  bool bVar1;
  int iVar2;
  float *pfVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  float *pfVar7;
  int iVar8;
  bool bVar9;
  float fVar10;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(float *)(albw_frame + 0x0))
  #define local_3c (*(float *)(albw_frame + 0x4))
  #define uStack_38 (*(undefined4 *)(albw_frame + 0x8))
  #define local_34 (*(float *)(albw_frame + 0xc))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x14))
  #define local_28 ((int *)(albw_frame + 0x18))
  bVar1 = func_00521098(param_1,(int *)param_2);
  piVar5 = DAT_00325a50;
  if (bVar1) {
    iVar8 = param_1[0xb3];
    fVar10 = DAT_00325a4c;
    iVar2 = func_0053F294(*DAT_00325a50);
    if (iVar8 == iVar2) {
      return 0;
    }
    pfVar7 = *(float **)(*piVar5 + 0x20);
    if ((*pfVar7 == fVar10) && (pfVar7[2] == fVar10)) {
      return 0;
    }
    iVar2 = **(int **)(*piVar5 + 0x24);
    pfVar7 = (float *)func_00520FC0();
    pfVar3 = (float *)(**(code **)(*param_1 + 0x78))(param_1);
    func_00115C70(&local_40,pfVar7,pfVar3);
    iVar8 = func_0068C690(&local_40);
    uVar4 = iVar8 + 0x20000000U >> 0x1e;
    if (uVar4 < 4) {
      uVar4 = uVar4 + 2 & 3;
    }
    else {
      uVar4 = 0xffffffff;
    }
    if (uVar4 != iVar2 + 0x20000000U >> 0x1e) {
      return 0;
    }
    *(undefined1 *)((int)param_1 + 0x4ed) = 1;
    return 0;
  }
  fVar10 = DAT_00325a4c;
  iVar2 = func_0054E0F8(param_1);
  if (iVar2 != 0) {
    bVar1 = false;
    if (ALBW_AS_F32(param_1[0xf7]) == fVar10) {
      bVar1 = ALBW_AS_F32(param_1[0xf8]) == fVar10;
    }
    bVar9 = false;
    if (bVar1) {
      bVar9 = ALBW_AS_F32(param_1[0xf9]) == fVar10;
    }
    if (!bVar9) goto LAB_003258a8;
  }
  pfVar7 = (float *)(**(code **)(*param_1 + 0x78))(param_1);
  if (((*pfVar7 == ALBW_AS_F32(param_1[0xf4])) && (pfVar7[1] == ALBW_AS_F32(param_1[0xf5]))) &&
     (pfVar7[2] == ALBW_AS_F32(param_1[0xf6]))) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    return 0;
  }
  pfVar7 = (float *)(**(code **)(*param_1 + 0x78))(param_1);
  pfVar3 = (float *)(**(code **)(*param_1 + 0x7c))(param_1);
  if (((*pfVar7 == *pfVar3) && (pfVar7[1] == pfVar3[1])) && (pfVar7[2] == pfVar3[2])) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    return 0;
  }
LAB_003258a8:
  piVar5 = (int *)func_0052FBA0(*DAT_00325a54 + 0x3dbbc,*param_2);
  if (((piVar5 != (int *)0x0) && (*(char *)((int)piVar5 + 0x2d6) != '\0')) &&
     (((char)param_1[0x124] != -1 &&
      ((piVar5[0xe8] != 0 && ((*(ushort *)(piVar5[0xe8] + 4) & 0xff) == 2)))))) {
    if (((*DAT_00325a58 & 1) == 0) && (iVar2 = func_00100174((int *)DAT_00325a58), iVar2 != 0)) {
      *DAT_00325a5c = DAT_00325a60;
    }
    iVar2 = (**(code **)*piVar5)(piVar5,DAT_00325a5c);
    if (iVar2 == 0) {
      piVar5 = (int *)0x0;
    }
    if (piVar5 != (int *)0x0) {
      pfVar7 = (float *)(**(code **)(*param_1 + 0x78))(param_1);
      func_00115C70(&local_40,(float *)(piVar5 + 0xf4),pfVar7);
      local_34 = local_40;
      uStack_30 = ALBW_AS_U32(local_3c);
      uStack_2c = uStack_38;
      local_28[0] = func_0068C690(&local_34);
      uVar4 = (uint)(char)param_1[0x124];
      if (uVar4 == local_28[0] + 0x20000000U >> 0x1e) {
        local_28[0] = local_28[0] + uVar4 * -0x40000000;
        uVar6 = func_0058E2B8(local_28);
        if (uVar6 < 0x20000000) {
          func_004D80A4(&local_40,uVar4 * 0x40000000,ALBW_AS_F32(piVar5[0x131]) + DAT_00325a64);
          local_3c = fVar10;
          func_00115C54(&local_40,&local_40,(float *)(piVar5 + 0xf4));
          fVar10 = func_0054E4C4(param_1,&local_40,0xffffffff);
          if (ALBW_AS_F32(piVar5[0xf5]) + ALBW_AS_F32(param_1[0x132]) < fVar10) {
            return (**(code **)(*piVar5 + 0x78))(piVar5,1,4);
          }
          if (fVar10 < ALBW_AS_F32(piVar5[0xf5])) {
            return func_004F9F40((int)piVar5,&local_40);
          }
        }
      }
    }
  }
  return 0;
}

