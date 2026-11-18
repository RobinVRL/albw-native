#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010BA78(undefined4 param_1);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_001B79FC(int param_1,uint param_2,uint param_3,int param_4);
extern int func_001E1EDC(int param_1,int *param_2);
extern int func_003CBF44(int *param_1);
extern int func_003CC030(undefined4 *param_1,int param_2);
extern int func_003CC530(int *param_1,int param_2,int param_3,int param_4);
extern int func_00504ED0(uint *param_1,uint param_2,uint param_3);
extern int func_00562B24(int *param_1,int *param_2);
extern int func_00562DFC(int *param_1,char *param_2,uint *param_3);
extern int func_00562F64(int *param_1,uint *param_2,int param_3);
extern int DAT_002c2c00;
extern undefined *DAT_002c2c04;
extern undefined *DAT_002c2c08;
extern undefined *DAT_002c2c0c;
extern undefined4 DAT_002c2c10;
extern undefined *DAT_002c2c14;
extern undefined4 DAT_002c2c18;
extern undefined4 DAT_002c2c1c;
extern int DAT_002c2c20;
extern undefined4 DAT_002c2c24;
extern int *DAT_002c2c50;
extern undefined DAT_002c2c54;
extern undefined DAT_002c2c5c;
extern undefined DAT_002c2c64;
extern int DAT_002c2c6c;
extern int DAT_002c2c70;
extern int *DAT_002c2c74;
extern char s_Shader_gr_default_shader_shbin_002c2c30[];
extern char s_World_002c2c28[];
extern char s_cf_002c2c30[];

// USA 002C2610 <- EU 002C25EC (Ghidra, non-matching)
// GLOBAL DAT_002c2c00 int
// GLOBAL DAT_002c2c04 undefined *
// GLOBAL DAT_002c2c08 undefined *
// GLOBAL DAT_002c2c0c undefined *
// GLOBAL DAT_002c2c10 undefined4
// GLOBAL DAT_002c2c14 undefined *
// GLOBAL DAT_002c2c18 undefined4
// GLOBAL DAT_002c2c1c undefined4
// GLOBAL DAT_002c2c20 int
// GLOBAL DAT_002c2c24 undefined4
// GLOBAL DAT_002c2c50 int *
// GLOBAL DAT_002c2c54 undefined
// GLOBAL DAT_002c2c5c undefined
// GLOBAL DAT_002c2c64 undefined
// GLOBAL DAT_002c2c6c int
// GLOBAL DAT_002c2c70 int
// GLOBAL DAT_002c2c74 int *
// GLOBAL s_cf_002c2c30 string
// GLOBAL s_World_002c2c28 string

