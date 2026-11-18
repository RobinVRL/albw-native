#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001031B4(undefined4 *param_1,undefined4 *param_2);
extern int func_0010DB90(void);
extern undefined8 func_00110D44(undefined4 *param_1,byte *param_2,uint param_3);
extern int func_0014A6A4(int param_1,int param_2,undefined4 param_3,undefined4 param_4);
extern int func_0014A834(int *param_1);
extern int func_001E06D0(int param_1,int param_2,int *param_3);
extern int func_00494F60(int *param_1);
extern int func_004950E8(int param_1,int *param_2,undefined4 param_3);
extern int func_0049D4A8(int param_1,undefined4 *param_2);
extern int func_0049F838(int param_1);
extern int func_0049F920(undefined4 *param_1,undefined4 param_2);
extern int func_004EC564(int param_1);
extern int func_00588054(int param_1,int param_2);
extern uint *DAT_004ecd20;
extern undefined4 *DAT_004ecd24;
extern undefined4 DAT_004ecd28;
extern undefined4 DAT_004ecd2c;
extern undefined4 DAT_004ecd30;
extern int *DAT_004ecd34;
extern undefined4 DAT_004ecd38;
extern uint *DAT_004ecd3c;
extern undefined4 *DAT_004ecd40;
extern undefined4 DAT_004ecd44;
extern int *DAT_004ecd48;
extern int DAT_004ecd5c;
extern int *DAT_004ecd60;
extern undefined4 DAT_004ecd78;
extern uint *DAT_004ecd7c;
extern undefined4 DAT_004ecd80;
extern uint *DAT_004ecd84;
extern undefined4 *DAT_004ecd88;
extern undefined4 DAT_004ecd8c;
extern int *DAT_004ecdb8;
extern char s_LanguageBoot_szs_004ecd64[];
extern char s_RegionBoot_szs_004ecd4c[];
extern char s_World_Shader_primitive_renderer__004ecd90[];
extern char s_cf_004ecd4c[];
extern char s_cf_004ecd64[];
extern char s_cf_004ecd90[];

// USA 004ECA48 <- EU 004ECA20 (Ghidra, non-matching)
// GLOBAL DAT_004ecd20 uint *
// GLOBAL DAT_004ecd24 undefined4 *
// GLOBAL DAT_004ecd28 undefined4
// GLOBAL DAT_004ecd2c undefined4
// GLOBAL DAT_004ecd30 undefined4
// GLOBAL DAT_004ecd34 int *
// GLOBAL DAT_004ecd38 undefined4
// GLOBAL DAT_004ecd3c uint *
// GLOBAL DAT_004ecd40 undefined4 *
// GLOBAL DAT_004ecd44 undefined4
// GLOBAL DAT_004ecd48 int *
// GLOBAL DAT_004ecd5c int
// GLOBAL DAT_004ecd60 int *
// GLOBAL DAT_004ecd78 undefined4
// GLOBAL DAT_004ecd7c uint *
// GLOBAL DAT_004ecd80 undefined4
// GLOBAL DAT_004ecd84 uint *
// GLOBAL DAT_004ecd88 undefined4 *
// GLOBAL DAT_004ecd8c undefined4
// GLOBAL DAT_004ecdb8 int *
// GLOBAL s_cf_004ecd64 string
// GLOBAL s_cf_004ecd4c string
// GLOBAL s_cf_004ecd90 string

