#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00169608(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_0016A2FC(undefined4 *param_1,int param_2,undefined4 param_3,int param_4);
extern int func_001BA1EC(int param_1);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern int func_002C2D00(int *param_1);
extern int func_004CF478(int param_1,int param_2);
extern int func_00504CC0(undefined4 param_1,undefined4 param_2,uint param_3);
extern int func_00533400(int param_1,int *param_2);
extern int func_00588BF0(int param_1,int param_2);
extern int func_00689794(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4,...);
extern int func_006916F0(int *param_1,int *param_2);
extern undefined4 *DAT_00278ff4;
extern undefined4 DAT_00278ff8;
extern int DAT_00278ffc;
extern int *DAT_00279000;
extern char s_Hagure_00279010[];
extern char s__sWave_00278fe0[];
extern char s__s__s_bch_00278fd4[];
extern char s__s_switch_00278fe8[];
extern char s_animator_00279004[];
extern char s_cf_00278fd4[];
extern char s_cf_00278fe0[];
extern char s_cf_00278fe8[];

// USA 00278BE0 <- EU 00278C08 (Ghidra, non-matching)
// GLOBAL DAT_00278ff4 undefined4 *
// GLOBAL DAT_00278ff8 undefined4
// GLOBAL DAT_00278ffc int
// GLOBAL DAT_00279000 int *
// GLOBAL s_cf_00278fd4 string
// GLOBAL s_cf_00278fe0 string
// GLOBAL s_cf_00278fe8 string
// GLOBAL s_Hagure_00279010 string
// GLOBAL s_animator_00279004 string

