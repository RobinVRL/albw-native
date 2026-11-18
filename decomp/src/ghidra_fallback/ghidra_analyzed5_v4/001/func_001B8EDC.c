#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_002C2D00(int *param_1);
extern int func_004CF478(int param_1,int param_2);
extern int func_004D0134(int param_1,int param_2);
extern int func_00504D48(int param_1,int param_2);
extern int func_005189DC(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5);
extern int func_00533400(int param_1,int *param_2);
extern int func_006896BC(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4,...);
extern int DAT_001b92a8;
extern undefined4 DAT_001b92ac;
extern int *DAT_001b92b8;
extern int *DAT_001b92bc;
extern uint DAT_001b92c0;
extern undefined DAT_001b92c4;
extern undefined DAT_001b9364;
extern undefined DAT_001b936c;
extern char s_Actor_ShadowCmn_bch_001b9294[];
extern char s_World_001b92b0[];
extern char s_cf_001b9294[];
extern char s_plane_001b92c8[];

// USA 001B8EDC <- EU 001B8EDC (Ghidra, non-matching)
// GLOBAL DAT_001b92a8 int
// GLOBAL DAT_001b92ac undefined4
// GLOBAL DAT_001b92b8 int *
// GLOBAL DAT_001b92bc int *
// GLOBAL DAT_001b92c0 uint
// GLOBAL DAT_001b92c4 undefined
// GLOBAL DAT_001b9364 undefined
// GLOBAL DAT_001b936c undefined
// GLOBAL s_cf_001b9294 string
// GLOBAL s_World_001b92b0 string
// GLOBAL s_plane_001b92c8 string

