#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00133870(int param_1,uint param_2,int param_3);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169608(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_0016A2FC(undefined4 *param_1,int param_2,undefined4 param_3,int param_4);
extern int func_001FEA80(int *param_1,int *param_2);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern int func_004CEA18(int param_1,int param_2,uint param_3);
extern int func_00533304(int param_1,int *param_2,uint param_3);
extern int func_00537B38(int param_1);
extern int func_0055696C(int param_1,int param_2);
extern int func_00584B94(int param_1,int param_2);
extern int *DAT_004c7fc4;
extern int DAT_004c7fc8;
extern float DAT_004c7fe8;
extern float DAT_004c7fec;
extern undefined DAT_004c7ff0;
extern int *DAT_004c845c;
extern char s_DemoLinkBoots_004c8484[];
extern char s_DemoLinkBracelet_004c8018[];
extern char s_DemoLinkCloth_004c7fcc[];
extern char s_DemoLinkGlove_004c8460[];
extern char s_Link_BootsChange_004c8494[];
extern char s_Link_BraceletChange_004c802c[];
extern char s_Link_Change_004c7fdc[];
extern char s_Link_GloveChange_004c8470[];
extern char s_Link_SheathChange_004c8004[];
extern char s__DemoLinkSheath_004c7ff3[];
extern undefined4 _DAT_004c7ff0;

