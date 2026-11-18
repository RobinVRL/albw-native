#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern int func_004FC6FC(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4, undefined4 param_5,undefined4 *param_6,undefined4 param_7);
extern int *DAT_005cd0d4;
extern undefined4 *DAT_005cd0d8;
extern undefined4 DAT_005cd0e4;
extern undefined4 DAT_005cd134;
extern undefined4 DAT_005cd138;
extern undefined4 *DAT_005cd13c;
extern undefined4 DAT_005cd140;
extern undefined4 *DAT_005cd144;
extern undefined4 DAT_005cd148;
extern undefined4 *DAT_005cd14c;
extern undefined DAT_005cd150;
extern int DAT_005cd170;
extern uint *DAT_005cd174;
extern undefined4 DAT_005cd178;
extern undefined4 *DAT_005cd17c;
extern undefined4 DAT_005cd180;
extern char s_EnemySalamander_005cd160[];
extern char s_damage00_005cd120[];
extern char s_end00_005cd12c[];
extern char s_piyopiyo00_005cd114[];
extern char s_pre_burn00_005cd108[];
extern char s_wait00_005cd0dc[];
extern char s_wait01_005cd0f8[];
extern char s_walk00_005cd0e8[];
extern char s_walk01_005cd100[];
extern char s_wind00_005cd0f0[];

// USA 005CCF44 <- EU 005CCF1C (Ghidra, non-matching)
// GLOBAL DAT_005cd0d4 int *
// GLOBAL DAT_005cd0d8 undefined4 *
// GLOBAL DAT_005cd0e4 undefined4
// GLOBAL DAT_005cd134 undefined4
// GLOBAL DAT_005cd138 undefined4
// GLOBAL DAT_005cd13c undefined4 *
// GLOBAL DAT_005cd140 undefined4
// GLOBAL DAT_005cd144 undefined4 *
// GLOBAL DAT_005cd148 undefined4
// GLOBAL DAT_005cd14c undefined4 *
// GLOBAL DAT_005cd150 undefined
// GLOBAL DAT_005cd170 int
// GLOBAL DAT_005cd174 uint *
// GLOBAL DAT_005cd178 undefined4
// GLOBAL DAT_005cd17c undefined4 *
// GLOBAL DAT_005cd180 undefined4
// GLOBAL s_EnemySalamander_005cd160 string
// GLOBAL s_damage00_005cd120 string
// GLOBAL s_end00_005cd12c string
// GLOBAL s_piyopiyo00_005cd114 string
// GLOBAL s_pre_burn00_005cd108 string
// GLOBAL s_wait00_005cd0dc string
// GLOBAL s_wait01_005cd0f8 string
// GLOBAL s_walk00_005cd0e8 string
// GLOBAL s_walk01_005cd100 string
// GLOBAL s_wind00_005cd0f0 string

undefined8 func_005CCF44(void)

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
  piVar1 = DAT_005cd0d4;
  DAT_005cd0d4[2] = -1;
  piVar1[3] = -1;
  uVar3 = DAT_005cd0e4;
  piVar1[4] = 0;
  piVar1[5] = 0;
  puVar2 = DAT_005cd0d8;
  DAT_005cd0d8[1] = s_wait00_005cd0dc;
  *puVar2 = uVar3;
  puVar2[3] = s_walk00_005cd0e8;
  puVar2[2] = uVar3;
  puVar2[5] = s_wind00_005cd0f0;
  puVar2[4] = uVar3;
  puVar2[7] = s_wait01_005cd0f8;
  puVar2[6] = uVar3;
  puVar2[9] = s_walk01_005cd100;
  puVar2[8] = uVar3;
  puVar2[0xb] = s_pre_burn00_005cd108;
  puVar2[10] = uVar3;
  puVar2[0xd] = s_pre_burn00_005cd108 + 4;
  puVar2[0xc] = uVar3;
  puVar2[0xf] = s_piyopiyo00_005cd114;
  puVar2[0xe] = uVar3;
  puVar2[0x11] = s_damage00_005cd120;
  puVar2[0x10] = uVar3;
  puVar2[0x12] = uVar3;
  puVar2[0x13] = s_end00_005cd12c;
  puVar2 = DAT_005cd13c;
  DAT_005cd13c[1] = s_wind00_005cd0f0;
  *puVar2 = uVar3;
  puVar2[3] = s_pre_burn00_005cd108 + 4;
  puVar2[2] = uVar3;
  puVar2[4] = uVar3;
  puVar2[5] = s_end00_005cd12c;
  local_28 = 0;
  local_27 = 0;
  local_26 = 0;
  local_24 = 0xff;
  local_25 = 0xff;
  func_004FC6FC(DAT_005cd144,0,1,0,0,(undefined4 *)&local_28,0xb);
  puVar2 = DAT_005cd14c;
  puVar5 = DAT_005cd14c + 3;
  DAT_005cd14c[1] = 5;
  puVar2[2] = puVar5;
  *puVar2 = 0;
  local_14 = &DAT_005cd150;
  local_18 = uVar3;
  local_1c = s_EnemySalamander_005cd160;
  local_20 = uVar3;
  iVar4 = *piVar1;
  if (*piVar1 == 0) {
    iVar4 = DAT_005cd170;
  }
  uVar3 = func_0019B51C(DAT_005cd17c,DAT_005cd178,*DAT_005cd174,(int)&local_20,DAT_005cd14c,
                        &local_18,iVar4);
  return CONCAT44(DAT_005cd180,uVar3);
}

