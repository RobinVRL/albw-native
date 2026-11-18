#include "ghidra_types.h"

extern ulonglong func_00110710(uint param_1,uint param_2);
extern int func_001507D8(int param_1,int *param_2,int param_3);
extern int func_00227500(int param_1,int param_2);
extern int func_0022816C(int *param_1);
extern float DAT_00228a40;
extern int *DAT_00228a44;
extern float DAT_00228a48;
extern int DAT_00228a4c;
extern undefined DAT_00228a80;
extern char s_SE_Togegoma_RotateBody1_00228a68[];
extern char s_SE_Togegoma_RotateBody2_00228acc[];
extern char s_SE_Togegoma_RotateBody3_00228a9c[];
extern char s_SE_Togegoma_RotateHead1_00228a50[];
extern char s_SE_Togegoma_RotateHead2_00228ab4[];
extern char s__SE_Togegoma_RotateHead3_00228a83[];
extern undefined4 _DAT_00228a80;

// USA 002287E4 <- EU 002287E4 (Ghidra, non-matching)
// GLOBAL DAT_00228a40 float
// GLOBAL DAT_00228a44 int *
// GLOBAL DAT_00228a48 float
// GLOBAL DAT_00228a4c int
// GLOBAL DAT_00228a80 undefined
// GLOBAL s_SE_Togegoma_RotateBody1_00228a68 string
// GLOBAL s_SE_Togegoma_RotateBody2_00228acc string
// GLOBAL s_SE_Togegoma_RotateBody3_00228a9c string
// GLOBAL s_SE_Togegoma_RotateHead1_00228a50 string
// GLOBAL s_SE_Togegoma_RotateHead2_00228ab4 string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void func_002287E4(int *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined1 in_r12;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(int *)(albw_frame + 0x0))
  #define local_2c (*(char * *)(albw_frame + 0x4))
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(char * *)(albw_frame + 0xc))
  if (ALBW_AS_F32(param_1[0x1c0]) < ALBW_AS_F32(param_1[0x1bf])) {
    param_1[0x1c0] = (int)ALBW_AS_U32((ALBW_AS_F32(param_1[0x1c0]) + ALBW_AS_F32(param_1[0x1bf]) * DAT_00228a40));
  }
  func_0022816C(param_1);
  uVar4 = 1;
  if (((char)param_1[0x1d1] != '\0') &&
     (uVar7 = func_00110710(*(uint *)(*DAT_00228a44 + 0x10),6), (int)((ulonglong)uVar7 >> 0x20) == 0
     )) {
    uVar4 = (uint)(*(char *)((int)param_1 + 0x74b) == '\0');
  }
  if ((int)*(char *)((int)param_1 + 0x74b) != uVar4) {
    func_00227500((int)param_1,uVar4);
  }
  iVar2 = DAT_00228a4c;
  fVar6 = DAT_00228a48;
  if (DAT_00228a48 < ALBW_AS_F32(param_1[0x1c0])) {
    if (*(char *)((int)param_1 + 0x73d) == '\x02') {
      local_2c = s__SE_Togegoma_RotateHead3_00228a83 + 1;
      local_30 = DAT_00228a4c;
      func_001507D8((int)param_1,&local_30,0);
      if ((char)param_1[0x1cf] != '\0') {
        local_24 = s_SE_Togegoma_RotateBody3_00228a9c;
        local_28 = iVar2;
        func_001507D8((int)param_1,&local_28,0);
      }
    }
    else {
      local_30 = DAT_00228a4c;
      if (*(char *)((int)param_1 + 0x73d) == '\x01') {
        local_2c = s_SE_Togegoma_RotateHead2_00228ab4;
        func_001507D8((int)param_1,&local_30,0);
        if ((char)param_1[0x1cf] != '\0') {
          local_24 = s_SE_Togegoma_RotateBody2_00228acc;
          local_28 = iVar2;
          func_001507D8((int)param_1,&local_28,0);
        }
      }
      else {
        local_2c = s_SE_Togegoma_RotateHead1_00228a50;
        func_001507D8((int)param_1,&local_30,0);
        if ((char)param_1[0x1cf] != '\0') {
          local_24 = s_SE_Togegoma_RotateBody1_00228a68;
          local_28 = iVar2;
          func_001507D8((int)param_1,&local_28,0);
        }
      }
    }
  }
  fVar1 = ALBW_AS_F32(_DAT_00228a80);
  iVar2 = param_1[0x1a3];
  uVar4 = 0;
  if (0 < *(int *)(iVar2 + 0xc)) {
    in_r12 = 1;
  }
  fVar5 = *(float *)(*(int *)(iVar2 + 0x14) + 0x14);
  if (0 < *(int *)(iVar2 + 0xc)) {
    do {
      iVar3 = *(int *)(iVar2 + 0x14);
      if (uVar4 < *(uint *)(iVar2 + 0xc)) {
        iVar3 = iVar3 + uVar4 * 0x28;
      }
      if ((fVar6 <= fVar1) || (fVar5 != fVar6)) {
        *(float *)(iVar3 + 0xc) = fVar5;
        *(float *)(iVar3 + 8) = fVar5;
      }
      else {
        *(float *)(iVar3 + 0xc) = *(float *)(iVar3 + 0x14);
        *(float *)(iVar3 + 8) = *(float *)(iVar3 + 0x14);
      }
      uVar4 = uVar4 + 1;
      *(float *)(iVar3 + 0x10) = fVar1;
      *(undefined4 *)(iVar3 + 0x18) = 0;
      *(undefined1 *)(iVar3 + 0x26) = in_r12;
      *(undefined1 *)(iVar3 + 0x25) = in_r12;
    } while ((int)uVar4 < *(int *)(iVar2 + 0xc));
    return;
  }
  return;
}

