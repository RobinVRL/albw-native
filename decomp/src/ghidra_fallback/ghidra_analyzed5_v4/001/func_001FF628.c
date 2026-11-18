#include "ghidra_types.h"

extern undefined8 func_00110D44(undefined4 *param_1,byte *param_2,uint param_3);
extern int func_0011593C(undefined4 *param_1);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_001EA96C();
extern void func_002C1540(int param_1,float fparam_0);
extern int func_002C15CC(int param_1,float fparam_0);
extern int func_002FF5BC(int param_1);
extern int func_002FF74C(int param_1,int param_2,int param_3);
extern int func_0049F5FC(undefined4 *param_1);
extern int func_004A9F98(int param_1,uint *param_2,uint param_3,float fparam_0,float fparam_1);
extern int func_004B201C(int param_1,uint param_2);
extern int func_004CF478(int param_1,int param_2);
extern int func_004F1164(int param_1,undefined4 *param_2,float *param_3);
extern undefined4 DAT_001ff950;
extern float DAT_001ff954;
extern float *DAT_001ff958;
extern float DAT_001ff95c;
extern undefined4 DAT_001ff960;
extern undefined4 DAT_001ff964;
extern int *DAT_001ff968;
extern float DAT_001ffd20;
extern uint DAT_001ffd24;
extern float DAT_001ffd28;
extern int *DAT_001ffd2c;
extern undefined4 *DAT_001ffd30;

// USA 001FF628 <- EU 001FF628 (Ghidra, non-matching)
// GLOBAL DAT_001ff950 undefined4
// GLOBAL DAT_001ff954 float
// GLOBAL DAT_001ff958 float *
// GLOBAL DAT_001ff95c float
// GLOBAL DAT_001ff960 undefined4
// GLOBAL DAT_001ff964 undefined4
// GLOBAL DAT_001ff968 int *
// GLOBAL DAT_001ffd20 float
// GLOBAL DAT_001ffd24 uint
// GLOBAL DAT_001ffd28 float
// GLOBAL DAT_001ffd2c int *
// GLOBAL DAT_001ffd30 undefined4 *

