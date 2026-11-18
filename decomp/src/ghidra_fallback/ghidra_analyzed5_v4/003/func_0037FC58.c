#include "ghidra_types.h"

extern int func_001151EC(undefined4 *param_1,undefined4 *param_2);
extern int func_001157FC(float *param_1,float *param_2,float *param_3);
extern int func_00115C8C(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_00380B64(int param_1);
extern int func_00491A18(float *param_1,uint *param_2,float *param_3);
extern int func_004A2F38(int param_1,undefined4 *param_2);
extern int func_004CEAF0(int param_1);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);
extern int func_0054D884(int param_1,uint param_2);
extern int func_00564A78(int param_1,int *param_2);
extern int func_005811E8(int *param_1);
extern int func_00588BE4(int param_1);
extern int func_006824D4(int *param_1,float *param_2,undefined4 *param_3,float *param_4);
extern float DAT_00380040;
extern float DAT_00380044;
extern undefined4 DAT_00380048;
extern int *DAT_0038004c;
extern float *DAT_00380090;
extern float DAT_0038019c;
extern int *DAT_003801a0;
extern char s_Larm0_00380038[];
extern char s_loc_Heishi_great_ironball_handle_00380050[];
extern char s_loc_Heishi_ironball_handle_00380074[];

// USA 0037FC58 <- EU 0037FC34 (Ghidra, non-matching)
// GLOBAL DAT_00380040 float
// GLOBAL DAT_00380044 float
// GLOBAL DAT_00380048 undefined4
// GLOBAL DAT_0038004c int *
// GLOBAL DAT_00380090 float *
// GLOBAL DAT_0038019c float
// GLOBAL DAT_003801a0 int *
// GLOBAL s_Larm0_00380038 string
// GLOBAL s_loc_Heishi_great_ironball_handle_00380050 string
// GLOBAL s_loc_Heishi_ironball_handle_00380074 string

