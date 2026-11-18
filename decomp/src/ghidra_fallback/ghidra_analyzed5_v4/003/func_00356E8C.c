#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010B3EC(undefined4 *param_1,int param_2,int param_3);
extern int func_0010BA78(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_001512E8(int *param_1);
extern int func_001B9374(int param_1,uint param_2,int param_3);
extern int func_002AFEC4(int param_1,int param_2,int param_3);
extern int func_002C2D00(int *param_1);
extern int func_0036C884(undefined4 *param_1,undefined4 *param_2,undefined1 param_3);
extern int func_0036D0C8(int *param_1,int param_2);
extern int func_00387FEC(int param_1,int param_2);
extern int func_004EB4C8(int param_1,int param_2);
extern int func_004F87F8(int param_1,int param_2);
extern int func_004F9554(int param_1,ushort param_2,ushort param_3,int param_4);
extern int func_004FAC70(int param_1,uint param_2,int *param_3);
extern int func_004FACA4(int param_1,uint param_2,int *param_3);
extern int func_004FB024(int param_1);
extern int func_004FB30C(int param_1,int param_2);
extern int func_004FB344(int param_1,int param_2);
extern void func_004FB408(int param_1);
extern int func_004FB468(int param_1);
extern int func_004FD464(undefined4 *param_1,uint *param_2,uint *param_3);
extern int func_0054D89C(int param_1,uint param_2);
extern int func_0054DDF4(int param_1,uint param_2);
extern int func_00564A78(int param_1,int *param_2);
extern int func_00666318(undefined4 *param_1,undefined1 param_2);
extern uint *DAT_00357254;
extern int DAT_00357258;
extern undefined4 *DAT_0035725c;
extern undefined4 DAT_00357260;
extern undefined4 DAT_00357264;
extern undefined4 DAT_00357268;
extern undefined4 DAT_0035726c;
extern undefined4 DAT_00357270;
extern undefined4 *DAT_00357274;
extern undefined4 *DAT_00357278;
extern undefined4 DAT_0035727c;
extern int *DAT_00357280;
extern undefined4 DAT_00357284;
extern int DAT_00357288;
extern undefined4 *DAT_00357744;
extern undefined DAT_00357750;
extern undefined4 *DAT_003577dc;
extern int DAT_003577e0;
extern undefined *DAT_003577e4;
extern int DAT_003577e8;
extern int *DAT_00357c50;
extern char s_cState_Appear_00357bbc[];
extern char s_cState_Die_00357c34[];
extern char s_cState_Disappear_00357be8[];
extern char s_cState_Down_00357c28[];
extern char s_cState_FAppear_00357bac[];
extern char s_cState_Hide_003577ec[];
extern char s_cState_KnuckleAttack_00357c10[];
extern char s_cState_LevelUp_00357c40[];
extern char s_cState_Reaction_00357bd8[];
extern char s_cState_SlapAttack_00357bfc[];
extern char s_cState_Wait_00357bcc[];
extern char s_center_003577d4[];
extern char s_change00_003577c8[];
extern char s_charge_ed_00357788[];
extern char s_charge_md_0035777c[];
extern char s_charge_st_00357760[];
extern char s_charge_st_loop_0035776c[];
extern char s_down_damage_003577ac[];
extern char s_down_ed_003577a4[];
extern char s_down_md_0035779c[];
extern char s_down_st_00357794[];
extern char s_end_ed_003577c0[];
extern char s_end_st_003577b8[];
extern char s_slap00_00357758[];
extern char s_wait00_00357748[];

// USA 00356E8C <- EU 00356E68 (Ghidra, non-matching)
// GLOBAL DAT_00357254 uint *
// GLOBAL DAT_00357258 int
// GLOBAL DAT_0035725c undefined4 *
// GLOBAL DAT_00357260 undefined4
// GLOBAL DAT_00357264 undefined4
// GLOBAL DAT_00357268 undefined4
// GLOBAL DAT_0035726c undefined4
// GLOBAL DAT_00357270 undefined4
// GLOBAL DAT_00357274 undefined4 *
// GLOBAL DAT_00357278 undefined4 *
// GLOBAL DAT_0035727c undefined4
// GLOBAL DAT_00357280 int *
// GLOBAL DAT_00357284 undefined4
// GLOBAL DAT_00357288 int
// GLOBAL DAT_00357744 undefined4 *
// GLOBAL DAT_00357750 undefined
// GLOBAL DAT_003577dc undefined4 *
// GLOBAL DAT_003577e0 int
// GLOBAL DAT_003577e4 undefined *
// GLOBAL DAT_003577e8 int
// GLOBAL DAT_00357c50 int *
// GLOBAL s_cState_Appear_00357bbc string
// GLOBAL s_cState_Die_00357c34 string
// GLOBAL s_cState_Disappear_00357be8 string
// GLOBAL s_cState_Down_00357c28 string
// GLOBAL s_cState_FAppear_00357bac string
// GLOBAL s_cState_Hide_003577ec string
// GLOBAL s_cState_KnuckleAttack_00357c10 string
// GLOBAL s_cState_LevelUp_00357c40 string
// GLOBAL s_cState_Reaction_00357bd8 string
// GLOBAL s_cState_SlapAttack_00357bfc string
// GLOBAL s_cState_Wait_00357bcc string
// GLOBAL s_center_003577d4 string
// GLOBAL s_change00_003577c8 string
// GLOBAL s_charge_ed_00357788 string
// GLOBAL s_charge_md_0035777c string
// GLOBAL s_charge_st_00357760 string
// GLOBAL s_charge_st_loop_0035776c string
// GLOBAL s_down_damage_003577ac string
// GLOBAL s_down_ed_003577a4 string
// GLOBAL s_down_md_0035779c string
// GLOBAL s_down_st_00357794 string
// GLOBAL s_end_ed_003577c0 string
// GLOBAL s_end_st_003577b8 string
// GLOBAL s_slap00_00357758 string
// GLOBAL s_wait00_00357748 string

undefined4 * func_00356E8C(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  bool bVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined2 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  int iVar13;
  undefined4 uVar14;
  uint uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  uint uVar19;
  undefined8 uVar20;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define local_90 (*(int *)(albw_frame + 0x0))
  #define local_8c (*(char * *)(albw_frame + 0x4))
  #define local_88 (*(int *)(albw_frame + 0x8))
  #define local_84 (*(char * *)(albw_frame + 0xc))
  #define iStack_80 (*(int *)(albw_frame + 0x10))
  #define local_7c (*(undefined4 *)(albw_frame + 0x14))
  #define local_78 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_74 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_70 (*(undefined4 *)(albw_frame + 0x20))
  #define local_6c (*(undefined1 *)(albw_frame + 0x24))
  #define local_6b (*(undefined1 *)(albw_frame + 0x25))
  #define local_68 (*(undefined4 *)(albw_frame + 0x28))
  #define local_64 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_60 (*(undefined4 *)(albw_frame + 0x30))
  #define local_5c (*(undefined4 *)(albw_frame + 0x34))
  #define local_58 (*(undefined4 *)(albw_frame + 0x38))
  #define local_54 (*(undefined4 *)(albw_frame + 0x3c))
  #define local_50 (*(undefined1 *)(albw_frame + 0x40))
  #define local_4f (*(undefined1 *)(albw_frame + 0x41))
  #define local_4c (*(uint * *)(albw_frame + 0x44))
  #define local_48 (*(int *)(albw_frame + 0x48))
  #define local_44 (*(int *)(albw_frame + 0x4c))
  #define local_40 (*(int *)(albw_frame + 0x50))
  #define local_3c (*(int *)(albw_frame + 0x54))
  #define local_38 (*(uint *)(albw_frame + 0x58))
  #define local_34 (*(int *)(albw_frame + 0x5c))
  piVar3 = func_004FD464(param_1,param_2,DAT_00357254);
  puVar4 = DAT_0035725c;
  iVar6 = DAT_00357258;
  piVar3[200] = DAT_00357258 + 0x84;
  *piVar3 = iVar6;
  piVar3[0x22f] = 0;
  piVar3[0x230] = 0;
  piVar3[0x231] = 0;
  uVar14 = *puVar4;
  uVar16 = puVar4[1];
  puVar4 = func_0036C884(piVar3 + 0x232,piVar3,1);
  uVar12 = DAT_00357264;
  *puVar4 = DAT_00357260;
  puVar4[0x40] = uVar14;
  puVar4[0x41] = uVar16;
  puVar4[0x42] = uVar12;
  puVar4[0x43] = uVar12;
  puVar4[0x45] = uVar12;
  puVar4[0x46] = uVar12;
  uVar14 = DAT_00357268;
  puVar4[0x47] = (int)*(short *)(puVar4 + -0xf0);
  *(undefined2 *)(puVar4 + 0x48) = 0;
  *(undefined1 *)((int)puVar4 + 0x122) = 0;
  *(undefined1 *)((int)puVar4 + 0x123) = 0;
  *(undefined1 *)(puVar4 + 0x49) = 0;
  *(undefined1 *)((int)puVar4 + 0x125) = 0;
  *(undefined1 *)((int)puVar4 + 0x126) = 0;
  *(undefined1 *)((int)puVar4 + 0x127) = 0;
  *(undefined1 *)(puVar4 + 0x4a) = 0;
  puVar4[0x4b] = uVar14;
  uVar16 = DAT_0035726c;
  puVar4[0x4c] = 0;
  puVar4[0x4d] = 0;
  puVar4[0x4e] = uVar16;
  puVar4[0x4f] = 0;
  puVar4[0x50] = 0;
  puVar4[0x51] = uVar16;
  puVar4[0x52] = 0;
  puVar4[0x53] = 0;
  puVar4[0x54] = uVar16;
  puVar4[0x55] = 0;
  puVar4[0x56] = 0;
  puVar4[0x57] = uVar16;
  puVar4[0x58] = 0;
  puVar4[0x59] = 0;
  puVar4[0x5a] = uVar16;
  puVar4[0x5b] = 0;
  puVar4[0x5c] = 0;
  puVar4[0x5d] = uVar16;
  uVar16 = DAT_00357270;
  puVar4[0x5f] = uVar14;
  puVar4[0x60] = uVar16;
  puVar4[0x5e] = 0;
  puVar4[0x62] = uVar14;
  puVar4[99] = uVar16;
  puVar4[0x61] = 0;
  puVar4[100] = 0;
  puVar5 = func_0010A794(puVar4 + 0x65);
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar4 = DAT_00357274;
  puVar5[7] = 0;
  puVar5[8] = 0;
  puVar5[9] = 0;
  puVar5[0xb] = 0;
  uVar14 = puVar4[1];
  uVar16 = puVar4[2];
  puVar5[0xc] = *puVar4;
  puVar5[0xd] = uVar14;
  puVar5[0xe] = uVar16;
  uVar14 = puVar4[1];
  uVar16 = puVar4[2];
  puVar5[0xf] = *puVar4;
  puVar5[0x10] = uVar14;
  puVar5[0x11] = uVar16;
  puVar5[0x21] = 0;
  puVar11 = puVar5 + 0x26;
  puVar5[0x22] = 0;
  puVar5[0x23] = 0;
  puVar5[0x24] = 0;
  puVar5[0x25] = 0;
  if (puVar11 != (undefined4 *)0x0) {
    iVar6 = 0;
    iVar13 = 7;
    puVar5[0x24] = puVar11;
    do {
      iVar13 = iVar13 + -1;
      puVar11[iVar6] = puVar11 + iVar6 + 3;
      iVar6 = iVar6 + 3;
    } while (iVar13 != 0);
    puVar5[0x3b] = 0;
    puVar5[0x25] = puVar11;
    func_0010B3EC(puVar5 + 0x21,8,(int)(puVar5 + 0x3e));
  }
  uVar14 = puVar4[1];
  uVar16 = puVar4[2];
  puVar11 = puVar5 + -0x297;
  puVar5[0x46] = *puVar4;
  puVar5[0x47] = uVar14;
  puVar5[0x48] = uVar16;
  puVar5[0x49] = puVar5[-0x295];
  puVar5[0x4a] = puVar5[-0x294];
  puVar5[0x4b] = puVar5[-0x293];
  puVar4 = DAT_00357278;
  puVar5[0x4c] = uVar12;
  uVar12 = *puVar4;
  uVar14 = puVar4[1];
  puVar5[0x4e] = puVar5 + -0x297;
  puVar5[0x4f] = uVar12;
  puVar5[0x50] = uVar14;
  puVar5[0x4d] = DAT_0035727c;
  local_4c = puVar5 + 0x52;
  puVar5[0x51] = 0;
  puVar5[0x52] = 0;
  puVar5[0x53] = 0;
  puVar5[-0x19c] = puVar5 + 0x4d;
  piVar3 = (int *)func_0054D89C((int)puVar11,0);
  puVar5[0xb] = piVar3;
  if (piVar3 != (int *)0x0) {
    func_001512E8(piVar3);
  }
  iVar6 = func_0054DDF4((int)puVar11,1);
  puVar5[-0x67] = iVar6;
  iVar6 = func_0054DDF4((int)puVar11,2);
  puVar5[-0x66] = iVar6;
  local_78 = func_001B9374(*DAT_00357280,5,*(int *)(puVar5[-0x1e3] + 0x1cc));
  iVar6 = DAT_00357288;
  local_88 = DAT_00357288;
  local_84 = (char *)DAT_00357284;
  iStack_80 = DAT_00357288;
  local_7c = DAT_00357284;
  uStack_74 = 0;
  local_50 = 1;
  local_58 = 0;
  local_6b = 1;
  local_70 = 0;
  local_54 = 0;
  local_64 = 0;
  local_6c = 1;
  local_68 = 0;
  local_5c = 0;
  local_60 = 0;
  local_4f = 0xc4;
  piVar3 = func_002C2D00(&local_88);
  puVar5[0x51] = piVar3;
  func_00387FEC(*(int *)(puVar5[0xb] + 0x1c),(int)piVar3);
  local_34 = *(int *)(*(int *)(puVar5[0x51] + 0x50) + 8);
  iVar13 = *(int *)(*(int *)(puVar5[-0x194] + 0x50) + 8);
  uVar15 = (uint)*(ushort *)(local_34 + 0x74);
  uVar19 = (uint)*(ushort *)(iVar13 + 0x74);
  local_38 = uVar15;
  if ((uVar15 != 0) && (iVar7 = func_0010CEE0(uVar15 << 1,(int *)0x0,4), iVar7 != 0)) {
    puVar5[0x53] = iVar7;
    puVar5[0x52] = uVar15;
  }
  uVar15 = 0;
  if (0 < (int)local_38) {
    do {
      iVar7 = 0;
      local_3c = *(int *)(*(int *)(local_34 + 0x70) + uVar15 * 100 + 0x5c);
      local_40 = iVar6;
      if (uVar15 < *local_4c) {
        puVar8 = (undefined2 *)(local_4c[1] + uVar15 * 2);
      }
      else {
        puVar8 = (undefined2 *)local_4c[1];
      }
      *puVar8 = 0xffff;
      if (uVar19 != 0) {
        do {
          local_44 = *(int *)(*(int *)(iVar13 + 0x70) + iVar7 * 100 + 0x5c);
          local_48 = iVar6;
          (**(code **)(local_40 + 8))(&local_40);
          (**(code **)(local_40 + 8))(&local_40);
          iVar9 = local_3c;
          (**(code **)(local_48 + 8))(&local_48);
          if (iVar9 == local_44) {
LAB_0035733c:
            bVar2 = true;
          }
          else {
            iVar9 = 0;
            do {
              if (*(char *)(local_3c + iVar9) != *(char *)(local_44 + iVar9)) break;
              if (*(char *)(local_3c + iVar9) == '\0') goto LAB_0035733c;
              iVar9 = iVar9 + 1;
            } while (iVar9 < 0x40001);
            bVar2 = false;
          }
          if (bVar2) {
            if (uVar15 < *local_4c) {
              puVar8 = (undefined2 *)(local_4c[1] + uVar15 * 2);
            }
            else {
              puVar8 = (undefined2 *)local_4c[1];
            }
            *puVar8 = (short)iVar7;
            break;
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < (int)uVar19);
      }
      uVar15 = uVar15 + 1;
    } while ((int)uVar15 < (int)local_38);
  }
  func_004FB024((int)puVar11);
  func_0036D0C8(puVar5 + -0x68,0);
  puVar4 = DAT_00357744;
  iVar13 = puVar5[-0x68];
  if (iVar13 == 0) {
    iVar13 = 1;
  }
  else {
    iVar13 = func_0010983C(*DAT_00357744,iVar13);
  }
  func_004FB344((int)puVar11,0xe);
  local_84 = s_wait00_00357748;
  local_88 = iVar6;
  func_004FACA4((int)puVar11,0,&local_88);
  local_84 = &DAT_00357750;
  local_88 = iVar6;
  func_004FACA4((int)puVar11,1,&local_88);
  local_84 = s_slap00_00357758;
  local_88 = iVar6;
  func_004FACA4((int)puVar11,2,&local_88);
  local_84 = s_charge_st_00357760;
  local_88 = iVar6;
  func_004FACA4((int)puVar11,3,&local_88);
  local_84 = s_charge_st_loop_0035776c;
  local_88 = iVar6;
  func_004FACA4((int)puVar11,4,&local_88);
  local_84 = s_charge_md_0035777c;
  local_88 = iVar6;
  func_004FACA4((int)puVar11,5,&local_88);
  local_84 = s_charge_ed_00357788;
  local_88 = iVar6;
  func_004FACA4((int)puVar11,6,&local_88);
  local_84 = s_down_st_00357794;
  local_88 = iVar6;
  func_004FACA4((int)puVar11,7,&local_88);
  local_84 = s_down_md_0035779c;
  local_88 = iVar6;
  func_004FACA4((int)puVar11,8,&local_88);
  local_84 = s_down_ed_003577a4;
  local_88 = iVar6;
  func_004FACA4((int)puVar11,9,&local_88);
  local_84 = s_down_damage_003577ac;
  local_88 = iVar6;
  func_004FACA4((int)puVar11,10,&local_88);
  local_84 = s_end_st_003577b8;
  local_88 = iVar6;
  func_004FACA4((int)puVar11,0xb,&local_88);
  local_84 = s_end_ed_003577c0;
  local_88 = iVar6;
  func_004FACA4((int)puVar11,0xc,&local_88);
  local_84 = s_change00_003577c8;
  local_88 = iVar6;
  func_004FACA4((int)puVar11,0xd,&local_88);
  func_004FB468((int)puVar11);
  func_004FB30C((int)puVar11,2);
  local_84 = s_change00_003577c8;
  local_88 = iVar6;
  func_004FAC70((int)puVar11,0,&local_88);
  local_84 = s_end_st_003577b8;
  local_88 = iVar6;
  func_004FAC70((int)puVar11,1,&local_88);
  func_004FB408((int)puVar11);
  if (iVar13 != 1) {
    func_0010983C(*puVar4,iVar13);
  }
  puVar5[-0x130] = puVar5[-0x130] & 0xfffffdff;
  local_8c = s_center_003577d4;
  local_90 = iVar6;
  uVar15 = func_00564A78(puVar5[-0x194],&local_90);
  puVar5[-0x1a] = uVar15;
  *(undefined1 *)((int)puVar5 + 6) = 0xb;
  puVar5[5] = puVar11;
  iVar13 = func_0010BA78(0xb0);
  puVar5[6] = iVar13;
  puVar5[7] = iVar13 + (uint)*(byte *)((int)puVar5 + 6) * 8;
  puVar4 = DAT_003577dc;
  iVar7 = 0xb;
  puVar10 = (undefined4 *)(iVar13 + -8);
  do {
    uVar12 = *(undefined4 *)(DAT_003577e0 + 0x100);
    iVar7 = iVar7 + -1;
    puVar10[2] = *(undefined4 *)(DAT_003577e0 + 0xfc);
    puVar10[3] = uVar12;
    uVar12 = puVar4[1];
    puVar10[4] = *puVar4;
    puVar10[5] = uVar12;
    puVar10 = puVar10 + 4;
  } while (iVar7 != 0);
  bVar1 = *(byte *)((int)puVar5 + 6);
  uVar15 = (uint)bVar1;
  puVar4 = (undefined4 *)func_0010BA78(uVar15 << 3);
  puVar5[8] = puVar4;
  if (uVar15 != 0) {
    puVar10 = puVar4 + -2;
    if ((bVar1 & 1) != 0) {
      uVar12 = *(undefined4 *)(DAT_003577e0 + 0x28);
      *puVar4 = *(undefined4 *)(DAT_003577e0 + 0x24);
      puVar4[1] = uVar12;
      puVar10 = puVar4;
    }
    iVar7 = DAT_003577e0;
    for (iVar13 = (int)uVar15 >> 1; iVar13 != 0; iVar13 = iVar13 + -1) {
      uVar12 = *(undefined4 *)(iVar7 + 0x28);
      puVar10[2] = *(undefined4 *)(iVar7 + 0x24);
      puVar10[3] = uVar12;
      uVar12 = *(undefined4 *)(iVar7 + 0x28);
      puVar10[4] = *(undefined4 *)(iVar7 + 0x24);
      puVar10[5] = uVar12;
      puVar10 = puVar10 + 4;
    }
  }
  puVar4 = (undefined4 *)func_0010CEE0(0x194,(int *)0x0,4);
  iVar13 = 0;
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = 0x24;
    puVar4[1] = 0xb;
    iVar13 = func_00100118((int)(puVar4 + 2),DAT_003577e4,0x24,0xb);
  }
  if (iVar13 != 0) {
    puVar5[3] = iVar13;
    puVar5[2] = 0xb;
  }
  iVar13 = DAT_003577e8;
  puVar5[-0x1c2] = puVar5;
  *(undefined2 *)(iVar13 + (int)puVar11) = 0xb;
  local_8c = s_cState_Hide_003577ec;
  local_90 = iVar6;
  func_0010BEC4((int)puVar5,0,&local_90);
  iVar13 = DAT_003577e0;
  puVar4 = (undefined4 *)puVar5[6];
  uVar14 = *(undefined4 *)(DAT_003577e0 + 0x1c);
  uVar17 = *(undefined4 *)(DAT_003577e0 + 0x20);
  uVar16 = *(undefined4 *)(DAT_003577e0 + 0x14);
  uVar12 = *(undefined4 *)(DAT_003577e0 + 0x24);
  uVar18 = *(undefined4 *)(DAT_003577e0 + 0x28);
  puVar4[1] = *(undefined4 *)(DAT_003577e0 + 0x18);
  *puVar4 = uVar16;
  puVar4 = (undefined4 *)puVar5[7];
  *puVar4 = uVar14;
  puVar4[1] = uVar17;
  puVar4 = (undefined4 *)puVar5[8];
  *puVar4 = uVar12;
  puVar4[1] = uVar18;
  local_8c = s_cState_FAppear_00357bac;
  local_90 = iVar6;
  func_0010BEC4((int)puVar5,1,&local_90);
  iVar7 = puVar5[6];
  uVar18 = *(undefined4 *)(iVar13 + 0x40);
  uVar14 = *(undefined4 *)(iVar13 + 0x30);
  uVar16 = *(undefined4 *)(iVar13 + 0x34);
  uVar17 = *(undefined4 *)(iVar13 + 0x38);
  uVar12 = *(undefined4 *)(iVar13 + 0x3c);
  *(undefined4 *)(iVar7 + 8) = *(undefined4 *)(iVar13 + 0x2c);
  *(undefined4 *)(iVar7 + 0xc) = uVar14;
  iVar7 = puVar5[7];
  *(undefined4 *)(iVar7 + 8) = uVar16;
  *(undefined4 *)(iVar7 + 0xc) = uVar17;
  iVar7 = puVar5[8];
  *(undefined4 *)(iVar7 + 8) = uVar12;
  *(undefined4 *)(iVar7 + 0xc) = uVar18;
  local_8c = s_cState_Appear_00357bbc;
  local_90 = iVar6;
  func_0010BEC4((int)puVar5,2,&local_90);
  iVar7 = puVar5[6];
  uVar12 = *(undefined4 *)(iVar13 + 0x4c);
  uVar14 = *(undefined4 *)(iVar13 + 0x48);
  uVar16 = *(undefined4 *)(iVar13 + 0x50);
  uVar17 = *(undefined4 *)(iVar13 + 0x54);
  uVar18 = *(undefined4 *)(iVar13 + 0x58);
  *(undefined4 *)(iVar7 + 0x10) = *(undefined4 *)(iVar13 + 0x44);
  *(undefined4 *)(iVar7 + 0x14) = uVar14;
  iVar7 = puVar5[7];
  *(undefined4 *)(iVar7 + 0x10) = uVar12;
  *(undefined4 *)(iVar7 + 0x14) = uVar16;
  iVar7 = puVar5[8];
  *(undefined4 *)(iVar7 + 0x10) = uVar17;
  *(undefined4 *)(iVar7 + 0x14) = uVar18;
  local_8c = s_cState_Wait_00357bcc;
  local_90 = iVar6;
  func_0010BEC4((int)puVar5,3,&local_90);
  iVar7 = puVar5[6];
  uVar16 = *(undefined4 *)(iVar13 + 0x60);
  uVar12 = *(undefined4 *)(iVar13 + 100);
  uVar14 = *(undefined4 *)(iVar13 + 0x68);
  uVar20 = *(undefined8 *)(iVar13 + 0x24);
  *(undefined4 *)(iVar7 + 0x18) = *(undefined4 *)(iVar13 + 0x5c);
  *(undefined4 *)(iVar7 + 0x1c) = uVar16;
  iVar7 = puVar5[7];
  *(undefined4 *)(iVar7 + 0x18) = uVar12;
  *(undefined4 *)(iVar7 + 0x1c) = uVar14;
  iVar7 = puVar5[8];
  *(int *)(iVar7 + 0x18) = (int)uVar20;
  *(int *)(iVar7 + 0x1c) = (int)((ulonglong)uVar20 >> 0x20);
  local_8c = s_cState_Reaction_00357bd8;
  local_90 = iVar6;
  func_0010BEC4((int)puVar5,4,&local_90);
  iVar7 = puVar5[6];
  uVar12 = *(undefined4 *)(iVar13 + 0x70);
  uVar14 = *(undefined4 *)(iVar13 + 0x74);
  uVar16 = *(undefined4 *)(iVar13 + 0x78);
  *(undefined4 *)(iVar7 + 0x20) = *(undefined4 *)(iVar13 + 0x6c);
  *(undefined4 *)(iVar7 + 0x24) = uVar12;
  iVar7 = puVar5[7];
  *(undefined4 *)(iVar7 + 0x20) = uVar14;
  *(undefined4 *)(iVar7 + 0x24) = uVar16;
  iVar7 = puVar5[8];
  *(int *)(iVar7 + 0x20) = (int)uVar20;
  *(int *)(iVar7 + 0x24) = (int)((ulonglong)uVar20 >> 0x20);
  local_8c = s_cState_Disappear_00357be8;
  local_90 = iVar6;
  func_0010BEC4((int)puVar5,5,&local_90);
  iVar7 = puVar5[6];
  uVar12 = *(undefined4 *)(iVar13 + 0x84);
  uVar14 = *(undefined4 *)(iVar13 + 0x88);
  uVar16 = *(undefined4 *)(iVar13 + 0x80);
  *(undefined4 *)(iVar7 + 0x28) = *(undefined4 *)(iVar13 + 0x7c);
  *(undefined4 *)(iVar7 + 0x2c) = uVar16;
  iVar7 = puVar5[7];
  *(undefined4 *)(iVar7 + 0x28) = uVar12;
  *(undefined4 *)(iVar7 + 0x2c) = uVar14;
  iVar7 = puVar5[8];
  *(int *)(iVar7 + 0x28) = (int)uVar20;
  *(int *)(iVar7 + 0x2c) = (int)((ulonglong)uVar20 >> 0x20);
  local_8c = s_cState_SlapAttack_00357bfc;
  local_90 = iVar6;
  func_0010BEC4((int)puVar5,6,&local_90);
  iVar7 = puVar5[6];
  uVar12 = *(undefined4 *)(iVar13 + 0x90);
  uVar14 = *(undefined4 *)(iVar13 + 0xa0);
  uVar16 = *(undefined4 *)(iVar13 + 0x94);
  uVar17 = *(undefined4 *)(iVar13 + 0x98);
  uVar18 = *(undefined4 *)(iVar13 + 0x9c);
  *(undefined4 *)(iVar7 + 0x30) = *(undefined4 *)(iVar13 + 0x8c);
  *(undefined4 *)(iVar7 + 0x34) = uVar12;
  iVar7 = puVar5[7];
  *(undefined4 *)(iVar7 + 0x30) = uVar16;
  *(undefined4 *)(iVar7 + 0x34) = uVar17;
  iVar7 = puVar5[8];
  *(undefined4 *)(iVar7 + 0x30) = uVar18;
  *(undefined4 *)(iVar7 + 0x34) = uVar14;
  local_8c = s_cState_KnuckleAttack_00357c10;
  local_90 = iVar6;
  func_0010BEC4((int)puVar5,7,&local_90);
  iVar7 = puVar5[6];
  uVar12 = *(undefined4 *)(iVar13 + 0xb4);
  uVar16 = *(undefined4 *)(iVar13 + 0xac);
  uVar17 = *(undefined4 *)(iVar13 + 0xa8);
  uVar14 = *(undefined4 *)(iVar13 + 0xb8);
  uVar18 = *(undefined4 *)(iVar13 + 0xb0);
  *(undefined4 *)(iVar7 + 0x38) = *(undefined4 *)(iVar13 + 0xa4);
  *(undefined4 *)(iVar7 + 0x3c) = uVar17;
  iVar7 = puVar5[7];
  *(undefined4 *)(iVar7 + 0x38) = uVar16;
  *(undefined4 *)(iVar7 + 0x3c) = uVar18;
  iVar7 = puVar5[8];
  *(undefined4 *)(iVar7 + 0x38) = uVar12;
  *(undefined4 *)(iVar7 + 0x3c) = uVar14;
  local_8c = s_cState_Down_00357c28;
  local_90 = iVar6;
  func_0010BEC4((int)puVar5,8,&local_90);
  iVar7 = puVar5[6];
  uVar14 = *(undefined4 *)(iVar13 + 0xc0);
  uVar12 = *(undefined4 *)(iVar13 + 0xc4);
  uVar17 = *(undefined4 *)(iVar13 + 200);
  uVar16 = *(undefined4 *)(iVar13 + 0xcc);
  uVar18 = *(undefined4 *)(iVar13 + 0xd0);
  *(undefined4 *)(iVar7 + 0x40) = *(undefined4 *)(iVar13 + 0xbc);
  *(undefined4 *)(iVar7 + 0x44) = uVar14;
  iVar7 = puVar5[7];
  *(undefined4 *)(iVar7 + 0x40) = uVar12;
  *(undefined4 *)(iVar7 + 0x44) = uVar17;
  iVar7 = puVar5[8];
  *(undefined4 *)(iVar7 + 0x40) = uVar16;
  *(undefined4 *)(iVar7 + 0x44) = uVar18;
  local_8c = s_cState_Die_00357c34;
  local_90 = iVar6;
  func_0010BEC4((int)puVar5,9,&local_90);
  iVar7 = puVar5[6];
  uVar12 = *(undefined4 *)(iVar13 + 0xd8);
  uVar17 = *(undefined4 *)(iVar13 + 0xdc);
  uVar18 = *(undefined4 *)(iVar13 + 0xe0);
  uVar14 = *(undefined4 *)(iVar13 + 0x24);
  uVar16 = *(undefined4 *)(iVar13 + 0x28);
  *(undefined4 *)(iVar7 + 0x48) = *(undefined4 *)(iVar13 + 0xd4);
  *(undefined4 *)(iVar7 + 0x4c) = uVar12;
  iVar7 = puVar5[7];
  *(undefined4 *)(iVar7 + 0x48) = uVar17;
  *(undefined4 *)(iVar7 + 0x4c) = uVar18;
  iVar7 = puVar5[8];
  *(undefined4 *)(iVar7 + 0x48) = uVar14;
  *(undefined4 *)(iVar7 + 0x4c) = uVar16;
  local_8c = s_cState_LevelUp_00357c40;
  local_90 = iVar6;
  func_0010BEC4((int)puVar5,10,&local_90);
  iVar6 = puVar5[6];
  uVar12 = *(undefined4 *)(iVar13 + 0xe8);
  uVar14 = *(undefined4 *)(iVar13 + 0xec);
  uVar16 = *(undefined4 *)(iVar13 + 0xf0);
  uVar17 = *(undefined4 *)(iVar13 + 0xf4);
  uVar18 = *(undefined4 *)(iVar13 + 0xf8);
  *(undefined4 *)(iVar6 + 0x50) = *(undefined4 *)(iVar13 + 0xe4);
  *(undefined4 *)(iVar6 + 0x54) = uVar12;
  iVar6 = puVar5[7];
  *(undefined4 *)(iVar6 + 0x50) = uVar14;
  *(undefined4 *)(iVar6 + 0x54) = uVar16;
  iVar6 = puVar5[8];
  *(undefined4 *)(iVar6 + 0x50) = uVar17;
  *(undefined4 *)(iVar6 + 0x54) = uVar18;
  puVar5[-0x130] = puVar5[-0x130] | 0x8000;
  func_004F87F8((int)puVar11,1);
  func_00666318(puVar5,1);
  func_004F9554(puVar5[-0x18b],7,0,1);
  func_004F9554(puVar5[-0x18a],7,0,1);
  func_004EB4C8(*DAT_00357c50,0x3c);
  if (*(char *)(puVar5 + -0x103) == '\0') {
    iVar6 = 0;
  }
  else {
    iVar6 = puVar5[-0x12d];
  }
  *(uint *)(iVar6 + 0x164) = *(uint *)(iVar6 + 0x164) | 0x90000;
  *(undefined1 *)((int)puVar5 + -0x1c7) = 5;
  func_002AFEC4((int)puVar11,-1,-1);
  *(undefined1 *)(puVar5 + -0x85) = 1;
  puVar5[-0x130] = puVar5[-0x130] & 0xfff7ffff;
  return puVar11;
}

