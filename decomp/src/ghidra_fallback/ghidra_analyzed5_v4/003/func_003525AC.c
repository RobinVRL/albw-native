#include "ghidra_types.h"

extern int func_0010DBBC(int param_1,int *param_2,int param_3,float fparam_0);
extern int func_0010F1DC(int *param_1,int *param_2);
extern void func_0010F1F8(int *param_1,float fparam_0);
extern int func_004A1BFC(int param_1,int *param_2,undefined4 param_3,char *param_4);
extern int func_004A3968(int param_1,undefined4 *param_2,int *param_3);
extern int func_004A6528(int param_1,int *param_2);
extern int func_004A6848(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
extern int func_004A72F4(int param_1,undefined4 *param_2,int *param_3);
extern int func_005229E8(int param_1,uint param_2);
extern int func_005810A4(int param_1,uint *param_2);
extern int func_00581850(int param_1,uint *param_2);
extern int *DAT_003528c4;
extern int *DAT_003528c8;
extern int DAT_003528dc;
extern float DAT_003528e0;
extern char s_onInitialize_003528cc[];

// USA 003525AC <- EU 00352588 (Ghidra, non-matching)
// GLOBAL DAT_003528c4 int *
// GLOBAL DAT_003528c8 int *
// GLOBAL DAT_003528dc int
// GLOBAL DAT_003528e0 float
// GLOBAL s_onInitialize_003528cc string

void func_003525AC(int param_1,undefined4 *param_2,int param_3)

{
  undefined4 *puVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int extraout_r1;
  int *piVar5;
  int extraout_r1_00;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  int iVar9;
  float in_s0;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_60 (*(undefined4 *)(albw_frame + 0x0))
  #define local_5c (*(undefined4 *)(albw_frame + 0x4))
  #define local_58 (*(undefined4 *)(albw_frame + 0x8))
  #define local_54 (*(char * *)(albw_frame + 0xc))
  #define uStack_50 (*(undefined4 *)(albw_frame + 0x10))
  #define local_4c (*(undefined4 *)(albw_frame + 0x14))
  #define local_48 (*(int *)(albw_frame + 0x18))
  #define local_44 (*(char * *)(albw_frame + 0x1c))
  #define local_40 (*(int *)(albw_frame + 0x20))
  #define local_3c (*(undefined4 * *)(albw_frame + 0x24))
  #define local_30 (*(undefined4 *)(albw_frame + 0x30))
  piVar5 = DAT_003528c4;
  if (*(int *)(param_1 + 0x20) != 0) {
    return;
  }
  local_60 = *param_2;
  local_5c = param_2[1];
  local_58 = param_2[2];
  pcVar8 = (char *)param_2[3];
  uStack_50 = param_2[4];
  local_4c = 3;
  local_54 = pcVar8;
  if (param_3 != 0) {
    iVar9 = *(int *)(*DAT_003528c4 + 0x30);
    puVar1 = func_004A6848(&local_40,local_60,param_3);
    puVar1[2] = local_58;
    puVar1[3] = local_54;
    puVar1[4] = local_4c;
    pcVar2 = func_00581850(*(int *)(iVar9 + 0x20),(uint *)*param_2);
    iVar3 = 0;
    if (pcVar2 != (char *)0x0) {
      iVar3 = *(int *)(pcVar2 + 0x10);
    }
    if (pcVar2 != (char *)0x0 && iVar3 != 0) {
      *(undefined1 *)(param_1 + 0x3c) = 1;
    }
    else {
      local_30 = 0;
      *(undefined1 *)(param_1 + 0x3c) = 0;
    }
    puVar1 = func_004A72F4(iVar9,&local_40,(int *)0x0);
    *(undefined4 **)(param_1 + 0x24) = puVar1;
    iVar3 = *piVar5;
    *(undefined4 *)(puVar1[3] + 0x20) = *(undefined4 *)(iVar3 + 0x34);
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x24) + 0xc) + 0x24) = *(undefined4 *)(iVar3 + 0x38)
    ;
    func_004A6528(*(int *)(param_1 + 0x24),(int *)0x0);
  }
  iVar3 = *(int *)(*piVar5 + 0x10);
  pcVar2 = func_005810A4(*(int *)(iVar3 + 0x2c),(uint *)*param_2);
  if (pcVar2 == (char *)0x0) {
    iVar9 = *(int *)(param_1 + 0x24);
joined_r0x00352894:
    if (iVar9 == 0) {
      *(undefined4 *)(param_1 + 0x20) = 0;
      return;
    }
  }
  else {
    if (*(int *)(pcVar2 + 0xc) == 0) {
      iVar9 = *(int *)(param_1 + 0x24);
      goto joined_r0x00352894;
    }
    if (*(int *)(pcVar2 + 0x10) != 0) {
      *(undefined1 *)(param_1 + 0x3b) = 1;
      goto LAB_003526a8;
    }
  }
  local_4c = 0;
  *(undefined1 *)(param_1 + 0x3b) = 0;
