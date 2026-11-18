#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005b436c;
extern undefined4 *DAT_005b4370;
extern undefined4 *DAT_005b4374;
extern undefined4 DAT_005b4384;
extern undefined4 DAT_005b43ac;
extern undefined4 DAT_005b43b0;
extern undefined4 *DAT_005b43b4;
extern undefined DAT_005b43b8;
extern undefined4 DAT_005b43c8;
extern undefined4 *DAT_005b43cc;
extern undefined DAT_005b43d0;
extern uint *DAT_005b43ec;
extern undefined4 DAT_005b43f0;
extern undefined4 *DAT_005b43f4;
extern undefined4 DAT_005b43f8;
extern undefined4 *DAT_005b43fc;
extern undefined DAT_005b4400;
extern uint *DAT_005b4424;
extern undefined4 DAT_005b4428;
extern undefined4 *DAT_005b442c;
extern undefined4 *DAT_005b4430;
extern undefined DAT_005b4434;
extern uint *DAT_005b4458;
extern undefined4 DAT_005b445c;
extern undefined4 *DAT_005b4460;
extern char s_MojDoorChurch_005b43dc[];
extern char s_MojDoorGanon_005b4448[];
extern char s_MojDoorHyrule_005b4414[];
extern char s_N_ArrowB_00_005b4388[];
extern char s_N_ArrowL_00_005b4394[];
extern char s_N_ArrowR_00_005b43a0[];
extern char s_N_ArrowT_00_005b4378[];
extern char s_close_005b43c0[];

// USA 005B41B4 <- EU 005B418C (Ghidra, non-matching)
// GLOBAL DAT_005b436c undefined4 *
// GLOBAL DAT_005b4370 undefined4 *
// GLOBAL DAT_005b4374 undefined4 *
// GLOBAL DAT_005b4384 undefined4
// GLOBAL DAT_005b43ac undefined4
// GLOBAL DAT_005b43b0 undefined4
// GLOBAL DAT_005b43b4 undefined4 *
// GLOBAL DAT_005b43b8 undefined
// GLOBAL DAT_005b43c8 undefined4
// GLOBAL DAT_005b43cc undefined4 *
// GLOBAL DAT_005b43d0 undefined
// GLOBAL DAT_005b43ec uint *
// GLOBAL DAT_005b43f0 undefined4
// GLOBAL DAT_005b43f4 undefined4 *
// GLOBAL DAT_005b43f8 undefined4
// GLOBAL DAT_005b43fc undefined4 *
// GLOBAL DAT_005b4400 undefined
// GLOBAL DAT_005b4424 uint *
// GLOBAL DAT_005b4428 undefined4
// GLOBAL DAT_005b442c undefined4 *
// GLOBAL DAT_005b4430 undefined4 *
// GLOBAL DAT_005b4434 undefined
// GLOBAL DAT_005b4458 uint *
// GLOBAL DAT_005b445c undefined4
// GLOBAL DAT_005b4460 undefined4 *
// GLOBAL s_MojDoorChurch_005b43dc string
// GLOBAL s_MojDoorGanon_005b4448 string
// GLOBAL s_MojDoorHyrule_005b4414 string
// GLOBAL s_N_ArrowB_00_005b4388 string
// GLOBAL s_N_ArrowL_00_005b4394 string
// GLOBAL s_N_ArrowR_00_005b43a0 string
// GLOBAL s_N_ArrowT_00_005b4378 string
// GLOBAL s_close_005b43c0 string

undefined8 func_005B41B4(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(undefined4 *)(albw_frame + 0x0))
  #define local_3c (*(char * *)(albw_frame + 0x4))
  #define local_38 (*(undefined4 *)(albw_frame + 0x8))
  #define local_34 (*(undefined * *)(albw_frame + 0xc))
  #define local_30 (*(undefined4 *)(albw_frame + 0x10))
  #define local_2c (*(char * *)(albw_frame + 0x14))
  #define local_28 (*(undefined4 *)(albw_frame + 0x18))
  #define local_24 (*(undefined * *)(albw_frame + 0x1c))
  #define local_20 (*(undefined4 *)(albw_frame + 0x20))
  #define local_1c (*(char * *)(albw_frame + 0x24))
  #define local_18 (*(undefined4 *)(albw_frame + 0x28))
  #define local_14 (*(undefined * *)(albw_frame + 0x2c))
  puVar1 = DAT_005b436c;
  *DAT_005b436c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  uVar2 = DAT_005b4384;
  puVar1 = DAT_005b4370;
  *DAT_005b4370 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005b4374;
  DAT_005b4374[1] = s_N_ArrowT_00_005b4378;
  *puVar1 = uVar2;
  puVar1[3] = s_N_ArrowB_00_005b4388;
  puVar1[2] = uVar2;
  puVar1[5] = s_N_ArrowL_00_005b4394;
  puVar1[4] = uVar2;
  puVar1[6] = uVar2;
  puVar1[7] = s_N_ArrowR_00_005b43a0;
  puVar1 = DAT_005b43b4;
  DAT_005b43b4[1] = &DAT_005b43b8;
  *puVar1 = uVar2;
  puVar1[2] = uVar2;
  puVar1[3] = s_close_005b43c0;
  puVar1 = DAT_005b43cc;
  puVar3 = DAT_005b43cc + 3;
  DAT_005b43cc[1] = 5;
  puVar1[2] = puVar3;
  *puVar1 = 0;
  local_34 = &DAT_005b43d0;
  local_3c = s_MojDoorChurch_005b43dc;
  local_38 = uVar2;
  local_40 = uVar2;
  func_0019B51C(DAT_005b43f4,DAT_005b43f0,*DAT_005b43ec,(int)&local_40,DAT_005b43cc,&local_38,0);
  puVar1 = DAT_005b43fc;
  puVar3 = DAT_005b43fc + 3;
  DAT_005b43fc[1] = 5;
  puVar1[2] = puVar3;
  *puVar1 = 0;
  local_24 = &DAT_005b4400;
  local_2c = s_MojDoorHyrule_005b4414;
  local_28 = uVar2;
  local_30 = uVar2;
  func_0019B51C(DAT_005b442c,DAT_005b4428,*DAT_005b4424,(int)&local_30,DAT_005b43fc,&local_28,0);
  puVar1 = DAT_005b4430;
  puVar3 = DAT_005b4430 + 3;
  DAT_005b4430[1] = 5;
  puVar1[2] = puVar3;
  *puVar1 = 0;
  local_14 = &DAT_005b4434;
  local_1c = s_MojDoorGanon_005b4448;
  local_18 = uVar2;
  local_20 = uVar2;
  uVar2 = func_0019B51C(DAT_005b4460,DAT_005b445c,*DAT_005b4458,(int)&local_20,DAT_005b4430,
                        &local_18,0);
  return CONCAT44(DAT_005b43f8,uVar2);
}

