#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern int func_004FC6FC(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4, undefined4 param_5,undefined4 *param_6,undefined4 param_7);
extern int *DAT_005b0824;
extern undefined4 *DAT_005b0828;
extern undefined DAT_005b082c;
extern undefined4 DAT_005b083c;
extern int DAT_005b0850;
extern uint *DAT_005b0854;
extern undefined4 DAT_005b0858;
extern undefined4 *DAT_005b085c;
extern undefined4 DAT_005b0860;
extern undefined4 DAT_005b0864;
extern undefined4 *DAT_005b0868;
extern undefined DAT_005b086c;
extern undefined DAT_005b0874;
extern undefined DAT_005b08e8;
extern undefined4 DAT_005b08f0;
extern undefined4 *DAT_005b08f4;
extern undefined4 DAT_005b08f8;
extern char s_EnemyKuChase_005b0840[];
extern char s_damage_005b08c8[];
extern char s_field_to_water_ed_005b088c[];
extern char s_field_to_water_st_005b0878[];
extern char s_jitabata_005b08d0[];
extern char s_piyopiyo_005b08dc[];
extern char s_water_to_field_ed_005b08b4[];
extern char s_water_to_field_st_005b08a0[];

// USA 005B06D0 <- EU 005B06A8 (Ghidra, non-matching)
// GLOBAL DAT_005b0824 int *
// GLOBAL DAT_005b0828 undefined4 *
// GLOBAL DAT_005b082c undefined
// GLOBAL DAT_005b083c undefined4
// GLOBAL DAT_005b0850 int
// GLOBAL DAT_005b0854 uint *
// GLOBAL DAT_005b0858 undefined4
// GLOBAL DAT_005b085c undefined4 *
// GLOBAL DAT_005b0860 undefined4
// GLOBAL DAT_005b0864 undefined4
// GLOBAL DAT_005b0868 undefined4 *
// GLOBAL DAT_005b086c undefined
// GLOBAL DAT_005b0874 undefined
// GLOBAL DAT_005b08e8 undefined
// GLOBAL DAT_005b08f0 undefined4
// GLOBAL DAT_005b08f4 undefined4 *
// GLOBAL DAT_005b08f8 undefined4
// GLOBAL s_EnemyKuChase_005b0840 string
// GLOBAL s_damage_005b08c8 string
// GLOBAL s_field_to_water_ed_005b088c string
// GLOBAL s_field_to_water_st_005b0878 string
// GLOBAL s_jitabata_005b08d0 string
// GLOBAL s_piyopiyo_005b08dc string
// GLOBAL s_water_to_field_ed_005b08b4 string
// GLOBAL s_water_to_field_st_005b08a0 string

undefined8 func_005B06D0(void)

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
  piVar1 = DAT_005b0824;
  DAT_005b0824[2] = -1;
  piVar1[3] = -1;
  piVar1[4] = 0;
  piVar1[5] = 0;
  puVar3 = DAT_005b0828;
  puVar5 = DAT_005b0828 + 3;
  DAT_005b0828[1] = 5;
  puVar3[2] = puVar5;
  *puVar3 = 0;
  uVar2 = DAT_005b083c;
  local_14 = &DAT_005b082c;
  local_18 = DAT_005b083c;
  local_1c = s_EnemyKuChase_005b0840;
  local_20 = DAT_005b083c;
  iVar4 = *piVar1;
  if (*piVar1 == 0) {
    iVar4 = DAT_005b0850;
  }
  func_0019B51C(DAT_005b085c,DAT_005b0858,*DAT_005b0854,(int)&local_20,DAT_005b0828,&local_18,iVar4)
  ;
  puVar3 = DAT_005b0868;
  DAT_005b0868[1] = &DAT_005b086c;
  *puVar3 = uVar2;
  puVar3[3] = &DAT_005b0874;
  puVar3[2] = uVar2;
  puVar3[5] = s_field_to_water_st_005b0878;
  puVar3[4] = uVar2;
  puVar3[7] = s_field_to_water_ed_005b088c;
  puVar3[6] = uVar2;
  puVar3[9] = s_water_to_field_st_005b08a0;
  puVar3[8] = uVar2;
  puVar3[0xb] = s_water_to_field_ed_005b08b4;
  puVar3[10] = uVar2;
  puVar3[0xd] = s_damage_005b08c8;
  puVar3[0xc] = uVar2;
  puVar3[0xf] = s_jitabata_005b08d0;
  puVar3[0xe] = uVar2;
  puVar3[0x11] = s_piyopiyo_005b08dc;
  puVar3[0x10] = uVar2;
  puVar3[0x12] = uVar2;
  puVar3[0x13] = &DAT_005b08e8;
  local_28 = 0;
  local_27 = 0;
  local_26 = 0;
  local_24 = 0xff;
  local_25 = 0xff;
  puVar3 = func_004FC6FC(DAT_005b08f4,0,1,0,0,(undefined4 *)&local_28,0xb);
  return CONCAT44(DAT_005b08f8,puVar3);
}

