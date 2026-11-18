#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005bdbe8;
extern undefined4 *DAT_005bdbec;
extern undefined4 *DAT_005bdbf0;
extern undefined4 DAT_005bdc00;
extern undefined4 DAT_005bdc28;
extern undefined4 DAT_005bdc2c;
extern undefined4 *DAT_005bdc30;
extern undefined DAT_005bdc34;
extern undefined4 DAT_005bdc54;
extern undefined4 DAT_005bdc58;
extern undefined4 DAT_005bdc5c;
extern undefined4 *DAT_005bdc60;
extern undefined4 DAT_005bdc64;
extern undefined4 *DAT_005bdc68;
extern undefined4 *DAT_005bdc6c;
extern undefined4 DAT_005bdc70;
extern undefined4 DAT_005bdc74;
extern undefined4 DAT_005bdc78;
extern undefined DAT_005bdc7c;
extern undefined4 DAT_005bdca0;
extern uint *DAT_005bdca4;
extern undefined4 DAT_005bdca8;
extern undefined4 *DAT_005bdcac;
extern undefined4 DAT_005bdcb0;
extern char s_MiniGameRSMgr_005bdc90[];
extern char s_N_ArrowB_00_005bdc04[];
extern char s_N_ArrowL_00_005bdc10[];
extern char s_N_ArrowR_00_005bdc1c[];
extern char s_N_ArrowT_00_005bdbf4[];
extern char s_attack_005bdc3c[];
extern char s_attack_angry_005bdc44[];

// USA 005BDAA4 <- EU 005BDA7C (Ghidra, non-matching)
// GLOBAL DAT_005bdbe8 undefined4 *
// GLOBAL DAT_005bdbec undefined4 *
// GLOBAL DAT_005bdbf0 undefined4 *
// GLOBAL DAT_005bdc00 undefined4
// GLOBAL DAT_005bdc28 undefined4
// GLOBAL DAT_005bdc2c undefined4
// GLOBAL DAT_005bdc30 undefined4 *
// GLOBAL DAT_005bdc34 undefined
// GLOBAL DAT_005bdc54 undefined4
// GLOBAL DAT_005bdc58 undefined4
// GLOBAL DAT_005bdc5c undefined4
// GLOBAL DAT_005bdc60 undefined4 *
// GLOBAL DAT_005bdc64 undefined4
// GLOBAL DAT_005bdc68 undefined4 *
// GLOBAL DAT_005bdc6c undefined4 *
// GLOBAL DAT_005bdc70 undefined4
// GLOBAL DAT_005bdc74 undefined4
// GLOBAL DAT_005bdc78 undefined4
// GLOBAL DAT_005bdc7c undefined
// GLOBAL DAT_005bdca0 undefined4
// GLOBAL DAT_005bdca4 uint *
// GLOBAL DAT_005bdca8 undefined4
// GLOBAL DAT_005bdcac undefined4 *
// GLOBAL DAT_005bdcb0 undefined4
// GLOBAL s_MiniGameRSMgr_005bdc90 string
// GLOBAL s_N_ArrowB_00_005bdc04 string
// GLOBAL s_N_ArrowL_00_005bdc10 string
// GLOBAL s_N_ArrowR_00_005bdc1c string
// GLOBAL s_N_ArrowT_00_005bdbf4 string
// GLOBAL s_attack_005bdc3c string
// GLOBAL s_attack_angry_005bdc44 string

undefined8 func_005BDAA4(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define puStack_14 (*(undefined * *)(albw_frame + 0xc))
  #define uStack_10 (*(undefined4 *)(albw_frame + 0x10))
  #define local_c (*(char * *)(albw_frame + 0x14))
  puVar1 = DAT_005bdbe8;
  *DAT_005bdbe8 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  local_18 = DAT_005bdc00;
  puVar1 = DAT_005bdbec;
  *DAT_005bdbec = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005bdbf0;
  DAT_005bdbf0[1] = s_N_ArrowT_00_005bdbf4;
  *puVar1 = local_18;
  puVar1[3] = s_N_ArrowB_00_005bdc04;
  puVar1[2] = local_18;
  puVar1[5] = s_N_ArrowL_00_005bdc10;
  puVar1[4] = local_18;
  puVar1[6] = local_18;
  puVar1[7] = s_N_ArrowR_00_005bdc1c;
  puVar1 = DAT_005bdc30;
  DAT_005bdc30[1] = &DAT_005bdc34;
  *puVar1 = local_18;
  puVar1[3] = s_attack_005bdc3c;
  puVar1[2] = local_18;
  puVar1[4] = local_18;
  puVar1[5] = s_attack_angry_005bdc44;
  uVar4 = DAT_005bdc78;
  puVar1 = DAT_005bdc60;
  uVar2 = DAT_005bdc5c;
  uVar5 = DAT_005bdc58;
  *DAT_005bdc60 = DAT_005bdc64;
  uVar3 = DAT_005bdc74;
  puVar1[1] = uVar5;
  puVar1[2] = uVar2;
  puVar1 = DAT_005bdc68;
  *DAT_005bdc68 = uVar2;
  puVar1[1] = uVar5;
  puVar1[2] = uVar2;
  puVar1 = DAT_005bdc6c;
  *DAT_005bdc6c = DAT_005bdc70;
  puVar1[1] = uVar3;
  puVar1[2] = uVar4;
  puVar1[3] = uVar5;
  puVar1[4] = uVar5;
  puVar1[5] = uVar5;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[-0xae] = 0;
  puVar1[-0xad] = 5;
  puVar1[-0xac] = puVar1 + -0xab;
  puStack_14 = &DAT_005bdc7c;
  uStack_10 = local_18;
  local_c = s_MiniGameRSMgr_005bdc90;
  uVar5 = func_0019B51C(DAT_005bdcac,DAT_005bdca8,*DAT_005bdca4,(int)&uStack_10,DAT_005bdca0,
                        &local_18,0);
  return CONCAT44(DAT_005bdcb0,uVar5);
}

