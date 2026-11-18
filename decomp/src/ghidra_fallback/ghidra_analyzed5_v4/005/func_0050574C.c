#include "ghidra_types.h"

extern int func_001151F8(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
extern int func_002C2D00(int *param_1);
extern float func_00491624(float *param_1,uint param_2,uint param_3,uint param_4);
extern int func_004994B0(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,...);
extern int func_004CEAF0(int param_1);
extern int func_00504CC0(undefined4 param_1,undefined4 param_2,uint param_3);
extern int DAT_0050593c;
extern undefined4 DAT_00505940;
extern undefined4 *DAT_00505970;
extern undefined4 DAT_00505974;
extern char s_Actor__s_bch_00505950[];
extern char s_MapActor__s_bch_00505960[];
extern char s_cf_00505950[];
extern char s_cf_00505960[];
extern char s_vr_Black_00505944[];

// USA 0050574C <- EU 00505724 (Ghidra, non-matching)
// GLOBAL DAT_0050593c int
// GLOBAL DAT_00505940 undefined4
// GLOBAL DAT_00505970 undefined4 *
// GLOBAL DAT_00505974 undefined4
// GLOBAL s_cf_00505950 string
// GLOBAL s_cf_00505960 string
// GLOBAL s_vr_Black_00505944 string

int * func_0050574C(undefined4 param_1,int param_2,uint param_3,int param_4)

{
  uint *puVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  char *pcVar7;
  _Alignas(8) unsigned char albw_frame[0xe0];
  #define local_e0 (*(undefined4 *)(albw_frame + 0x0))
  #define local_dc (*(undefined1 * *)(albw_frame + 0x4))
  #define uStack_d8 (*(undefined4 *)(albw_frame + 0x8))
  #define local_d4 ((undefined1 *)(albw_frame + 0xc))
  #define uStack_95 (*(undefined1 *)(albw_frame + 0x4b))
  #define local_90 (*(int *)(albw_frame + 0x50))
  #define uStack_8c (*(undefined4 *)(albw_frame + 0x54))
  #define iStack_88 (*(int *)(albw_frame + 0x58))
  #define local_84 (*(undefined4 *)(albw_frame + 0x5c))
  #define local_80 (*(undefined4 * *)(albw_frame + 0x60))
  #define uStack_7c (*(undefined4 *)(albw_frame + 0x64))
  #define local_78 (*(int *)(albw_frame + 0x68))
  #define local_74 (*(undefined1 *)(albw_frame + 0x6c))
  #define local_73 (*(undefined1 *)(albw_frame + 0x6d))
  #define local_70 (*(undefined4 *)(albw_frame + 0x70))
  #define local_6c (*(undefined4 *)(albw_frame + 0x74))
  #define local_68 (*(undefined4 *)(albw_frame + 0x78))
  #define local_64 (*(undefined4 *)(albw_frame + 0x7c))
  #define local_60 (*(undefined4 *)(albw_frame + 0x80))
  #define local_5c (*(undefined4 *)(albw_frame + 0x84))
  #define local_58 (*(undefined1 *)(albw_frame + 0x88))
  #define local_57 (*(undefined1 *)(albw_frame + 0x89))
  #define local_50 (*(int *)(albw_frame + 0x90))
  #define local_4c (*(char * *)(albw_frame + 0x94))
  #define afStack_48 ((float *)(albw_frame + 0x98))
  iVar3 = DAT_0050593c;
  local_dc = local_d4;
  uStack_d8 = 0x40;
  uStack_95 = 0;
  local_d4[0] = 0;
  local_e0 = DAT_00505940;
  piVar6 = *(int **)(param_2 + 700);
  local_4c = s_vr_Black_00505944;
  local_50 = DAT_0050593c;
  iVar5 = param_4;
  (**(code **)(*piVar6 + 8))(piVar6);
  (**(code **)(*piVar6 + 8))(piVar6);
  pcVar7 = (char *)piVar6[1];
  (**(code **)(local_50 + 8))(&local_50);
  bVar2 = true;
  if (pcVar7 != local_4c) {
    iVar5 = piVar6[1];
    iVar4 = 0;
    do {
      if (*(char *)(iVar5 + iVar4) != local_4c[iVar4]) break;
      if (*(char *)(iVar5 + iVar4) == '\0') goto LAB_005057ec;
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x40001);
    bVar2 = false;
  }
LAB_005057ec:
  piVar6 = *(int **)(param_2 + 700);
  if (bVar2) {
    (**(code **)(*piVar6 + 8))(piVar6);
    func_004994B0((int)&local_e0,s_Actor__s_bch_00505950,piVar6[1],iVar5);
  }
  else {
    (**(code **)(*piVar6 + 8))(piVar6);
    func_004994B0((int)&local_e0,s_MapActor__s_bch_00505960,piVar6[1],iVar5);
  }
  local_80 = func_00504CC0(*DAT_00505970,&local_e0,0xffffffff);
  puVar1 = local_80 + 0x32;
  if (param_3 < *puVar1) {
    local_80 = *(undefined4 **)(local_80[0x34] + param_3 * 4);
  }
  local_90 = iVar3;
  uStack_8c = DAT_00505974;
  iStack_88 = iVar3;
  if (*puVar1 <= param_3) {
    local_80 = (undefined4 *)0x0;
  }
  local_84 = DAT_00505974;
  uStack_7c = 0;
  local_58 = 1;
  local_73 = 0;
  local_6c = 0;
  local_60 = 0;
  local_5c = 0;
  local_64 = 0;
  local_57 = 0xc4;
  local_70 = 0;
  local_68 = 0;
  local_74 = 1;
  local_78 = param_4;
  piVar6 = func_002C2D00(&local_90);
  (**(code **)(*piVar6 + 0x10))(piVar6,0x20);
  func_00491624(afStack_48,*(uint *)(param_2 + 0x1c),*(uint *)(param_2 + 0x20),
                *(uint *)(param_2 + 0x24));
  piVar6[0x59] = piVar6[0x59] | 0x40000000;
  func_001151F8(piVar6 + 0x20,afStack_48,(undefined4 *)(param_2 + 4));
  piVar6[0x59] = piVar6[0x59] | 0x40000000;
  piVar6[0x1d] = *(int *)(param_2 + 0x10);
  piVar6[0x1e] = *(int *)(param_2 + 0x14);
  piVar6[0x1f] = *(int *)(param_2 + 0x18);
  func_004CEAF0((int)piVar6);
  return piVar6;
}