undefined4 func_001FF628(int param_1)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 extraout_r1;
  undefined1 *puVar8;
  int *piVar9;
  int *in_r3;
  undefined4 uVar10;
  bool bVar11;
  float fVar12;
  float in_s16;
  float fVar13;
  undefined8 uVar14;
  _Alignas(8) unsigned char albw_frame[0x150];
  #define local_150 (*(float *)(albw_frame + 0x0))
  #define local_14c (*(float *)(albw_frame + 0x4))
  #define local_148 (*(float *)(albw_frame + 0x8))
  #define local_144 (*(undefined4 *)(albw_frame + 0xc))
  #define local_140 (*(undefined4 *)(albw_frame + 0x10))
  #define local_13c (*(undefined4 *)(albw_frame + 0x14))
  #define local_138 (*(undefined4 *)(albw_frame + 0x18))
  #define local_134 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_130 (*(undefined4 *)(albw_frame + 0x20))
  #define local_12c (*(undefined4 *)(albw_frame + 0x24))
  #define local_128 (*(int *)(albw_frame + 0x28))
  #define local_124 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_120 (*(float *)(albw_frame + 0x30))
  #define fStack_11c (*(float *)(albw_frame + 0x34))
  #define local_118 (*(float *)(albw_frame + 0x38))
  #define local_114 (*(float *)(albw_frame + 0x3c))
  #define local_110 (*(float *)(albw_frame + 0x40))
  #define local_10c (*(undefined4 *)(albw_frame + 0x44))
  #define local_108 (*(float *)(albw_frame + 0x48))
  #define local_104 (*(undefined4 *)(albw_frame + 0x4c))
  #define local_100 (*(float *)(albw_frame + 0x50))
  #define local_fc (*(float *)(albw_frame + 0x54))
  #define local_f8 (*(undefined4 *)(albw_frame + 0x58))
  #define local_f4 (*(undefined4 *)(albw_frame + 0x5c))
  #define local_f0 (*(undefined4 *)(albw_frame + 0x60))
  #define local_ec (*(undefined4 *)(albw_frame + 0x64))
  #define local_e8 (*(undefined4 *)(albw_frame + 0x68))
  #define local_e4 (*(undefined4 *)(albw_frame + 0x6c))
  #define local_e0 (*(undefined4 *)(albw_frame + 0x70))
  #define local_dc (*(undefined4 *)(albw_frame + 0x74))
  #define local_d8 (*(undefined4 *)(albw_frame + 0x78))
  #define local_d4 (*(undefined1 * *)(albw_frame + 0x7c))
  #define auStack_d0 ((undefined1 *)(albw_frame + 0x80))
  #define local_c0 (*(undefined4 *)(albw_frame + 0x90))
  #define local_bc (*(undefined1 *)(albw_frame + 0x94))
  #define local_bb (*(undefined1 *)(albw_frame + 0x95))
  #define local_ba (*(undefined1 *)(albw_frame + 0x96))
  #define local_b9 (*(undefined1 *)(albw_frame + 0x97))
  #define local_b8 (*(undefined4 *)(albw_frame + 0x98))
  #define local_b4 (*(int *)(albw_frame + 0x9c))
  #define local_b0 (*(int *)(albw_frame + 0xa0))
  #define local_ac ((byte *)(albw_frame + 0xa4))
  #define local_9c (*(uint *)(albw_frame + 0xb4))
  #define local_98 (*(undefined4 *)(albw_frame + 0xb8))
  #define uStack_94 (*(undefined4 *)(albw_frame + 0xbc))
  #define local_90 (*(undefined4 *)(albw_frame + 0xc0))
  #define local_8c (*(undefined4 *)(albw_frame + 0xc4))
  #define local_88 (*(float *)(albw_frame + 0xc8))
  #define local_84 (*(undefined1 *)(albw_frame + 0xcc))
  #define local_83 (*(undefined1 *)(albw_frame + 0xcd))
  #define uStack_7c (*(uint *)(albw_frame + 0xd4))
  #define local_78 (*(undefined4 *)(albw_frame + 0xd8))
  #define local_74 (*(undefined4 *)(albw_frame + 0xdc))
  #define local_70 (*(undefined4 *)(albw_frame + 0xe0))
  #define local_68 (*(undefined4 *)(albw_frame + 0xe8))
  #define local_64 (*(undefined4 *)(albw_frame + 0xec))
  #define local_60 (*(int *)(albw_frame + 0xf0))
  #define iStack_5c (*(int *)(albw_frame + 0xf4))
  #define local_58 (*(undefined4 *)(albw_frame + 0xf8))
  #define local_54 (*(undefined4 *)(albw_frame + 0xfc))
  #define local_50 (*(undefined4 *)(albw_frame + 0x100))
  #define local_4c (*(float *)(albw_frame + 0x104))
  #define fStack_48 (*(float *)(albw_frame + 0x108))
  #define fStack_44 (*(float *)(albw_frame + 0x10c))
  piVar6 = DAT_001ff968;
  pfVar1 = DAT_001ff958;
  iVar2 = *(int *)(param_1 + 0x80);
  if (*(char *)(iVar2 + 0x30) == '\0') {
    *(undefined1 *)(param_1 + 0x9c) = 0;
    if (iVar2 == 0) {
      return 0;
    }
    *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 1;
    return func_004CF478(*(int *)(param_1 + 0x80),0);
  }
  local_108 = DAT_001ff954;
  local_f8 = DAT_001ff950;
  local_f4 = DAT_001ff950;
  local_f0 = DAT_001ff950;
  local_ec = 0;
  local_e8 = 0;
  local_e0 = DAT_001ff950;
  local_bc = 0;
  bVar11 = *(char *)(param_1 + 0x9c) == '\0';
  puVar8 = auStack_d0;
  local_bb = 0;
  if (bVar11) {
    in_s16 = DAT_001ff954;
  }
  local_d8 = 4;
  local_dc = 0;
  local_ba = 0;
  local_c0 = 0;
  local_b9 = 0;
  local_b8 = 0;
  local_b4 = 0;
  local_b0 = 0;
  if (!bVar11) {
    in_s16 = *(float *)(param_1 + 0x98);
  }
  uVar14 = CONCAT44(DAT_001ff960,DAT_001ff950);
  fStack_11c = DAT_001ff954;
  local_118 = *DAT_001ff958;
  local_114 = DAT_001ff958[1];
  local_110 = DAT_001ff958[2];
  local_104 = *(undefined4 *)(param_1 + 0x94);
  local_100 = *(float *)(param_1 + 0x90) * DAT_001ff95c;
  local_e4 = DAT_001ff960;
  local_10c = DAT_001ff964;
  fVar13 = DAT_001ff954;
  local_120 = in_s16;
  local_fc = local_100;
  local_d4 = puVar8;
  iVar2 = func_004B201C(*DAT_001ff968,*(uint *)(param_1 + 0x88));
  if (*(char *)(param_1 + 0x9c) != '\0') {
    local_e8 = *(undefined4 *)(param_1 + 0x80);
    iVar3 = *(int *)(param_1 + 0x84);
    local_144 = *(undefined4 *)(iVar3 + 0x3b4c);
    local_140 = *(undefined4 *)(iVar3 + 0x3b50);
    local_13c = *(undefined4 *)(iVar3 + 0x3b54);
    local_138 = *(undefined4 *)(iVar3 + 0x3b58);
    local_134 = *(undefined4 *)(iVar3 + 0x3b5c);
    local_130 = *(undefined4 *)(iVar3 + 0x3b60);
    local_12c = *(undefined4 *)(iVar3 + 0x3b64);
    local_128 = *(int *)(iVar3 + 0x3b68);
    local_124 = *(undefined4 *)(iVar3 + 0x3b6c);
    local_b4 = *(int *)(param_1 + 0x84) + 0x3ba4;
    local_b0 = *(int *)(param_1 + 0x84) + 0x3ba8;
    iVar3 = *(int *)(param_1 + 0x84);
    local_150 = *(float *)(iVar3 + 0x3b40);
    local_14c = *(float *)(iVar3 + 0x3b44);
    local_148 = *(float *)(iVar3 + 0x3b48);
    local_ba = 1;
    iVar3 = *(int *)(param_1 + 8);
    *(uint *)(iVar3 + 0x164) = *(uint *)(iVar3 + 0x164) | 0x40000000;
    *(undefined4 *)(iVar3 + 0x80) = local_144;
    *(undefined4 *)(iVar3 + 0x84) = local_138;
    *(undefined4 *)(iVar3 + 0x88) = local_12c;
    *(undefined4 *)(iVar3 + 0x8c) = *(undefined4 *)(param_1 + 0x34);
    *(undefined4 *)(iVar3 + 0x90) = local_140;
    *(undefined4 *)(iVar3 + 0x94) = local_134;
    *(int *)(iVar3 + 0x98) = local_128;
    *(undefined4 *)(iVar3 + 0x9c) = *(undefined4 *)(param_1 + 0x38);
    *(undefined4 *)(iVar3 + 0xa0) = local_13c;
    *(undefined4 *)(iVar3 + 0xa4) = local_130;
    *(undefined4 *)(iVar3 + 0xa8) = local_124;
    uVar7 = *(undefined4 *)(param_1 + 0x3c);
    *(undefined4 *)(iVar3 + 0xac) = uVar7;
    if (*(int **)(param_1 + 0xc) != (int *)0x0) {
      func_00169A80(*(int **)(param_1 + 0xc),uVar7,puVar8,in_r3);
      puVar8 = (undefined1 *)0x0;
      func_00168E9C(*(int **)(param_1 + 0xc),*(int *)(param_1 + 8),(int *)0x0);
      uVar7 = extraout_r1;
    }
    if (*(int **)(param_1 + 0x14) != (int *)0x0) {
      func_00169A80(*(int **)(param_1 + 0x14),uVar7,puVar8,in_r3);
      func_00168E9C(*(int **)(param_1 + 0x14),*(int *)(param_1 + 8),(int *)0x0);
    }
    goto LAB_001ffa7c;
  }
  if (*(char *)(param_1 + 0x9e) == '\0') {
    if (iVar2 != 0) {
      bVar11 = *(char *)(iVar2 + 0x11c) != '\0';
      iVar3 = 0;
      if (bVar11) {
        iVar3 = *(int *)(iVar2 + 0x40);
      }
      if (((bVar11 && iVar3 != 0) &&
          (iVar3 = *(int *)(*(int *)(iVar3 + 0x24) + 0x14) + *(int *)(iVar2 + 0x114) * 0x30,
          iVar3 != 0)) ||
         (iVar3 = *(int *)(*(int *)(*(int *)(iVar2 + 8) + 0x24) + 0x14) +
                  *(int *)(iVar2 + 0x24) * 0x30, iVar3 != 0)) {
        *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(iVar3 + 0xc);
        *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(iVar3 + 0x1c);
        *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(iVar3 + 0x2c);
      }
      else {
        *(float *)(param_1 + 0x34) = fVar13;
        *(float *)(param_1 + 0x38) = fVar13;
        *(float *)(param_1 + 0x3c) = fVar13;
      }
      iVar3 = *piVar6;
      goto joined_r0x001ff988;
    }
    pfVar4 = DAT_001ff958;
    if (*piVar6 != 0) {
      pfVar4 = (float *)(*piVar6 + 0x23c8);
    }
    local_150 = *pfVar4;
    local_14c = pfVar4[1];
    local_148 = pfVar4[2];
  }
  else {
    iVar3 = *piVar6;
joined_r0x001ff988:
    pfVar4 = DAT_001ff958;
    if (iVar3 != 0) {
      pfVar4 = (float *)(iVar3 + 0x23c8);
    }
    func_00115C54(&local_150,(float *)(param_1 + 0x34),pfVar4);
  }
  local_e8 = 0;
  if (iVar2 == 0) {
    func_0011593C(&local_78);
    local_144 = local_78;
    local_140 = local_68;
    local_13c = local_58;
    local_138 = local_74;
    local_134 = local_64;
    local_130 = local_54;
    local_12c = local_70;
    local_128 = local_60;
    local_124 = local_50;
  }
  else {
    iVar3 = *(int *)(iVar2 + 8);
    local_13c = *(undefined4 *)(iVar3 + 0xa0);
    local_144 = *(undefined4 *)(iVar3 + 0x80);
    local_140 = *(undefined4 *)(iVar3 + 0x90);
    local_138 = *(undefined4 *)(iVar3 + 0x84);
    local_134 = *(undefined4 *)(iVar3 + 0x94);
    local_130 = *(undefined4 *)(iVar3 + 0xa4);
    local_12c = *(undefined4 *)(iVar3 + 0x88);
    local_128 = *(int *)(iVar3 + 0x98);
    local_124 = *(undefined4 *)(iVar3 + 0xa8);
  }
  local_b4 = 0;
