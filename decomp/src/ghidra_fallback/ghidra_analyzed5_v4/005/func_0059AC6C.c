#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern int func_004FC6FC(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4, undefined4 param_5,undefined4 *param_6,undefined4 param_7);
extern int *DAT_0059afcc;
extern undefined4 *DAT_0059afd0;
extern undefined4 DAT_0059afe0;
extern undefined4 DAT_0059b008;
extern undefined4 DAT_0059b00c;
extern undefined4 *DAT_0059b010;
extern uint DAT_0059b048;
extern uint DAT_0059b04c;
extern uint DAT_0059b050;
extern uint DAT_0059b054;
extern uint DAT_0059b058;
extern undefined4 *DAT_0059b05c;
extern undefined4 DAT_0059b060;
extern undefined4 *DAT_0059b064;
extern undefined DAT_0059b068;
extern int DAT_0059b088;
extern uint *DAT_0059b08c;
extern undefined4 DAT_0059b090;
extern undefined4 *DAT_0059b094;
extern undefined4 DAT_0059b098;
extern undefined4 *DAT_0059b09c;
extern undefined DAT_0059b0a0;
extern int DAT_0059b0c0;
extern uint *DAT_0059b0c4;
extern undefined4 DAT_0059b0c8;
extern undefined4 *DAT_0059b0cc;
extern undefined4 *DAT_0059b0d0;
extern undefined DAT_0059b0d4;
extern int DAT_0059b0e8;
extern uint *DAT_0059b0ec;
extern undefined4 DAT_0059b0f0;
extern undefined4 *DAT_0059b0f4;
extern undefined4 *DAT_0059b0f8;
extern undefined DAT_0059b0fc;
extern int DAT_0059b110;
extern uint *DAT_0059b114;
extern undefined4 DAT_0059b118;
extern undefined4 *DAT_0059b11c;
extern undefined4 *DAT_0059b120;
extern undefined DAT_0059b124;
extern int DAT_0059b144;
extern uint *DAT_0059b148;
extern undefined4 DAT_0059b14c;
extern undefined4 *DAT_0059b150;
extern char s_EnemyForestPoe_0059b0b0[];
extern char s_EnemyGhini_0059b104[];
extern char s_EnemyGraveyardPoe_0059b074[];
extern char s_EnemyHyu_0059b0dc[];
extern char s_EnemyLightGhini_0059b134[];
extern char s_N_ArrowB_00_0059afe4[];
extern char s_N_ArrowL_00_0059aff0[];
extern char s_N_ArrowR_00_0059affc[];
extern char s_N_ArrowT_00_0059afd4[];
extern char s_appeal00_0059b01c[];
extern char s_damage00_0059b034[];
extern char s_dead00_0059b040[];
extern char s_move00_0059b014[];
extern char s_piyopiyo00_0059b028[];

// USA 0059AC6C <- EU 0059AC44 (Ghidra, non-matching)
// GLOBAL DAT_0059afcc int *
// GLOBAL DAT_0059afd0 undefined4 *
// GLOBAL DAT_0059afe0 undefined4
// GLOBAL DAT_0059b008 undefined4
// GLOBAL DAT_0059b00c undefined4
// GLOBAL DAT_0059b010 undefined4 *
// GLOBAL DAT_0059b048 uint
// GLOBAL DAT_0059b04c uint
// GLOBAL DAT_0059b050 uint
// GLOBAL DAT_0059b054 uint
// GLOBAL DAT_0059b058 uint
// GLOBAL DAT_0059b05c undefined4 *
// GLOBAL DAT_0059b060 undefined4
// GLOBAL DAT_0059b064 undefined4 *
// GLOBAL DAT_0059b068 undefined
// GLOBAL DAT_0059b088 int
// GLOBAL DAT_0059b08c uint *
// GLOBAL DAT_0059b090 undefined4
// GLOBAL DAT_0059b094 undefined4 *
// GLOBAL DAT_0059b098 undefined4
// GLOBAL DAT_0059b09c undefined4 *
// GLOBAL DAT_0059b0a0 undefined
// GLOBAL DAT_0059b0c0 int
// GLOBAL DAT_0059b0c4 uint *
// GLOBAL DAT_0059b0c8 undefined4
// GLOBAL DAT_0059b0cc undefined4 *
// GLOBAL DAT_0059b0d0 undefined4 *
// GLOBAL DAT_0059b0d4 undefined
// GLOBAL DAT_0059b0e8 int
// GLOBAL DAT_0059b0ec uint *
// GLOBAL DAT_0059b0f0 undefined4
// GLOBAL DAT_0059b0f4 undefined4 *
// GLOBAL DAT_0059b0f8 undefined4 *
// GLOBAL DAT_0059b0fc undefined
// GLOBAL DAT_0059b110 int
// GLOBAL DAT_0059b114 uint *
// GLOBAL DAT_0059b118 undefined4
// GLOBAL DAT_0059b11c undefined4 *
// GLOBAL DAT_0059b120 undefined4 *
// GLOBAL DAT_0059b124 undefined
// GLOBAL DAT_0059b144 int
// GLOBAL DAT_0059b148 uint *
// GLOBAL DAT_0059b14c undefined4
// GLOBAL DAT_0059b150 undefined4 *
// GLOBAL s_EnemyForestPoe_0059b0b0 string
// GLOBAL s_EnemyGhini_0059b104 string
// GLOBAL s_EnemyGraveyardPoe_0059b074 string
// GLOBAL s_EnemyHyu_0059b0dc string
// GLOBAL s_EnemyLightGhini_0059b134 string
// GLOBAL s_N_ArrowB_00_0059afe4 string
// GLOBAL s_N_ArrowL_00_0059aff0 string
// GLOBAL s_N_ArrowR_00_0059affc string
// GLOBAL s_N_ArrowT_00_0059afd4 string
// GLOBAL s_appeal00_0059b01c string
// GLOBAL s_damage00_0059b034 string
// GLOBAL s_dead00_0059b040 string
// GLOBAL s_move00_0059b014 string
// GLOBAL s_piyopiyo00_0059b028 string