undefined4 func_00278BE0(int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  int *piVar6;
  _Alignas(8) unsigned char albw_frame[0x220];
  #define local_21c (*(int *)(albw_frame + 0x4))
  #define uStack_218 (*(undefined4 *)(albw_frame + 0x8))
  #define iStack_214 (*(int *)(albw_frame + 0xc))
  #define local_210 (*(undefined4 *)(albw_frame + 0x10))
  #define local_20c (*(int *)(albw_frame + 0x14))
  #define local_208 (*(undefined4 *)(albw_frame + 0x18))
  #define local_204 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_200 (*(undefined1 *)(albw_frame + 0x20))
  #define local_1ff (*(undefined1 *)(albw_frame + 0x21))
  #define local_1fc (*(undefined4 *)(albw_frame + 0x24))
  #define local_1f8 (*(undefined4 *)(albw_frame + 0x28))
  #define local_1f4 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_1f0 (*(undefined4 *)(albw_frame + 0x30))
  #define local_1ec (*(undefined4 *)(albw_frame + 0x34))
  #define local_1e8 (*(undefined4 *)(albw_frame + 0x38))
  #define local_1e4 (*(undefined1 *)(albw_frame + 0x3c))
  #define local_1e3 (*(undefined1 *)(albw_frame + 0x3d))
  #define aiStack_1e0 ((int *)(albw_frame + 0x40))
  #define local_184 (*(int *)(albw_frame + 0x9c))
  #define local_180 (*(uint *)(albw_frame + 0xa0))
  #define local_130 (*(int *)(albw_frame + 0xf0))
  #define local_12c (*(char * *)(albw_frame + 0xf4))
  #define auStack_128 ((undefined4 *)(albw_frame + 0xf8))
  #define aiStack_dc ((int *)(albw_frame + 0x144))
  #define aiStack_90 ((int *)(albw_frame + 0x190))
  #define iStack_40 (*(int *)(albw_frame + 0x1e0))
  #define pcStack_3c (*(char * *)(albw_frame + 0x1e4))
  #define local_38 (*(undefined4 * *)(albw_frame + 0x1e8))
  func_001BA1EC(param_1);
  piVar6 = *(int **)(param_1 + 0x2c0);
  (**(code **)(*piVar6 + 8))(piVar6);
  iVar5 = piVar6[1];
  func_00689794(auStack_128,s__s__s_bch_00278fd4,(int)"MapActor" /* EU 00278FC8 */,iVar5);
  piVar6 = *(int **)(param_1 + 0x2c0);
  (**(code **)(*piVar6 + 8))(piVar6);
  func_00689794(&local_184,s__sWave_00278fe0,piVar6[1],iVar5);
  piVar6 = *(int **)(param_1 + 0x2c0);
  (**(code **)(*piVar6 + 8))(piVar6);
  func_00689794(aiStack_dc,s__s_switch_00278fe8,piVar6[1],iVar5);
  (**(code **)(local_184 + 8))(&local_184);
  func_00689794(aiStack_90,s__s_switch_00278fe8,local_180,iVar5);
  puVar2 = func_00504CC0(*DAT_00278ff4,auStack_128,0xffffffff);
  local_20c = func_00533400((int)puVar2,&local_184);
  iVar5 = DAT_00278ffc;
  local_21c = DAT_00278ffc;
  uStack_218 = DAT_00278ff8;
  iStack_214 = DAT_00278ffc;
  local_210 = DAT_00278ff8;
  local_1e4 = 1;
  local_1ff = 0;
  local_208 = 0;
  local_1ec = 0;
  local_1e8 = 0;
  local_1f8 = 0;
  local_1f0 = 0;
  local_1fc = 0;
  local_1f4 = 0;
  local_1e3 = 0xc4;
  local_200 = 1;
  local_204 = 1;
  piVar6 = func_002C2D00(&local_21c);
  *(int **)(param_1 + 0x494) = piVar6;
  (**(code **)(*piVar6 + 0x10))(piVar6,0x24);
  iVar3 = *(int *)(param_1 + 0x494);
  *(uint *)(iVar3 + 0x164) = *(uint *)(iVar3 + 0x164) | 0x90000;
  iVar3 = *(int *)(param_1 + 0x2d0);
  local_38 = (undefined4 *)func_0010BAB4(0xa8);
  piVar6 = DAT_00279000;
  puVar4 = (uint *)0x0;
  if (local_38 != (undefined4 *)0x0) {
    if (iVar3 == 0) {
      local_12c = s_animator_00279004;
    }
    else {
      (**(code **)(*DAT_00279000 + 8))(DAT_00279000);
      local_12c = (char *)piVar6[1];
    }
    local_130 = iVar5;
    puVar4 = func_0016A2FC(local_38,1,&local_130,1);
  }
  *(uint **)(param_1 + 0x498) = puVar4;
  func_00169608(puVar4,0,*(int **)(param_1 + 0x2c0),(int)puVar2);
  func_0016A02C(*(int *)(param_1 + 0x498),-1,(int *)0xffffffff,*(int *)(param_1 + 0x40c));
  puVar4 = (uint *)func_002C11E8(aiStack_1e0,0,10,0);
  func_0016898C(*(int *)(param_1 + 0x498),puVar4);
  local_38 = (undefined4 *)func_0010BAB4(0xa8);
  puVar4 = (uint *)0x0;
  if (local_38 != (undefined4 *)0x0) {
    if (iVar3 == 0) {
      local_12c = s_animator_00279004;
    }
    else {
      (**(code **)(*piVar6 + 8))(piVar6);
      local_12c = (char *)piVar6[1];
    }
    local_130 = iVar5;
    puVar4 = func_0016A2FC(local_38,1,&local_130,1);
  }
  *(uint **)(param_1 + 0x49c) = puVar4;
  func_00169608(puVar4,0,aiStack_dc,(int)puVar2);
  func_0016A02C(*(int *)(param_1 + 0x49c),-1,(int *)0xffffffff,*(int *)(param_1 + 0x40c));
  puVar4 = (uint *)func_002C11E8(aiStack_1e0,0,10,0);
  func_0016898C(*(int *)(param_1 + 0x49c),puVar4);
  local_38 = (undefined4 *)func_0010BAB4(0xa8);
  puVar4 = (uint *)0x0;
  if (local_38 != (undefined4 *)0x0) {
    if (iVar3 == 0) {
      local_12c = s_animator_00279004;
    }
    else {
      (**(code **)(*piVar6 + 8))(piVar6);
      local_12c = (char *)piVar6[1];
    }
    local_130 = iVar5;
    puVar4 = func_0016A2FC(local_38,1,&local_130,1);
  }
  *(uint **)(param_1 + 0x4a0) = puVar4;
  func_00169608(puVar4,0,aiStack_90,(int)puVar2);
  func_0016A02C(*(int *)(param_1 + 0x4a0),-1,(int *)0xffffffff,*(int *)(param_1 + 0x494));
  puVar4 = (uint *)func_002C11E8(aiStack_1e0,0,10,0);
  func_0016898C(*(int *)(param_1 + 0x4a0),puVar4);
  func_004CF478(*(int *)(param_1 + 0x494),0);
  bVar1 = func_00588BF0(param_1,0);
  *(bool *)(param_1 + 0x4a9) = bVar1;
  pcStack_3c = s_Hagure_00279010;
  iStack_40 = iVar5;
  iVar5 = func_006916F0(*(int **)(param_1 + 0x2c0),&iStack_40);
  if (iVar5 != 0) {
    *(bool *)(param_1 + 0x4a9) = *(char *)(param_1 + 0x4a9) == '\0';
  }
  return func_004CF478(*(int *)(param_1 + 0x40c),(int)*(char *)(param_1 + 0x4a9));
}

