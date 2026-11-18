#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010BAB4(undefined4 param_1);
extern int func_00110490(undefined4 *param_1,uint param_2);
extern int func_00112D70(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4);
extern int func_00112EA0(undefined4 *param_1,int param_2,uint param_3,undefined4 *param_4);
extern int func_001139F8(int param_1);
extern int func_001151EC(undefined4 *param_1,undefined4 *param_2);
extern int func_00115224(undefined4 *param_1,undefined4 *param_2);
extern int func_0011E4B4(uint *param_1,undefined4 *param_2,int param_3,uint param_4);
extern int func_0011E55C(int param_1,byte *param_2);
extern int func_001E1EDC(int param_1,int *param_2);
extern int func_003CD2EC(undefined4 *param_1);
extern int func_003E35DC(undefined4 param_1,undefined4 param_2);
extern int func_0048C028(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4);
extern int func_00492888(undefined4 *param_1,float fparam_0,float fparam_1,float fparam_2,float fparam_3, float fparam_4,float fparam_5);
extern int func_00562DFC(int *param_1,char *param_2,uint *param_3);
extern int DAT_002c05bc;
extern undefined4 DAT_002c05c0;
extern int *DAT_002c05e0;
extern int DAT_002c05fc;
extern int DAT_002c0600;
extern int *DAT_002c0604;
extern int DAT_002c0628;
extern undefined4 DAT_002c062c;
extern undefined4 DAT_002c0630;
extern undefined4 DAT_002c0634;
extern undefined *DAT_002c0638;
extern undefined *DAT_002c063c;
extern undefined4 DAT_002c08fc;
extern int DAT_002c0900;
extern float DAT_002c0904;
extern float DAT_002c0908;
extern float DAT_002c090c;
extern undefined4 DAT_002c0910;
extern char s_Color_002c0614[];
extern char s_Layout_Field_ctpk_002c05cc[];
extern char s_Position_002c0608[];
extern char s_SlitL_tga_002c05f0[];
extern char s_SlitS_tga_002c05e4[];
extern char s_TexCoord0_002c061c[];
extern char s_World_002c05c4[];
extern char s_cf_002c05cc[];
extern char s_cf_002c05e4[];
extern char s_cf_002c05f0[];

// USA 002C02C4 <- EU 002C02A0 (Ghidra, non-matching)
// GLOBAL DAT_002c05bc int
// GLOBAL DAT_002c05c0 undefined4
// GLOBAL DAT_002c05e0 int *
// GLOBAL DAT_002c05fc int
// GLOBAL DAT_002c0600 int
// GLOBAL DAT_002c0604 int *
// GLOBAL DAT_002c0628 int
// GLOBAL DAT_002c062c undefined4
// GLOBAL DAT_002c0630 undefined4
// GLOBAL DAT_002c0634 undefined4
// GLOBAL DAT_002c0638 undefined *
// GLOBAL DAT_002c063c undefined *
// GLOBAL DAT_002c08fc undefined4
// GLOBAL DAT_002c0900 int
// GLOBAL DAT_002c0904 float
// GLOBAL DAT_002c0908 float
// GLOBAL DAT_002c090c float
// GLOBAL DAT_002c0910 undefined4
// GLOBAL s_Color_002c0614 string
// GLOBAL s_cf_002c05cc string
// GLOBAL s_Position_002c0608 string
// GLOBAL s_cf_002c05f0 string
// GLOBAL s_cf_002c05e4 string
// GLOBAL s_TexCoord0_002c061c string
// GLOBAL s_World_002c05c4 string

undefined4 * func_002C02C4(int param_1)