void func_001B8EDC(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  float *pfVar5;
  int *piVar6;
  ushort *puVar7;
  undefined4 uVar8;
  int *piVar9;
  float *in_r3;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  ulonglong uVar16;
  _Alignas(8) unsigned char albw_frame[0xd0];
  #define iStack_c8 (*(int *)(albw_frame + 0x8))
  #define uStack_c4 (*(undefined4 *)(albw_frame + 0xc))
  #define local_c0 (*(undefined4 *)(albw_frame + 0x10))
  #define local_bc (*(undefined4 *)(albw_frame + 0x14))
  #define local_b8 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_b4 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_b0 (*(undefined4 *)(albw_frame + 0x20))
  #define local_ac (*(undefined4 *)(albw_frame + 0x24))
  #define local_a8 (*(undefined4 *)(albw_frame + 0x28))
  #define local_a4 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_a0 (*(undefined4 *)(albw_frame + 0x30))
  #define local_9c (*(int *)(albw_frame + 0x34))
  #define local_98 (*(char * *)(albw_frame + 0x38))
  #define local_94 (*(undefined1 *)(albw_frame + 0x3c))
  #define local_93 (*(undefined1 *)(albw_frame + 0x3d))
  #define local_92 (*(undefined1 *)(albw_frame + 0x3e))
  #define local_91 (*(undefined1 *)(albw_frame + 0x3f))
  #define local_90 (*(undefined1 *)(albw_frame + 0x40))
  #define local_8c (*(int *)(albw_frame + 0x44))
  #define pcStack_88 (*(char * *)(albw_frame + 0x48))
  #define uStack_84 (*(undefined4 *)(albw_frame + 0x4c))
  #define local_80 (*(undefined4 *)(albw_frame + 0x50))
  #define local_7c (*(undefined1 *)(albw_frame + 0x54))
  #define iStack_78 (*(int *)(albw_frame + 0x58))
  #define uStack_74 (*(undefined4 *)(albw_frame + 0x5c))
  #define iStack_70 (*(int *)(albw_frame + 0x60))
  #define uStack_6c (*(undefined4 *)(albw_frame + 0x64))
  #define local_68 (*(int *)(albw_frame + 0x68))
  #define local_64 (*(undefined4 *)(albw_frame + 0x6c))
  #define local_60 (*(uint *)(albw_frame + 0x70))
  #define local_5c (*(undefined1 *)(albw_frame + 0x74))
  #define local_5b (*(undefined1 *)(albw_frame + 0x75))
  #define local_58 (*(undefined4 *)(albw_frame + 0x78))
  #define local_54 (*(undefined4 *)(albw_frame + 0x7c))
  #define local_50 (*(undefined4 *)(albw_frame + 0x80))
  #define local_4c (*(undefined4 *)(albw_frame + 0x84))
  #define local_48 (*(undefined4 *)(albw_frame + 0x88))
  #define local_44 (*(undefined4 *)(albw_frame + 0x8c))
  #define local_40 (*(undefined1 *)(albw_frame + 0x90))
  #define local_3f (*(undefined1 *)(albw_frame + 0x91))
  #define local_38 (*(int *)(albw_frame + 0x98))
  #define local_34 (*(char * *)(albw_frame + 0x9c))
  uVar8 = DAT_001b92ac;
  iVar1 = DAT_001b92a8;
  local_c0 = 0;
  local_bc = 0;
  local_b8 = 0x20;
  uStack_b4 = 0;
  local_b0 = 0;
  local_ac = 0;
  local_a8 = 0;
  local_a4 = 0;
  local_a0 = 0;
  iStack_c8 = DAT_001b92a8;
  uStack_c4 = DAT_001b92ac;
  local_98 = s_World_001b92b0;
  local_94 = 7;
  local_9c = DAT_001b92a8;
  local_91 = 0;
  local_90 = 0;
  local_8c = DAT_001b92a8;
  pcStack_88 = s_Actor_ShadowCmn_bch_001b9294;
  uStack_84 = 0;
  local_80 = 0;
  local_93 = 2;
  local_92 = 0xf;
  local_7c = 1;
  puVar2 = func_00504D48(*DAT_001b92b8,(int)&iStack_c8);
  piVar6 = DAT_001b92bc;
  uVar16 = (ulonglong)DAT_001b92c0;
  uVar10 = 0;
  do {
    if (uVar10 == 0) {
      (**(code **)(*piVar6 + 8))(piVar6);
      piVar3 = func_006896BC(&iStack_78,&DAT_001b9364,piVar6[1],in_r3);
      iVar4 = func_00533400((int)puVar2,piVar3);
      *(int *)(param_1 + 0x30) = iVar4;
      (**(code **)(*piVar6 + 8))(piVar6);
      piVar3 = func_006896BC(&iStack_78,&DAT_001b936c,piVar6[1],in_r3);
      iVar4 = func_00533400((int)puVar2,piVar3);
      *(int *)(param_1 + 0x34) = iVar4;
      *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x30);
    }
    else {
      piVar3 = piVar6 + uVar10 * 2;
      (**(code **)(*piVar3 + 8))(piVar3);
      piVar3 = func_006896BC(&iStack_78,&DAT_001b92c4,piVar3[1],in_r3);
      iVar4 = func_00533400((int)puVar2,piVar3);
      piVar3 = (int *)(param_1 + 0x10);
      if (uVar10 < 8) {
        piVar3 = piVar3 + uVar10;
      }
      *piVar3 = iVar4;
    }
    piVar3 = (int *)(param_1 + 0x38);
    piVar9 = (int *)(param_1 + 0x10);
    if (uVar10 < 8) {
      piVar3 = (int *)(param_1 + 0x38 + uVar10 * 0x1c);
      piVar9 = (int *)(param_1 + 0x10 + uVar10 * 4);
    }
    iVar4 = *piVar9;
    uVar10 = uVar10 + 1;
    in_r3 = (float *)(iVar4 + 0xe0);
    *piVar3 = (int)in_r3;
    fVar11 = *(float *)(iVar4 + 0xe4);
    fVar12 = *(float *)(iVar4 + 0xf0);
    fVar13 = *(float *)(iVar4 + 0xe8);
    fVar14 = *(float *)(iVar4 + 0xf4);
    fVar15 = ALBW_AS_F32(uVar16);
    piVar3[1] = (int)ALBW_AS_U32(((*in_r3 + *(float *)(iVar4 + 0xec)) * fVar15));
    piVar3[2] = (int)ALBW_AS_U32(((fVar11 + fVar12) * fVar15));
    piVar3[3] = (int)ALBW_AS_U32(((fVar13 + fVar14) * fVar15));
    pfVar5 = (float *)*piVar3;
    fVar14 = pfVar5[4];
    fVar11 = pfVar5[5];
    fVar12 = pfVar5[1];
    fVar13 = pfVar5[2];
    piVar3[4] = (int)ALBW_AS_U32(((pfVar5[3] - *pfVar5) * fVar15));
    piVar3[5] = (int)ALBW_AS_U32(((fVar14 - fVar12) * fVar15));
    piVar3[6] = (int)ALBW_AS_U32(((fVar11 - fVar13) * fVar15));
  } while ((int)uVar10 < 5);
  iStack_78 = iVar1;
  uStack_74 = uVar8;
  local_68 = 0;
  local_64 = 0;
  local_60 = 0;
  iStack_70 = iVar1;
  uStack_6c = uVar8;
  local_5c = 0;
  local_48 = 0;
  local_40 = 1;
  local_44 = 0;
  local_5b = 1;
  local_54 = 0;
  local_58 = 0;
  local_4c = 0;
  local_34 = s_plane_001b92c8;
  local_50 = 0;
  local_3f = 0xc4;
  local_38 = iVar1;
  local_68 = func_00533400((int)puVar2,&local_38);
  local_5c = 1;
  local_60 = local_60 | 1;
  piVar6 = func_002C2D00(&iStack_78);
  *(int **)(param_1 + 0x138) = piVar6;
  (**(code **)(*piVar6 + 0x10))(piVar6,0x72);
  func_004CF478(*(int *)(param_1 + 0x138),0);
  puVar7 = (ushort *)**(undefined4 **)(*(int *)(param_1 + 0x138) + 0x20);
  *puVar7 = *puVar7 | 0x800;
  iStack_78 = iVar1;
  uStack_74 = uVar8;
  local_68 = 0;
  iStack_70 = iVar1;
  uStack_6c = uVar8;
  local_40 = 1;
  local_44 = 0;
  local_54 = 0;
  local_48 = 0;
  local_58 = 0;
  local_4c = 0;
  local_50 = 0;
  local_3f = 0xc4;
  local_64 = *(undefined4 *)(param_1 + 0x138);
  local_5b = 1;
  local_5c = 1;
  local_60 = 1;
  piVar6 = func_002C2D00(&iStack_78);
  *(int **)(param_1 + 0x13c) = piVar6;
  (**(code **)(*piVar6 + 0x10))(piVar6,0x72);
  func_004D0134(*(int *)(param_1 + 0x13c),1);
  func_004CF478(*(int *)(param_1 + 0x13c),0);
  puVar7 = (ushort *)**(undefined4 **)(*(int *)(param_1 + 0x13c) + 0x20);
  *puVar7 = *puVar7 | 0x800;
  puVar2 = (undefined4 *)func_0010BAB4(0x98);
  uVar8 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    uVar8 = func_005189DC(puVar2,param_1,*(undefined4 *)(param_1 + 0x30),1,0);
  }
  *(undefined4 *)(param_1 + 0x140) = uVar8;
  puVar2 = (undefined4 *)func_0010BAB4(0x98);
  uVar8 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    uVar8 = func_005189DC(puVar2,param_1,*(undefined4 *)(param_1 + 0x34),0,0);
  }
  *(undefined4 *)(param_1 + 0x144) = uVar8;
  puVar2 = (undefined4 *)func_0010BAB4(0x98);
  uVar8 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    uVar8 = func_005189DC(puVar2,param_1,*(undefined4 *)(param_1 + 0x30),1,1);
  }
  *(undefined4 *)(param_1 + 0x148) = uVar8;
  puVar2 = (undefined4 *)func_0010BAB4(0x98);
  uVar8 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    uVar8 = func_005189DC(puVar2,param_1,*(undefined4 *)(param_1 + 0x34),0,1);
  }
  *(undefined4 *)(param_1 + 0x14c) = uVar8;
  *(undefined1 *)(param_1 + 0x150) = 1;
  return;
}

