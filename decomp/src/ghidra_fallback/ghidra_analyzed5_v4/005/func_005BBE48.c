#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern int func_004FC6FC(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4, undefined4 param_5,undefined4 *param_6,undefined4 param_7);
extern int *DAT_005bbfb4;
extern undefined4 *DAT_005bbfb8;
extern undefined DAT_005bbfbc;
extern undefined4 DAT_005bbfc4;
extern undefined DAT_005bbfd8;
extern undefined DAT_005bbfe0;
extern undefined DAT_005bc024;
extern undefined4 DAT_005bc02c;
extern undefined4 DAT_005bc030;
extern undefined4 *DAT_005bc034;
extern undefined4 DAT_005bc038;
extern undefined4 *DAT_005bc03c;
extern undefined DAT_005bc040;
extern int DAT_005bc060;
extern uint *DAT_005bc064;
extern undefined4 DAT_005bc068;
extern undefined4 *DAT_005bc06c;
extern undefined4 DAT_005bc070;
extern char s_EnemyLikeLike_005bc050[];
extern char s_belch_005bc01c[];
extern char s_damage_005bbfe4[];
extern char s_eat_ed_005bbfd0[];
extern char s_eat_st_005bbfc8[];
extern char s_jitabata_005bbff8[];
extern char s_piyopiyo_005bbfec[];
extern char s_swallow_ed_005bc010[];
extern char s_swallow_st_005bc004[];

// USA 005BBE48 <- EU 005BBE20 (Ghidra, non-matching)
// GLOBAL DAT_005bbfb4 int *
// GLOBAL DAT_005bbfb8 undefined4 *
// GLOBAL DAT_005bbfbc undefined
// GLOBAL DAT_005bbfc4 undefined4
// GLOBAL DAT_005bbfd8 undefined
// GLOBAL DAT_005bbfe0 undefined
// GLOBAL DAT_005bc024 undefined
// GLOBAL DAT_005bc02c undefined4
// GLOBAL DAT_005bc030 undefined4
// GLOBAL DAT_005bc034 undefined4 *
// GLOBAL DAT_005bc038 undefined4
// GLOBAL DAT_005bc03c undefined4 *
// GLOBAL DAT_005bc040 undefined
// GLOBAL DAT_005bc060 int
// GLOBAL DAT_005bc064 uint *
// GLOBAL DAT_005bc068 undefined4
// GLOBAL DAT_005bc06c undefined4 *
// GLOBAL DAT_005bc070 undefined4
// GLOBAL s_EnemyLikeLike_005bc050 string
// GLOBAL s_belch_005bc01c string
// GLOBAL s_damage_005bbfe4 string
// GLOBAL s_eat_ed_005bbfd0 string
// GLOBAL s_eat_st_005bbfc8 string
// GLOBAL s_jitabata_005bbff8 string
// GLOBAL s_piyopiyo_005bbfec string
// GLOBAL s_swallow_ed_005bc010 string
// GLOBAL s_swallow_st_005bc004 string

undefined8 func_005BBE48(void)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
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
  piVar1 = DAT_005bbfb4;
  DAT_005bbfb4[2] = -1;
  piVar1[3] = -1;
  uVar3 = DAT_005bbfc4;
  piVar1[4] = 0;
  piVar1[5] = 0;
  puVar2 = DAT_005bbfb8;
  DAT_005bbfb8[1] = &DAT_005bbfbc;
  *puVar2 = uVar3;
  puVar2[3] = s_eat_st_005bbfc8;
  puVar2[2] = uVar3;
  puVar2[5] = s_eat_ed_005bbfd0;
  puVar2[4] = uVar3;
  puVar2[7] = &DAT_005bbfd8;
  puVar2[6] = uVar3;
  puVar2[9] = &DAT_005bbfe0;
  puVar2[8] = uVar3;
  puVar2[0xb] = s_damage_005bbfe4;
  puVar2[10] = uVar3;
  puVar2[0xd] = s_piyopiyo_005bbfec;
  puVar2[0xc] = uVar3;
  puVar2[0xf] = s_jitabata_005bbff8;
  puVar2[0xe] = uVar3;
  puVar2[0x11] = s_swallow_st_005bc004;
  puVar2[0x10] = uVar3;
  puVar2[0x13] = s_swallow_ed_005bc010;
  puVar2[0x12] = uVar3;
  puVar2[0x15] = s_belch_005bc01c;
  puVar2[0x14] = uVar3;
  puVar2[0x16] = uVar3;
  puVar2[0x17] = &DAT_005bc024;
  local_28 = 0;
  local_27 = 0;
  local_26 = 0;
  local_24 = 0xff;
  local_25 = 0xff;
  func_004FC6FC(DAT_005bc034,0,0,0,0,(undefined4 *)&local_28,0xb);
  puVar2 = DAT_005bc03c;
  puVar5 = DAT_005bc03c + 3;
  DAT_005bc03c[1] = 5;
  puVar2[2] = puVar5;
  *puVar2 = 0;
  local_14 = &DAT_005bc040;
  local_18 = uVar3;
  local_1c = s_EnemyLikeLike_005bc050;
  local_20 = uVar3;
  iVar4 = *piVar1;
  if (*piVar1 == 0) {
    iVar4 = DAT_005bc060;
  }
  uVar3 = func_0019B51C(DAT_005bc06c,DAT_005bc068,*DAT_005bc064,(int)&local_20,DAT_005bc03c,
                        &local_18,iVar4);
  return CONCAT44(DAT_005bc070,uVar3);
}

