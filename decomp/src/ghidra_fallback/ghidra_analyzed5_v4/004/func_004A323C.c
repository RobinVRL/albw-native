#include "ghidra_types.h"

extern int func_001151EC(undefined4 *param_1,undefined4 *param_2);
extern int func_001157FC(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern float func_00115DC8(float *param_1);
extern int func_00491D78(float *param_1,float *param_2,float *param_3,float *param_4);
extern undefined4 DAT_004a3618;
extern undefined4 DAT_004a361c;
extern float *DAT_004a3620;
extern undefined4 *DAT_004a3624;

// USA 004A323C <- EU 004A3214 (Ghidra, non-matching)
// GLOBAL DAT_004a3618 undefined4
// GLOBAL DAT_004a361c undefined4
// GLOBAL DAT_004a3620 float *
// GLOBAL DAT_004a3624 undefined4 *

undefined4 func_004A323C(float *param_1,int *param_2,int *param_3,int param_4)

{
  float *pfVar1;
  int *piVar2;
  float *pfVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  float fVar6;
  _Alignas(8) unsigned char albw_frame[0x150];
  #define local_148 (*(float *)(albw_frame + 0x8))
  #define local_144 (*(float *)(albw_frame + 0xc))
  #define local_140 (*(float *)(albw_frame + 0x10))
  #define local_13c (*(undefined4 *)(albw_frame + 0x14))
  #define local_138 (*(undefined4 *)(albw_frame + 0x18))
  #define local_134 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_130 (*(undefined4 *)(albw_frame + 0x20))
  #define local_12c (*(undefined4 *)(albw_frame + 0x24))
  #define local_128 (*(undefined4 *)(albw_frame + 0x28))
  #define local_124 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_120 (*(undefined4 *)(albw_frame + 0x30))
  #define local_11c (*(undefined4 *)(albw_frame + 0x34))
  #define local_118 (*(float *)(albw_frame + 0x38))
  #define local_114 (*(float *)(albw_frame + 0x3c))
  #define local_110 (*(float *)(albw_frame + 0x40))
  #define local_10c (*(float *)(albw_frame + 0x44))
  #define local_108 (*(float *)(albw_frame + 0x48))
  #define local_104 (*(float *)(albw_frame + 0x4c))
  #define local_100 (*(float *)(albw_frame + 0x50))
  #define local_fc (*(int *)(albw_frame + 0x54))
  #define local_f8 (*(int *)(albw_frame + 0x58))
  #define local_f4 (*(float *)(albw_frame + 0x5c))
  #define afStack_f0 ((float *)(albw_frame + 0x60))
  #define local_e4 (*(undefined4 *)(albw_frame + 0x6c))
  #define local_d4 (*(undefined4 *)(albw_frame + 0x7c))
  #define local_c4 (*(undefined4 *)(albw_frame + 0x8c))
  #define local_c0 (*(float *)(albw_frame + 0x90))
  #define local_bc (*(float *)(albw_frame + 0x94))
  #define local_b8 (*(float *)(albw_frame + 0x98))
  #define local_b0 (*(undefined4 *)(albw_frame + 0xa0))
  #define local_ac (*(undefined4 *)(albw_frame + 0xa4))
  #define local_a8 (*(undefined4 *)(albw_frame + 0xa8))
  #define local_a4 (*(undefined4 *)(albw_frame + 0xac))
  #define local_a0 (*(undefined4 *)(albw_frame + 0xb0))
  #define uStack_9c (*(undefined4 *)(albw_frame + 0xb4))
  #define local_98 (*(undefined4 *)(albw_frame + 0xb8))
  #define local_94 (*(undefined4 *)(albw_frame + 0xbc))
  #define local_90 (*(undefined4 *)(albw_frame + 0xc0))
  #define local_8c (*(undefined4 *)(albw_frame + 0xc4))
  #define uStack_88 (*(undefined4 *)(albw_frame + 0xc8))
  #define local_84 (*(undefined4 *)(albw_frame + 0xcc))
  #define local_80 (*(float *)(albw_frame + 0xd0))
  #define uStack_7c (*(undefined4 *)(albw_frame + 0xd4))
  #define uStack_78 (*(undefined4 *)(albw_frame + 0xd8))
  #define local_74 (*(float *)(albw_frame + 0xdc))
  #define local_70 (*(undefined4 *)(albw_frame + 0xe0))
  #define local_6c (*(undefined4 *)(albw_frame + 0xe4))
  #define local_68 (*(float *)(albw_frame + 0xe8))
  #define local_64 (*(undefined4 *)(albw_frame + 0xec))
  #define local_60 (*(undefined4 *)(albw_frame + 0xf0))
  #define local_5c (*(float *)(albw_frame + 0xf4))
  #define local_58 (*(undefined4 *)(albw_frame + 0xf8))
  #define local_54 (*(undefined4 *)(albw_frame + 0xfc))
  #define afStack_50 ((float *)(albw_frame + 0x100))
  pfVar1 = DAT_004a3620;
  if (param_3 == (int *)0x0) {
    local_f4 = ALBW_AS_F32(param_2[0xf]);
    local_10c = ALBW_AS_F32(param_2[0x10]);
    local_108 = ALBW_AS_F32(param_2[0x11]);
    local_104 = ALBW_AS_F32(param_2[0x12]);
    local_100 = ALBW_AS_F32(param_2[0x13]);
    local_fc = param_2[0x14];
    local_f8 = param_2[0x15];
  }
  else {
    if ((*(ushort *)(param_3 + 6) & 2) == 0) {
      local_f4 = ALBW_AS_F32(param_2[0xf]);
    }
    else {
      local_f4 = ALBW_AS_F32(param_3[8]);
    }
    if ((*(ushort *)(param_3 + 6) & 4) == 0) {
      local_10c = ALBW_AS_F32(param_2[0x10]);
    }
    else {
      local_10c = ALBW_AS_F32(param_3[9]);
    }
    if ((*(ushort *)(param_3 + 6) & 8) == 0) {
      local_108 = ALBW_AS_F32(param_2[0x11]);
    }
    else {
      local_108 = ALBW_AS_F32(param_3[10]);
    }
    if ((*(ushort *)(param_3 + 6) & 0x10) == 0) {
      local_104 = ALBW_AS_F32(param_2[0x12]);
    }
    else {
      local_104 = ALBW_AS_F32(param_3[0xb]);
    }
    if ((*(ushort *)(param_3 + 6) & 0x20) == 0) {
      local_100 = ALBW_AS_F32(param_2[0x13]);
    }
    else {
      local_100 = ALBW_AS_F32(param_3[0xc]);
    }
    if ((*(ushort *)(param_3 + 6) & 0x40) == 0) {
      local_fc = param_2[0x14];
    }
    else {
      local_fc = param_3[0xd];
    }
    if ((*(ushort *)(param_3 + 6) & 0x80) == 0) {
      local_f8 = param_2[0x15];
    }
    else {
      local_f8 = param_3[0xe];
    }
  }
  piVar2 = (int *)(*(int *)(param_4 + 0x54) + *param_2 * 8);
  puVar4 = (undefined4 *)piVar2[1];
  if (puVar4 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)*piVar2;
  }
  else {
    local_b0 = DAT_004a3618;
    local_ac = DAT_004a361c;
    local_a8 = DAT_004a361c;
    puVar5 = &local_b0;
    local_a0 = DAT_004a361c;
    uStack_9c = DAT_004a3618;
    local_98 = DAT_004a361c;
    local_90 = DAT_004a361c;
    local_8c = DAT_004a361c;
    uStack_88 = DAT_004a3618;
    local_a4 = *puVar4;
    local_94 = puVar4[1];
    local_84 = puVar4[2];
  }
  if ((param_3 != (int *)0x0) && ((*(ushort *)(param_3 + 6) & 1) != 0)) {
    puVar5 = *(undefined4 **)(*(int *)(param_4 + 0x58) + *param_3 * 0x10);
  }
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = *(undefined4 **)(param_4 + 0x14);
  }
  if (*(char *)((int)param_2 + 0x32) == '\0') {
    if ((*(undefined4 **)(param_4 + 0x14) == puVar5) || (piVar2[1] != 0)) {
      func_001151EC(&local_148,puVar5);
      pfVar3 = *(float **)(param_4 + 0x20);
      local_118 = *pfVar3;
      local_114 = pfVar3[1];
      local_110 = pfVar3[2];
    }
    else {
      func_001151EC(&local_148,puVar5);
      local_118 = *pfVar1;
      local_114 = pfVar1[1];
      local_110 = pfVar1[2];
    }
  }
  else {
    func_001151EC(&local_148,*(undefined4 **)(param_4 + 0x14));
    pfVar3 = *(float **)(param_4 + 0x20);
    local_118 = *pfVar3;
    local_114 = pfVar3[1];
    local_110 = pfVar3[2];
    local_13c = puVar5[3];
    local_12c = puVar5[7];
    local_11c = puVar5[0xb];
  }
  if ((char)param_2[0xc] == '\x02' || (char)param_2[0xc] == '\x03') {
    local_74 = local_148;
    local_70 = local_138;
    local_6c = local_128;
    local_68 = local_144;
    local_64 = local_134;
    local_60 = local_124;
    local_5c = local_140;
    local_58 = local_130;
    local_54 = local_120;
    fVar6 = func_00115DC8(&local_74);
    local_118 = fVar6 * local_118;
    fVar6 = func_00115DC8(&local_68);
    local_114 = fVar6 * local_114;
    fVar6 = func_00115DC8(&local_5c);
    local_110 = fVar6 * local_110;
    local_148 = local_74;
    local_138 = local_70;
    local_128 = local_6c;
    local_144 = local_68;
    local_134 = local_64;
    local_124 = local_60;
    local_140 = local_5c;
    local_130 = local_58;
    local_120 = local_54;
  }
  switch((char)param_2[0xc]) {
  case '\0':
    func_001151EC(afStack_f0,&local_148);
    local_c0 = local_118;
    local_bc = local_114;
    local_b8 = local_110;
    break;
  case '\x01':
    func_001151EC(afStack_f0,&local_148);
    local_c0 = local_118;
    local_bc = local_114;
    local_b8 = local_110;
    local_10c = local_10c * local_118;
    local_108 = local_108 * local_114;
    local_104 = local_104 * local_110;
    break;
  case '\x02':
    func_001151EC(afStack_f0,&local_148);
    local_c0 = *pfVar1;
    local_bc = pfVar1[1];
    local_b8 = pfVar1[2];
    break;
  case '\x03':
    func_001151EC(afStack_f0,DAT_004a3624);
    local_e4 = local_13c;
    local_d4 = local_12c;
    local_c4 = local_11c;
    local_c0 = local_118;
    local_bc = local_114;
    local_b8 = local_110;
    local_10c = local_10c * local_118;
    local_108 = local_108 * local_114;
    local_104 = local_104 * local_110;
    break;
  case '\x04':
    func_001151EC(afStack_f0,DAT_004a3624);
    local_e4 = local_13c;
    local_d4 = local_12c;
    local_c4 = local_11c;
    local_c0 = *pfVar1;
    local_bc = pfVar1[1];
    local_b8 = pfVar1[2];
  }
  func_00115D70(&local_74,&local_c0,local_f4);
  local_80 = local_74;
  uStack_7c = local_70;
  uStack_78 = local_6c;
  func_00491D78(afStack_50,&local_80,&local_100,&local_10c);
  return func_001157FC(param_1,afStack_f0,afStack_50);
}

