#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern int func_004FC6FC(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4, undefined4 param_5,undefined4 *param_6,undefined4 param_7);
extern int *DAT_005a0f44;
extern int *DAT_005a0f48;
extern int DAT_005a0f58;
extern undefined4 DAT_005a0fe8;
extern undefined4 DAT_005a0fec;
extern undefined4 DAT_005a0ff8;
extern undefined4 *DAT_005a0ffc;
extern undefined4 DAT_005a1000;
extern undefined4 *DAT_005a1004;
extern undefined DAT_005a1008;
extern int DAT_005a1020;
extern uint *DAT_005a1024;
extern undefined4 DAT_005a1028;
extern undefined4 *DAT_005a102c;
extern undefined4 DAT_005a1030;
extern undefined4 *DAT_005a1034;
extern undefined DAT_005a1038;
extern int DAT_005a104c;
extern uint *DAT_005a1050;
extern undefined4 DAT_005a1054;
extern undefined4 *DAT_005a1058;
extern char s_EnemyKu_005a1044[];
extern char s_EnemyZora_005a1014[];
extern char s_mouth_005a0ff0[];
extern char s_water_damage_005a0fac[];
extern char s_water_dead_005a0fcc[];
extern char s_water_dead_fire_005a0fbc[];
extern char s_water_dive_005a0fa0[];
extern char s_water_fire_005a0f94[];
extern char s_water_fire_ed_005a0f84[];
extern char s_water_fire_st_005a0f74[];
extern char s_water_piyopiyo_005a0fd8[];
extern char s_water_turn_005a0f68[];
extern char s_water_up_005a0f5c[];
extern char s_water_wait_005a0f4c[];

// USA 005A0D54 <- EU 005A0D2C (Ghidra, non-matching)
// GLOBAL DAT_005a0f44 int *
// GLOBAL DAT_005a0f48 int *
// GLOBAL DAT_005a0f58 int
// GLOBAL DAT_005a0fe8 undefined4
// GLOBAL DAT_005a0fec undefined4
// GLOBAL DAT_005a0ff8 undefined4
// GLOBAL DAT_005a0ffc undefined4 *
// GLOBAL DAT_005a1000 undefined4
// GLOBAL DAT_005a1004 undefined4 *
// GLOBAL DAT_005a1008 undefined
// GLOBAL DAT_005a1020 int
// GLOBAL DAT_005a1024 uint *
// GLOBAL DAT_005a1028 undefined4
// GLOBAL DAT_005a102c undefined4 *
// GLOBAL DAT_005a1030 undefined4
// GLOBAL DAT_005a1034 undefined4 *
// GLOBAL DAT_005a1038 undefined
// GLOBAL DAT_005a104c int
// GLOBAL DAT_005a1050 uint *
// GLOBAL DAT_005a1054 undefined4
// GLOBAL DAT_005a1058 undefined4 *
// GLOBAL s_EnemyKu_005a1044 string
// GLOBAL s_EnemyZora_005a1014 string
// GLOBAL s_mouth_005a0ff0 string
// GLOBAL s_water_damage_005a0fac string
// GLOBAL s_water_dead_005a0fcc string
// GLOBAL s_water_dead_fire_005a0fbc string
// GLOBAL s_water_dive_005a0fa0 string
// GLOBAL s_water_fire_005a0f94 string
// GLOBAL s_water_fire_ed_005a0f84 string
// GLOBAL s_water_fire_st_005a0f74 string
// GLOBAL s_water_piyopiyo_005a0fd8 string
// GLOBAL s_water_turn_005a0f68 string
// GLOBAL s_water_up_005a0f5c string
// GLOBAL s_water_wait_005a0f4c string

