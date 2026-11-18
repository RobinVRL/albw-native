#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern int func_003C5604(int param_1);
extern int func_004FC6FC(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4, undefined4 param_5,undefined4 *param_6,undefined4 param_7);
extern int *DAT_005decbc;
extern undefined4 *DAT_005decc0;
extern undefined DAT_005decc4;
extern undefined4 DAT_005dece0;
extern int DAT_005decf8;
extern uint *DAT_005decfc;
extern undefined4 DAT_005ded00;
extern undefined4 *DAT_005ded04;
extern undefined4 DAT_005ded08;
extern undefined4 DAT_005ded0c;
extern undefined4 *DAT_005ded10;
extern undefined DAT_005ded14;
extern undefined DAT_005ded1c;
extern undefined DAT_005ded2c;
extern undefined4 DAT_005ded50;
extern undefined4 *DAT_005ded54;
extern undefined4 DAT_005ded68;
extern int DAT_005ded6c;
extern undefined4 *DAT_005ded70;
extern undefined4 DAT_005ded74;
extern char s_EnemyHinoxCharge_005dece4[];
extern char s_color_change_005ded58[];
extern char s_damage_005ded48[];
extern char s_run_ed_005ded30[];
extern char s_run_st_005ded24[];
extern char s_turn_l_005ded38[];
extern char s_turn_r_005ded40[];

// USA 005DEB50 <- EU 005DEB28 (Ghidra, non-matching)
// GLOBAL DAT_005decbc int *
// GLOBAL DAT_005decc0 undefined4 *
// GLOBAL DAT_005decc4 undefined
// GLOBAL DAT_005dece0 undefined4
// GLOBAL DAT_005decf8 int
// GLOBAL DAT_005decfc uint *
// GLOBAL DAT_005ded00 undefined4
// GLOBAL DAT_005ded04 undefined4 *
// GLOBAL DAT_005ded08 undefined4
// GLOBAL DAT_005ded0c undefined4
// GLOBAL DAT_005ded10 undefined4 *
// GLOBAL DAT_005ded14 undefined
// GLOBAL DAT_005ded1c undefined
// GLOBAL DAT_005ded2c undefined
// GLOBAL DAT_005ded50 undefined4
// GLOBAL DAT_005ded54 undefined4 *
// GLOBAL DAT_005ded68 undefined4
// GLOBAL DAT_005ded6c int
// GLOBAL DAT_005ded70 undefined4 *
// GLOBAL DAT_005ded74 undefined4
// GLOBAL s_EnemyHinoxCharge_005dece4 string
// GLOBAL s_color_change_005ded58 string
// GLOBAL s_damage_005ded48 string
// GLOBAL s_run_ed_005ded30 string
// GLOBAL s_run_st_005ded24 string
// GLOBAL s_turn_l_005ded38 string
// GLOBAL s_turn_r_005ded40 string

undefined8 func_005DEB50(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
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
  piVar1 = DAT_005decbc;
  DAT_005decbc[2] = -1;
  piVar1[3] = -1;
  piVar1[4] = 0;
  piVar1[5] = 0;
  uVar2 = DAT_005dece0;
  puVar4 = DAT_005decc0;
  DAT_005decc0[2] = DAT_005decc0 + 3;
  puVar4[1] = 5;
  *puVar4 = 0;
  local_14 = &DAT_005decc4;
  local_18 = uVar2;
  local_1c = s_EnemyHinoxCharge_005dece4;
  local_20 = uVar2;
  iVar3 = *piVar1;
  if (*piVar1 == 0) {
    iVar3 = DAT_005decf8;
  }
  func_0019B51C(DAT_005ded04,DAT_005ded00,*DAT_005decfc,(int)&local_20,DAT_005decc0,&local_18,iVar3)
  ;
  puVar4 = DAT_005ded10;
  DAT_005ded10[1] = &DAT_005ded14;
  *puVar4 = uVar2;
  puVar4[3] = &DAT_005ded1c;
  puVar4[2] = uVar2;
  puVar4[5] = s_run_st_005ded24;
  puVar4[4] = uVar2;
  puVar4[7] = &DAT_005ded2c;
  puVar4[6] = uVar2;
  puVar4[9] = s_run_ed_005ded30;
  puVar4[8] = uVar2;
  puVar4[0xb] = s_turn_l_005ded38;
  puVar4[10] = uVar2;
  puVar4[0xd] = s_turn_r_005ded40;
  puVar4[0xc] = uVar2;
  puVar4[0xe] = uVar2;
  puVar4[0xf] = s_damage_005ded48;
  puVar4 = DAT_005ded54;
  DAT_005ded54[1] = s_color_change_005ded58;
  *puVar4 = uVar2;
  iVar3 = func_003C5604(DAT_005ded6c);
  piVar1[1] = iVar3;
  local_28 = 0;
  local_27 = 0;
  local_26 = 0;
  local_24 = 0xff;
  local_25 = 0xff;
  puVar4 = func_004FC6FC(DAT_005ded70,0,1,0,0,(undefined4 *)&local_28,0xb);
  return CONCAT44(DAT_005ded74,puVar4);
}