void func_0037FC58(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  float *pfVar4;
  int *piVar5;
  float *pfVar6;
  int *extraout_r1;
  int *extraout_r1_00;
  float fVar7;
  float fVar8;
  int iVar9;
  int *piVar10;
  undefined8 uVar11;
  _Alignas(8) unsigned char albw_frame[0xb0];
  #define auStack_b0 ((undefined4 *)(albw_frame + 0x0))
  #define local_a4 (*(undefined4 *)(albw_frame + 0xc))
  #define local_94 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_84 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_80 (*(float *)(albw_frame + 0x30))
  #define uStack_7c (*(undefined4 *)(albw_frame + 0x34))
  #define uStack_78 (*(undefined4 *)(albw_frame + 0x38))
  #define local_70 (*(float *)(albw_frame + 0x40))
  #define local_6c (*(char * *)(albw_frame + 0x44))
  #define local_68 (*(float *)(albw_frame + 0x48))
  #define local_64 (*(char * *)(albw_frame + 0x4c))
  #define local_60 (*(float *)(albw_frame + 0x50))
  #define uStack_5c (*(undefined4 *)(albw_frame + 0x54))
  #define uStack_58 (*(undefined4 *)(albw_frame + 0x58))
  #define afStack_4c ((float *)(albw_frame + 0x64))
  #define local_40 ((uint *)(albw_frame + 0x70))
  iVar2 = *(int *)(param_1 + 0xa6c);
  iVar9 = 0;
  piVar10 = (int *)(param_1 + 0xa6c);
  *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 0x40000000;
  func_001151EC((undefined4 *)(iVar2 + 0x80),
                (undefined4 *)
                (*(int *)(*(int *)(*(int *)(param_1 + 0x40c) + 0x24) + 0x14) +
                *(int *)(param_1 + 0xb1c) * 0x30));
  fVar7 = DAT_00380040;
  local_64 = s_Larm0_00380038;
  local_68 = DAT_00380040;
  uVar3 = func_00564A78(*(int *)(param_1 + 0x40c),(int *)&local_68);
  func_001151EC(auStack_b0,
                (undefined4 *)
                (*(int *)(*(int *)(*(int *)(param_1 + 0x40c) + 0x24) + 0x14) + uVar3 * 0x30));
  fVar8 = DAT_00380044;
  *(undefined4 *)(param_1 + 0xa78) = local_a4;
  *(undefined4 *)(param_1 + 0xa7c) = local_94;
  *(undefined4 *)(param_1 + 0xa80) = local_84;
  pfVar6 = (float *)(param_1 + 0x4e4);
  iVar2 = *piVar10;
  func_00115D70(&local_60,pfVar6,fVar8);
  uVar1 = DAT_00380048;
  uVar11 = CONCAT44(fVar8,DAT_00380048);
  *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 0x40000000;
  *(float *)(iVar2 + 0x74) = local_60;
  *(undefined4 *)(iVar2 + 0x78) = uStack_5c;
  *(undefined4 *)(iVar2 + 0x7c) = uStack_58;
  *(undefined4 *)(*piVar10 + 0x134) = uVar1;
  func_004CEAF0(*piVar10);
  piVar10 = DAT_0038004c;
  if (*(int *)(param_1 + 0xb20) == 0) {
    iVar2 = func_00588BE4(param_1);
    local_70 = fVar7;
    if (iVar2 == *piVar10) {
      local_6c = s_loc_Heishi_great_ironball_handle_00380050;
      uVar3 = func_00564A78(*(int *)(param_1 + 0xa6c),(int *)&local_70);
      *(uint *)(param_1 + 0xb20) = uVar3;
    }
    else {
      local_6c = s_loc_Heishi_ironball_handle_00380074;
      uVar3 = func_00564A78(*(int *)(param_1 + 0xa6c),(int *)&local_70);
      *(uint *)(param_1 + 0xb20) = uVar3;
    }
  }
  func_001151EC(auStack_b0,
                (undefined4 *)
                (*(int *)(*(int *)(*(int *)(param_1 + 0xa6c) + 0x24) + 0x14) +
                *(int *)(param_1 + 0xb20) * 0x30));
  *(undefined4 *)(param_1 + 0xa84) = local_a4;
  *(undefined4 *)(param_1 + 0xa88) = local_94;
  *(undefined4 *)(param_1 + 0xa8c) = local_84;
  if (*(char *)(param_1 + 0xb30) == '\0') {
    *(undefined4 *)(param_1 + 0xa90) = *(undefined4 *)(param_1 + 0xa84);
    *(undefined4 *)(param_1 + 0xa94) = *(undefined4 *)(param_1 + 0xa88);
    *(undefined4 *)(param_1 + 0xa98) = *(undefined4 *)(param_1 + 0xa8c);
    do {
      fVar7 = *(float *)(param_1 + 0xa88);
      fVar8 = *(float *)(param_1 + 0xa8c);
      pfVar4 = (float *)(param_1 + 0x8c8 + iVar9 * 0x20);
      iVar9 = iVar9 + 1;
      *pfVar4 = *(float *)(param_1 + 0xa84);
      pfVar4[1] = fVar7;
      pfVar4[2] = fVar8;
    } while (iVar9 != 10);
    *(undefined1 *)(param_1 + 0xb30) = 1;
  }
  func_00380B64(param_1);
  fVar8 = *(float *)(param_1 + 0xa90) - *(float *)(param_1 + 0xa84);
  fVar7 = *(float *)(param_1 + 0xa98) - *(float *)(param_1 + 0xa8c);
  iVar2 = 0;
  *(float *)(param_1 + 0xb10) = SQRT(fVar8 * fVar8 + fVar7 * fVar7);
  do {
    pfVar4 = (float *)(param_1 + 0x8c8 + iVar2 * 0x20);
    fVar7 = pfVar4[3];
    *(uint *)((int)ALBW_AS_U32(fVar7) + 0x164) = *(uint *)((int)ALBW_AS_U32(fVar7) + 0x164) | 0x40000000;
    func_004D8AEC((float *)((int)ALBW_AS_U32(fVar7) + 0x80),0,pfVar4);
    func_00115D70(&local_70,pfVar6,ALBW_AS_F32(((ulonglong)uVar11 >> 0x20)));
    fVar7 = pfVar4[3];
    *(uint *)((int)ALBW_AS_U32(fVar7) + 0x164) = *(uint *)((int)ALBW_AS_U32(fVar7) + 0x164) | 0x40000000;
    *(float *)((int)ALBW_AS_U32(fVar7) + 0x74) = local_70;
    *(char **)((int)ALBW_AS_U32(fVar7) + 0x78) = local_6c;
    *(float *)((int)ALBW_AS_U32(fVar7) + 0x7c) = local_68;
    func_004CEAF0((int)ALBW_AS_U32(pfVar4[3]));
    iVar2 = iVar2 + 1;
  } while (iVar2 != 10);
  iVar2 = func_00588BE4(param_1);
  if (iVar2 == *piVar10) {
    iVar2 = func_005811E8((int *)(param_1 + 0xb44));
    if (iVar2 != 0) {
      iVar2 = *(int *)(param_1 + 0xb44);
      if ((iVar2 != 0) && (*(int *)(iVar2 + 0x1c) == *(int *)(param_1 + 0xb48))) {
        func_004A2F38(iVar2,(undefined4 *)(param_1 + 0xa90));
      }
    }
    iVar2 = func_005811E8((int *)(param_1 + 0xb3c));
    if (iVar2 != 0) {
      iVar2 = *(int *)(param_1 + 0xb3c);
      if ((iVar2 != 0) && (*(int *)(iVar2 + 0x1c) == *(int *)(param_1 + 0xb40))) {
        func_004A2F38(iVar2,(undefined4 *)(param_1 + 0xa90));
      }
    }
    iVar2 = func_005811E8((int *)(param_1 + 0xb54));
    if (iVar2 != 0) {
      iVar2 = *(int *)(param_1 + 0xb54);
      if ((iVar2 != 0) && (*(int *)(iVar2 + 0x1c) == *(int *)(param_1 + 0xb58))) {
        func_004A2F38(iVar2,(undefined4 *)(param_1 + 0xa90));
      }
    }
    iVar2 = func_005811E8((int *)(param_1 + 0xb4c));
    if (iVar2 != 0) {
      iVar2 = *(int *)(param_1 + 0xb4c);
      if ((iVar2 != 0) && (*(int *)(iVar2 + 0x1c) == *(int *)(param_1 + 0xb50))) {
        func_004A2F38(iVar2,(undefined4 *)(param_1 + 0xa90));
      }
    }
  }
  iVar2 = *(int *)(param_1 + 0xa70);
  piVar10 = (int *)(param_1 + 0xa70);
  *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 0x40000000;
  func_004D8AEC((float *)(iVar2 + 0x80),*(uint *)(param_1 + 0xad0),(float *)(param_1 + 0xa90));
  local_40[2] = *(undefined4 *)(param_1 + 0xad4);
  local_40[0] = 0;
  local_40[1] = 0;
  func_00491A18(&local_80,local_40,DAT_00380090);
  iVar2 = *piVar10;
  *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 0x40000000;
  func_001157FC((float *)(iVar2 + 0x80),(float *)(*piVar10 + 0x80),&local_80);
  fVar7 = *(float *)(param_1 + 0xb14);
  fVar7 = fVar7 + (ALBW_AS_F32(((ulonglong)uVar11 >> 0x20)) - fVar7) * DAT_0038019c;
  *(float *)(param_1 + 0xb14) = fVar7;
  iVar2 = *piVar10;
  func_00115D70(&local_80,pfVar6,fVar7);
  *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 0x40000000;
  *(float *)(iVar2 + 0x74) = local_80;
  *(undefined4 *)(iVar2 + 0x78) = uStack_7c;
  *(undefined4 *)(iVar2 + 0x7c) = uStack_78;
  iVar2 = *piVar10;
  iVar9 = func_0054D884(*(int *)(param_1 + 0x2d0) + 0x18,1);
  func_00115C8C(afStack_4c,(float *)(iVar2 + 0x74),(float *)(iVar9 + 4));
  piVar10 = extraout_r1;
  if (*(int **)(param_1 + 0xa20) != (int *)0x0) {
    func_006824D4(*(int **)(param_1 + 0xa20),afStack_4c,(undefined4 *)(iVar2 + 0x80),
                  (float *)(param_1 + 0xa90));
    piVar10 = extraout_r1_00;
  }
  piVar5 = *(int **)(param_1 + 0xa24);
  if (piVar5 != (int *)0x0) {
    piVar10 = *(int **)(param_1 + 0xa20);
  }
  if (piVar5 != (int *)0x0 && piVar5 != piVar10) {
    func_006824D4(piVar5,afStack_4c,(undefined4 *)(iVar2 + 0x80),(float *)(param_1 + 0xa90));
  }
  if (*(char *)(param_1 + 0xa4c) == '\a') {
    uVar3 = *(uint *)(param_1 + 1000);
  }
  else {
    uVar3 = *DAT_003801a0 + *(int *)(param_1 + 0xad0);
  }
  iVar2 = *(int *)(param_1 + 0xa1c);
  func_004D80A4((float *)(iVar2 + 0x24),uVar3,ALBW_AS_F32(((ulonglong)uVar11 >> 0x20)));
  *(int *)(iVar2 + 0x28) = (int)uVar11;
  return;
}

