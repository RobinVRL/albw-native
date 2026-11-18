#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00120FBC(int param_1,undefined4 *param_2,float *param_3,undefined4 *param_4,undefined4 param_5, int param_6,float *param_7);
extern int func_0014D9B4(undefined4 *param_1,float fparam_0);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00169688(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_0016A2FC(undefined4 *param_1,int param_2,undefined4 param_3,int param_4);
extern int func_00239E98(int param_1,undefined1 param_2);
extern int func_0023A5E0(int param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern int func_002FCDA0(undefined4 *param_1,undefined4 param_2,undefined1 param_3);
extern int func_00361574(int param_1,undefined1 param_2);
extern int func_004356B4(int *param_1);
extern int func_004ECF6C(int param_1);
extern int func_00503324(undefined4 *param_1);
extern int func_0054D964(int param_1,uint param_2);
extern float DAT_0023b6a4;
extern int DAT_0023b6a8;
extern float DAT_0023b6ac;
extern undefined4 *DAT_0023b6b0;
extern undefined4 DAT_0023b6b4;
extern undefined4 DAT_0023b6b8;
extern undefined4 DAT_0023b6bc;
extern undefined4 DAT_0023b6c0;
extern undefined4 DAT_0023b6c4;
extern undefined4 DAT_0023b6c8;
extern int DAT_0023b6cc;
extern float DAT_0023b6d0;
extern int DAT_0023b6d4;
extern int *DAT_0023b6d8;
extern int DAT_0023b6dc;
extern int DAT_0023b6e0;
extern int DAT_0023b6e4;
extern int DAT_0023b6e8;
extern int DAT_0023b6ec;
extern int DAT_0023b6f0;
extern int *DAT_0023b6f4;
extern float *DAT_0023b6f8;
extern int *DAT_0023b6fc;
extern char s_FieldDark_2A_GameMaster_End_00_0023b700[];

// USA 0023B2F0 <- EU 0023B2F0 (Ghidra, non-matching)
// GLOBAL DAT_0023b6a4 float
// GLOBAL DAT_0023b6a8 int
// GLOBAL DAT_0023b6ac float
// GLOBAL DAT_0023b6b0 undefined4 *
// GLOBAL DAT_0023b6b4 undefined4
// GLOBAL DAT_0023b6b8 undefined4
// GLOBAL DAT_0023b6bc undefined4
// GLOBAL DAT_0023b6c0 undefined4
// GLOBAL DAT_0023b6c4 undefined4
// GLOBAL DAT_0023b6c8 undefined4
// GLOBAL DAT_0023b6cc int
// GLOBAL DAT_0023b6d0 float
// GLOBAL DAT_0023b6d4 int
// GLOBAL DAT_0023b6d8 int *
// GLOBAL DAT_0023b6dc int
// GLOBAL DAT_0023b6e0 int
// GLOBAL DAT_0023b6e4 int
// GLOBAL DAT_0023b6e8 int
// GLOBAL DAT_0023b6ec int
// GLOBAL DAT_0023b6f0 int
// GLOBAL DAT_0023b6f4 int *
// GLOBAL DAT_0023b6f8 float *
// GLOBAL DAT_0023b6fc int *
// GLOBAL s_FieldDark_2A_GameMaster_End_00_0023b700 string

undefined4 * func_0023B2F0(undefined4 *param_1,uint *param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  float *pfVar5;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined4 extraout_r1;
  undefined4 uVar12;
  float *pfVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  uint uVar16;
  float fVar18;
  undefined8 uVar17;
  _Alignas(8) unsigned char albw_frame[0xb0];
  #define aiStack_b0 ((int *)(albw_frame + 0x0))
  #define local_44 (*(float *)(albw_frame + 0x6c))
  #define local_40 (*(undefined4 *)(albw_frame + 0x70))
  #define fStack_3c (*(float *)(albw_frame + 0x74))
  #define local_38 (*(float *)(albw_frame + 0x78))
  #define uStack_34 (*(undefined4 *)(albw_frame + 0x7c))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x80))
  piVar6 = func_00150E40(param_1,param_2);
  iVar8 = DAT_0023b6a8;
  fVar18 = DAT_0023b6a4;
  piVar6[200] = DAT_0023b6a8 + 0x54;
  *piVar6 = iVar8;
  piVar6[0x103] = 0;
  piVar6[0x104] = 0;
  puVar7 = func_0014D9B4(piVar6 + 0x105,fVar18);
  fVar1 = DAT_0023b6ac;
  uVar17 = CONCAT44(fVar18,DAT_0023b6ac);
  pfVar13 = (float *)(puVar7 + 2);
  puVar15 = puVar7 + -0x105;
  *pfVar13 = DAT_0023b6ac;
  puVar7[3] = ALBW_AS_U32(fVar1);
  puVar7[4] = ALBW_AS_U32(fVar1);
  puVar7[5] = ALBW_AS_U32(fVar1);
  puVar7[6] = ALBW_AS_U32(fVar1);
  puVar7[7] = ALBW_AS_U32(fVar1);
  puVar7[8] = ALBW_AS_U32(fVar1);
  puVar7[9] = ALBW_AS_U32(fVar18);
  puVar7[10] = ALBW_AS_U32(fVar1);
  puVar7[0xb] = ALBW_AS_U32(fVar1);
  puVar7[0xc] = ALBW_AS_U32(fVar18);
  puVar7[0xd] = ALBW_AS_U32(fVar1);
  puVar7[0xe] = ALBW_AS_U32(fVar1);
  puVar7[0xf] = ALBW_AS_U32(fVar18);
  puVar7[0x10] = ALBW_AS_U32(fVar1);
  puVar7[0x11] = ALBW_AS_U32(fVar1);
  puVar7[0x12] = ALBW_AS_U32(fVar1);
  puVar7[0x13] = ALBW_AS_U32(fVar1);
  puVar7[0x14] = 0;
  puVar7[0x15] = 0;
  puVar7[0x17] = 0;
  puVar7[0x18] = 0;
  puVar7[0x19] = 0;
  puVar7[0x1a] = 0;
  puVar7[0x1b] = 0;
  *(undefined1 *)(puVar7 + 0x1c) = 0;
  *(undefined1 *)((int)puVar7 + 0x71) = 0;
  puVar7[0x1d] = 0;
  puVar7[0x1e] = 0;
  puVar7[0x1f] = 0;
  iVar8 = func_0054D964((int)puVar15,0);
  puVar10 = DAT_0023b6b0;
  puVar7[0x21] = iVar8;
  uVar14 = puVar10[1];
  puVar7[0x24] = *puVar10;
  puVar7[0x25] = uVar14;
  puVar7[0x22] = DAT_0023b6b4;
  puVar7[0x23] = puVar15;
  puVar7[0x26] = DAT_0023b6b8;
  puVar7[0x27] = DAT_0023b6bc;
  puVar7[0x28] = 0;
  puVar7[0x29] = 0;
  *(undefined1 *)(puVar7 + 0x2a) = 0;
  *(undefined1 *)((int)puVar7 + 0xa9) = 0;
  puVar7[0x2c] = 0;
  uVar14 = puVar10[7];
  puVar7[0x2d] = puVar10[6];
  puVar7[0x2e] = uVar14;
  puVar7[0x2b] = DAT_0023b6c0;
  puVar7[0x30] = 0;
  uVar12 = puVar10[9];
  puVar7[0x31] = puVar10[8];
  uVar14 = DAT_0023b6c4;
  puVar7[0x32] = uVar12;
  puVar7[0x2f] = uVar14;
  *(undefined1 *)(puVar7 + 0x33) = 0;
  *(undefined1 *)((int)puVar7 + 0xcd) = 0;
  *(undefined1 *)((int)puVar7 + 0xce) = 0;
  uVar14 = func_0014E428((int)puVar15,1,0,0,1,0,0);
  puVar7[-2] = uVar14;
  puVar9 = (undefined4 *)func_0010BAB4(0xa8);
  puVar10 = (undefined4 *)0x0;
  if (puVar9 != (undefined4 *)0x0) {
    puVar10 = func_0016A2FC(puVar9,3,DAT_0023b6c8,1);
  }
  iVar8 = DAT_0023b6cc;
  uVar16 = 0;
  puVar7[-1] = puVar10;
  do {
    func_00169688((uint *)puVar7[-1],uVar16,(int *)(iVar8 + uVar16 * 8),
                  *(int *)(puVar7[-0x51] + 0x1c8));
    local_40 = (undefined4)uVar17;
    uVar16 = uVar16 + 1;
  } while ((int)uVar16 < 3);
  func_0016A02C(puVar7[-1],-1,(int *)0xffffffff,0);
  puVar11 = (uint *)func_002C11E8(aiStack_b0,0,10,0);
  func_0016898C(puVar7[-1],puVar11);
  iVar2 = DAT_0023b6e0;
  iVar8 = DAT_0023b6dc;
  piVar6 = DAT_0023b6d8;
  DAT_0023b6d8[3] = DAT_0023b6d4;
  *piVar6 = iVar8;
  fVar18 = DAT_0023b6d0;
  piVar6[1] = iVar2;
  piVar6[7] = (int)ALBW_AS_U32(fVar18);
  piVar4 = DAT_0023b6f4;
  iVar3 = DAT_0023b6f0;
  iVar2 = DAT_0023b6ec;
  iVar8 = DAT_0023b6e8;
  piVar6[8] = DAT_0023b6e4;
  piVar6[9] = iVar8;
  pfVar5 = DAT_0023b6f8;
  piVar6[4] = iVar2;
  piVar6[5] = iVar3;
  func_00115C54(&local_38,*(float **)(*piVar4 + 0x1c),pfVar5);
  *pfVar13 = local_38;
  puVar7[3] = uStack_34;
  puVar7[4] = uStack_30;
  piVar6 = DAT_0023b6d8;
  local_44 = fVar18;
  fStack_3c = fVar18;
  func_00120FBC(*(int *)(*DAT_0023b6fc + 0x18),puVar7 + 0x1d,pfVar13,DAT_0023b6d8,0,0,&local_44);
  func_00239E98((int)puVar15,0);
  func_0023A5E0((int)puVar15,extraout_r1,pfVar13,piVar6);
  iVar8 = puVar7[0x21];
  uVar14 = puVar7[-0x10];
  uVar12 = puVar7[-0xf];
  *(undefined4 *)(iVar8 + 4) = puVar7[-0x11];
  *(undefined4 *)(iVar8 + 8) = uVar14;
  *(undefined4 *)(iVar8 + 0xc) = uVar12;
  func_004356B4((int *)puVar7[0x21]);
  puVar10 = (undefined4 *)func_0010BAB4(0xb0);
  uVar14 = 0;
  if (puVar10 != (undefined4 *)0x0) {
    uVar14 = func_002FCDA0(puVar10,puVar7[-0x52],0);
  }
  puVar7[0x28] = uVar14;
  puVar7[0x27] = s_FieldDark_2A_GameMaster_End_00_0023b700;
  puVar10 = (undefined4 *)func_0010BAB4(0x2e4);
  uVar14 = 0;
  if (puVar10 != (undefined4 *)0x0) {
    uVar14 = func_00503324(puVar10);
  }
  puVar7[0x29] = uVar14;
  puVar10 = DAT_0023b6b0;
  uVar14 = DAT_0023b6b0[2];
  uVar12 = DAT_0023b6b0[3];
  puVar7[0x2c] = puVar15;
  puVar7[0x2d] = uVar14;
  puVar7[0x2e] = uVar12;
  *(undefined4 **)(puVar7[0x29] + 0x2b8) = puVar7 + 0x2b;
  uVar12 = puVar10[4];
  uVar14 = puVar10[5];
  puVar7[0x30] = puVar15;
  puVar7[0x32] = uVar14;
  puVar7[0x31] = uVar12;
  *(undefined4 **)(puVar7[0x29] + 0x2b4) = puVar7 + 0x2f;
  func_004ECF6C((int)puVar15);
  func_00361574(*piVar4,1);
  return puVar15;
}

