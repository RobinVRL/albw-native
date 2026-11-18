#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern int func_004FC6FC(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4, undefined4 param_5,undefined4 *param_6,undefined4 param_7);
extern int *DAT_005a9f74;
extern undefined4 *DAT_005a9f78;
extern undefined DAT_005a9f7c;
extern undefined4 DAT_005a9f88;
extern int DAT_005a9f98;
extern uint *DAT_005a9f9c;
extern undefined4 DAT_005a9fa0;
extern undefined4 *DAT_005a9fa4;
extern undefined4 DAT_005a9fa8;
extern undefined4 DAT_005a9fac;
extern undefined4 *DAT_005a9fb0;
extern undefined DAT_005a9fb4;
extern undefined DAT_005a9fbc;
extern undefined DAT_005aa008;
extern undefined4 DAT_005aa010;
extern undefined4 *DAT_005aa014;
extern undefined4 DAT_005aa018;
extern char s_EnemyKuLand_005a9f8c[];
extern char s_damage_005a9fe8[];
extern char s_jitabata_005a9ff0[];
extern char s_piyopiyo_005a9ffc[];
extern char s_water_to_field_ed_005a9fd4[];
extern char s_water_to_field_st_005a9fc0[];

// USA 005A9E38 <- EU 005A9E10 (Ghidra, non-matching)
// GLOBAL DAT_005a9f74 int *
// GLOBAL DAT_005a9f78 undefined4 *
// GLOBAL DAT_005a9f7c undefined
// GLOBAL DAT_005a9f88 undefined4
// GLOBAL DAT_005a9f98 int
// GLOBAL DAT_005a9f9c uint *
// GLOBAL DAT_005a9fa0 undefined4
// GLOBAL DAT_005a9fa4 undefined4 *
// GLOBAL DAT_005a9fa8 undefined4
// GLOBAL DAT_005a9fac undefined4
// GLOBAL DAT_005a9fb0 undefined4 *
// GLOBAL DAT_005a9fb4 undefined
// GLOBAL DAT_005a9fbc undefined
// GLOBAL DAT_005aa008 undefined
// GLOBAL DAT_005aa010 undefined4
// GLOBAL DAT_005aa014 undefined4 *
// GLOBAL DAT_005aa018 undefined4
// GLOBAL s_EnemyKuLand_005a9f8c string
// GLOBAL s_damage_005a9fe8 string
// GLOBAL s_jitabata_005a9ff0 string
// GLOBAL s_piyopiyo_005a9ffc string
// GLOBAL s_water_to_field_ed_005a9fd4 string
// GLOBAL s_water_to_field_st_005a9fc0 string

undefined8 func_005A9E38(void)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(undefined1 *)(albw_frame + 0x8))
  #define local_27 (*(undefined1 *)(albw_frame + 0x9))
  #define local_26 (*(undefined1 *)(albw_frame + 0xa))
  #define local_25 (*(undefined1 *)(albw_frame + 0xb))
  #define local_24 (*(undefined1 *)(albw_frame + 0xc))
  #define local_20 (*(undefined4 *)(albw_frame + 0x10))
  #define local_1c (*(char * *)(albw_frame + 0x14))
  #define local_18 (*(undefined4 *)(albw_frame + 0x18))
  #define local_14 (*(undefined * *)(albw_frame + 0x1c))
  piVar1 = DAT_005a9f74;
  DAT_005a9f74[2] = -1;
  piVar1[3] = -1;
  piVar1[4] = 0;
  piVar1[5] = 0;
  puVar3 = DAT_005a9f78;
  puVar5 = DAT_005a9f78 + 3;
  DAT_005a9f78[1] = 5;
  puVar3[2] = puVar5;
  *puVar3 = 0;
  uVar2 = DAT_005a9f88;
  local_14 = &DAT_005a9f7c;
  local_18 = DAT_005a9f88;
  local_1c = s_EnemyKuLand_005a9f8c;
  local_20 = DAT_005a9f88;
  iVar4 = *piVar1;
  if (*piVar1 == 0) {
    iVar4 = DAT_005a9f98;
  }
  func_0019B51C(DAT_005a9fa4,DAT_005a9fa0,*DAT_005a9f9c,(int)&local_20,DAT_005a9f78,&local_18,iVar4)
  ;
  puVar3 = DAT_005a9fb0;
  DAT_005a9fb0[1] = &DAT_005a9fb4;
  *puVar3 = uVar2;
  puVar3[3] = &DAT_005a9fbc;
  puVar3[2] = uVar2;
  puVar3[5] = s_water_to_field_st_005a9fc0;
  puVar3[4] = uVar2;
  puVar3[7] = s_water_to_field_ed_005a9fd4;
  puVar3[6] = uVar2;
  puVar3[9] = s_damage_005a9fe8;
  puVar3[8] = uVar2;
  puVar3[0xb] = s_jitabata_005a9ff0;
  puVar3[10] = uVar2;
  puVar3[0xd] = s_piyopiyo_005a9ffc;
  puVar3[0xc] = uVar2;
  puVar3[0xe] = uVar2;
  puVar3[0xf] = &DAT_005aa008;
  local_28 = 0;
  local_27 = 0;
  local_26 = 0;
  local_24 = 0xff;
  local_25 = 0xff;
  puVar3 = func_004FC6FC(DAT_005aa014,0,1,0,0,(undefined4 *)&local_28,0xb);
  return CONCAT44(DAT_005aa018,puVar3);
}

