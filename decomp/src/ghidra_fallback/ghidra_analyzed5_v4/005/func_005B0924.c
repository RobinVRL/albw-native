#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern int func_004FC6FC(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4, undefined4 param_5,undefined4 *param_6,undefined4 param_7);
extern int *DAT_005b0af4;
extern undefined4 *DAT_005b0af8;
extern undefined DAT_005b0afc;
extern undefined4 DAT_005b0b04;
extern undefined DAT_005b0b08;
extern undefined4 DAT_005b0b58;
extern uint DAT_005b0b5c;
extern uint DAT_005b0b60;
extern undefined4 *DAT_005b0b64;
extern undefined4 DAT_005b0b68;
extern undefined4 *DAT_005b0b6c;
extern undefined DAT_005b0b70;
extern int DAT_005b0b90;
extern uint *DAT_005b0b94;
extern undefined4 DAT_005b0b98;
extern undefined4 *DAT_005b0b9c;
extern undefined4 DAT_005b0ba0;
extern undefined4 *DAT_005b0ba4;
extern undefined DAT_005b0ba8;
extern int DAT_005b0bc0;
extern uint *DAT_005b0bc4;
extern undefined4 *DAT_005b0bc8;
extern char s_EnemyOctorok_005b0b80[];
extern char s_EnemySlarok_005b0bb4[];
extern char s_attack_ed_005b0b1c[];
extern char s_attack_st_005b0b10[];
extern char s_damage_005b0b28[];
extern char s_dead_ed_005b0b50[];
extern char s_dead_st_005b0b48[];
extern char s_jitabata_005b0b30[];
extern char s_piyopiyo_005b0b3c[];

// USA 005B0924 <- EU 005B08FC (Ghidra, non-matching)
// GLOBAL DAT_005b0af4 int *
// GLOBAL DAT_005b0af8 undefined4 *
// GLOBAL DAT_005b0afc undefined
// GLOBAL DAT_005b0b04 undefined4
// GLOBAL DAT_005b0b08 undefined
// GLOBAL DAT_005b0b58 undefined4
// GLOBAL DAT_005b0b5c uint
// GLOBAL DAT_005b0b60 uint
// GLOBAL DAT_005b0b64 undefined4 *
// GLOBAL DAT_005b0b68 undefined4
// GLOBAL DAT_005b0b6c undefined4 *
// GLOBAL DAT_005b0b70 undefined
// GLOBAL DAT_005b0b90 int
// GLOBAL DAT_005b0b94 uint *
// GLOBAL DAT_005b0b98 undefined4
// GLOBAL DAT_005b0b9c undefined4 *
// GLOBAL DAT_005b0ba0 undefined4
// GLOBAL DAT_005b0ba4 undefined4 *
// GLOBAL DAT_005b0ba8 undefined
// GLOBAL DAT_005b0bc0 int
// GLOBAL DAT_005b0bc4 uint *
// GLOBAL DAT_005b0bc8 undefined4 *
// GLOBAL s_EnemyOctorok_005b0b80 string
// GLOBAL s_EnemySlarok_005b0bb4 string
// GLOBAL s_attack_ed_005b0b1c string
// GLOBAL s_attack_st_005b0b10 string
// GLOBAL s_damage_005b0b28 string
// GLOBAL s_dead_ed_005b0b50 string
// GLOBAL s_dead_st_005b0b48 string
// GLOBAL s_jitabata_005b0b30 string
// GLOBAL s_piyopiyo_005b0b3c string

undefined8 func_005B0924(void)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(undefined1 *)(albw_frame + 0x8))
  #define local_37 (*(undefined1 *)(albw_frame + 0x9))
  #define local_36 (*(undefined1 *)(albw_frame + 0xa))
  #define local_35 (*(undefined1 *)(albw_frame + 0xb))
  #define local_34 (*(undefined1 *)(albw_frame + 0xc))
  #define local_30 (*(undefined4 *)(albw_frame + 0x10))
  #define local_2c (*(char * *)(albw_frame + 0x14))
  #define local_28 (*(undefined4 *)(albw_frame + 0x18))
  #define local_24 (*(undefined * *)(albw_frame + 0x1c))
  #define local_20 (*(undefined4 *)(albw_frame + 0x20))
  #define local_1c (*(char * *)(albw_frame + 0x24))
  #define local_18 (*(undefined4 *)(albw_frame + 0x28))
  #define local_14 (*(undefined * *)(albw_frame + 0x2c))
  piVar1 = DAT_005b0af4;
  DAT_005b0af4[4] = -1;
  piVar1[5] = -1;
  uVar3 = DAT_005b0b04;
  piVar1[6] = 0;
  piVar1[7] = 0;
  puVar2 = DAT_005b0af8;
  DAT_005b0af8[1] = &DAT_005b0afc;
  *puVar2 = uVar3;
  puVar2[3] = &DAT_005b0b08;
  puVar2[2] = uVar3;
  puVar2[5] = s_attack_st_005b0b10;
  puVar2[4] = uVar3;
  puVar2[7] = s_attack_ed_005b0b1c;
  puVar2[6] = uVar3;
  puVar2[9] = s_damage_005b0b28;
  puVar2[8] = uVar3;
  puVar2[0xb] = s_jitabata_005b0b30;
  puVar2[10] = uVar3;
  puVar2[0xd] = s_piyopiyo_005b0b3c;
  puVar2[0xc] = uVar3;
  puVar2[0xf] = s_dead_st_005b0b48;
  puVar2[0xe] = uVar3;
  puVar2[0x10] = uVar3;
  puVar2[0x11] = s_dead_ed_005b0b50;
  uVar6 = func_00114608(DAT_005b0b60,DAT_005b0b5c);
  piVar1[2] = (int)uVar6;
  piVar1[3] = (int)uVar6;
  local_38 = 0;
  local_37 = 0;
  local_36 = 0;
  local_34 = 0xff;
  local_35 = 0xff;
  func_004FC6FC(DAT_005b0b64,0,1,0,0,(undefined4 *)&local_38,0xb);
  puVar2 = DAT_005b0b6c;
  puVar5 = DAT_005b0b6c + 3;
  DAT_005b0b6c[1] = 5;
  puVar2[2] = puVar5;
  *puVar2 = 0;
  local_24 = &DAT_005b0b70;
  local_28 = uVar3;
  local_2c = s_EnemyOctorok_005b0b80;
  local_30 = uVar3;
  iVar4 = *piVar1;
  if (*piVar1 == 0) {
    iVar4 = DAT_005b0b90;
  }
  func_0019B51C(DAT_005b0b9c,DAT_005b0b98,*DAT_005b0b94,(int)&local_30,DAT_005b0b6c,&local_28,iVar4)
  ;
  puVar2 = DAT_005b0ba4;
  puVar5 = DAT_005b0ba4 + 3;
  DAT_005b0ba4[1] = 5;
  puVar2[2] = puVar5;
  *puVar2 = 0;
  local_14 = &DAT_005b0ba8;
  local_18 = uVar3;
  local_1c = s_EnemySlarok_005b0bb4;
  local_20 = uVar3;
  iVar4 = piVar1[1];
  if (piVar1[1] == 0) {
    iVar4 = DAT_005b0bc0;
  }
  uVar3 = func_0019B51C(DAT_005b0bc8,DAT_005b0b98,*DAT_005b0bc4,(int)&local_20,DAT_005b0ba4,
                        &local_18,iVar4);
  return CONCAT44(DAT_005b0ba0,uVar3);
}

