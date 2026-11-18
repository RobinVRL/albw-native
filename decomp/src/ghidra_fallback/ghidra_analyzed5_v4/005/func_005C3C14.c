#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern int func_004FC6FC(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4, undefined4 param_5,undefined4 *param_6,undefined4 param_7);
extern int *DAT_005c3dac;
extern int *DAT_005c3db0;
extern undefined DAT_005c3db4;
extern int DAT_005c3dbc;
extern undefined DAT_005c3dd0;
extern undefined DAT_005c3dd8;
extern undefined4 DAT_005c3e18;
extern undefined4 DAT_005c3e1c;
extern undefined4 *DAT_005c3e20;
extern undefined4 DAT_005c3e24;
extern undefined4 DAT_005c3e30;
extern undefined4 *DAT_005c3e40;
extern undefined DAT_005c3e44;
extern int DAT_005c3e64;
extern uint *DAT_005c3e68;
extern undefined4 DAT_005c3e6c;
extern undefined4 *DAT_005c3e70;
extern undefined4 DAT_005c3e74;
extern char s_EnemyRupeeLike_005c3e54[];
extern char s_RupeeSilver_005c3e34[];
extern char s_appearance_005c3dfc[];
extern char s_damage_005c3ddc[];
extern char s_dead_ed_005c3e10[];
extern char s_dead_st_005c3e08[];
extern char s_eat_ed_005c3dc8[];
extern char s_eat_st_005c3dc0[];
extern char s_jitabata_005c3df0[];
extern char s_piyopiyo_005c3de4[];
extern char s_twinkle_005c3e28[];

// USA 005C3C14 <- EU 005C3BEC (Ghidra, non-matching)
// GLOBAL DAT_005c3dac int *
// GLOBAL DAT_005c3db0 int *
// GLOBAL DAT_005c3db4 undefined
// GLOBAL DAT_005c3dbc int
// GLOBAL DAT_005c3dd0 undefined
// GLOBAL DAT_005c3dd8 undefined
// GLOBAL DAT_005c3e18 undefined4
// GLOBAL DAT_005c3e1c undefined4
// GLOBAL DAT_005c3e20 undefined4 *
// GLOBAL DAT_005c3e24 undefined4
// GLOBAL DAT_005c3e30 undefined4
// GLOBAL DAT_005c3e40 undefined4 *
// GLOBAL DAT_005c3e44 undefined
// GLOBAL DAT_005c3e64 int
// GLOBAL DAT_005c3e68 uint *
// GLOBAL DAT_005c3e6c undefined4
// GLOBAL DAT_005c3e70 undefined4 *
// GLOBAL DAT_005c3e74 undefined4
// GLOBAL s_EnemyRupeeLike_005c3e54 string
// GLOBAL s_RupeeSilver_005c3e34 string
// GLOBAL s_appearance_005c3dfc string
// GLOBAL s_damage_005c3ddc string
// GLOBAL s_dead_ed_005c3e10 string
// GLOBAL s_dead_st_005c3e08 string
// GLOBAL s_eat_ed_005c3dc8 string
// GLOBAL s_eat_st_005c3dc0 string
// GLOBAL s_jitabata_005c3df0 string
// GLOBAL s_piyopiyo_005c3de4 string
// GLOBAL s_twinkle_005c3e28 string

undefined8 func_005C3C14(void)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(undefined1 *)(albw_frame + 0x8))
  #define local_27 (*(undefined1 *)(albw_frame + 0x9))
  #define local_26 (*(undefined1 *)(albw_frame + 0xa))
  #define local_25 (*(undefined1 *)(albw_frame + 0xb))
  #define local_24 (*(undefined1 *)(albw_frame + 0xc))
  #define local_20 (*(int *)(albw_frame + 0x10))
  #define local_1c (*(char * *)(albw_frame + 0x14))
  #define local_18 (*(int *)(albw_frame + 0x18))
  #define local_14 (*(undefined * *)(albw_frame + 0x1c))
  piVar1 = DAT_005c3dac;
  DAT_005c3dac[2] = -1;
  piVar1[3] = -1;
  iVar5 = DAT_005c3dbc;
  piVar1[4] = 0;
  piVar1[5] = 0;
  piVar2 = DAT_005c3db0;
  DAT_005c3db0[1] = (int)&DAT_005c3db4;
  *piVar2 = iVar5;
  piVar2[3] = (int)s_eat_st_005c3dc0;
  piVar2[2] = iVar5;
  piVar2[5] = (int)s_eat_ed_005c3dc8;
  piVar2[4] = iVar5;
  piVar2[7] = (int)&DAT_005c3dd0;
  piVar2[6] = iVar5;
  piVar2[9] = (int)&DAT_005c3dd8;
  piVar2[8] = iVar5;
  piVar2[0xb] = (int)s_damage_005c3ddc;
  piVar2[10] = iVar5;
  piVar2[0xd] = (int)s_piyopiyo_005c3de4;
  piVar2[0xc] = iVar5;
  piVar2[0xf] = (int)s_jitabata_005c3df0;
  piVar2[0xe] = iVar5;
  piVar2[0x11] = (int)s_appearance_005c3dfc;
  piVar2[0x10] = iVar5;
  piVar2[0x13] = (int)s_dead_st_005c3e08;
  piVar2[0x12] = iVar5;
  piVar2[0x14] = iVar5;
  piVar2[0x15] = (int)s_dead_ed_005c3e10;
  local_28 = 0;
  local_27 = 0;
  local_26 = 0;
  local_24 = 0xff;
  local_25 = 0xff;
  func_004FC6FC(DAT_005c3e20,0,0,0,0,(undefined4 *)&local_28,0xb);
  piVar1[7] = (int)s_twinkle_005c3e28;
  piVar1[6] = iVar5;
  piVar1[9] = (int)s_RupeeSilver_005c3e34;
  piVar1[8] = iVar5;
  puVar3 = DAT_005c3e40;
  puVar6 = DAT_005c3e40 + 3;
  DAT_005c3e40[1] = 5;
  puVar3[2] = puVar6;
  *puVar3 = 0;
  local_14 = &DAT_005c3e44;
  local_18 = iVar5;
  local_1c = s_EnemyRupeeLike_005c3e54;
  local_20 = iVar5;
  iVar5 = *piVar1;
  if (*piVar1 == 0) {
    iVar5 = DAT_005c3e64;
  }
  uVar4 = func_0019B51C(DAT_005c3e70,DAT_005c3e6c,*DAT_005c3e68,(int)&local_20,DAT_005c3e40,
                        &local_18,iVar5);
  return CONCAT44(DAT_005c3e74,uVar4);
}

