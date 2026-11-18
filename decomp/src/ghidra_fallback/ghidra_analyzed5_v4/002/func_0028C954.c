#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010DA7C(undefined4 *param_1,undefined4 param_2,int param_3);
extern int func_00133870(int param_1,uint param_2,int param_3);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00169608(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_0016A2FC(undefined4 *param_1,int param_2,undefined4 param_3,int param_4);
extern int func_0028DD64(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern int func_002C2D00(int *param_1);
extern int func_002FF8A4(int param_1,int param_2,int param_3,int param_4,int param_5,int *param_6,int param_7);
extern int func_0030022C(undefined4 *param_1);
extern int func_004CEAF0(int param_1);
extern int func_0055326C(void);
extern int func_00564A78(int param_1,int *param_2);
extern int func_00584C14(int param_1,int *param_2);
extern int func_00584CA8(int param_1,int param_2,int param_3);
extern undefined4 DAT_0028cdbc;
extern int *DAT_0028cdc0;
extern undefined4 DAT_0028cdc4;
extern uint DAT_0028cdc8;
extern undefined DAT_0028cdcc;
extern undefined DAT_0028cdec;
extern undefined DAT_0028ce0c;
extern undefined DAT_0028ce30;
extern undefined DAT_0028ce54;
extern undefined DAT_0028ce78;
extern undefined4 DAT_0028ce98;
extern float DAT_0028ce9c;
extern undefined4 DAT_0028cea0;
extern undefined *DAT_0028cea4;
extern undefined4 DAT_0028cea8;
extern undefined4 DAT_0028ceac;
extern int *DAT_0028ceb0;
extern undefined4 *DAT_0028ceb4;
extern undefined DAT_0028ceb8;
extern int *DAT_0028d570;
extern int *DAT_0028d574;
extern int *DAT_0028d578;
extern int *DAT_0028d57c;
extern int *DAT_0028d580;
extern int *DAT_0028d584;
extern int *DAT_0028d588;
extern int *DAT_0028d58c;
extern int *DAT_0028d590;
extern int *DAT_0028d594;
extern char s_Link_BootsChange_0028d37c[];
extern char s_Link_BraceletChange_0028d344[];
extern char s_Link_FaceChange_0028d390[];
extern char s_Link_GloveChange_0028d368[];
extern char s_Link_SheathChange_0028d324[];
extern char s__Link_Change_0028cebb[];
extern char s_bracelet_mesh_0028d358[];
extern char s_sheath_mesh_0028d338[];
extern undefined4 _DAT_0028ceb8;

// USA 0028C954 <- EU 0028C97C (Ghidra, non-matching)
// GLOBAL DAT_0028cdbc undefined4
// GLOBAL DAT_0028cdc0 int *
// GLOBAL DAT_0028cdc4 undefined4
// GLOBAL DAT_0028cdc8 uint
// GLOBAL DAT_0028cdcc undefined
// GLOBAL DAT_0028cdec undefined
// GLOBAL DAT_0028ce0c undefined
// GLOBAL DAT_0028ce30 undefined
// GLOBAL DAT_0028ce54 undefined
// GLOBAL DAT_0028ce78 undefined
// GLOBAL DAT_0028ce98 undefined4
// GLOBAL DAT_0028ce9c float
// GLOBAL DAT_0028cea0 undefined4
// GLOBAL DAT_0028cea4 undefined *
// GLOBAL DAT_0028cea8 undefined4
// GLOBAL DAT_0028ceac undefined4
// GLOBAL DAT_0028ceb0 int *
// GLOBAL DAT_0028ceb4 undefined4 *
// GLOBAL DAT_0028ceb8 undefined
// GLOBAL DAT_0028d570 int *
// GLOBAL DAT_0028d574 int *
// GLOBAL DAT_0028d578 int *
// GLOBAL DAT_0028d57c int *
// GLOBAL DAT_0028d580 int *
// GLOBAL DAT_0028d584 int *
// GLOBAL DAT_0028d588 int *
// GLOBAL DAT_0028d58c int *
// GLOBAL DAT_0028d590 int *
// GLOBAL DAT_0028d594 int *
// GLOBAL s_Link_BootsChange_0028d37c string
// GLOBAL s_Link_BraceletChange_0028d344 string
// GLOBAL s_Link_FaceChange_0028d390 string
// GLOBAL s_Link_GloveChange_0028d368 string
// GLOBAL s_Link_SheathChange_0028d324 string
// GLOBAL s_bracelet_mesh_0028d358 string
// GLOBAL s_sheath_mesh_0028d338 string

/* WARNING: Variable defined which should be unmapped: objStack_a0 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * func_0028C954(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  int *piVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  int iVar14;
  float fVar15;
  undefined4 uVar16;
  _Alignas(8) unsigned char albw_frame[0xa0];
  #define objStack_a0 ((uint *)(albw_frame + 0x0))
  #define local_90 (*(uint *)(albw_frame + 0x10))
  #define local_8c (*(undefined * *)(albw_frame + 0x14))
  #define uStack_88 (*(uint *)(albw_frame + 0x18))
  #define uStack_84 (*(undefined4 *)(albw_frame + 0x1c))
  #define uStack_80 (*(uint *)(albw_frame + 0x20))
  #define uStack_7c (*(undefined4 *)(albw_frame + 0x24))
  #define local_78 (*(undefined4 *)(albw_frame + 0x28))
  #define uStack_74 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_70 (*(undefined4 *)(albw_frame + 0x30))
  #define local_6c (*(undefined1 *)(albw_frame + 0x34))
  #define local_6b (*(undefined1 *)(albw_frame + 0x35))
  #define local_68 (*(undefined4 *)(albw_frame + 0x38))
  #define local_64 (*(undefined4 *)(albw_frame + 0x3c))
  #define local_60 (*(undefined4 *)(albw_frame + 0x40))
  #define local_5c (*(undefined4 *)(albw_frame + 0x44))
  #define local_58 (*(undefined4 *)(albw_frame + 0x48))
  #define local_54 (*(undefined4 *)(albw_frame + 0x4c))
  #define local_50 (*(undefined1 *)(albw_frame + 0x50))
  #define local_4f (*(undefined1 *)(albw_frame + 0x51))
  puVar4 = func_0010DA7C(param_1,0,3);
  uVar13 = DAT_0028cdc4;
  piVar9 = DAT_0028cdc0;
  *puVar4 = DAT_0028cdbc;
  uVar12 = DAT_0028cdc8;
  local_78 = *(undefined4 *)(*(int *)(*piVar9 + 0x10) + 0x10);
  uStack_88 = DAT_0028cdc8;
  uStack_84 = uVar13;
  uStack_74 = 0;
  uStack_80 = DAT_0028cdc8;
  uStack_7c = uVar13;
  local_50 = 1;
  local_6b = 0;
  local_58 = 0;
  local_54 = 0;
  local_64 = 0;
  local_5c = 0;
  local_68 = 0;
  local_60 = 0;
  local_4f = 0xc4;
  local_70 = 1;
  local_6c = 1;
  piVar5 = func_002C2D00((int *)&uStack_88);
  puVar4[4] = piVar5;
  puVar4[5] = 0;
  puVar6 = (undefined4 *)func_0010BAB4(0xa8);
  puVar7 = (undefined4 *)0x0;
  if (puVar6 != (undefined4 *)0x0) {
    local_8c = &DAT_0028cdcc;
    local_90 = uVar12;
    puVar7 = func_0016A2FC(puVar6,1,&local_90,1);
  }
  puVar4[6] = puVar7;
  puVar6 = (undefined4 *)func_0010BAB4(0xa8);
  puVar7 = (undefined4 *)0x0;
  if (puVar6 != (undefined4 *)0x0) {
    local_8c = &DAT_0028cdec;
    local_90 = uVar12;
    puVar7 = func_0016A2FC(puVar6,1,&local_90,1);
  }
  puVar4[7] = puVar7;
  puVar6 = (undefined4 *)func_0010BAB4(0xa8);
  puVar7 = (undefined4 *)0x0;
  if (puVar6 != (undefined4 *)0x0) {
    local_8c = &DAT_0028ce0c;
    local_90 = uVar12;
    puVar7 = func_0016A2FC(puVar6,1,&local_90,1);
  }
  puVar4[8] = puVar7;
  puVar6 = (undefined4 *)func_0010BAB4(0xa8);
  puVar7 = (undefined4 *)0x0;
  if (puVar6 != (undefined4 *)0x0) {
    local_8c = &DAT_0028ce30;
    local_90 = uVar12;
    puVar7 = func_0016A2FC(puVar6,1,&local_90,1);
  }
  puVar4[9] = puVar7;
  puVar6 = (undefined4 *)func_0010BAB4(0xa8);
  puVar7 = (undefined4 *)0x0;
  if (puVar6 != (undefined4 *)0x0) {
    local_8c = &DAT_0028ce54;
    local_90 = uVar12;
    puVar7 = func_0016A2FC(puVar6,1,&local_90,1);
  }
  puVar4[10] = puVar7;
  puVar6 = (undefined4 *)func_0010BAB4(0xa8);
  puVar7 = (undefined4 *)0x0;
  if (puVar6 != (undefined4 *)0x0) {
    local_8c = &DAT_0028ce78;
    local_90 = uVar12;
    puVar7 = func_0016A2FC(puVar6,1,&local_90,1);
  }
  puVar4[0xb] = puVar7;
  puVar7 = (undefined4 *)func_0010BAB4(0x18c);
  iVar8 = 0;
  if (puVar7 != (undefined4 *)0x0) {
    iVar8 = func_0030022C(puVar7);
  }
  uVar16 = DAT_0028ce98;
  puVar4[0xc] = iVar8;
  puVar4[0xd] = uVar16;
  puVar4[0xe] = puVar4;
  puVar7 = func_0028DD64(puVar4 + 0xf,puVar4,puVar4[4],1);
  puVar7 = func_0028DD64(puVar7 + 8,puVar7 + -0xf,puVar7[-0xb],0);
  puVar7[8] = 0xffffffff;
  puVar7[9] = 0xffffffff;
  puVar7[10] = 0xffffffff;
  puVar7[0xb] = 0xffffffff;
  puVar7[0xc] = 0xffffffff;
  puVar7[0xd] = 0xffffffff;
  puVar7[0xe] = 0xffffffff;
  puVar7[0xf] = 0xffffffff;
  puVar7[0x10] = 0xffffffff;
  puVar7[0x11] = 0xffffffff;
  puVar7[0x12] = 0xffffffff;
  fVar15 = DAT_0028ce9c;
  puVar7[0x13] = 0xffffffff;
  puVar7[0x14] = 0;
  puVar7[0x15] = ALBW_AS_U32(fVar15);
  puVar7[0x16] = ALBW_AS_U32(fVar15);
  puVar7[0x17] = ALBW_AS_U32(fVar15);
  uVar16 = DAT_0028cea0;
  puVar7[0x18] = ALBW_AS_U32(fVar15);
  puVar7[0x19] = uVar16;
  puVar7[0x1a] = ALBW_AS_U32(fVar15);
  *(undefined1 *)(puVar7 + 0x1b) = 0;
  *(undefined1 *)((int)puVar7 + 0x6d) = 1;
  *(undefined1 *)((int)puVar7 + 0x6e) = 0;
  *(undefined1 *)((int)puVar7 + 0x6f) = 0;
  *(undefined1 *)(puVar7 + 0x1c) = 0;
  *(undefined1 *)((int)puVar7 + 0x71) = 0;
  puVar7[0x1d] = ALBW_AS_U32(fVar15);
  puVar7[0x1e] = ALBW_AS_U32(fVar15);
  puVar7[0x1f] = ALBW_AS_U32(fVar15);
  puVar7[0x20] = ALBW_AS_U32(fVar15);
  puVar7[0x21] = ALBW_AS_U32(fVar15);
  puVar7[0x22] = ALBW_AS_U32(fVar15);
  puVar7[0x23] = ALBW_AS_U32(fVar15);
  puVar7[0x24] = ALBW_AS_U32(fVar15);
  puVar7[0x25] = ALBW_AS_U32(fVar15);
  puVar7[0x27] = 0xffffffff;
  puVar7[0x26] = 0;
  puVar7[0x28] = uVar16;
  puVar7[0x29] = uVar16;
  puVar7[0x2a] = uVar16;
  puVar4 = (undefined4 *)func_00100118((int)(puVar7 + 0x2b),DAT_0028cea4,4,3);
  puVar4[3] = 0;
  uVar2 = DAT_0028ceac;
  uVar1 = DAT_0028cea8;
  puVar4[4] = 0;
  puVar4[5] = uVar1;
  puVar4[6] = uVar2;
  puVar4[7] = 0;
  puVar4[8] = 0;
  puVar4[9] = ALBW_AS_U32(fVar15);
  puVar4[10] = uVar16;
  puVar4[0xb] = ALBW_AS_U32(fVar15);
  puVar4[0xc] = ALBW_AS_U32(fVar15);
  puVar4[0xd] = uVar16;
  piVar5 = DAT_0028ceb0;
  puVar4[0xe] = ALBW_AS_U32(fVar15);
  objStack_a0[0] = 1;
  objStack_a0[1] = 0;
  objStack_a0[2] = 0;
  func_002FF8A4(puVar4[-0x36],*piVar5,piVar5[1],2,1,(int *)0x0,0);
  fVar3 = ALBW_AS_F32(_DAT_0028ceb8);
  puVar7 = DAT_0028ceb4;
  iVar8 = puVar4[-0x36];
  *(undefined4 *)(iVar8 + 0x16c) = *DAT_0028ceb4;
  *(undefined4 *)(iVar8 + 0x170) = puVar7[1];
  *(undefined4 *)(iVar8 + 0x174) = puVar7[2];
  iVar8 = puVar4[-0x36];
  if (*(float *)(iVar8 + 0x164) != fVar3) {
    *(uint *)(iVar8 + 0x188) = *(uint *)(iVar8 + 0x188) | 8;
  }
  *(float *)(iVar8 + 0x164) = fVar3;
  local_78 = *(undefined4 *)(*(int *)(*piVar9 + 0x10) + 0x90);
  uStack_88 = uVar12;
  uStack_84 = uVar13;
  uStack_74 = 0;
  local_70 = 0;
  uStack_80 = uVar12;
  uStack_7c = uVar13;
  local_50 = 1;
  local_54 = 0;
  local_64 = 0;
  local_6c = 1;
  local_68 = 0;
  local_5c = 0;
  local_60 = 0;
  local_4f = 0xc4;
  local_6b = 1;
  local_58 = *(undefined4 *)(puVar4[-0x3e] + 0x24);
  piVar9 = func_002C2D00((int *)&uStack_88);
  puVar4[-0x3d] = piVar9;
  (**(code **)(*piVar9 + 0x10))(piVar9,0xa0);
  *(uint *)(puVar4[-0x3d] + 0x164) = *(uint *)(puVar4[-0x3d] + 0x164) | 0x90000;
  iVar8 = func_0055326C();
  objStack_a0[1] = (int)s__Link_Change_0028cebb + 1;
  objStack_a0[0] = uVar12;
  func_00169608((uint *)puVar4[-0x3c],0,(int *)objStack_a0,iVar8);
  func_0016A02C(puVar4[-0x3c],-1,(int *)0xffffffff,0);
  func_00133870(puVar4[-0x3c],0,puVar4[-0x3e]);
  piVar9 = (int *)0x0;
  puVar10 = (uint *)func_002C11E8((int *)&uStack_88,0,10,0);
  iVar14 = puVar4[-0x3c];
  func_0016898C(iVar14,puVar10);
  *(float *)(*(int *)(puVar4[-0x3c] + 0x14) + 0x10) = fVar15;
  uVar13 = *(undefined4 *)(puVar4[-0x3c] + 0xc);
  iVar8 = *(int *)(puVar4[-0x3c] + 0x14);
  if (*(float *)(iVar8 + 8) != fVar15) {
    *(float *)(iVar8 + 8) = fVar15;
    *(undefined1 *)(iVar8 + 0x26) = 1;
  }
  func_00169A80((int *)puVar4[-0x3c],uVar13,iVar14,piVar9);
  iVar8 = func_0055326C();
  objStack_a0[1] = (uint)s_Link_SheathChange_0028d324;
  objStack_a0[0] = uVar12;
  func_00169608((uint *)puVar4[-0x3b],0,(int *)objStack_a0,iVar8);
  func_0016A02C(puVar4[-0x3b],-1,(int *)0xffffffff,0);
  func_00133870(puVar4[-0x3b],0,puVar4[-0x3e]);
  piVar9 = (int *)0x0;
  puVar10 = (uint *)func_002C11E8((int *)&uStack_88,0,10,0);
  iVar14 = puVar4[-0x3b];
  func_0016898C(iVar14,puVar10);
  *(float *)(*(int *)(puVar4[-0x3b] + 0x14) + 0x10) = fVar15;
  uVar13 = *(undefined4 *)(puVar4[-0x3b] + 0xc);
  iVar8 = *(int *)(puVar4[-0x3b] + 0x14);
  if (*(float *)(iVar8 + 8) != fVar15) {
    *(float *)(iVar8 + 8) = fVar15;
    *(undefined1 *)(iVar8 + 0x26) = 1;
  }
  func_00169A80((int *)puVar4[-0x3b],uVar13,iVar14,piVar9);
  objStack_a0[1] = (uint)s_sheath_mesh_0028d338;
  objStack_a0[0] = uVar12;
  uVar11 = func_00584C14(puVar4[-0x3e],(int *)objStack_a0);
  puVar4[-0x19] = uVar11;
  iVar8 = func_0055326C();
  objStack_a0[1] = (uint)s_Link_BraceletChange_0028d344;
  objStack_a0[0] = uVar12;
  func_00169608((uint *)puVar4[-0x3a],0,(int *)objStack_a0,iVar8);
  func_0016A02C(puVar4[-0x3a],-1,(int *)0xffffffff,0);
  func_00133870(puVar4[-0x3a],0,puVar4[-0x3e]);
  piVar9 = (int *)0x0;
  puVar10 = (uint *)func_002C11E8((int *)&uStack_88,0,10,0);
  iVar14 = puVar4[-0x3a];
  func_0016898C(iVar14,puVar10);
  *(float *)(*(int *)(puVar4[-0x3a] + 0x14) + 0x10) = fVar15;
  uVar13 = *(undefined4 *)(puVar4[-0x3a] + 0xc);
  iVar8 = *(int *)(puVar4[-0x3a] + 0x14);
  if (*(float *)(iVar8 + 8) != fVar15) {
    *(float *)(iVar8 + 8) = fVar15;
    *(undefined1 *)(iVar8 + 0x26) = 1;
  }
  func_00169A80((int *)puVar4[-0x3a],uVar13,iVar14,piVar9);
  objStack_a0[1] = (uint)s_bracelet_mesh_0028d358;
  objStack_a0[0] = uVar12;
  uVar11 = func_00584C14(puVar4[-0x3e],(int *)objStack_a0);
  puVar4[-0x18] = uVar11;
  iVar8 = func_0055326C();
  objStack_a0[1] = (uint)s_Link_GloveChange_0028d368;
  objStack_a0[0] = uVar12;
  func_00169608((uint *)puVar4[-0x39],0,(int *)objStack_a0,iVar8);
  func_0016A02C(puVar4[-0x39],-1,(int *)0xffffffff,0);
  func_00133870(puVar4[-0x39],0,puVar4[-0x3e]);
  piVar9 = (int *)0x0;
  puVar10 = (uint *)func_002C11E8((int *)&uStack_88,0,10,0);
  iVar14 = puVar4[-0x39];
  func_0016898C(iVar14,puVar10);
  *(float *)(*(int *)(puVar4[-0x39] + 0x14) + 0x10) = fVar15;
  uVar13 = *(undefined4 *)(puVar4[-0x39] + 0xc);
  iVar8 = *(int *)(puVar4[-0x39] + 0x14);
  if (*(float *)(iVar8 + 8) != fVar15) {
    *(float *)(iVar8 + 8) = fVar15;
    *(undefined1 *)(iVar8 + 0x26) = 1;
  }
  func_00169A80((int *)puVar4[-0x39],uVar13,iVar14,piVar9);
  iVar8 = func_0055326C();
  objStack_a0[1] = (uint)s_Link_BootsChange_0028d37c;
  objStack_a0[0] = uVar12;
  func_00169608((uint *)puVar4[-0x38],0,(int *)objStack_a0,iVar8);
  func_0016A02C(puVar4[-0x38],-1,(int *)0xffffffff,0);
  func_00133870(puVar4[-0x38],0,puVar4[-0x3e]);
  piVar9 = (int *)0x0;
  puVar10 = (uint *)func_002C11E8((int *)&uStack_88,0,10,0);
  iVar14 = puVar4[-0x38];
  func_0016898C(iVar14,puVar10);
  *(float *)(*(int *)(puVar4[-0x38] + 0x14) + 0x10) = fVar15;
  uVar13 = *(undefined4 *)(puVar4[-0x38] + 0xc);
  iVar8 = *(int *)(puVar4[-0x38] + 0x14);
  if (*(float *)(iVar8 + 8) != fVar15) {
    *(float *)(iVar8 + 8) = fVar15;
    *(undefined1 *)(iVar8 + 0x26) = 1;
  }
  func_00169A80((int *)puVar4[-0x38],uVar13,iVar14,piVar9);
  iVar8 = func_0055326C();
  objStack_a0[1] = (uint)s_Link_FaceChange_0028d390;
  objStack_a0[0] = uVar12;
  func_00169608((uint *)puVar4[-0x37],0,(int *)objStack_a0,iVar8);
  func_0016A02C(puVar4[-0x37],-1,(int *)0xffffffff,0);
  func_00133870(puVar4[-0x37],0,puVar4[-0x3e]);
  piVar9 = (int *)0x0;
  puVar10 = (uint *)func_002C11E8((int *)&uStack_88,0,10,0);
  iVar14 = puVar4[-0x37];
  func_0016898C(iVar14,puVar10);
  *(float *)(*(int *)(puVar4[-0x37] + 0x14) + 0x10) = fVar15;
  uVar13 = *(undefined4 *)(puVar4[-0x37] + 0xc);
  iVar8 = *(int *)(puVar4[-0x37] + 0x14);
  if (*(float *)(iVar8 + 8) != fVar15) {
    *(float *)(iVar8 + 8) = fVar15;
    *(undefined1 *)(iVar8 + 0x26) = 1;
  }
  func_00169A80((int *)puVar4[-0x37],uVar13,iVar14,piVar9);
  uVar13 = *(undefined4 *)(puVar4[-0x37] + 0xc);
  iVar8 = *(int *)(puVar4[-0x37] + 0x14);
  if (*(float *)(iVar8 + 8) != fVar15) {
    *(float *)(iVar8 + 8) = fVar15;
    *(undefined1 *)(iVar8 + 0x26) = 1;
  }
  func_00169A80((int *)puVar4[-0x37],uVar13,iVar14,piVar9);
  uVar12 = func_00564A78(puVar4[-0x3e],DAT_0028d570);
  puVar4[-0x23] = uVar12;
  uVar12 = func_00564A78(puVar4[-0x3e],DAT_0028d574);
  puVar4[-0x22] = uVar12;
  uVar12 = func_00564A78(puVar4[-0x3e],DAT_0028d578);
  puVar4[-0x21] = uVar12;
  uVar12 = func_00564A78(puVar4[-0x3e],DAT_0028d57c);
  puVar4[-0x20] = uVar12;
  uVar12 = func_00564A78(puVar4[-0x3e],DAT_0028d580);
  puVar4[-0x1f] = uVar12;
  uVar12 = func_00564A78(puVar4[-0x3e],DAT_0028d584);
  puVar4[-0x1e] = uVar12;
  uVar12 = func_00564A78(puVar4[-0x3e],DAT_0028d588);
  puVar4[-0x1d] = uVar12;
  uVar12 = func_00564A78(puVar4[-0x3e],DAT_0028d58c);
  puVar4[-0x1c] = uVar12;
  uVar12 = func_00564A78(puVar4[-0x3e],DAT_0028d590);
  puVar4[-0x1b] = uVar12;
  uVar12 = func_00564A78(puVar4[-0x3e],DAT_0028d594);
  puVar4[-0x1a] = uVar12;
  puVar10 = (uint *)(*(int *)(*(int *)(puVar4[-0x3e] + 0x24) + 0xc) + puVar4[-0x1c] * 0x40);
  *puVar10 = *puVar10 | 0x10;
  puVar10 = (uint *)(*(int *)(*(int *)(puVar4[-0x3e] + 0x24) + 0xc) + puVar4[-0x20] * 0x40);
  *puVar10 = *puVar10 | 0x10;
  puVar10 = (uint *)(*(int *)(*(int *)(puVar4[-0x3e] + 0x24) + 0xc) + puVar4[-0x1e] * 0x40);
  *puVar10 = *puVar10 | 0x10;
  puVar10 = (uint *)(*(int *)(*(int *)(puVar4[-0x3e] + 0x24) + 0xc) + puVar4[-0x21] * 0x40);
  *puVar10 = *puVar10 & 0xffffffef;
  *(undefined4 **)(puVar4[-0x3e] + 0x16c) = puVar4 + -0x35;
  func_004CEAF0(puVar4[-0x3e]);
  *(undefined4 *)(puVar4[-0x3e] + 0x134) = uVar16;
  puVar4[-2] = uVar16;
  puVar4[-1] = uVar16;
  puVar7 = (undefined4 *)func_00584CA8(puVar4[-0x3e],0,0);
  *puVar4 = *puVar7;
  puVar7 = (undefined4 *)func_00584CA8(puVar4[-0x3e],0,1);
  puVar4[1] = *puVar7;
  puVar7 = (undefined4 *)func_00584CA8(puVar4[-0x3e],0,2);
  puVar4[2] = *puVar7;
  return puVar4 + -0x42;
}

