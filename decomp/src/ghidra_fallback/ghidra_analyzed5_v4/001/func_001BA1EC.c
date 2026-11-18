#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_001B9D54(int param_1,float *param_2,float *param_3,undefined4 *param_4);
extern int func_00273FFC(int param_1,int param_2,undefined4 param_3);
extern int func_002754B0(int param_1);
extern int func_002758CC(undefined4 *param_1,int *param_2);
extern int func_002C2D00(int *param_1);
extern int func_002C40D8(int param_1);
extern int func_0036D0C8(int *param_1,int param_2);
extern int func_004994B0(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,...);
extern undefined4 func_004A7F00(int param_1,int param_2,uint param_3);
extern int func_004CF478(int param_1,int param_2);
extern int func_004ECF6C(int param_1);
extern int func_004EDAD0(int param_1,uint *param_2);
extern int func_004EDB28(int param_1,int param_2);
extern int func_004EDC9C(undefined4 *param_1);
extern int func_00504CC0(undefined4 param_1,undefined4 param_2,uint param_3);
extern int func_00533400(int param_1,int *param_2);
extern int func_00547AC4(int *param_1);
extern int func_00588BE4(int param_1);
extern int func_00588BF0(int param_1,int param_2);
extern int func_00689794(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4,...);
extern float DAT_001ba630;
extern undefined4 DAT_001ba634;
extern undefined4 DAT_001ba638;
extern undefined4 *DAT_001ba63c;
extern undefined4 DAT_001ba640;
extern int DAT_001ba644;
extern int *DAT_001ba648;
extern int *DAT_001ba64c;
extern undefined4 *DAT_001ba650;
extern int *DAT_001ba654;
extern int DAT_001ba660;
extern int *DAT_001ba7a8;
extern float DAT_001ba7ac;
extern char s__s__d_001ba658[];
extern char s__s__s_bch_001ba618[];
extern char s__s__s_kcl_001ba624[];
extern char s_cf_001ba618[];
extern char s_cf_001ba624[];
extern char s_cf_001ba658[];

// USA 001BA1EC <- EU 001BA1EC (Ghidra, non-matching)
// GLOBAL DAT_001ba630 float
// GLOBAL DAT_001ba634 undefined4
// GLOBAL DAT_001ba638 undefined4
// GLOBAL DAT_001ba63c undefined4 *
// GLOBAL DAT_001ba640 undefined4
// GLOBAL DAT_001ba644 int
// GLOBAL DAT_001ba648 int *
// GLOBAL DAT_001ba64c int *
// GLOBAL DAT_001ba650 undefined4 *
// GLOBAL DAT_001ba654 int *
// GLOBAL DAT_001ba660 int
// GLOBAL DAT_001ba7a8 int *
// GLOBAL DAT_001ba7ac float
// GLOBAL s_cf_001ba618 string
// GLOBAL s_cf_001ba624 string
// GLOBAL s_cf_001ba658 string

void func_001BA1EC(int param_1)

