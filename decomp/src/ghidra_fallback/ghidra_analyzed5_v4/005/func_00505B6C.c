#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0014A998(int param_1,int param_2);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00169608(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_0016A2FC(undefined4 *param_1,int param_2,undefined4 param_3,int param_4);
extern int func_00504CC0(undefined4 param_1,undefined4 param_2,uint param_3);
extern int func_00505604(undefined4 param_1,int param_2,int *param_3,undefined4 param_4);
extern int func_00689794(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4,...);
extern int DAT_00505d68;
extern int *DAT_00505d6c;
extern int DAT_00505d70;
extern int DAT_00505d84;
extern int *DAT_00505db0;
extern undefined4 *DAT_00505dc4;
extern undefined4 DAT_00505dc8;
extern undefined4 DAT_00505dcc;
extern undefined4 DAT_00505dd0;
extern char s_MapActor__s_bch_00505db4[];
extern char s_animator_00505da4[];
extern char s_cf_00505db4[];
extern char s_vr_Hera_00505d88[];
extern char s_vr_Hera_Cloud_00505d74[];
extern char s_vr_Hera_mountain_00505d90[];

// USA 00505B6C <- EU 00505B44 (Ghidra, non-matching)
// GLOBAL DAT_00505d68 int
// GLOBAL DAT_00505d6c int *
// GLOBAL DAT_00505d70 int
// GLOBAL DAT_00505d84 int
// GLOBAL DAT_00505db0 int *
// GLOBAL DAT_00505dc4 undefined4 *
// GLOBAL DAT_00505dc8 undefined4
// GLOBAL DAT_00505dcc undefined4
// GLOBAL DAT_00505dd0 undefined4
// GLOBAL s_cf_00505db4 string
// GLOBAL s_animator_00505da4 string
// GLOBAL s_vr_Hera_00505d88 string
// GLOBAL s_vr_Hera_Cloud_00505d74 string
// GLOBAL s_vr_Hera_mountain_00505d90 string

int * func_00505B6C(undefined4 *param_1,uint *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  _Alignas(8) unsigned char albw_frame[0xf0];
  #define local_e8 ((uint *)(albw_frame + 0x8))
  #define local_e0 (*(undefined4 * *)(albw_frame + 0x10))
  #define local_dc (*(undefined4 *)(albw_frame + 0x14))
  #define local_d8 (*(undefined4 *)(albw_frame + 0x18))
  #define local_d4 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_d0 (*(undefined4 *)(albw_frame + 0x20))
  #define local_cc (*(undefined4 *)(albw_frame + 0x24))
  #define local_c8 (*(uint *)(albw_frame + 0x28))
  #define local_94 (*(undefined4 *)(albw_frame + 0x5c))
  #define local_90 (*(undefined1 *)(albw_frame + 0x60))
  #define local_88 (*(int *)(albw_frame + 0x68))
  #define local_84 (*(char * *)(albw_frame + 0x6c))
  #define auStack_7c ((undefined4 *)(albw_frame + 0x74))
  piVar2 = func_00150E40(param_1,param_2);
  iVar1 = DAT_00505d68;
  piVar2[200] = DAT_00505d68 + 0x54;
  *piVar2 = iVar1;
  piVar2[0x103] = param_2[2];
  func_0014A998(*DAT_00505d6c,0);
  iVar1 = DAT_00505d84;
  iVar5 = DAT_00505d70 + 0x54;
  *piVar2 = DAT_00505d70;
  piVar2[200] = iVar5;
  local_84 = s_vr_Hera_Cloud_00505d74;
  local_88 = iVar1;
  piVar3 = func_00505604(piVar2,(int)param_2,&local_88,1);
  piVar2[0x104] = (int)piVar3;
  local_84 = s_vr_Hera_00505d88;
  local_88 = iVar1;
  piVar3 = func_00505604(piVar2,(int)param_2,&local_88,0);
  piVar2[0x105] = (int)piVar3;
  local_84 = s_vr_Hera_mountain_00505d90;
  uVar6 = 0;
  local_88 = iVar1;
  piVar3 = func_00505604(piVar2,(int)param_2,&local_88,0);
  piVar2[0x106] = (int)piVar3;
  piVar2[0x107] = 0;
  piVar2[0x108] = 0;
  piVar2[0x109] = 0;
  piVar2[0x10a] = 0;
  *(undefined1 *)(piVar2 + 0x10b) = 1;
  *(undefined1 *)((int)piVar2 + 0x42d) = 1;
  *(undefined2 *)((int)piVar2 + 0x42e) = 0;
  iVar5 = piVar2[0xb4];
  puVar4 = (undefined4 *)func_0010BAB4(0xa8);
  piVar3 = DAT_00505db0;
  if (puVar4 == (undefined4 *)0x0) {
    piVar2[0x107] = 0;
  }
  else {
    if (iVar5 == 0) {
      local_84 = s_animator_00505da4;
    }
    else {
      (**(code **)(*DAT_00505db0 + 8))(DAT_00505db0);
      local_84 = (char *)piVar3[1];
    }
    uVar6 = 1;
    local_88 = iVar1;
    puVar4 = func_0016A2FC(puVar4,1,&local_88,1);
    piVar2[0x107] = (int)puVar4;
  }
  piVar3 = (int *)param_2[0xaf];
  (**(code **)(*piVar3 + 8))(piVar3);
  func_00689794(auStack_7c,s_MapActor__s_bch_00505db4,piVar3[1],uVar6);
  puVar4 = func_00504CC0(*DAT_00505dc4,auStack_7c,0xffffffff);
  local_84 = s_vr_Hera_Cloud_00505d74;
  local_88 = iVar1;
  func_00169608((uint *)piVar2[0x107],0,&local_88,(int)puVar4);
  uVar7 = piVar2[0x104];
  func_0016A02C(piVar2[0x107],-1,(int *)0xffffffff,uVar7);
  local_e0 = &local_dc;
  local_e8[1] = 3;
  local_94 = 10;
  local_90 = 0;
  local_e8[0] = 1;
  local_dc = 0;
  local_d8 = DAT_00505dcc;
  local_d4 = DAT_00505dc8;
  local_d0 = DAT_00505dd0;
  local_c8 = uVar7 | 0xff;
  local_cc = DAT_00505dc8;
  func_0016898C(piVar2[0x107],local_e8);
  return piVar2;
}

