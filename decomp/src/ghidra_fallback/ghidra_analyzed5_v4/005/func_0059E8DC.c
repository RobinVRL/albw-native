#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined1 *DAT_0059ec04;
extern undefined4 *DAT_0059ec08;
extern undefined4 *DAT_0059ec0c;
extern undefined4 DAT_0059ec1c;
extern undefined4 DAT_0059ec44;
extern undefined4 DAT_0059ec48;
extern undefined4 *DAT_0059ec4c;
extern undefined4 DAT_0059ec5c;
extern undefined4 *DAT_0059ec60;
extern undefined4 *DAT_0059ec70;
extern undefined DAT_0059ec74;
extern undefined DAT_0059ec7c;
extern undefined DAT_0059ec84;
extern undefined DAT_0059ec9c;
extern undefined4 DAT_0059eca0;
extern uint DAT_0059eca4;
extern uint DAT_0059eca8;
extern uint DAT_0059ecac;
extern uint DAT_0059ecb0;
extern undefined4 *DAT_0059ecb4;
extern undefined DAT_0059ecb8;
extern uint *DAT_0059eccc;
extern undefined4 DAT_0059ecd0;
extern undefined4 *DAT_0059ecd4;
extern undefined4 DAT_0059ecd8;
extern undefined4 *DAT_0059ecdc;
extern undefined DAT_0059ece0;
extern uint *DAT_0059ecf8;
extern undefined4 DAT_0059ecfc;
extern undefined4 *DAT_0059ed00;
extern undefined4 *DAT_0059ed04;
extern undefined DAT_0059ed08;
extern uint *DAT_0059ed2c;
extern undefined4 *DAT_0059ed30;
extern undefined4 *DAT_0059ed34;
extern undefined DAT_0059ed38;
extern uint *DAT_0059ed60;
extern undefined4 *DAT_0059ed64;
extern char s_N_ArrowB_00_0059ec20[];
extern char s_N_ArrowL_00_0059ec2c[];
extern char s_N_ArrowR_00_0059ec38[];
extern char s_N_ArrowT_00_0059ec10[];
extern char s_ObjHonekko_0059ecec[];
extern char s_ObjKokkoBig_0059ed54[];
extern char s_ObjKokkoMiniGame_0059ed18[];
extern char s_ObjKokko_0059ecc0[];
extern char s_damage_0059ec88[];
extern char s_kokko_game_0059ec64[];
extern char s_kokko_start_0059ec50[];
extern char s_surprise_0059ec90[];

// USA 0059E8DC <- EU 0059E8B4 (Ghidra, non-matching)
// GLOBAL DAT_0059ec04 undefined1 *
// GLOBAL DAT_0059ec08 undefined4 *
// GLOBAL DAT_0059ec0c undefined4 *
// GLOBAL DAT_0059ec1c undefined4
// GLOBAL DAT_0059ec44 undefined4
// GLOBAL DAT_0059ec48 undefined4
// GLOBAL DAT_0059ec4c undefined4 *
// GLOBAL DAT_0059ec5c undefined4
// GLOBAL DAT_0059ec60 undefined4 *
// GLOBAL DAT_0059ec70 undefined4 *
// GLOBAL DAT_0059ec74 undefined
// GLOBAL DAT_0059ec7c undefined
// GLOBAL DAT_0059ec84 undefined
// GLOBAL DAT_0059ec9c undefined
// GLOBAL DAT_0059eca0 undefined4
// GLOBAL DAT_0059eca4 uint
// GLOBAL DAT_0059eca8 uint
// GLOBAL DAT_0059ecac uint
// GLOBAL DAT_0059ecb0 uint
// GLOBAL DAT_0059ecb4 undefined4 *
// GLOBAL DAT_0059ecb8 undefined
// GLOBAL DAT_0059eccc uint *
// GLOBAL DAT_0059ecd0 undefined4
// GLOBAL DAT_0059ecd4 undefined4 *
// GLOBAL DAT_0059ecd8 undefined4
// GLOBAL DAT_0059ecdc undefined4 *
// GLOBAL DAT_0059ece0 undefined
// GLOBAL DAT_0059ecf8 uint *
// GLOBAL DAT_0059ecfc undefined4
// GLOBAL DAT_0059ed00 undefined4 *
// GLOBAL DAT_0059ed04 undefined4 *
// GLOBAL DAT_0059ed08 undefined
// GLOBAL DAT_0059ed2c uint *
// GLOBAL DAT_0059ed30 undefined4 *
// GLOBAL DAT_0059ed34 undefined4 *
// GLOBAL DAT_0059ed38 undefined
// GLOBAL DAT_0059ed60 uint *
// GLOBAL DAT_0059ed64 undefined4 *
// GLOBAL s_N_ArrowB_00_0059ec20 string
// GLOBAL s_N_ArrowL_00_0059ec2c string
// GLOBAL s_N_ArrowR_00_0059ec38 string
// GLOBAL s_N_ArrowT_00_0059ec10 string
// GLOBAL s_ObjHonekko_0059ecec string
// GLOBAL s_ObjKokkoBig_0059ed54 string
// GLOBAL s_ObjKokkoMiniGame_0059ed18 string
// GLOBAL s_ObjKokko_0059ecc0 string
// GLOBAL s_damage_0059ec88 string
// GLOBAL s_kokko_game_0059ec64 string
// GLOBAL s_kokko_start_0059ec50 string
// GLOBAL s_surprise_0059ec90 string