int func_002C2610(int param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint *puVar5;
  int *piVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint *puVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  _Alignas(8) unsigned char albw_frame[0x10b0];
  #define iStack_10a8 (*(int *)(albw_frame + 0x8))
  #define local_10a4 (*(char * *)(albw_frame + 0xc))
  #define local_10a0 (*(undefined4 *)(albw_frame + 0x10))
  #define local_109c (*(undefined4 *)(albw_frame + 0x14))
  #define local_1098 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_1094 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_1090 (*(undefined4 *)(albw_frame + 0x20))
  #define local_108c (*(undefined4 *)(albw_frame + 0x24))
  #define local_1088 (*(undefined4 *)(albw_frame + 0x28))
  #define local_1084 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_1080 (*(undefined4 *)(albw_frame + 0x30))
  #define local_107c (*(int *)(albw_frame + 0x34))
  #define local_1078 (*(char * *)(albw_frame + 0x38))
  #define local_1074 (*(undefined1 *)(albw_frame + 0x3c))
  #define local_1073 (*(undefined1 *)(albw_frame + 0x3d))
  #define local_1072 (*(undefined1 *)(albw_frame + 0x3e))
  #define local_1071 (*(undefined1 *)(albw_frame + 0x3f))
  #define local_1070 (*(undefined1 *)(albw_frame + 0x40))
  #define auStack_1068 ((uint *)(albw_frame + 0x48))
  #define local_68 ((int *)(albw_frame + 0x1048))
  *(undefined4 *)(param_1 + 0x10) = 0;
  iVar3 = func_00100118(param_1 + 0x14,DAT_002c2c04,DAT_002c2c00,3);
  *(undefined4 *)(iVar3 + 0x37ab8) = 0;
  *(undefined4 *)(iVar3 + 0x37abc) = 0;
  *(undefined4 *)(iVar3 + 0x37ac0) = 0xf0;
  *(undefined4 *)(iVar3 + 0x37ac4) = 0x140;
  *(undefined1 *)(iVar3 + 0x37ac8) = 0;
  *(undefined1 *)(iVar3 + 0x37ac9) = 2;
  *(undefined1 *)(iVar3 + 0x37aca) = 0xff;
  *(undefined1 *)(iVar3 + 0x37acb) = 0xff;
  *(undefined4 *)(iVar3 + 0x37acc) = 0;
  *(undefined1 *)(iVar3 + 0x37ad0) = 0;
  *(undefined1 *)(iVar3 + 0x37ad1) = 2;
  *(undefined1 *)(iVar3 + 0x37ad2) = 0xff;
  *(undefined1 *)(iVar3 + 0x37ad3) = 0xff;
  *(undefined4 *)(iVar3 + 0x37ad4) = 0;
  *(undefined1 *)(iVar3 + 0x37ad8) = 0;
  *(undefined1 *)(iVar3 + 0x37ad9) = 2;
  *(undefined1 *)(iVar3 + 0x37ada) = 0xff;
  *(undefined1 *)(iVar3 + 0x37adb) = 0xff;
  puVar1 = DAT_002c2c08;
  *(undefined4 *)(iVar3 + 0x37adc) = 0;
  iVar3 = func_00100118(iVar3 + 0x37ae0,puVar1,0x1c,3);
  *(undefined4 *)(iVar3 + 0x54) = 0;
  *(undefined4 *)(iVar3 + 0x58) = 0;
  iVar3 = func_00100118(iVar3 + 0x5c,DAT_002c2c0c,8,3);
  puVar1 = DAT_002c2c14;
  uVar2 = DAT_002c2c10;
  *(undefined4 *)(iVar3 + 0x18) = DAT_002c2c10;
  iVar3 = func_00100118(iVar3 + 0x1c,puVar1,0x10,7);
  uVar8 = 0;
  *(undefined4 *)(iVar3 + 0x74) = 0;
  *(undefined4 *)(iVar3 + 0x78) = 0;
  *(undefined4 *)(iVar3 + 0x7c) = 0;
  *(undefined1 *)(iVar3 + 0x80) = 0xff;
  *(undefined1 *)(iVar3 + 0x81) = 0;
  *(undefined1 *)(iVar3 + 0x82) = 0;
  *(undefined1 *)(iVar3 + 0x83) = 0xff;
  *(undefined1 *)(iVar3 + 0x84) = 0;
  *(undefined1 *)(iVar3 + 0x85) = 0;
  do {
    iVar12 = iVar3;
    if (uVar8 < 7) {
      iVar12 = iVar3 + uVar8 * 0x10;
    }
    uVar8 = uVar8 + 1;
    *(undefined4 **)(iVar12 + 8) = (undefined4 *)(iVar3 + -4);
  } while ((int)uVar8 < 7);
  *(undefined4 *)(iVar3 + 0x74) = *(undefined4 *)(iVar3 + 0x7c);
  *(uint *)(iVar3 + 0x78) =
       *(byte *)(iVar3 + 0x80) & 0x1f | (uint)*(byte *)(iVar3 + 0x81) << 5 |
       (uint)*(byte *)(iVar3 + 0x82) << 0xd | (uint)*(byte *)(iVar3 + 0x83) << 0x13 |
       (uint)(*(char *)(iVar3 + 0x84) != '\0') << 0x1b | (*(byte *)(iVar3 + 0x85) & 3) << 0x1c;
  *(undefined4 *)(iVar3 + -4) = DAT_002c2c18;
  *(undefined1 *)(iVar3 + 0x83) = 0xf1;
  *(uint *)(iVar3 + 0x78) = *(uint *)(iVar3 + 0x78) & 0xf807ffff | 0x7880000;
  puVar1 = DAT_002c2c14;
  *(undefined4 *)(iVar3 + 0x8c) = uVar2;
  iVar3 = func_00100118(iVar3 + 0x90,puVar1,0x10,7);
  uVar8 = 0;
  *(undefined4 *)(iVar3 + 0x74) = 0;
  *(undefined4 *)(iVar3 + 0x78) = 0;
  *(undefined4 *)(iVar3 + 0x7c) = 0;
  *(undefined1 *)(iVar3 + 0x80) = 0xff;
  *(undefined1 *)(iVar3 + 0x81) = 0;
  *(undefined1 *)(iVar3 + 0x82) = 0;
  *(undefined1 *)(iVar3 + 0x83) = 0xff;
  *(undefined1 *)(iVar3 + 0x84) = 0;
  *(undefined1 *)(iVar3 + 0x85) = 0;
  do {
    iVar12 = iVar3;
    if (uVar8 < 7) {
      iVar12 = iVar3 + uVar8 * 0x10;
    }
    uVar8 = uVar8 + 1;
    *(undefined4 **)(iVar12 + 8) = (undefined4 *)(iVar3 + -4);
  } while ((int)uVar8 < 7);
  uVar9 = *(byte *)(iVar3 + 0x80) & 0x1f | (uint)*(byte *)(iVar3 + 0x81) << 5;
  uVar8 = (uint)*(byte *)(iVar3 + 0x82) << 0xd;
  *(undefined4 *)(iVar3 + 0x74) = *(undefined4 *)(iVar3 + 0x7c);
  *(uint *)(iVar3 + 0x78) =
       uVar9 | uVar8 | (uint)*(byte *)(iVar3 + 0x83) << 0x13 |
       (uint)(*(char *)(iVar3 + 0x84) != '\0') << 0x1b | (*(byte *)(iVar3 + 0x85) & 3) << 0x1c;
  *(undefined4 *)(iVar3 + -4) = DAT_002c2c1c;
  *(undefined1 *)(iVar3 + 0x83) = 0xf1;
  *(undefined1 *)(iVar3 + 0x85) = 1;
  *(undefined1 *)(iVar3 + 0x84) = 0;
  *(uint *)(iVar3 + 0x78) = uVar9 | uVar8 & 0xc407ffff | 0x17880000;
  iVar17 = iVar3 + -0x37bfc;
  iStack_10a8 = DAT_002c2c20;
  local_10a0 = 0;
  local_109c = 0;
  local_1098 = 0x20;
  uStack_1094 = 0;
  local_1090 = 0;
  local_107c = DAT_002c2c20;
  local_108c = 0;
  local_1078 = s_World_002c2c28;
  local_1088 = 0;
  local_1074 = 7;
  local_10a4 = s_Shader_gr_default_shader_shbin_002c2c30;
  local_1071 = 0;
  local_1072 = 0xf;
  local_1084 = 0;
  local_1080 = 0;
  local_1070 = 0;
  local_1073 = 0;
  puVar4 = func_001E1EDC(*DAT_002c2c50,&iStack_10a8);
  puVar5 = (uint *)func_0010BA78(puVar4[6]);
  *(uint **)(iVar3 + -0x37bec) = puVar5;
  func_0010E3C4(puVar5,(uint *)puVar4[5],puVar4[6]);
  func_003CC530((int *)(iVar3 + -0x37be8),*(int *)(iVar3 + -0x37bec),0,-1);
  piVar6 = (int *)(iVar3 + -0x25300);
  func_003CC530(piVar6,*(int *)(iVar3 + -0x37bec),1,-1);
  func_003CC530((int *)(iVar3 + -0x12a18),*(int *)(iVar3 + -0x37bec),2,-1);
  func_00562DFC(piVar6,(char *)(iVar3 + -0x120),(uint *)&DAT_002c2c54);
  func_00562DFC(piVar6,(char *)(iVar3 + -0x118),(uint *)&DAT_002c2c5c);
  func_00562DFC(piVar6,(char *)(iVar3 + -0x110),(uint *)&DAT_002c2c64);
  iVar12 = DAT_002c2c6c;
  iVar10 = DAT_002c2c6c + 0x1c;
  *(undefined4 *)(DAT_002c2c6c + iVar17) = 0;
  *(undefined4 *)(iVar10 + iVar17) = 0;
  *(undefined4 *)(iVar12 + 0x38 + iVar17) = 0;
  *(undefined1 *)(iVar3 + 0x8c) = 0;
  *(undefined1 *)(iVar3 + 0x8d) = 0;
  *(undefined1 *)(iVar3 + 0x8e) = 0;
  *(undefined1 *)(iVar3 + 0x8f) = 0;
  *(undefined1 *)(iVar3 + 0x90) = 0;
  *(undefined1 *)(iVar3 + 0x91) = 0;
  *(undefined1 *)(iVar3 + 0x92) = 0;
  *(undefined1 *)(iVar3 + 0x93) = 0;
  *(undefined1 *)(iVar3 + 0x94) = 0;
  *(undefined1 *)(iVar3 + 0x95) = 0;
  *(undefined1 *)(iVar3 + 0x96) = 0;
  *(undefined1 *)(iVar3 + 0x97) = 0;
  *(undefined1 *)(iVar3 + 0x98) = 0;
  *(undefined1 *)(iVar3 + 0x99) = 0;
  *(undefined1 *)(iVar3 + 0x9a) = 0;
  *(undefined1 *)(iVar3 + 0x9b) = 0;
  *(undefined1 *)(iVar3 + 0x9c) = 0;
  puVar1 = DAT_002c2c0c;
  *(undefined1 *)(iVar3 + 0x9d) = 0;
  func_00100118((int)local_68,puVar1,8,3);
  piVar6 = func_003CBF44((int *)auStack_1068);
  puVar5 = func_00562B24((int *)(iVar3 + -0x37be8),piVar6);
  uVar8 = ((int)puVar5 - (int)auStack_1068 & 0xfffffffcU) + 8;
  if (((uVar8 & 0xf) != 0) && (uVar8 = 4 - (uVar8 * 0x10000000 >> 0x1e), 0 < (int)uVar8)) {
    puVar7 = puVar5 + -1;
    if ((uVar8 & 1) != 0) {
      *puVar5 = 0;
      puVar7 = puVar5;
    }
    for (iVar12 = (int)uVar8 >> 1; iVar12 != 0; iVar12 = iVar12 + -1) {
      puVar7[1] = 0;
      puVar7 = puVar7 + 2;
      *puVar7 = 0;
    }
    puVar5 = puVar5 + uVar8;
  }
  puVar5 = func_003CC030(puVar5,1);
  iVar12 = (int)puVar5 - (int)auStack_1068 >> 2;
  uVar8 = iVar12 << 2;
  iVar10 = 0;
  do {
    puVar7 = func_00562F64((int *)(iVar17 + iVar10 * DAT_002c2c70 * 8 + 0x14),puVar5,1);
    uVar9 = ((int)puVar7 - (int)puVar5 & 0xfffffffcU) + 8;
    if (((uVar9 & 0xf) != 0) && (uVar9 = 4 - (uVar9 * 0x10000000 >> 0x1e), 0 < (int)uVar9)) {
      puVar11 = puVar7 + -1;
      if ((uVar9 & 1) != 0) {
        *puVar7 = 0;
        puVar11 = puVar7;
      }
      for (iVar13 = (int)uVar9 >> 1; iVar13 != 0; iVar13 = iVar13 + -1) {
        puVar11[1] = 0;
        puVar11 = puVar11 + 2;
        *puVar11 = 0;
      }
      puVar7 = puVar7 + uVar9;
    }
    puVar7 = func_003CC030(puVar7,1);
    local_68[iVar10 * 2] = (int)puVar5;
    iVar13 = (int)puVar7 - (int)puVar5 >> 2;
    iVar16 = iVar10 + 1;
    uVar8 = uVar8 + iVar13 * 4;
    local_68[iVar10 * 2 + 1] = iVar13;
    iVar10 = iVar16;
    puVar5 = puVar7;
  } while (iVar16 < 3);
  uVar9 = func_001B79FC(*DAT_002c2c74,uVar8,0x10,2);
  if (iVar12 * 4 == 0) {
    uVar14 = 0;
    uVar15 = uVar9;
  }
  else {
    uVar14 = uVar9 + 0xf & 0xfffffff0;
    uVar15 = uVar14 + iVar12 * 4;
  }
  *(uint *)(iVar3 + -0xb4) = uVar14;
  *(int *)(iVar3 + -0xb0) = iVar12;
  iVar3 = 0;
  do {
    iVar10 = iVar3 * 2;
    iVar12 = local_68[iVar10 + 1] * 4;
    if (iVar12 == 0) {
      uVar14 = 0;
    }
    else {
      uVar14 = uVar15 + 0xf & 0xfffffff0;
      uVar15 = uVar14 + iVar12;
    }
    iVar12 = iVar17 + iVar3 * 8;
    iVar3 = iVar3 + 1;
    *(int *)(iVar12 + 0x37b54) = local_68[iVar10 + 1];
    *(uint *)(iVar12 + 0x37b50) = uVar14;
  } while (iVar3 < 3);
  func_00504ED0(auStack_1068,uVar9,uVar8);
  return iVar17;
}

