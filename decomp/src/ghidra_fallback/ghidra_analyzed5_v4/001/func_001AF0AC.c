#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_0014EB8C(int param_1,undefined4 param_2,undefined2 *param_3,uint *param_4,undefined2 param_5, undefined4 param_6,undefined2 param_7);
extern int func_002227F4(int param_1,undefined4 param_2,uint param_3);
extern int func_0026171C(int param_1,float *param_2,uint *param_3,float *param_4);
extern int func_00261A8C(undefined4 *param_1,undefined4 param_2,int *param_3,int param_4,uint param_5, int param_6,uint param_7,int param_8,uint param_9,byte param_10);
extern int func_002F97A4(int param_1,int param_2);
extern int func_004356B4(int *param_1);
extern int func_00435714(undefined4 *param_1);
extern int func_004EE484(undefined4 *param_1);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
extern int func_004FACA4(int param_1,uint param_2,int *param_3);
extern int func_004FACD4(int param_1,int *param_2,undefined4 param_3,int *param_4);
extern int func_004FB070(int param_1,float fparam_0);
extern int func_004FB344(int param_1,int param_2);
extern int func_004FB370(int param_1,uint param_2,int param_3);
extern int func_004FB468(int param_1);
extern int func_004FB4C4(int param_1,float fparam_0);
extern int func_005330BC(int param_1,int *param_2);
extern int func_0054DDF4(int param_1,uint param_2);
extern int func_00588BE4(int param_1);
extern int func_0065AD50(undefined4 *param_1,undefined1 param_2);
extern int func_006733C4(undefined4 *param_1,uint *param_2,uint param_3,int param_4);
extern int func_00689894(int param_1,int *param_2,uint param_3);
extern int DAT_001af4b0;
extern float DAT_001af4b4;
extern int DAT_001af4b8;
extern int DAT_001af4bc;
extern float DAT_001af4c0;
extern uint DAT_001af4c4;
extern int DAT_001af4c8;
extern int *DAT_001af4cc;
extern int DAT_001af4d0;
extern int DAT_001af4f4;
extern int *DAT_001af4f8;
extern int DAT_001af50c;
extern int *DAT_001af528;
extern int DAT_001af53c;
extern undefined DAT_001af55c;
extern int DAT_001af568;
extern undefined DAT_001af56c;
extern int DAT_001af584;
extern undefined4 DAT_001af588;
extern uint DAT_001af58c;
extern uint DAT_001af910;
extern char s_333_Moriblin_001af4fc[];
extern char s_Heishi_archer_001af4e4[];
extern char s_Heishi_arrow_001af4d4[];
extern char s_Heishi_bow_001af8fc[];
extern char s_Heishi_great0_001af52c[];
extern char s_Heishi_great_spear_throw_001af540[];
extern char s_Lhand_001af908[];
extern char s_Moriblin_spear_throw_001af510[];
extern char s_Rhand_001af8f4[];
extern char s__Heishi_001af55f[];
extern char s__Heishi_spear_throw_001af56f[];
extern char s_cState_Move_001af914[];
extern char s_cState_Shoot_001af920[];
extern char s_cState_Throw_001af930[];
extern char s_cf_001af56f[];
extern undefined4 _DAT_001af55c;
extern undefined4 _DAT_001af56c;

// USA 001AF0AC <- EU 001AF0AC (Ghidra, non-matching)
// GLOBAL DAT_001af4b0 int
// GLOBAL DAT_001af4b4 float
// GLOBAL DAT_001af4b8 int
// GLOBAL DAT_001af4bc int
// GLOBAL DAT_001af4c0 float
// GLOBAL DAT_001af4c4 uint
// GLOBAL DAT_001af4c8 int
// GLOBAL DAT_001af4cc int *
// GLOBAL DAT_001af4d0 int
// GLOBAL DAT_001af4f4 int
// GLOBAL DAT_001af4f8 int *
// GLOBAL DAT_001af50c int
// GLOBAL DAT_001af528 int *
// GLOBAL DAT_001af53c int
// GLOBAL DAT_001af55c undefined
// GLOBAL DAT_001af568 int
// GLOBAL DAT_001af56c undefined
// GLOBAL DAT_001af584 int
// GLOBAL DAT_001af588 undefined4
// GLOBAL DAT_001af58c uint
// GLOBAL DAT_001af910 uint
// GLOBAL s_cf_001af56f string
// GLOBAL s_Heishi_archer_001af4e4 string
// GLOBAL s_Heishi_arrow_001af4d4 string
// GLOBAL s_Heishi_bow_001af8fc string
// GLOBAL s_Heishi_great0_001af52c string
// GLOBAL s_Heishi_great_spear_throw_001af540 string
// GLOBAL s_Lhand_001af908 string
// GLOBAL s_Moriblin_spear_throw_001af510 string
// GLOBAL s_Rhand_001af8f4 string
// GLOBAL s_cState_Move_001af914 string
// GLOBAL s_cState_Shoot_001af920 string
// GLOBAL s_cState_Throw_001af930 string