LAB_001ffa7c:
  if (*(int *)(param_1 + 0x80) != 0) {
    fVar12 = DAT_001ffd20;
    if (*(char *)(param_1 + 0x9d) != '\0') {
      fVar12 = ALBW_AS_F32(uVar14);
    }
    func_002C1540(*(int *)(param_1 + 0x80),fVar12);
    fVar12 = fVar13;
    if (*(char *)(param_1 + 0x9d) == '\0') {
      fVar12 = ALBW_AS_F32(uVar14);
    }
    func_002C15CC(*(int *)(param_1 + 0x80),fVar12);
    *(uint *)(*(int *)(param_1 + 0x80) + 0x164) =
         *(uint *)(*(int *)(param_1 + 0x80) + 0x164) & 0xfffffffe;
    func_004CF478(*(int *)(param_1 + 0x80),1);
  }
  if (*(int *)(param_1 + 8) != 0) {
    func_004CF478(*(int *)(param_1 + 8),1);
  }
  uVar5 = 0;
  if (*(int *)(param_1 + 0x7c) != 0) {
    func_002FF74C(*(int *)(param_1 + 0x7c),*(int *)(param_1 + 8),0);
    uVar5 = func_002FF5BC(*(int *)(param_1 + 0x7c));
  }
  if (iVar2 != 0) {
    if (in_s16 == fVar13) {
      iVar3 = *(int *)(iVar2 + 0xec);
      if ((iVar3 != 0) && (*(int *)(iVar3 + 0x1c) == *(int *)(iVar2 + 0xf0))) {
        iVar2 = *(int *)(iVar3 + 0x20);
        if ((iVar2 != 0) &&
           ((*(int *)(iVar3 + 0x24) == *(int *)(iVar2 + 0xc) && (0 < *(int *)(iVar2 + 4))))) {
          *(undefined1 *)(iVar2 + 0x280) = 1;
        }
        *(uint *)(iVar3 + 0x3c) = *(uint *)(iVar3 + 0x3c) & 0xfffffffb | 8;
      }
    }
    else {
      local_9c = DAT_001ffd24 | uVar5 & 0xffff0000;
      local_ac[0] = 0;
      local_ac[1] = 0;
      local_ac[2] = 0;
      local_ac[3] = 0;
      local_ac[4] = 0;
      local_ac[5] = 0;
      local_ac[6] = 0;
      local_ac[7] = 0;
      local_ac[8] = 0;
      local_ac[9] = 0;
      local_ac[10] = 0;
      local_ac[0xb] = 0;
      local_ac[0xc] = 0;
      local_ac[0xd] = 0;
      local_ac[0xe] = 0;
      local_ac[0xf] = 0;
      local_98 = 0xff;
      uStack_94 = 0;
      local_90 = 0;
      local_8c = 0;
      local_84 = 0;
      local_83 = 1;
      local_88 = fVar13;
      func_00110D44(&uStack_7c,local_ac,0x2a);
      local_4c = *pfVar1;
      fStack_48 = pfVar1[1];
      fStack_44 = pfVar1[2];
      iStack_5c = param_1 + 0x40;
      local_60 = param_1 + 0x34;
      local_50 = (undefined4)uVar14;
      local_68 = 0x78;
      local_78 = *(undefined4 *)(param_1 + 0x78);
      func_004A9F98(*DAT_001ffd2c,&uStack_7c,0xff,ALBW_AS_F32(((ulonglong)uVar14 >> 0x20)),DAT_001ffd28);
      func_004F1164(iVar2,(undefined4 *)(param_1 + 0x34),(float *)(param_1 + 0x58));
    }
  }
  func_001EA96C(*(undefined4 *)(param_1 + 0x84),&local_150);
  iVar3 = *(int *)(param_1 + 0x84);
  iVar2 = 0;
  piVar6 = (int *)*DAT_001ffd30;
  if (0 < *piVar6) {
    do {
      piVar9 = *(int **)(piVar6[2] + iVar2 * 4);
      iVar2 = iVar2 + 1;
      *piVar9 = piVar6[3];
      piVar6[3] = (int)piVar9;
    } while (iVar2 < *piVar6);
  }
  *piVar6 = 0;
  iVar2 = 0;
  if (0 < piVar6[5]) {
    do {
      piVar9 = *(int **)(piVar6[7] + iVar2 * 4);
      iVar2 = iVar2 + 1;
      *piVar9 = piVar6[8];
      piVar6[8] = (int)piVar9;
    } while (iVar2 < piVar6[5]);
  }
  piVar6[5] = 0;
  piVar6[10] = 0;
  func_0049F5FC((undefined4 *)(iVar3 + 8));
  func_0049F5FC((undefined4 *)(iVar3 + 0x18));
  if (*(char *)(*(int *)(param_1 + 0x84) + 0x3bae) == '\0') {
    return 0;
  }
  *(undefined1 *)(param_1 + 0x9c) = 1;
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x3c);
  iVar2 = *(int *)(param_1 + 0x84);
  uVar7 = *(undefined4 *)(iVar2 + 0x3b40);
  uVar10 = *(undefined4 *)(iVar2 + 0x3b44);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(iVar2 + 0x3b48);
  *(undefined4 *)(param_1 + 0x34) = uVar7;
  *(undefined4 *)(param_1 + 0x38) = uVar10;
  return 0;
}