void func_004ECA48(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int *piVar9;
  int iVar10;
  _Alignas(8) unsigned char albw_frame[0x140];
  #define local_138 (*(int *)(albw_frame + 0x8))
  #define local_134 (*(char * *)(albw_frame + 0xc))
  #define local_130 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_12c (*(undefined4 *)(albw_frame + 0x14))
  #define local_120 ((undefined1 *)(albw_frame + 0x20))
  #define local_11c ((undefined4 *)(albw_frame + 0x24))
  #define local_dc (*(int *)(albw_frame + 0x64))
  #define auStack_b8 ((undefined4 *)(albw_frame + 0x88))
  #define local_3c (*(undefined4 *)(albw_frame + 0x104))
  #define local_38 (*(int *)(albw_frame + 0x108))
  #define local_34 (*(char * *)(albw_frame + 0x10c))
  #define local_30 ((undefined1 *)(albw_frame + 0x110))
  #define local_2c (*(undefined4 *)(albw_frame + 0x114))
  iVar10 = *(int *)(param_1 + 0x5c);
  piVar9 = *(int **)(iVar10 + 0x20);
  if (((*DAT_004ecd20 & 1) == 0) && (iVar3 = func_00100174((int *)DAT_004ecd20), iVar3 != 0)) {
    *DAT_004ecd24 = DAT_004ecd28;
  }
  if ((piVar9 == (int *)0x0) || (iVar3 = (**(code **)*piVar9)(piVar9,DAT_004ecd24), iVar3 == 0)) {
    piVar9 = (int *)0x0;
  }
  piVar4 = (int *)func_0010DB90();
  local_130 = 0;
  uStack_12c = 0;
  local_138 = 0;
  (**(code **)(*piVar9 + 0x14))(piVar9,param_1,&local_138);
  local_2c = DAT_004ecd30;
  local_30[0] = 2;
  func_0049F920(&local_138,local_30);
  piVar2 = DAT_004ecd34;
  local_dc = param_1;
  func_00588054(*DAT_004ecd34,(int)&local_138);
  iVar3 = *(int *)(param_1 + 0x5c);
  func_00110D44(auStack_b8,(byte *)&local_138,0x80);
  local_3c = DAT_004ecd38;
  piVar5 = func_0049D4A8(iVar3,auStack_b8);
  if (((*DAT_004ecd3c & 1) == 0) && (iVar3 = func_00100174((int *)DAT_004ecd3c), iVar3 != 0)) {
    *DAT_004ecd40 = DAT_004ecd44;
  }
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 8))(piVar5,DAT_004ecd40);
  }
  func_004EC564(*piVar2);
  func_0014A834((int *)0x0);
  func_0014A6A4(*DAT_004ecd48,param_1,iVar10,piVar9);
  piVar9 = DAT_004ecd60;
  iVar10 = DAT_004ecd5c;
  local_134 = s_RegionBoot_szs_004ecd4c;
  local_138 = DAT_004ecd5c;
  func_001E06D0(*DAT_004ecd60,0,&local_138);
  local_134 = s_LanguageBoot_szs_004ecd64;
  local_138 = iVar10;
  func_001E06D0(*piVar9,1,&local_138);
  local_30[0] = 2;
  local_2c = DAT_004ecd78;
  func_001031B4(&local_138,local_30);
  puVar7 = &local_130;
  uVar6 = *DAT_004ecd7c;
  if (0 < (int)uVar6) {
    iVar3 = 0;
    do {
      uVar6 = uVar6 - 1;
      iVar1 = iVar3 * 0x14;
      iVar3 = iVar3 + 1;
      local_120[iVar1] = 1;
    } while (uVar6 != 0);
  }
  local_130 = *(undefined4 *)(param_1 + 0x44);
  if (*DAT_004ecd7c < 2) {
    uVar8 = *(undefined4 *)(param_1 + 0x44);
  }
  else {
    uVar8 = *(undefined4 *)(param_1 + 0x48);
    puVar7 = local_11c;
  }
  *puVar7 = uVar8;
  iVar3 = *(int *)(param_1 + 0x5c);
  func_00110D44(auStack_b8,(byte *)&local_138,0x80);
  local_3c = DAT_004ecd80;
  piVar9 = func_0049D4A8(iVar3,auStack_b8);
  if (((*DAT_004ecd84 & 1) == 0) && (iVar3 = func_00100174((int *)DAT_004ecd84), iVar3 != 0)) {
    *DAT_004ecd88 = DAT_004ecd8c;
  }
  if (piVar9 != (int *)0x0) {
    (**(code **)(*piVar9 + 8))(piVar9,DAT_004ecd88);
  }
  func_00494F60((int *)0x0);
  local_34 = s_World_Shader_primitive_renderer__004ecd90;
  local_38 = iVar10;
  func_004950E8(*DAT_004ecdb8,piVar4,&local_38);
  func_0049F838(param_1);
  *(undefined1 *)(param_1 + 0x10c) = 0;
  return;
}