undefined8 func_005A0D54(void)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(undefined1 *)(albw_frame + 0x8))
  #define local_37 (*(undefined1 *)(albw_frame + 0x9))
  #define local_36 (*(undefined1 *)(albw_frame + 0xa))
  #define local_35 (*(undefined1 *)(albw_frame + 0xb))
  #define local_34 (*(undefined1 *)(albw_frame + 0xc))
  #define local_30 (*(int *)(albw_frame + 0x10))
  #define local_2c (*(char * *)(albw_frame + 0x14))
  #define local_28 (*(int *)(albw_frame + 0x18))
  #define local_24 (*(undefined * *)(albw_frame + 0x1c))
  #define local_20 (*(int *)(albw_frame + 0x20))
  #define local_1c (*(char * *)(albw_frame + 0x24))
  #define local_18 (*(int *)(albw_frame + 0x28))
  #define local_14 (*(undefined * *)(albw_frame + 0x2c))
  piVar1 = DAT_005a0f44;
  DAT_005a0f44[2] = -1;
  piVar1[3] = -1;
  iVar6 = DAT_005a0f58;
  piVar1[4] = 0;
  piVar1[5] = 0;
  piVar2 = DAT_005a0f48;
  DAT_005a0f48[1] = (int)s_water_wait_005a0f4c;
  *piVar2 = iVar6;
  piVar2[3] = (int)s_water_up_005a0f5c;
  piVar2[2] = iVar6;
  piVar2[5] = (int)s_water_turn_005a0f68;
  piVar2[4] = iVar6;
  piVar2[7] = (int)s_water_fire_st_005a0f74;
  piVar2[6] = iVar6;
  piVar2[9] = (int)s_water_fire_ed_005a0f84;
  piVar2[8] = iVar6;
  piVar2[0xb] = (int)s_water_fire_005a0f94;
  piVar2[10] = iVar6;
  piVar2[0xd] = (int)s_water_dive_005a0fa0;
  piVar2[0xc] = iVar6;
  piVar2[0xf] = (int)s_water_damage_005a0fac;
  piVar2[0xe] = iVar6;
  piVar2[0x11] = (int)s_water_dead_fire_005a0fbc;
  piVar2[0x10] = iVar6;
  piVar2[0x13] = (int)s_water_dead_005a0fcc;
  piVar2[0x12] = iVar6;
  piVar2[0x14] = iVar6;
  piVar2[0x15] = (int)s_water_piyopiyo_005a0fd8;
  piVar1[7] = (int)s_mouth_005a0ff0;
  piVar1[6] = iVar6;
  local_38 = 0;
  local_37 = 0;
  local_36 = 0;
  local_34 = 0xff;
  local_35 = 0xff;
  func_004FC6FC(DAT_005a0ffc,0,1,0,0,(undefined4 *)&local_38,0xb);
  puVar3 = DAT_005a1004;
  DAT_005a1004[2] = DAT_005a1004 + 3;
  puVar3[1] = 5;
  *puVar3 = 0;
  local_24 = &DAT_005a1008;
  local_28 = iVar6;
  local_2c = s_EnemyZora_005a1014;
  local_30 = iVar6;
  iVar5 = *piVar1;
  if (*piVar1 == 0) {
    iVar5 = DAT_005a1020;
  }
  func_0019B51C(DAT_005a102c,DAT_005a1028,*DAT_005a1024,(int)&local_30,DAT_005a1004,&local_28,iVar5)
  ;
  puVar3 = DAT_005a1034;
  puVar7 = DAT_005a1034 + 3;
  DAT_005a1034[1] = 5;
  puVar3[2] = puVar7;
  *puVar3 = 0;
  local_14 = &DAT_005a1038;
  local_18 = iVar6;
  local_1c = s_EnemyKu_005a1044;
  local_20 = iVar6;
  iVar6 = piVar1[1];
  if (piVar1[1] == 0) {
    iVar6 = DAT_005a104c;
  }
  uVar4 = func_0019B51C(DAT_005a1058,DAT_005a1054,*DAT_005a1050,(int)&local_20,DAT_005a1034,
                        &local_18,iVar6);
  return CONCAT44(DAT_005a1030,uVar4);
}