{
  float fparam_5;
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  float fparam_0;
  undefined8 uVar13;
  undefined4 uVar14;
  _Alignas(8) unsigned char albw_frame[0x1c0];
  #define local_1b8 ((char *)(albw_frame + 0x8))
  #define local_1a8 (*(undefined4 *)(albw_frame + 0x18))
  #define local_1a4 ((uint *)(albw_frame + 0x1c))
  #define local_194 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_190 (*(undefined4 *)(albw_frame + 0x30))
  #define local_18c (*(undefined4 *)(albw_frame + 0x34))
  #define local_188 (*(int *)(albw_frame + 0x38))
  #define local_184 (*(char * *)(albw_frame + 0x3c))
  #define local_180 (*(undefined4 *)(albw_frame + 0x40))
  #define local_17c (*(undefined4 *)(albw_frame + 0x44))
  #define local_178 (*(undefined4 *)(albw_frame + 0x48))
  #define uStack_174 (*(undefined4 *)(albw_frame + 0x4c))
  #define local_170 (*(undefined4 *)(albw_frame + 0x50))
  #define local_16c (*(undefined4 *)(albw_frame + 0x54))
  #define local_168 (*(undefined4 *)(albw_frame + 0x58))
  #define local_164 (*(undefined4 *)(albw_frame + 0x5c))
  #define local_160 (*(undefined4 *)(albw_frame + 0x60))
  #define local_15c (*(int *)(albw_frame + 0x64))
  #define local_158 (*(char * *)(albw_frame + 0x68))
  #define local_154 (*(undefined1 *)(albw_frame + 0x6c))
  #define local_153 (*(undefined1 *)(albw_frame + 0x6d))
  #define local_152 (*(undefined1 *)(albw_frame + 0x6e))
  #define local_151 (*(undefined1 *)(albw_frame + 0x6f))
  #define local_150 (*(undefined1 *)(albw_frame + 0x70))
  #define local_148 (*(int *)(albw_frame + 0x78))
  #define auStack_144 ((undefined4 *)(albw_frame + 0x7c))
  #define local_114 (*(undefined4 *)(albw_frame + 0xac))
  #define local_110 (*(undefined4 *)(albw_frame + 0xb0))
  #define local_10c (*(undefined4 *)(albw_frame + 0xb4))
  #define local_108 (*(undefined4 *)(albw_frame + 0xb8))
  #define local_104 (*(undefined4 *)(albw_frame + 0xbc))
  #define local_100 (*(undefined4 *)(albw_frame + 0xc0))
  #define local_fc (*(undefined4 *)(albw_frame + 0xc4))
  #define local_f8 (*(undefined4 *)(albw_frame + 0xc8))
  #define local_f4 (*(undefined4 *)(albw_frame + 0xcc))
  #define uStack_f0 (*(undefined4 *)(albw_frame + 0xd0))
  #define local_ec (*(undefined1 *)(albw_frame + 0xd4))
  #define local_eb (*(undefined1 *)(albw_frame + 0xd5))
  #define auStack_e8 ((undefined4 *)(albw_frame + 0xd8))
  #define auStack_a8 ((undefined4 *)(albw_frame + 0x118))
  #define local_68 (*(undefined1 *)(albw_frame + 0x158))
  #define local_64 (*(undefined4 *)(albw_frame + 0x15c))
  #define local_60 (*(undefined4 *)(albw_frame + 0x160))
  #define local_5c (*(undefined4 *)(albw_frame + 0x164))
  #define local_58 (*(undefined4 *)(albw_frame + 0x168))
  #define local_54 (*(undefined4 *)(albw_frame + 0x16c))
  #define local_50 (*(undefined4 *)(albw_frame + 0x170))
  #define local_4c (*(undefined4 *)(albw_frame + 0x174))
  #define local_48 (*(undefined4 *)(albw_frame + 0x178))
  #define local_44 (*(undefined4 *)(albw_frame + 0x17c))
  #define local_40 (*(undefined4 *)(albw_frame + 0x180))
  #define local_3c (*(undefined4 *)(albw_frame + 0x184))
  #define local_38 (*(undefined4 *)(albw_frame + 0x188))
  #define uStack_34 (*(undefined4 *)(albw_frame + 0x18c))
  #define local_30 (*(undefined4 *)(albw_frame + 0x190))
  local_188 = DAT_002c05bc;
  local_180 = 0;
  local_17c = 0;
  local_178 = 0x20;
  uStack_174 = 0;
  local_170 = 0;
  local_15c = DAT_002c05bc;
  local_16c = 0;
  local_158 = s_World_002c05c4;
  local_168 = 0;
  local_154 = 7;
  local_184 = s_Layout_Field_ctpk_002c05cc;
  local_153 = 4;
  local_164 = 0;
  local_152 = 0;
  local_160 = 0;
  local_151 = 0;
  local_150 = 0;
  puVar1 = func_001E1EDC(*DAT_002c05e0,&local_188);
  iVar9 = puVar1[5];
  local_1a8 = 0;
  local_1a4[0] = 0;
  uVar2 = func_0011E55C(iVar9,(byte *)s_SlitS_tga_002c05e4);
  uVar3 = func_0011E55C(iVar9,(byte *)s_SlitL_tga_002c05f0);
  iVar4 = func_0011E4B4(local_1a4,&local_1a8,iVar9,uVar2);
  *(undefined1 *)(param_1 + 0x27a8) = 0;
  iVar4 = func_001139F8(iVar4);
  *(int *)(DAT_002c05fc + param_1) = iVar4;
  *(undefined2 *)(param_1 + 0x2790) = 8;
  *(undefined2 *)(param_1 + 0x2792) = 8;
  *(undefined1 *)(param_1 + 0x2794) = 9;
  iVar4 = func_0011E4B4(local_1a4,&local_1a8,iVar9,uVar3);
  *(undefined1 *)(param_1 + 0x2850) = 0;
  iVar4 = func_001139F8(iVar4);
  *(int *)(DAT_002c0600 + param_1) = iVar4;
  *(undefined2 *)(param_1 + 0x2838) = 8;
  *(undefined2 *)(param_1 + 0x283a) = 0x10;
  *(undefined1 *)(param_1 + 0x283c) = 9;
  local_1b8[0] = '\0';
  local_1b8[8] = 0;
  local_1b8[1] = 1;
  local_1b8[9] = 1;
  local_1b8[2] = 0xff;
  local_1b8[10] = 0xff;
  local_1b8[3] = 0xff;
  local_1b8[0xb] = 0xff;
  local_1b8[4] = '\0';
  local_1b8[5] = '\0';
  local_1b8[6] = '\0';
  local_1b8[7] = '\0';
  local_1b8[0xc] = '\0';
  local_1b8[0xd] = '\0';
  local_1b8[0xe] = '\0';
  local_1b8[0xf] = '\0';
  piVar7 = (int *)(*DAT_002c0604 + 0x251e4);
  func_00562DFC(piVar7,local_1b8,(uint *)s_Position_002c0608);
  func_00562DFC(piVar7,(char *)(param_1 + 0x2784),(uint *)s_Color_002c0614);
  func_00562DFC(piVar7,local_1b8 + 8,(uint *)s_TexCoord0_002c061c);
  iVar4 = DAT_002c0628;
  uVar13 = CONCAT44(DAT_002c0630,DAT_002c062c);
  iVar9 = 0;
  do {
    iVar10 = 0;
    iVar11 = param_1 + iVar9 * 0x14;
    do {
      iVar5 = func_0010BAB4(DAT_002c0634);
      if (iVar5 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = func_00100118(iVar5 + 0xfa8,DAT_002c0638,0x70,0xc);
        iVar5 = func_00100118(iVar5 + 0x540,DAT_002c063c,0x14,0xc);
        iVar8 = iVar5 + -0x6a0;
        *(undefined4 *)(iVar5 + -0x6a0) = 0;
        func_00110490((undefined4 *)(iVar5 + -0x69c),0x150);
        uVar2 = 0;
        do {
          *(undefined1 *)(iVar8 + uVar2 + 0x154) = 0;
          func_003CD2EC((undefined4 *)(iVar8 + uVar2 * 0x70 + 0x160));
          uVar3 = uVar2 + 1;
          iVar6 = iVar8 + uVar2 * 0x14;
          *(undefined1 *)(iVar6 + 0x6a0) = 0;
          uVar12 = (undefined4)uVar13;
          *(undefined4 *)(iVar6 + 0x6a4) = uVar12;
          *(undefined4 *)(iVar6 + 0x6a8) = uVar12;
          *(undefined4 *)(iVar6 + 0x6ac) = uVar12;
          *(undefined4 *)(iVar6 + 0x6b0) = uVar12;
          uVar2 = uVar3;
        } while (uVar3 < 0xc);
        *(undefined4 *)(iVar5 + 0xf0) = 0;
        *(undefined4 *)(iVar5 + 0xf4) = 0;
        *(undefined1 *)(iVar5 + 0xf8) = 0;
        iVar8 = 0;
        *(undefined4 *)(iVar5 + 0xfc) = 0;
        iVar5 = iVar5 + -0x14e8;
        iVar6 = 0;
        do {
          *(char *)(iVar5 + iVar8 + 0xd98) = (char)iVar8;
          iVar6 = iVar6 + 2;
          *(char *)(iVar5 + iVar8 + 1 + 0xd98) = (char)(iVar8 + 1);
          iVar8 = iVar8 + 2;
        } while (iVar6 < 0xae);
        uVar2 = 0;
        do {
          iVar8 = (int)((ulonglong)((longlong)iVar4 * (longlong)(int)uVar2) >> 0x20);
          uVar14 = (undefined4)((ulonglong)uVar13 >> 0x20);
          switch(uVar2 + (iVar8 - (iVar8 >> 0x1f)) * -6) {
          case 0:
          case 3:
            iVar8 = iVar5 + uVar2 * 8;
            *(undefined4 *)(iVar8 + 0x828) = uVar14;
            *(undefined4 *)(iVar8 + 0x82c) = uVar14;
            break;
          case 1:
            iVar8 = iVar5 + uVar2 * 8;
            *(undefined4 *)(iVar8 + 0x828) = uVar14;
            goto LAB_002c05b4;
          case 2:
          case 4:
            iVar8 = iVar5 + uVar2 * 8;
            *(undefined4 *)(iVar8 + 0x828) = uVar12;
LAB_002c05b4:
            *(undefined4 *)(iVar8 + 0x82c) = uVar12;
            break;
          case 5:
            iVar8 = iVar5 + uVar2 * 8;
            *(undefined4 *)(iVar8 + 0x828) = uVar12;
            *(undefined4 *)(iVar8 + 0x82c) = uVar14;
          }
          uVar2 = uVar2 + 1;
        } while (uVar2 < 0xae);
      }
      piVar7 = (int *)(iVar11 + 0x1c);
      if (*piVar7 < *(int *)(iVar11 + 0x20)) {
        *(int *)(*(int *)(iVar11 + 0x24) + *piVar7 * 4) = iVar5;
        *piVar7 = *piVar7 + 1;
      }
      func_003E35DC(iVar5,DAT_002c08fc);
      func_003E35DC(iVar5 + 0x828,0x570);
      func_003E35DC(iVar5 + 0xd98,0xae);
      iVar8 = func_001139F8(iVar5);
      puVar1 = (undefined4 *)(iVar5 + 0xe48);
      func_00112D70(puVar1,(int)local_1b8,iVar8,0xb);
      iVar8 = func_001139F8(iVar5 + 0x828);
      func_00112D70(puVar1,(int)(local_1b8 + 8),iVar8,7);
      func_00112EA0(puVar1,param_1 + 0x2784,4,(undefined4 *)(param_1 + iVar10 * 0x10 + 0x28dc));
      iVar8 = func_001139F8(iVar5 + 0xd98);
      *(int *)(iVar5 + 0x15d8) = iVar8;
      iVar10 = iVar10 + 1;
      *(undefined4 *)(iVar5 + 0x15dc) = 0;
      *(undefined1 *)(iVar5 + 0x15e0) = 1;
      fparam_5 = DAT_002c0904;
    } while (iVar10 < 2);
    iVar9 = iVar9 + 1;
    if (1 < iVar9) {
      fparam_0 = ALBW_AS_F32(uVar13);
      *(int *)(DAT_002c0900 + param_1) = *DAT_002c0604 + 0x37adc;
      func_00492888(&uStack_f0,fparam_0,DAT_002c090c,fparam_0,DAT_002c0908,fparam_0,fparam_5);
      *(undefined1 *)(param_1 + 0x2958) = local_ec;
      *(undefined1 *)(param_1 + 0x2959) = local_eb;
      func_00115224((undefined4 *)(param_1 + 0x295c),auStack_e8);
      func_00115224((undefined4 *)(param_1 + 0x299c),auStack_a8);
      local_18c = DAT_002c0910;
      *(undefined1 *)(param_1 + 0x29dc) = local_68;
      *(undefined4 *)(param_1 + 0x29e0) = local_64;
      *(undefined4 *)(param_1 + 0x29e4) = local_60;
      *(undefined4 *)(param_1 + 0x29e8) = local_5c;
      *(undefined4 *)(param_1 + 0x29ec) = local_58;
      *(undefined4 *)(param_1 + 0x29f0) = local_54;
      *(undefined4 *)(param_1 + 0x29f4) = local_50;
      *(undefined4 *)(param_1 + 0x29f8) = local_4c;
      *(undefined4 *)(param_1 + 0x29fc) = local_48;
      local_194 = (undefined4)uVar13;
      uStack_34 = (undefined4)((ulonglong)uVar13 >> 0x20);
      local_190 = local_194;
      local_44 = local_194;
      local_40 = local_194;
      local_3c = local_194;
      local_38 = local_194;
      local_30 = local_194;
      func_0048C028(&local_148,&local_194,&local_44,&local_38);
      (**(code **)(local_148 + 0x10))(&local_148,auStack_144);
      func_001151EC((undefined4 *)(param_1 + 0x2900),auStack_144);
      *(undefined4 *)(param_1 + 0x2930) = local_114;
      *(undefined4 *)(param_1 + 0x2934) = local_110;
      *(undefined4 *)(param_1 + 0x2938) = local_10c;
      *(undefined4 *)(param_1 + 0x293c) = local_108;
      *(undefined4 *)(param_1 + 0x2940) = local_104;
      *(undefined4 *)(param_1 + 0x2944) = local_100;
      *(undefined4 *)(param_1 + 0x2948) = local_fc;
      *(undefined4 *)(param_1 + 0x294c) = local_f8;
      *(undefined4 *)(param_1 + 0x2950) = local_f4;
      return &uStack_f0;
    }
  } while( true );
}