/* WARNING: Variable defined which should be unmapped: objStack_c0 */
/* WARNING: Variable defined which should be unmapped: objStack_b0 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * func_001AF0AC(undefined4 *param_1,uint *param_2)

{
  short sVar1;
  uint uVar2;
  undefined2 uVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined2 *puVar9;
  int iVar10;
  undefined1 **ppuVar11;
  float *pfVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int *piVar17;
  uint *puVar18;
  int *piVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  float fparam_0;
  float fVar25;
  _Alignas(8) unsigned char albw_frame[0xc0];
  #define objStack_c0 ((uint *)(albw_frame + 0x0))
  #define objStack_b0 ((uint *)(albw_frame + 0x10))
  #define local_a8 (*(int *)(albw_frame + 0x18))
  #define local_a4 (*(undefined1 * *)(albw_frame + 0x1c))
  #define local_a0 (*(undefined4 *)(albw_frame + 0x20))
  #define local_9c ((undefined1 *)(albw_frame + 0x24))
  #define uStack_7f (*(undefined1 *)(albw_frame + 0x41))
  #define local_7c (*(int *)(albw_frame + 0x44))
  #define local_78 (*(undefined1 * *)(albw_frame + 0x48))
  #define uStack_74 (*(undefined4 *)(albw_frame + 0x4c))
  #define local_70 ((undefined1 *)(albw_frame + 0x50))
  #define uStack_53 (*(undefined1 *)(albw_frame + 0x6d))
  #define local_50 (*(uint *)(albw_frame + 0x70))
  #define local_4c (*(uint * *)(albw_frame + 0x74))
  #define local_48 (*(int * *)(albw_frame + 0x78))
  #define local_44 (*(undefined1 * *)(albw_frame + 0x7c))
  #define local_40 (*(uint *)(albw_frame + 0x80))
  #define local_3c (*(char * *)(albw_frame + 0x84))
  #define puStack_2c (*(undefined4 * *)(albw_frame + 0x94))
  #define local_28 (*(uint * *)(albw_frame + 0x98))
  puStack_2c = param_1;
  local_28 = param_2;
  piVar4 = (int *)func_006733C4(param_1,param_2,0xc,(int)param_1);
  iVar5 = DAT_001af4b0;
  piVar4[200] = DAT_001af4b0 + 0x88;
  *piVar4 = iVar5;
  local_48 = piVar4 + 0x267;
  piVar4[0x266] = 0;
  piVar4[0x267] = 0;
  piVar4[0x268] = 0;
  objStack_c0[3] = (uint)(piVar4 + 0x26a);
  piVar4[0x269] = 0;
  fparam_0 = DAT_001af4b4;
  pfVar12 = (float *)(piVar4 + 0x26b);
  piVar4[0x26a] = 0;
  iVar5 = DAT_001af4b8;
  *pfVar12 = fparam_0;
  piVar4[0x26c] = (int)ALBW_AS_U32(fparam_0);
  piVar4[0x26d] = (int)ALBW_AS_U32(fparam_0);
  fVar25 = DAT_001af4c0;
  objStack_c0[0] = (uint)(piVar4 + 0x26e);
  iVar10 = *(int *)(iVar5 + 0x14);
  piVar4[0x270] = *(int *)(iVar5 + 0x10);
  piVar4[0x271] = iVar10;
  *(int *)objStack_c0[0] = DAT_001af4bc;
  piVar4[0x26f] = (int)piVar4;
  piVar4[0x272] = 0;
  piVar4[0x273] = 0;
  piVar4[0x274] = 0;
  piVar4[0x275] = 0;
  piVar4[0x276] = (int)ALBW_AS_U32(fVar25);
  piVar4[0x277] = (int)ALBW_AS_U32(fparam_0);
  *(undefined1 *)(piVar4 + 0x278) = 1;
  iVar10 = *(int *)(iVar5 + 0x1c);
  piVar19 = piVar4 + 0x268;
  piVar17 = piVar4 + 0x269;
  piVar4[0x25b] = *(int *)(iVar5 + 0x18);
  piVar4[0x25c] = iVar10;
  iVar10 = *(int *)(iVar5 + 0x24);
  piVar4[0x25d] = *(int *)(iVar5 + 0x20);
  piVar4[0x25e] = iVar10;
  iVar5 = func_00588BE4((int)piVar4);
  uVar15 = DAT_001af4c4;
  local_a4 = local_9c;
  local_a0 = 0x1e;
  ppuVar11 = &local_78;
  uStack_7f = 0;
  local_78 = local_70;
  local_9c[0] = 0;
  local_a8 = DAT_001af4c8;
  uStack_74 = 0x1e;
  uStack_53 = 0;
  local_7c = DAT_001af4c8;
  local_70[0] = 0;
  if (iVar5 == *DAT_001af4cc) {
    piVar4[0x261] = 0xd;
    func_004FB344((int)piVar4,0xf);
    iVar10 = DAT_001af4d0;
    uVar13 = 0;
    do {
      func_004FACA4((int)piVar4,uVar13,(int *)(iVar10 + uVar13 * 8));
      func_004FB370((int)piVar4,uVar13,piVar4[0x103]);
      uVar13 = uVar13 + 1;
    } while ((int)uVar13 < 0xf);
    func_004FB468((int)piVar4);
    objStack_c0[1] = (uint)s_Heishi_arrow_001af4d4;
    objStack_c0[0] = uVar15;
    func_00689894((int)&local_a8,(int *)objStack_c0,0xffffffff);
    objStack_c0[1] = (uint)s_Heishi_archer_001af4e4;
    puVar9 = (undefined2 *)0xffffffff;
    objStack_c0[0] = uVar15;
    func_00689894((int)&local_7c,(int *)objStack_c0,0xffffffff);
    func_004FB070((int)piVar4,fVar25);
    piVar4[0x265] = DAT_001af4f4;
  }
  else {
    func_002F97A4((int)piVar4,0xd);
    func_004FB468((int)piVar4);
    if (iVar5 == *DAT_001af4f8) {
      local_3c = s_333_Moriblin_001af4fc + 4;
      local_40 = uVar15;
      iVar10 = (*(undefined4 *)((char *)&s_333_Moriblin_001af4fc + 0));
      func_00689894((int)&local_7c,(int *)&local_40,0xffffffff);
      piVar4[0x265] = DAT_001af50c;
      local_3c = s_Moriblin_spear_throw_001af510;
      local_40 = uVar15;
      func_00689894((int)&local_a8,(int *)&local_40,0xffffffff);
      *pfVar12 = fparam_0;
      piVar4[0x26c] = (int)ALBW_AS_U32(fparam_0);
      piVar4[0x26d] = iVar10;
    }
    else {
      local_40 = uVar15;
      if (iVar5 == *DAT_001af528) {
        local_3c = s_Heishi_great0_001af52c;
        iVar14 = (*(undefined4 *)((char *)&s_333_Moriblin_001af4fc + 0));
        func_00689894((int)&local_7c,(int *)&local_40,0xffffffff);
        piVar4[0x265] = DAT_001af53c;
        local_3c = s_Heishi_great_spear_throw_001af540;
        local_40 = uVar15;
        func_00689894((int)&local_a8,(int *)&local_40,0xffffffff);
        iVar10 = _DAT_001af55c;
        piVar4[0x139] = _DAT_001af55c;
        piVar4[0x13a] = iVar10;
        piVar4[0x13b] = iVar10;
        *pfVar12 = fparam_0;
        piVar4[0x26c] = (int)ALBW_AS_U32(fparam_0);
        piVar4[0x26d] = iVar14;
      }
      else {
        local_3c = s__Heishi_001af55f + 1;
        func_00689894((int)&local_7c,(int *)&local_40,0xffffffff);
        fVar25 = ALBW_AS_F32(_DAT_001af56c);
        piVar4[0x265] = DAT_001af568;
        func_004FB070((int)piVar4,fVar25);
        local_3c = s__Heishi_spear_throw_001af56f + 1;
        local_40 = uVar15;
        func_00689894((int)&local_a8,(int *)&local_40,0xffffffff);
        iVar10 = DAT_001af584;
        *pfVar12 = fparam_0;
        piVar4[0x26c] = (int)ALBW_AS_U32(fparam_0);
        piVar4[0x26d] = iVar10;
      }
    }
    puVar8 = (undefined4 *)func_0010BAB4(100);
    iVar10 = 0;
    if (puVar8 != (undefined4 *)0x0) {
      iVar10 = func_004EE484(puVar8);
    }
    piVar4[0x268] = iVar10;
    objStack_b0[0] = 6;
    piVar6 = func_00435714(objStack_b0);
    piVar4[0x269] = (int)piVar6;
    iVar10 = func_0054DDF4((int)piVar4,1);
    piVar4[0x26a] = iVar10;
    uVar20 = DAT_001af588;
    *(ushort *)(*piVar19 + 0x32) = *(ushort *)(*piVar19 + 0x32) & 0xfff3;
    iVar10 = *piVar17;
    *(float *)(iVar10 + 4) = *pfVar12;
    *(int *)(iVar10 + 8) = piVar4[0x26c];
    *(int *)(iVar10 + 0xc) = piVar4[0x26d];
    *(undefined4 *)(iVar10 + 0x58) = uVar20;
    func_004356B4((int *)*piVar17);
    uVar13 = objStack_c0[0];
    local_44 = (undefined1 *)piVar4[0xb3];
    objStack_c0[1] = objStack_c0[0];
    objStack_c0[2] = DAT_001af58c;
    uVar2 = objStack_c0[2];
    ppuVar11 = &local_44;
    puVar9 = *(undefined2 **)objStack_c0[3];
    (*(undefined2 *)((char *)&objStack_c0[2] + 0)) = (undefined2)DAT_001af58c;
    uVar3 = (undefined2)objStack_c0[2];
    objStack_c0[0] = (int)(short)piVar4[0x15];
    objStack_c0[2] = uVar2;
    func_0014EB8C(*piVar19,*piVar17,puVar9,(uint *)ppuVar11,(short)piVar4[0x15],uVar13,uVar3);
    *(undefined1 *)(*piVar19 + 0x61) = 0;
    *(uint *)(*piVar17 + 0x2c) = *(uint *)(*piVar17 + 0x2c) | 8;
  }
  func_004FB4C4((int)piVar4,fparam_0);
  func_004FACD4((int)piVar4,(int *)0x0,puVar9,(int *)ppuVar11);
  piVar4[0x239] = *(int *)piVar4[0x265];
  iVar14 = piVar4[0x138];
  iVar10 = func_005330BC(iVar14,&local_a8);
  piVar4[0x274] = iVar10;
  puVar7 = (undefined4 *)func_0010BAB4(0x34);
  puVar8 = (undefined4 *)0x0;
  if (puVar7 != (undefined4 *)0x0) {
    local_4c = (uint *)s_Rhand_001af8f4;
    local_50 = uVar15;
    objStack_c0[2] = 0;
    objStack_c0[3] = 0;
    objStack_b0[1] = 0xb;
    objStack_b0[0] = 0;
    objStack_c0[0] = piVar4[0x274];
    objStack_c0[1] = 0;
    puVar8 = func_00261A8C(puVar7,piVar4,(int *)&local_50,0,objStack_c0[0],0,0,0,0,0xb);
  }
  piVar4[0x266] = (int)puVar8;
  iVar10 = 0;
  if (puVar8 != (undefined4 *)0x0) {
    iVar10 = puVar8[6];
  }
  if (puVar8 == (undefined4 *)0x0 || iVar10 == 0) {
LAB_001af74c:
    *(undefined1 *)((int)piVar4 + 0x2d7) = 1;
    return piVar4;
  }
  *(float *)(iVar10 + 0x134) = fparam_0;
  if (iVar5 == *DAT_001af4cc) {
    local_3c = s_Heishi_bow_001af8fc;
    local_40 = uVar15;
    uVar13 = func_005330BC(iVar14,(int *)&local_40);
    puVar7 = (undefined4 *)func_0010BAB4(0x34);
    puVar8 = (undefined4 *)0x0;
    if (puVar7 != (undefined4 *)0x0) {
      local_3c = s_Lhand_001af908;
      local_40 = uVar15;
      objStack_c0[2] = 2;
      objStack_c0[3] = 0;
      objStack_c0[1] = DAT_001af910;
      objStack_b0[1] = 0xb;
      objStack_b0[0] = 0;
      objStack_c0[0] = uVar13;
      puVar8 = func_00261A8C(puVar7,piVar4,(int *)&local_40,0,uVar13,DAT_001af910,2,0,0,0xb);
    }
    piVar4[0x267] = (int)puVar8;
    iVar5 = 0;
    if (puVar8 != (undefined4 *)0x0) {
      iVar5 = puVar8[6];
    }
    if (puVar8 == (undefined4 *)0x0 || iVar5 == 0) goto LAB_001af74c;
    *(float *)(iVar5 + 0x134) = fparam_0;
    func_002227F4(*local_48,0,0);
    *(undefined1 *)(piVar4 + 0x278) = 0;
    piVar4[0x276] = (int)ALBW_AS_U32(fparam_0);
    piVar4[0x277] = (int)ALBW_AS_U32(fparam_0);
  }
  local_4c = (uint *)s_cState_Move_001af914;
  local_50 = uVar15;
  if ((uint)piVar4[0x245] < 10) {
    iVar5 = piVar4[0x246];
  }
  else {
    iVar5 = piVar4[0x246] + 0x144;
  }
  puVar18 = *(uint **)(iVar5 + 4);
  (**(code **)(uVar15 + 8))(&local_50);
  uVar13 = 0;
  do {
    if (*(char *)((int)local_4c + uVar13) == '\0') {
      if ((int)uVar13 < 0x40001) goto LAB_001af774;
      break;
    }
    uVar13 = uVar13 + 1;
  } while ((int)uVar13 < 0x40001);
  uVar13 = 0;
LAB_001af774:
  if (*(int *)(iVar5 + 8) <= (int)uVar13) {
    uVar13 = *(int *)(iVar5 + 8) - 1;
  }
  (**(code **)(local_50 + 8))(&local_50);
  func_0010E3C4(puVar18,local_4c,uVar13);
  iVar5 = DAT_001af4b8;
  *(undefined1 *)((int)puVar18 + uVar13) = 0;
  iVar10 = piVar4[0x249];
  uVar20 = *(undefined4 *)(iVar5 + 0x2c);
  uVar21 = *(undefined4 *)(iVar5 + 0x30);
  uVar22 = *(undefined4 *)(iVar5 + 0x34);
  uVar23 = *(undefined4 *)(iVar5 + 0x38);
  uVar24 = *(undefined4 *)(iVar5 + 0x3c);
  *(undefined4 *)(iVar10 + 0x48) = *(undefined4 *)(iVar5 + 0x28);
  *(undefined4 *)(iVar10 + 0x4c) = uVar20;
  iVar10 = piVar4[0x24a];
  *(undefined4 *)(iVar10 + 0x48) = uVar21;
  *(undefined4 *)(iVar10 + 0x4c) = uVar22;
  iVar10 = piVar4[0x24b];
  *(undefined4 *)(iVar10 + 0x48) = uVar23;
  *(undefined4 *)(iVar10 + 0x4c) = uVar24;
  local_4c = (uint *)s_cState_Shoot_001af920;
  local_50 = uVar15;
  if ((uint)piVar4[0x245] < 0xb) {
    iVar10 = piVar4[0x246];
  }
  else {
    iVar10 = piVar4[0x246] + 0x168;
  }
  puVar18 = *(uint **)(iVar10 + 4);
  (**(code **)(uVar15 + 8))(&local_50);
  uVar13 = 0;
  do {
    if (*(char *)((int)local_4c + uVar13) == '\0') {
      if ((int)uVar13 < 0x40001) goto LAB_001af83c;
      break;
    }
    uVar13 = uVar13 + 1;
  } while ((int)uVar13 < 0x40001);
  uVar13 = 0;
LAB_001af83c:
  if (*(int *)(iVar10 + 8) <= (int)uVar13) {
    uVar13 = *(int *)(iVar10 + 8) - 1;
  }
  (**(code **)(local_50 + 8))(&local_50);
  func_0010E3C4(puVar18,local_4c,uVar13);
  *(undefined1 *)((int)puVar18 + uVar13) = 0;
  iVar10 = piVar4[0x249];
  uVar20 = *(undefined4 *)(iVar5 + 0x44);
  uVar21 = *(undefined4 *)(iVar5 + 0x48);
  uVar22 = *(undefined4 *)(iVar5 + 0x4c);
  uVar23 = *(undefined4 *)(iVar5 + 0x50);
  uVar24 = *(undefined4 *)(iVar5 + 0x54);
  *(undefined4 *)(iVar10 + 0x50) = *(undefined4 *)(iVar5 + 0x40);
  *(undefined4 *)(iVar10 + 0x54) = uVar20;
  iVar10 = piVar4[0x24a];
  *(undefined4 *)(iVar10 + 0x50) = uVar21;
  *(undefined4 *)(iVar10 + 0x54) = uVar22;
  iVar10 = piVar4[0x24b];
  *(undefined4 *)(iVar10 + 0x50) = uVar23;
  *(undefined4 *)(iVar10 + 0x54) = uVar24;
  local_4c = (uint *)s_cState_Throw_001af930;
  local_50 = uVar15;
  uVar13 = piVar4[0x245];
  if (uVar13 < 0xc) {
    uVar16 = piVar4[0x246];
    uVar2 = uVar13;
  }
  else {
    uVar16 = uVar15;
    uVar2 = piVar4[0x246];
  }
  if (0xb < uVar13) {
    uVar16 = uVar2 + 0x18c;
  }
  puVar18 = *(uint **)(uVar16 + 4);
  (**(code **)(uVar15 + 8))(&local_50);
  uVar15 = 0;
  do {
    if (*(char *)((int)local_4c + uVar15) == '\0') {
      if ((int)uVar15 < 0x40001) goto LAB_001af94c;
      break;
    }
    uVar15 = uVar15 + 1;
  } while ((int)uVar15 < 0x40001);
  uVar15 = 0;
LAB_001af94c:
  if (*(int *)(uVar16 + 8) <= (int)uVar15) {
    uVar15 = *(int *)(uVar16 + 8) - 1;
  }
  (**(code **)(local_50 + 8))(&local_50);
  func_0010E3C4(puVar18,local_4c,uVar15);
  *(undefined1 *)((int)puVar18 + uVar15) = 0;
  iVar10 = piVar4[0x249];
  uVar23 = *(undefined4 *)(iVar5 + 0x5c);
  uVar20 = *(undefined4 *)(iVar5 + 0x60);
  uVar21 = *(undefined4 *)(iVar5 + 100);
  pfVar12 = *(float **)(iVar5 + 0x68);
  uVar22 = *(undefined4 *)(iVar5 + 0x6c);
  *(undefined4 *)(iVar10 + 0x58) = *(undefined4 *)(iVar5 + 0x58);
  *(undefined4 *)(iVar10 + 0x5c) = uVar23;
  iVar5 = piVar4[0x24a];
  *(undefined4 *)(iVar5 + 0x58) = uVar20;
  *(undefined4 *)(iVar5 + 0x5c) = uVar21;
  iVar5 = piVar4[0x24b];
  *(float **)(iVar5 + 0x58) = pfVar12;
  *(undefined4 *)(iVar5 + 0x5c) = uVar22;
  sVar1 = (short)local_28[0xb];
  if (sVar1 != 1) {
    if (sVar1 == 2) {
      func_0065AD50(piVar4 + 0x243,7);
      goto LAB_001af9e0;
    }
    if (sVar1 != 3) {
      func_0065AD50(piVar4 + 0x243,1);
      goto LAB_001af9e0;
    }
  }
  func_0065AD50(piVar4 + 0x243,6);
LAB_001af9e0:
  func_004F5BD8((int)piVar4,(uint *)0x0,(int **)0x0,pfVar12);
  if (piVar4[0x266] != 0) {
    func_0026171C(piVar4[0x266],(float *)0x0,(uint *)0x0,(float *)0x0);
  }
  if (piVar4[0x267] != 0) {
    func_0026171C(piVar4[0x267],(float *)0x0,(uint *)0x0,(float *)0x0);
  }
  return piVar4;
}