undefined8 func_0059AC6C(void)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define local_68 (*(undefined1 *)(albw_frame + 0x8))
  #define local_67 (*(undefined1 *)(albw_frame + 0x9))
  #define local_66 (*(undefined1 *)(albw_frame + 0xa))
  #define local_65 (*(undefined1 *)(albw_frame + 0xb))
  #define local_64 (*(undefined1 *)(albw_frame + 0xc))
  #define local_60 (*(undefined4 *)(albw_frame + 0x10))
  #define local_5c (*(char * *)(albw_frame + 0x14))
  #define local_58 (*(undefined4 *)(albw_frame + 0x18))
  #define local_54 (*(undefined * *)(albw_frame + 0x1c))
  #define local_50 (*(undefined4 *)(albw_frame + 0x20))
  #define local_4c (*(char * *)(albw_frame + 0x24))
  #define local_48 (*(undefined4 *)(albw_frame + 0x28))
  #define local_44 (*(undefined * *)(albw_frame + 0x2c))
  #define local_40 (*(undefined4 *)(albw_frame + 0x30))
  #define local_3c (*(char * *)(albw_frame + 0x34))
  #define local_38 (*(undefined4 *)(albw_frame + 0x38))
  #define local_34 (*(undefined * *)(albw_frame + 0x3c))
  #define local_30 (*(undefined4 *)(albw_frame + 0x40))
  #define local_2c (*(char * *)(albw_frame + 0x44))
  #define local_28 (*(undefined4 *)(albw_frame + 0x48))
  #define local_24 (*(undefined * *)(albw_frame + 0x4c))
  #define local_20 (*(undefined4 *)(albw_frame + 0x50))
  #define local_1c (*(char * *)(albw_frame + 0x54))
  #define local_18 (*(undefined4 *)(albw_frame + 0x58))
  #define local_14 (*(undefined * *)(albw_frame + 0x5c))
  piVar1 = DAT_0059afcc;
  DAT_0059afcc[10] = -1;
  piVar1[0xb] = -1;
  uVar3 = DAT_0059afe0;
  piVar1[0xc] = 0;
  piVar1[0xd] = 0;
  puVar2 = DAT_0059afd0;
  DAT_0059afd0[1] = s_N_ArrowT_00_0059afd4;
  *puVar2 = uVar3;
  puVar2[3] = s_N_ArrowB_00_0059afe4;
  puVar2[2] = uVar3;
  puVar2[5] = s_N_ArrowL_00_0059aff0;
  puVar2[4] = uVar3;
  puVar2[6] = uVar3;
  puVar2[7] = s_N_ArrowR_00_0059affc;
  puVar2 = DAT_0059b010;
  DAT_0059b010[1] = s_move00_0059b014;
  *puVar2 = uVar3;
  puVar2[3] = s_appeal00_0059b01c;
  puVar2[2] = uVar3;
  puVar2[5] = s_piyopiyo00_0059b028;
  puVar2[4] = uVar3;
  puVar2[7] = s_damage00_0059b034;
  puVar2[6] = uVar3;
  puVar2[8] = uVar3;
  puVar2[9] = s_dead00_0059b040;
  uVar6 = func_00114608(DAT_0059b04c,DAT_0059b048);
  piVar1[5] = (int)uVar6;
  uVar6 = func_00114608(DAT_0059b050,(uint)((ulonglong)uVar6 >> 0x20));
  piVar1[6] = (int)uVar6;
  uVar6 = func_00114608(DAT_0059b054,(uint)((ulonglong)uVar6 >> 0x20));
  piVar1[7] = (int)uVar6;
  uVar6 = func_00114608(DAT_0059b058,(uint)((ulonglong)uVar6 >> 0x20));
  piVar1[8] = (int)uVar6;
  local_68 = 0;
  local_67 = 0;
  local_66 = 0;
  local_64 = 0xff;
  local_65 = 0xff;
  func_004FC6FC(DAT_0059b05c,0,0,0,0,(undefined4 *)&local_68,0xb);
  puVar2 = DAT_0059b064;
  puVar5 = DAT_0059b064 + 3;
  DAT_0059b064[1] = 5;
  puVar2[2] = puVar5;
  *puVar2 = 0;
  local_54 = &DAT_0059b068;
  local_58 = uVar3;
  local_5c = s_EnemyGraveyardPoe_0059b074;
  local_60 = uVar3;
  iVar4 = *piVar1;
  if (*piVar1 == 0) {
    iVar4 = DAT_0059b088;
  }
  func_0019B51C(DAT_0059b094,DAT_0059b090,*DAT_0059b08c,(int)&local_60,DAT_0059b064,&local_58,iVar4)
  ;
  puVar2 = DAT_0059b09c;
  puVar5 = DAT_0059b09c + 3;
  DAT_0059b09c[1] = 5;
  puVar2[2] = puVar5;
  *puVar2 = 0;
  local_44 = &DAT_0059b0a0;
  local_48 = uVar3;
  local_4c = s_EnemyForestPoe_0059b0b0;
  local_50 = uVar3;
  iVar4 = piVar1[1];
  if (piVar1[1] == 0) {
    iVar4 = DAT_0059b0c0;
  }
  func_0019B51C(DAT_0059b0cc,DAT_0059b0c8,*DAT_0059b0c4,(int)&local_50,DAT_0059b09c,&local_48,iVar4)
  ;
  puVar2 = DAT_0059b0d0;
  puVar5 = DAT_0059b0d0 + 3;
  DAT_0059b0d0[1] = 5;
  puVar2[2] = puVar5;
  *puVar2 = 0;
  local_34 = &DAT_0059b0d4;
  local_38 = uVar3;
  local_3c = s_EnemyHyu_0059b0dc;
  local_40 = uVar3;
  iVar4 = piVar1[2];
  if (piVar1[2] == 0) {
    iVar4 = DAT_0059b0e8;
  }
  func_0019B51C(DAT_0059b0f4,DAT_0059b0f0,*DAT_0059b0ec,(int)&local_40,DAT_0059b0d0,&local_38,iVar4)
  ;
  puVar2 = DAT_0059b0f8;
  puVar5 = DAT_0059b0f8 + 3;
  DAT_0059b0f8[1] = 5;
  puVar2[2] = puVar5;
  *puVar2 = 0;
  local_24 = &DAT_0059b0fc;
  local_28 = uVar3;
  local_2c = s_EnemyGhini_0059b104;
  local_30 = uVar3;
  iVar4 = piVar1[3];
  if (piVar1[3] == 0) {
    iVar4 = DAT_0059b110;
  }
  func_0019B51C(DAT_0059b11c,DAT_0059b118,*DAT_0059b114,(int)&local_30,DAT_0059b0f8,&local_28,iVar4)
  ;
  puVar2 = DAT_0059b120;
  DAT_0059b120[2] = DAT_0059b120 + 3;
  puVar2[1] = 5;
  *puVar2 = 0;
  local_14 = &DAT_0059b124;
  local_18 = uVar3;
  local_1c = s_EnemyLightGhini_0059b134;
  local_20 = uVar3;
  iVar4 = piVar1[4];
  if (piVar1[4] == 0) {
    iVar4 = DAT_0059b144;
  }
  uVar3 = func_0019B51C(DAT_0059b150,DAT_0059b14c,*DAT_0059b148,(int)&local_20,DAT_0059b120,
                        &local_18,iVar4);
  return CONCAT44(DAT_0059b098,uVar3);
}

