#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005b5360;
extern undefined4 *DAT_005b5364;
extern undefined4 *DAT_005b5368;
extern undefined4 DAT_005b5378;
extern undefined4 DAT_005b53a0;
extern undefined4 DAT_005b53a4;
extern undefined4 *DAT_005b53a8;
extern undefined4 DAT_005b53cc;
extern undefined4 *DAT_005b53d0;
extern undefined4 DAT_005b53e8;
extern undefined4 *DAT_005b53ec;
extern undefined4 *DAT_005b5404;
extern undefined DAT_005b5408;
extern uint *DAT_005b5420;
extern undefined4 DAT_005b5424;
extern undefined4 *DAT_005b5428;
extern undefined4 DAT_005b542c;
extern undefined4 *DAT_005b5430;
extern undefined DAT_005b5434;
extern uint *DAT_005b5458;
extern undefined4 *DAT_005b545c;
extern char s_MessageBoad_Back_005b53d4[];
extern char s_MessageBoad_Dark_005b53f0[];
extern char s_MojSignboardRental_005b5444[];
extern char s_MojSignboard_005b5410[];
extern char s_N_ArrowB_00_005b537c[];
extern char s_N_ArrowL_00_005b5388[];
extern char s_N_ArrowR_00_005b5394[];
extern char s_N_ArrowT_00_005b536c[];
extern char s_Signboard_Lower_005b53ac[];
extern char s_Signboard_Upper_005b53bc[];

// USA 005B51D8 <- EU 005B51B0 (Ghidra, non-matching)
// GLOBAL DAT_005b5360 undefined4 *
// GLOBAL DAT_005b5364 undefined4 *
// GLOBAL DAT_005b5368 undefined4 *
// GLOBAL DAT_005b5378 undefined4
// GLOBAL DAT_005b53a0 undefined4
// GLOBAL DAT_005b53a4 undefined4
// GLOBAL DAT_005b53a8 undefined4 *
// GLOBAL DAT_005b53cc undefined4
// GLOBAL DAT_005b53d0 undefined4 *
// GLOBAL DAT_005b53e8 undefined4
// GLOBAL DAT_005b53ec undefined4 *
// GLOBAL DAT_005b5404 undefined4 *
// GLOBAL DAT_005b5408 undefined
// GLOBAL DAT_005b5420 uint *
// GLOBAL DAT_005b5424 undefined4
// GLOBAL DAT_005b5428 undefined4 *
// GLOBAL DAT_005b542c undefined4
// GLOBAL DAT_005b5430 undefined4 *
// GLOBAL DAT_005b5434 undefined
// GLOBAL DAT_005b5458 uint *
// GLOBAL DAT_005b545c undefined4 *
// GLOBAL s_MessageBoad_Back_005b53d4 string
// GLOBAL s_MessageBoad_Dark_005b53f0 string
// GLOBAL s_MojSignboardRental_005b5444 string
// GLOBAL s_MojSignboard_005b5410 string
// GLOBAL s_N_ArrowB_00_005b537c string
// GLOBAL s_N_ArrowL_00_005b5388 string
// GLOBAL s_N_ArrowR_00_005b5394 string
// GLOBAL s_N_ArrowT_00_005b536c string
// GLOBAL s_Signboard_Lower_005b53ac string
// GLOBAL s_Signboard_Upper_005b53bc string

undefined8 func_005B51D8(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(undefined4 *)(albw_frame + 0x0))
  #define local_2c (*(char * *)(albw_frame + 0x4))
  #define local_28 (*(undefined4 *)(albw_frame + 0x8))
  #define local_24 (*(undefined * *)(albw_frame + 0xc))
  #define local_20 (*(undefined4 *)(albw_frame + 0x10))
  #define local_1c (*(char * *)(albw_frame + 0x14))
  #define local_18 (*(undefined4 *)(albw_frame + 0x18))
  #define local_14 (*(undefined * *)(albw_frame + 0x1c))
  puVar1 = DAT_005b5360;
  *DAT_005b5360 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  uVar2 = DAT_005b5378;
  puVar1 = DAT_005b5364;
  *DAT_005b5364 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005b5368;
  DAT_005b5368[1] = s_N_ArrowT_00_005b536c;
  *puVar1 = uVar2;
  puVar1[3] = s_N_ArrowB_00_005b537c;
  puVar1[2] = uVar2;
  puVar1[5] = s_N_ArrowL_00_005b5388;
  puVar1[4] = uVar2;
  puVar1[6] = uVar2;
  puVar1[7] = s_N_ArrowR_00_005b5394;
  puVar1 = DAT_005b53a8;
  DAT_005b53a8[1] = s_Signboard_Lower_005b53ac;
  *puVar1 = uVar2;
  puVar1[2] = uVar2;
  puVar1[3] = s_Signboard_Upper_005b53bc;
  puVar1 = DAT_005b53d0;
  DAT_005b53d0[1] = s_MessageBoad_Back_005b53d4;
  *puVar1 = uVar2;
  puVar1 = DAT_005b53ec;
  DAT_005b53ec[1] = s_MessageBoad_Dark_005b53f0;
  *puVar1 = uVar2;
  puVar1 = DAT_005b5404;
  puVar3 = DAT_005b5404 + 3;
  DAT_005b5404[1] = 5;
  puVar1[2] = puVar3;
  *puVar1 = 0;
  local_24 = &DAT_005b5408;
  local_2c = s_MojSignboard_005b5410;
  local_28 = uVar2;
  local_30 = uVar2;
  func_0019B51C(DAT_005b5428,DAT_005b5424,*DAT_005b5420,(int)&local_30,DAT_005b5404,&local_28,0);
  puVar1 = DAT_005b5430;
  puVar3 = DAT_005b5430 + 3;
  DAT_005b5430[1] = 5;
  puVar1[2] = puVar3;
  *puVar1 = 0;
  local_14 = &DAT_005b5434;
  local_1c = s_MojSignboardRental_005b5444;
  local_18 = uVar2;
  local_20 = uVar2;
  uVar2 = func_0019B51C(DAT_005b545c,DAT_005b5424,*DAT_005b5458,(int)&local_20,DAT_005b5430,
                        &local_18,0);
  return CONCAT44(DAT_005b542c,uVar2);
}