LAB_003526a8:
  puVar1 = func_004A3968(iVar3,&local_60,(int *)0x0);
  *(undefined4 **)(param_1 + 0x20) = puVar1;
  puVar1[0xc] = param_1;
  iVar3 = *piVar5;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x20) + 0xc) + 0x20) = *(undefined4 *)(iVar3 + 0x18);
  iVar9 = *(int *)(*(int *)(param_1 + 0x20) + 0xc);
  *(undefined4 *)(iVar9 + 0x24) = *(undefined4 *)(iVar3 + 0x1c);
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x20) + 0xc) + 0x28) = *(undefined4 *)(iVar3 + 0x20);
  func_004A1BFC(*(int *)(param_1 + 0x20),(int *)0x0,iVar9,pcVar8);
  *(undefined1 *)(param_1 + 0x3a) = 1;
  iVar3 = *piVar5;
  iVar9 = *(int *)(param_1 + 0x1c);
  if (iVar9 != 0) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
    func_0010F1F8((int *)(param_1 + 0x10),in_s0);
    *(int *)(iVar9 + 8) = *(int *)(iVar9 + 8) + -1;
  }
  *(int **)(param_1 + 0x1c) = (int *)(iVar3 + 0x3c);
  func_0010F1DC((int *)(iVar3 + 0x3c),(int *)(param_1 + 0x10));
  *(int *)(iVar3 + 0x44) = *(int *)(iVar3 + 0x44) + 1;
  iVar9 = param_2[6];
  iVar3 = extraout_r1;
  if (iVar9 != -1) {
    iVar3 = *(int *)(param_1 + 0x20);
  }
  if (iVar9 != -1 && iVar3 != 0) {
    *(int *)(iVar3 + 0x28) = iVar9;
    iVar3 = *(int *)(param_1 + 0x24);
    if (iVar3 != 0) {
      *(int *)(iVar3 + 0x20) = iVar9;
    }
  }
  iVar9 = param_2[7];
  if (iVar9 != -1) {
    iVar3 = *(int *)(param_1 + 0x20);
  }
  if (iVar9 != -1 && iVar3 != 0) {
    *(int *)(iVar3 + 0x24) = iVar9;
    if (*(int *)(param_1 + 0x24) != 0) {
      *(int *)(*(int *)(param_1 + 0x24) + 0x1c) = iVar9;
    }
  }
  if (*DAT_003528c8 != 0) {
    if (*(int *)(param_1 + 0x20) != 0) {
      *(int *)(*(int *)(param_1 + 0x20) + 0x2c) = (int)*(char *)(*DAT_003528c8 + 0x18);
    }
  }
  fparam_0 = DAT_003528e0;
  iVar3 = DAT_003528dc;
  if (*(int *)(param_1 + 0x2c) != 0) {
    *(int *)(*(int *)(param_1 + 0x2c) + 0xa4) = param_1;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    *(int *)(*(int *)(param_1 + 0x30) + 0x10) = param_1;
  }
  local_44 = s_onInitialize_003528cc;
  local_48 = iVar3;
  func_0010DBBC(param_1,&local_48,2,fparam_0);
  iVar9 = *(int *)(param_1 + 0x30);
  if ((iVar9 != 0) && (uVar7 = (uint)*(char *)(iVar9 + 4), -1 < (int)uVar7)) {
    piVar5 = *(int **)(iVar9 + 0xc);
    if (uVar7 < *(uint *)(iVar9 + 8)) {
      piVar5 = piVar5 + uVar7 * 9;
    }
    func_0010DBBC(param_1,piVar5,1,fparam_0);
    iVar9 = extraout_r1_00;
  }
  iVar4 = *(int *)(param_1 + 0x2c);
  iVar6 = 0;
  if (iVar4 != 0) {
    iVar6 = *(int *)(iVar4 + 0xc);
    iVar9 = iVar6;
  }
  if ((iVar4 != 0 && iVar9 != 0) && -1 < iVar6) {
    local_3c = func_005229E8(iVar4,**(uint **)(iVar4 + 0x14));
    local_40 = iVar3;
    func_0010DBBC(param_1,&local_40,0,*(float *)(*(int *)(*(int *)(param_1 + 0x2c) + 0x14) + 8));
  }
  return;
}