undefined8 func_0059E8DC(void)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_50 (*(undefined4 *)(albw_frame + 0x0))
  #define local_4c (*(char * *)(albw_frame + 0x4))
  #define local_48 (*(undefined4 *)(albw_frame + 0x8))
  #define local_44 (*(undefined * *)(albw_frame + 0xc))
  #define local_40 (*(undefined4 *)(albw_frame + 0x10))
  #define local_3c (*(char * *)(albw_frame + 0x14))
  #define local_38 (*(undefined4 *)(albw_frame + 0x18))
  #define local_34 (*(undefined * *)(albw_frame + 0x1c))
  #define local_30 (*(undefined4 *)(albw_frame + 0x20))
  #define local_2c (*(char * *)(albw_frame + 0x24))
  #define local_28 (*(undefined4 *)(albw_frame + 0x28))
  #define local_24 (*(undefined * *)(albw_frame + 0x2c))
  #define local_20 (*(undefined4 *)(albw_frame + 0x30))
  #define local_1c (*(char * *)(albw_frame + 0x34))
  #define local_18 (*(undefined4 *)(albw_frame + 0x38))
  #define local_14 (*(undefined * *)(albw_frame + 0x3c))
  puVar1 = DAT_0059ec04;
  *(undefined4 *)(DAT_0059ec04 + 0x18) = 0xffffffff;
  *(undefined4 *)(puVar1 + 0x1c) = 0xffffffff;
  uVar3 = DAT_0059ec1c;
  puVar2 = DAT_0059ec08;
  *DAT_0059ec08 = 0;
  puVar2[1] = 0;
  puVar2 = DAT_0059ec0c;
  DAT_0059ec0c[1] = s_N_ArrowT_00_0059ec10;
  *puVar2 = uVar3;
  puVar2[3] = s_N_ArrowB_00_0059ec20;
  puVar2[2] = uVar3;
  puVar2[5] = s_N_ArrowL_00_0059ec2c;
  puVar2[4] = uVar3;
  puVar2[6] = uVar3;
  puVar2[7] = s_N_ArrowR_00_0059ec38;
  puVar2 = DAT_0059ec4c;
  DAT_0059ec4c[1] = s_kokko_start_0059ec50;
  *puVar2 = uVar3;
  puVar2 = DAT_0059ec60;
  DAT_0059ec60[1] = s_kokko_game_0059ec64;
  *puVar2 = uVar3;
  puVar2 = DAT_0059ec70;
  DAT_0059ec70[1] = &DAT_0059ec74;
  *puVar2 = uVar3;
  puVar2[3] = &DAT_0059ec7c;
  puVar2[2] = uVar3;
  puVar2[5] = &DAT_0059ec84;
  puVar2[4] = uVar3;
  puVar2[7] = s_damage_0059ec88;
  puVar2[6] = uVar3;
  puVar2[9] = &DAT_0059ec84;
  puVar2[8] = uVar3;
  puVar2[0xb] = s_damage_0059ec88;
  puVar2[10] = uVar3;
  puVar2[0xd] = s_surprise_0059ec90;
  puVar2[0xc] = uVar3;
  puVar2[0xf] = &DAT_0059ec9c;
  puVar2[0xe] = uVar3;
  puVar2[0x10] = uVar3;
  puVar2[0x11] = &DAT_0059ec9c;
  puVar1 = DAT_0059ec04;
  *DAT_0059ec04 = 0x80;
  puVar1[1] = 0;
  puVar1[2] = 100;
  puVar1[3] = 0xff;
  uVar5 = func_00114608(DAT_0059eca4,0xff);
  *(int *)(puVar1 + 4) = (int)uVar5;
  uVar6 = func_00114608(DAT_0059eca8,(uint)((ulonglong)uVar5 >> 0x20));
  *(int *)(puVar1 + 8) = (int)uVar6;
  uVar6 = func_00114608(DAT_0059ecac,(uint)((ulonglong)uVar6 >> 0x20));
  *(int *)(puVar1 + 0xc) = (int)uVar6;
  *(int *)(puVar1 + 0x10) = (int)uVar5;
  uVar5 = func_00114608(DAT_0059ecb0,(uint)((ulonglong)uVar6 >> 0x20));
  *(int *)(puVar1 + 0x14) = (int)uVar5;
  puVar2 = DAT_0059ecb4;
  DAT_0059ecb4[2] = DAT_0059ecb4 + 3;
  puVar2[1] = 5;
  *puVar2 = 0;
  local_44 = &DAT_0059ecb8;
  local_4c = s_ObjKokko_0059ecc0;
  local_48 = uVar3;
  local_50 = uVar3;
  func_0019B51C(DAT_0059ecd4,DAT_0059ecd0,*DAT_0059eccc,(int)&local_50,DAT_0059ecb4,&local_48,0);
  puVar2 = DAT_0059ecdc;
  DAT_0059ecdc[2] = DAT_0059ecdc + 3;
  puVar2[1] = 5;
  *puVar2 = 0;
  local_34 = &DAT_0059ece0;
  local_3c = s_ObjHonekko_0059ecec;
  local_38 = uVar3;
  local_40 = uVar3;
  func_0019B51C(DAT_0059ed00,DAT_0059ecfc,*DAT_0059ecf8,(int)&local_40,DAT_0059ecdc,&local_38,0);
  puVar2 = DAT_0059ed04;
  DAT_0059ed04[2] = DAT_0059ed04 + 3;
  puVar2[1] = 5;
  *puVar2 = 0;
  local_24 = &DAT_0059ed08;
  local_2c = s_ObjKokkoMiniGame_0059ed18;
  local_28 = uVar3;
  local_30 = uVar3;
  func_0019B51C(DAT_0059ed30,DAT_0059ecd0,*DAT_0059ed2c,(int)&local_30,DAT_0059ed04,&local_28,0);
  puVar2 = DAT_0059ed34;
  puVar4 = DAT_0059ed34 + 3;
  DAT_0059ed34[1] = 5;
  puVar2[2] = puVar4;
  *puVar2 = 0;
  local_14 = &DAT_0059ed38;
  local_1c = s_ObjKokkoBig_0059ed54;
  local_18 = uVar3;
  local_20 = uVar3;
  uVar3 = func_0019B51C(DAT_0059ed64,DAT_0059ecd0,*DAT_0059ed60,(int)&local_20,DAT_0059ed34,
                        &local_18,0);
  return CONCAT44(DAT_0059ecd8,uVar3);
}