// USA 004C7BF4 <- EU 004C7BCC (Ghidra, non-matching)
// GLOBAL DAT_004c7fc4 int *
// GLOBAL DAT_004c7fc8 int
// GLOBAL DAT_004c7fe8 float
// GLOBAL DAT_004c7fec float
// GLOBAL DAT_004c7ff0 undefined
// GLOBAL DAT_004c845c int *
// GLOBAL s_DemoLinkBoots_004c8484 string
// GLOBAL s_DemoLinkBracelet_004c8018 string
// GLOBAL s_DemoLinkCloth_004c7fcc string
// GLOBAL s_DemoLinkGlove_004c8460 string
// GLOBAL s_Link_BootsChange_004c8494 string
// GLOBAL s_Link_BraceletChange_004c802c string
// GLOBAL s_Link_Change_004c7fdc string
// GLOBAL s_Link_GloveChange_004c8470 string
// GLOBAL s_Link_SheathChange_004c8004 string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_004C7BF4(int *param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int *piVar10;
  int iVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  _Alignas(8) unsigned char albw_frame[0xb0];
  #define local_a8 (*(int *)(albw_frame + 0x8))
  #define local_a4 (*(char * *)(albw_frame + 0xc))
  #define local_a0 (*(int *)(albw_frame + 0x10))
  #define local_9c (*(char * *)(albw_frame + 0x14))
  #define local_98 (*(int *)(albw_frame + 0x18))
  #define local_94 (*(char * *)(albw_frame + 0x1c))
  #define aiStack_90 ((int *)(albw_frame + 0x20))
  #define local_48 (*(int *)(albw_frame + 0x68))
  #define local_44 (*(char * *)(albw_frame + 0x6c))
  #define local_40 (*(int *)(albw_frame + 0x70))
  #define local_3c (*(char * *)(albw_frame + 0x74))
  #define local_38 (*(int *)(albw_frame + 0x78))
  #define local_34 (*(char * *)(albw_frame + 0x7c))
  #define local_30 (*(int *)(albw_frame + 0x80))
  #define local_2c (*(char * *)(albw_frame + 0x84))
  if ((param_2[0x160] != 0) && (iVar2 = func_001FEA80(param_1,param_2), iVar2 == 0)) {
    return 0;
  }
  if (param_1[0x4e] == 0) {
    return 0;
  }
  iVar11 = *DAT_004c7fc4;
  puVar3 = (undefined4 *)func_0010BAB4(0xa8);
  iVar2 = DAT_004c7fc8;
  puVar4 = (undefined4 *)0x0;
  if (puVar3 != (undefined4 *)0x0) {
    local_a4 = s_DemoLinkCloth_004c7fcc;
    local_a8 = DAT_004c7fc8;
    puVar4 = func_0016A2FC(puVar3,1,&local_a8,1);
  }
  param_1[0x4f] = (int)puVar4;
  if (puVar4 == (undefined4 *)0x0) {
    return 0;
  }
  local_34 = s_Link_Change_004c7fdc;
  local_38 = iVar2;
  iVar5 = func_00533304(param_1[1],&local_38,1);
  local_9c = s_Link_Change_004c7fdc;
  local_a0 = iVar2;
  if (iVar5 == 0) {
    func_00169608((uint *)param_1[0x4f],0,&local_a0,param_1[0x4e]);
  }
  else {
    func_00169608((uint *)param_1[0x4f],0,&local_a0,param_1[1]);
  }
  func_00133870(param_1[0x4f],0,param_1[2]);
  func_0016A02C(param_1[0x4f],-1,(int *)0xffffffff,0);
  piVar10 = (int *)0x0;
  puVar6 = (uint *)func_002C11E8(&local_98,0,0,0);
  iVar5 = param_1[0x4f];
  func_0016898C(iVar5,puVar6);
  fVar14 = ALBW_AS_F32(_DAT_004c7ff0);
  fVar16 = DAT_004c7fec;
  fVar15 = DAT_004c7fe8;
  *(float *)(*(int *)(param_1[0x4f] + 0x14) + 0x10) = DAT_004c7fe8;
  if (iVar11 == 0) {
LAB_004c7d40:
    uVar9 = *(undefined4 *)(param_1[0x4f] + 0xc);
    iVar7 = *(int *)(param_1[0x4f] + 0x14);
    fVar13 = *(float *)(iVar7 + 8);
    if (*(float *)(iVar7 + 8) != fVar15) {
      *(float *)(iVar7 + 8) = fVar15;
      *(undefined1 *)(iVar7 + 0x26) = 1;
      fVar13 = fVar15;
    }
  }
  else {
    iVar7 = func_0055696C(iVar11,0x1f);
    if (iVar7 == 3) {
      uVar9 = *(undefined4 *)(param_1[0x4f] + 0xc);
      iVar7 = *(int *)(param_1[0x4f] + 0x14);
      fVar13 = *(float *)(iVar7 + 8);
      if (*(float *)(iVar7 + 8) != fVar14) {
        *(float *)(iVar7 + 8) = fVar14;
        *(undefined1 *)(iVar7 + 0x26) = 1;
        fVar13 = fVar14;
      }
    }
    else {
      if (iVar7 != 4) goto LAB_004c7d40;
      uVar9 = *(undefined4 *)(param_1[0x4f] + 0xc);
      iVar7 = *(int *)(param_1[0x4f] + 0x14);
      fVar13 = *(float *)(iVar7 + 8);
      if (*(float *)(iVar7 + 8) != fVar16) {
        *(float *)(iVar7 + 8) = fVar16;
        *(undefined1 *)(iVar7 + 0x26) = 1;
        fVar13 = fVar16;
      }
    }
  }
  func_00169A80((int *)param_1[0x4f],uVar9,iVar5,piVar10);
  func_00168E9C((int *)param_1[0x4f],param_1[2],(int *)0x0);
  puVar3 = (undefined4 *)func_0010BAB4(0xa8);
  puVar4 = (undefined4 *)0x0;
  if (puVar3 != (undefined4 *)0x0) {
    local_9c = s__DemoLinkSheath_004c7ff3 + 1;
    local_a0 = iVar2;
    puVar4 = func_0016A2FC(puVar3,1,&local_a0,1);
  }
  param_1[0x50] = (int)puVar4;
  if (puVar4 == (undefined4 *)0x0) {
    return 0;
  }
  local_94 = s_Link_SheathChange_004c8004;
  local_98 = iVar2;
  iVar5 = func_00533304(param_1[1],&local_98,1);
  local_2c = s_Link_SheathChange_004c8004;
  local_30 = iVar2;
  if (iVar5 == 0) {
    func_00169608((uint *)param_1[0x50],0,&local_30,param_1[0x4e]);
  }
  else {
    func_00169608((uint *)param_1[0x50],0,&local_30,param_1[1]);
  }
  func_00133870(param_1[0x50],0,param_1[2]);
  func_0016A02C(param_1[0x50],-1,(int *)0xffffffff,0);
  piVar10 = (int *)0x0;
  puVar6 = (uint *)func_002C11E8(aiStack_90,0,0,0);
  iVar5 = param_1[0x50];
  func_0016898C(iVar5,puVar6);
  uVar12 = 0;
  *(float *)(*(int *)(param_1[0x50] + 0x14) + 0x10) = fVar15;
  if (iVar11 == 0) {
    iVar7 = param_1[0x50];
LAB_004c8068:
    fVar13 = fVar15;
    fVar15 = fVar13;
  }
  else {
    uVar12 = func_00537B38(iVar11);
    if (uVar12 != 0) {
      fVar13 = fVar14;
    }
    iVar7 = param_1[0x50];
    if (uVar12 == 0) goto LAB_004c8068;
  }
  uVar9 = *(undefined4 *)(iVar7 + 0xc);
  iVar7 = *(int *)(iVar7 + 0x14);
  if (*(float *)(iVar7 + 8) != fVar13) {
    *(float *)(iVar7 + 8) = fVar13;
    *(undefined1 *)(iVar7 + 0x26) = 1;
  }
  func_00169A80((int *)param_1[0x50],uVar9,iVar5,piVar10);
  func_00168E9C((int *)param_1[0x50],param_1[2],(int *)0x0);
  if (3 < uVar12) {
    func_004CEA18(param_1[2],0,8);
  }
  puVar3 = (undefined4 *)func_0010BAB4(0xa8);
  puVar4 = (undefined4 *)0x0;
  if (puVar3 != (undefined4 *)0x0) {
    local_9c = s_DemoLinkBracelet_004c8018;
    local_a0 = iVar2;
    puVar4 = func_0016A2FC(puVar3,1,&local_a0,1);
  }
  param_1[0x51] = (int)puVar4;
  if (puVar4 == (undefined4 *)0x0) {
    return 0;
  }
  local_a4 = s_Link_BraceletChange_004c802c;
  local_a8 = iVar2;
  iVar5 = func_00533304(param_1[1],&local_a8,1);
  local_34 = s_Link_BraceletChange_004c802c;
  local_38 = iVar2;
  if (iVar5 == 0) {
    func_00169608((uint *)param_1[0x51],0,&local_38,param_1[0x4e]);
  }
  else {
    func_00169608((uint *)param_1[0x51],0,&local_38,param_1[1]);
  }
  func_00133870(param_1[0x51],0,param_1[2]);
  func_0016A02C(param_1[0x51],-1,(int *)0xffffffff,0);
  piVar10 = (int *)0x0;
  puVar6 = (uint *)func_002C11E8((int *)&local_94,0,0,0);
  iVar7 = param_1[0x51];
  func_0016898C(iVar7,puVar6);
  *(float *)(*(int *)(param_1[0x51] + 0x14) + 0x10) = fVar15;
  uVar9 = *(undefined4 *)(param_1[0x51] + 0xc);
  iVar5 = *(int *)(param_1[0x51] + 0x14);
  if (*(float *)(iVar5 + 8) != fVar15) {
    *(float *)(iVar5 + 8) = fVar15;
    *(undefined1 *)(iVar5 + 0x26) = 1;
  }
  func_00169A80((int *)param_1[0x51],uVar9,iVar7,piVar10);
  func_00168E9C((int *)param_1[0x51],param_1[2],(int *)0x0);
  bVar1 = func_00584B94(*DAT_004c845c,0xd2);
  if (!bVar1) {
    func_004CEA18(param_1[2],0,6);
  }
  puVar3 = (undefined4 *)func_0010BAB4(0xa8);
  puVar4 = (undefined4 *)0x0;
  if (puVar3 != (undefined4 *)0x0) {
    local_44 = s_DemoLinkGlove_004c8460;
    local_48 = iVar2;
    puVar4 = func_0016A2FC(puVar3,1,&local_48,1);
  }
  param_1[0x52] = (int)puVar4;
  if (puVar4 == (undefined4 *)0x0) {
    return 0;
  }
  local_3c = s_Link_GloveChange_004c8470;
  local_40 = iVar2;
  iVar5 = func_00533304(param_1[1],&local_40,1);
  local_34 = s_Link_GloveChange_004c8470;
  local_38 = iVar2;
  if (iVar5 == 0) {
    func_00169608((uint *)param_1[0x52],0,&local_38,param_1[0x4e]);
  }
  else {
    func_00169608((uint *)param_1[0x52],0,&local_38,param_1[1]);
  }
  func_00133870(param_1[0x52],0,param_1[2]);
  func_0016A02C(param_1[0x52],-1,(int *)0xffffffff,0);
  piVar10 = (int *)0x0;
  puVar6 = (uint *)func_002C11E8((int *)&local_a4,0,0,0);
  iVar5 = param_1[0x52];
  func_0016898C(iVar5,puVar6);
  *(float *)(*(int *)(param_1[0x52] + 0x14) + 0x10) = fVar15;
  if ((iVar11 == 0) || (iVar7 = func_0055696C(iVar11,0x1e), iVar7 == 0)) {
    uVar9 = *(undefined4 *)(param_1[0x52] + 0xc);
    iVar7 = *(int *)(param_1[0x52] + 0x14);
    if (*(float *)(iVar7 + 8) != fVar15) {
      *(float *)(iVar7 + 8) = fVar15;
      *(undefined1 *)(iVar7 + 0x26) = 1;
    }
  }
  else {
    uVar9 = *(undefined4 *)(param_1[0x52] + 0xc);
    iVar8 = *(int *)(param_1[0x52] + 0x14);
    if (iVar7 == 1 || iVar7 == 2) {
      if (*(float *)(iVar8 + 8) != fVar14) {
        *(float *)(iVar8 + 8) = fVar14;
        goto LAB_004c8290;
      }
    }
    else if (*(float *)(iVar8 + 8) != fVar16) {
      *(float *)(iVar8 + 8) = fVar16;
LAB_004c8290:
      *(undefined1 *)(iVar8 + 0x26) = 1;
    }
  }
  func_00169A80((int *)param_1[0x52],uVar9,iVar5,piVar10);
  func_00168E9C((int *)param_1[0x52],param_1[2],(int *)0x0);
  puVar3 = (undefined4 *)func_0010BAB4(0xa8);
  puVar4 = (undefined4 *)0x0;
  if (puVar3 != (undefined4 *)0x0) {
    local_a4 = s_DemoLinkBoots_004c8484;
    local_a8 = iVar2;
    puVar4 = func_0016A2FC(puVar3,1,&local_a8,1);
  }
  param_1[0x53] = (int)puVar4;
  if (puVar4 == (undefined4 *)0x0) {
    return 0;
  }
  local_3c = s_Link_BootsChange_004c8494;
  local_40 = iVar2;
  iVar5 = func_00533304(param_1[1],&local_40,1);
  local_34 = s_Link_BootsChange_004c8494;
  local_38 = iVar2;
  if (iVar5 == 0) {
    func_00169608((uint *)param_1[0x53],0,&local_38,param_1[0x4e]);
  }
  else {
    func_00169608((uint *)param_1[0x53],0,&local_38,param_1[1]);
  }
  func_00133870(param_1[0x53],0,param_1[2]);
  func_0016A02C(param_1[0x53],-1,(int *)0xffffffff,0);
  piVar10 = (int *)0x0;
  puVar6 = (uint *)func_002C11E8(&local_a0,0,0,0);
  iVar2 = param_1[0x53];
  func_0016898C(iVar2,puVar6);
  *(float *)(*(int *)(param_1[0x53] + 0x14) + 0x10) = fVar15;
  if (iVar11 == 0) {
    iVar11 = param_1[0x53];
  }
  else {
    iVar5 = func_0055696C(iVar11,0x20);
    iVar11 = param_1[0x53];
    if (iVar5 != 0) goto LAB_004c8418;
  }
  fVar14 = fVar15;
LAB_004c8418:
  uVar9 = *(undefined4 *)(iVar11 + 0xc);
  iVar11 = *(int *)(iVar11 + 0x14);
  if (*(float *)(iVar11 + 8) != fVar14) {
    *(float *)(iVar11 + 8) = fVar14;
    *(undefined1 *)(iVar11 + 0x26) = 1;
  }
  func_00169A80((int *)param_1[0x53],uVar9,iVar2,piVar10);
  func_00168E9C((int *)param_1[0x53],param_1[2],(int *)0x0);
  return 1;
}