{
  char cVar1;
  bool bVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  float fVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  float *pfVar10;
  float *pfVar11;
  int *piVar12;
  int *piVar13;
  float *pfVar14;
  int iVar15;
  uint in_fpscr;
  float fVar16;
  float fVar17;
  _Alignas(8) unsigned char albw_frame[0x120];
  #define local_11c (*(int *)(albw_frame + 0x4))
  #define uStack_118 (*(undefined4 *)(albw_frame + 0x8))
  #define iStack_114 (*(int *)(albw_frame + 0xc))
  #define local_110 (*(undefined4 *)(albw_frame + 0x10))
  #define local_10c (*(int *)(albw_frame + 0x14))
  #define uStack_108 (*(undefined4 *)(albw_frame + 0x18))
  #define local_104 (*(uint *)(albw_frame + 0x1c))
  #define local_100 (*(undefined1 *)(albw_frame + 0x20))
  #define local_ff (*(undefined1 *)(albw_frame + 0x21))
  #define local_fc (*(undefined4 *)(albw_frame + 0x24))
  #define local_f8 (*(undefined4 *)(albw_frame + 0x28))
  #define local_f4 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_f0 (*(undefined4 *)(albw_frame + 0x30))
  #define local_ec (*(undefined4 *)(albw_frame + 0x34))
  #define local_e8 (*(undefined4 *)(albw_frame + 0x38))
  #define local_e4 (*(undefined1 *)(albw_frame + 0x3c))
  #define local_e3 (*(undefined1 *)(albw_frame + 0x3d))
  #define auStack_e0 ((undefined4 *)(albw_frame + 0x40))
  #define auStack_88 ((undefined4 *)(albw_frame + 0x98))
  #define local_38 (*(uint *)(albw_frame + 0xe8))
  #define local_34 (*(float *)(albw_frame + 0xec))
  #define fStack_30 (*(float *)(albw_frame + 0xf0))
  #define fStack_2c (*(float *)(albw_frame + 0xf4))
  piVar12 = *(int **)(param_1 + 0x2c0);
  (**(code **)(*piVar12 + 8))(piVar12);
  iVar15 = piVar12[1];
  piVar12 = (int *)(param_1 + 0x41c);
  (**(code **)(*(int *)(param_1 + 0x41c) + 8))(piVar12);
  func_00689794(auStack_88,s__s__s_bch_001ba618,*(uint *)(param_1 + 0x420),iVar15);
  piVar13 = *(int **)(param_1 + 0x2c0);
  (**(code **)(*piVar13 + 8))(piVar13);
  iVar15 = piVar13[1];
  (**(code **)(*piVar12 + 8))(piVar12);
  func_00689794(auStack_e0,s__s__s_kcl_001ba624,*(uint *)(param_1 + 0x420),iVar15);
  puVar3 = (undefined4 *)func_0010BAB4(0x78);
  uVar7 = DAT_001ba634;
  fVar17 = DAT_001ba630;
  if (puVar3 != (undefined4 *)0x0) {
    puVar3[1] = param_1;
    *(undefined1 *)(puVar3 + 0x1d) = 1;
    uVar8 = DAT_001ba638;
    *puVar3 = uVar7;
    *(undefined1 *)((int)puVar3 + 0x75) = 1;
    puVar3[2] = uVar8;
    puVar3[3] = ALBW_AS_U32(fVar17);
    puVar3[4] = ALBW_AS_U32(fVar17);
    puVar3[5] = ALBW_AS_U32(fVar17);
    puVar3[6] = uVar8;
    puVar3[7] = ALBW_AS_U32(fVar17);
    puVar3[8] = ALBW_AS_U32(fVar17);
    puVar3[9] = ALBW_AS_U32(fVar17);
    puVar3[10] = uVar8;
    puVar3[0xb] = uVar8;
    puVar3[0xc] = ALBW_AS_U32(fVar17);
    puVar3[0xd] = ALBW_AS_U32(fVar17);
    puVar3[0xe] = ALBW_AS_U32(fVar17);
    puVar3[0xf] = uVar8;
    puVar3[0x10] = ALBW_AS_U32(fVar17);
    puVar3[0x11] = ALBW_AS_U32(fVar17);
    puVar3[0x12] = ALBW_AS_U32(fVar17);
    puVar3[0x13] = uVar8;
    puVar3[0x14] = uVar8;
    puVar3[0x15] = ALBW_AS_U32(fVar17);
    puVar3[0x16] = ALBW_AS_U32(fVar17);
    puVar3[0x17] = ALBW_AS_U32(fVar17);
    puVar3[0x18] = uVar8;
    puVar3[0x19] = ALBW_AS_U32(fVar17);
    puVar3[0x1a] = ALBW_AS_U32(fVar17);
    puVar3[0x1b] = ALBW_AS_U32(fVar17);
    puVar3[0x1c] = uVar8;
  }
  *(undefined4 **)(param_1 + 0x3a8) = puVar3;
  puVar3 = func_00504CC0(*DAT_001ba63c,auStack_88,0xffffffff);
  if (puVar3[0x32] == 1) {
    local_10c = *(int *)puVar3[0x34];
  }
  else {
    local_10c = func_00533400((int)puVar3,*(int **)(param_1 + 0x2c0));
  }
  local_11c = DAT_001ba644;
  uStack_118 = DAT_001ba640;
  iStack_114 = DAT_001ba644;
  local_110 = DAT_001ba640;
  uStack_108 = 0;
  local_e4 = 1;
  local_100 = 0;
  local_f8 = 0;
  local_104 = 0;
  local_ff = 0;
  local_e8 = 0;
  local_e3 = 0xc4;
  local_ec = 0;
  local_fc = 0;
  local_f0 = 0;
  local_f4 = 0;
  iVar15 = func_00588BE4(param_1);
  if ((iVar15 == *DAT_001ba648) || (iVar15 = func_00588BE4(param_1), iVar15 == *DAT_001ba64c)) {
    local_100 = 1;
    local_104 = local_104 | 1;
  }
  uVar6 = in_fpscr & 0xfffffff | (uint)(*(float *)(param_1 + 0x48) == fVar17) << 0x1e;
  if ((!SUB41(uVar6 >> 0x1e,0)) && (iVar15 = func_00547AC4((int *)(param_1 + 4)), iVar15 != 0)) {
    local_100 = 1;
    *(undefined1 *)(param_1 + 0x476) = 1;
  }
  func_0036D0C8((int *)(param_1 + 0x470),0);
  local_fc = *(undefined4 *)(param_1 + 0x470);
  piVar12 = func_002C2D00(&local_11c);
  *(int **)(param_1 + 0x40c) = piVar12;
  (**(code **)(*piVar12 + 0x10))(piVar12,0x24);
  *(uint *)(*(int *)(param_1 + 0x40c) + 0x164) =
       *(uint *)(*(int *)(param_1 + 0x40c) + 0x164) | 0x90000;
  *(undefined4 *)(param_1 + 0x34c) = *(undefined4 *)(param_1 + 0x40c);
  puVar4 = (undefined4 *)func_0010BAB4(0x48);
  puVar3 = (undefined4 *)0x0;
  if (puVar4 != (undefined4 *)0x0) {
    puVar3 = func_004EDC9C(puVar4);
  }
  piVar12 = (int *)(param_1 + 0x410);
  *(undefined4 **)(param_1 + 0x410) = puVar3;
  func_004EDB28((int)puVar3,(int)auStack_e0);
  local_38 = *(uint *)(param_1 + 0x2cc);
  func_004EDAD0(*piVar12,&local_38);
  puVar3 = DAT_001ba650;
  *(int *)(*piVar12 + 0x28) = param_1 + 0x480;
  *(undefined2 *)(*piVar12 + 0x2c) = 0xff9c;
  uVar7 = *puVar3;
  uVar8 = puVar3[1];
  *(int *)(param_1 + 0x484) = param_1;
  *(undefined4 *)(param_1 + 0x488) = uVar7;
  *(undefined4 *)(param_1 + 0x48c) = uVar8;
  func_004A7F00(*DAT_001ba654,*piVar12,1);
  (**(code **)(**(int **)(param_1 + 0x2c0) + 8))(*(int **)(param_1 + 0x2c0));
  puVar3 = (undefined4 *)func_0010BAB4(0x88);
  piVar12 = (int *)0x0;
  if (puVar3 != (undefined4 *)0x0) {
    piVar12 = func_002758CC(puVar3,(int *)(param_1 + 4));
  }
  *(int **)(param_1 + 0x414) = piVar12;
  func_002C40D8(param_1);
  piVar13 = *(int **)(param_1 + 0x2c0);
  (**(code **)(*piVar13 + 8))(piVar13);
  piVar12 = (int *)(param_1 + 0x424);
  func_004994B0((int)piVar12,s__s__d_001ba658,piVar13[1],(int)*(short *)(param_1 + 0x58));
  (**(code **)(*piVar12 + 8))(piVar12);
  func_00273FFC(*(int *)(param_1 + 0x414),param_1 + 800,*(undefined4 *)(param_1 + 0x428));
  pfVar14 = (float *)**(undefined4 **)(param_1 + 0x414);
  if (pfVar14 == (float *)0x0) {
    local_34 = (float)VectorUnsignedToFloat
                                (*(undefined4 *)(param_1 + 0x20),(byte)(uVar6 >> 0x15) & 3);
    fStack_30 = (float)VectorUnsignedToFloat
                                 (*(undefined4 *)(param_1 + 0x24),(byte)(uVar6 >> 0x15) & 3);
    fStack_2c = (float)VectorUnsignedToFloat
                                 (*(undefined4 *)(param_1 + 0x28),(byte)(uVar6 >> 0x15) & 3);
    pfVar10 = &local_34;
    pfVar11 = (float *)(param_1 + 0x3d0);
    pfVar14 = (float *)(param_1 + 0x14);
    local_34 = local_34 * DAT_001ba7ac;
    fStack_30 = fStack_30 * DAT_001ba7ac;
    fStack_2c = fStack_2c * DAT_001ba7ac;
    goto LAB_001ba728;
  }
  fVar5 = pfVar14[0x2b];
  if ((fVar5 != 0.0) && (*(int *)((int)ALBW_AS_U32(fVar5) + 0x20) == 2)) {
    piVar12 = *(int **)((int)ALBW_AS_U32(fVar5) + 0x28);
    if (piVar12 != (int *)0x0) {
      fVar5 = ALBW_AS_F32(piVar12[1]);
    }
    if (piVar12 != (int *)0x0 && fVar5 != 0.0) {
      iVar15 = *piVar12;
      fVar16 = *(float *)(iVar15 + 0x18) - *(float *)((int)ALBW_AS_U32(fVar5) + 0x18);
      if (fVar16 <= fVar17) {
        fVar16 = -fVar16;
      }
      if ((int)ALBW_AS_U32(fVar16) < DAT_001ba660) {
        fVar16 = *(float *)(iVar15 + 0x1c) - *(float *)((int)ALBW_AS_U32(fVar5) + 0x1c);
        if (fVar16 <= fVar17) {
          fVar16 = -fVar16;
        }
        if ((int)ALBW_AS_U32(fVar16) < DAT_001ba660) {
          fVar5 = *(float *)(iVar15 + 0x20) - *(float *)((int)ALBW_AS_U32(fVar5) + 0x20);
          if (fVar5 <= fVar17) {
            fVar5 = -fVar5;
          }
          if (((int)ALBW_AS_U32(fVar5) < DAT_001ba660) && (*(char *)(*DAT_001ba7a8 + 0x18) == '\x10')) {
            *(undefined1 *)(param_1 + 0x47b) = 1;
          }
        }
      }
    }
  }
  if ((*(int *)(param_1 + 0x47c) == 0 || *(int *)(param_1 + 0x47c) == 3) &&
     (*(short *)(param_1 + 0x36) != 0)) {
    bVar2 = func_00588BF0(param_1,0);
    if (bVar2) {
      cVar1 = *(char *)(*(int *)(param_1 + 0x414) + 0x1c);
      if (cVar1 != '\0' && cVar1 != '\b') goto LAB_001ba6d0;
      *(undefined1 *)(param_1 + 0x418) = 2;
      func_002754B0(*(int *)(param_1 + 0x414));
    }
    if (*(char *)(param_1 + 0x418) == '\x02') {
      iVar15 = *(int *)((int)ALBW_AS_U32(pfVar14[0x2b]) + 0x28);
      if ((iVar15 == 0) ||
         (uVar9 = *(uint *)((int)ALBW_AS_U32(pfVar14[0x2b]) + 0x20), uVar6 = uVar9 - 1, uVar9 <= uVar6)) {
        pfVar14 = (float *)0x0;
      }
      else {
        pfVar14 = *(float **)(iVar15 + uVar6 * 4);
      }
    }
  }
  else {
LAB_001ba6d0:
    *(undefined1 *)(param_1 + 0x418) = 1;
  }
  pfVar11 = pfVar14 + 6;
  pfVar10 = pfVar14 + 3;
LAB_001ba728:
  func_001B9D54(param_1,pfVar14,pfVar10,pfVar11);
  func_004ECF6C(param_1);
  if (*(char *)(param_1 + 0x477) == '\0') {
    func_004CF478(*(int *)(param_1 + 0x40c),0);
    *(undefined1 *)(*(int *)(param_1 + 0x410) + 0x44) = 0;
  }
  return;
}

