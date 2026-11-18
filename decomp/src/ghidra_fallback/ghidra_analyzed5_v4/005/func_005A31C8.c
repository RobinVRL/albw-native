#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005a3384;
extern undefined4 *DAT_005a3388;
extern undefined4 *DAT_005a338c;
extern undefined4 DAT_005a339c;
extern undefined4 DAT_005a33c4;
extern undefined4 DAT_005a33c8;
extern undefined4 *DAT_005a33cc;
extern undefined DAT_005a33d0;
extern undefined DAT_005a3438;
extern undefined4 DAT_005a344c;
extern undefined4 *DAT_005a3450;
extern undefined4 DAT_005a3454;
extern undefined4 *DAT_005a3458;
extern undefined4 DAT_005a3468;
extern undefined4 *DAT_005a346c;
extern undefined4 DAT_005a3470;
extern undefined4 *DAT_005a3474;
extern undefined DAT_005a3478;
extern uint *DAT_005a3490;
extern undefined4 DAT_005a3494;
extern undefined4 *DAT_005a3498;
extern undefined4 DAT_005a349c;
extern char s_KinStaWater_005a345c[];
extern char s_N_ArrowB_00_005a33a0[];
extern char s_N_ArrowL_00_005a33ac[];
extern char s_N_ArrowR_00_005a33b8[];
extern char s_N_ArrowT_00_005a3390[];
extern char s_ObjKinSta_005a3484[];
extern char s_absorb_005a3420[];
extern char s_absorb_player_005a3428[];
extern char s_bound_005a33d8[];
extern char s_bound_struggle_005a3410[];
extern char s_bound_tornado_005a3400[];
extern char s_guard_005a33ec[];
extern char s_guard_hand_005a33f4[];
extern char s_struggle_005a33e0[];
extern char s_walk_jump_005a3440[];

// USA 005A31C8 <- EU 005A31A0 (Ghidra, non-matching)
// GLOBAL DAT_005a3384 undefined4 *
// GLOBAL DAT_005a3388 undefined4 *
// GLOBAL DAT_005a338c undefined4 *
// GLOBAL DAT_005a339c undefined4
// GLOBAL DAT_005a33c4 undefined4
// GLOBAL DAT_005a33c8 undefined4
// GLOBAL DAT_005a33cc undefined4 *
// GLOBAL DAT_005a33d0 undefined
// GLOBAL DAT_005a3438 undefined
// GLOBAL DAT_005a344c undefined4
// GLOBAL DAT_005a3450 undefined4 *
// GLOBAL DAT_005a3454 undefined4
// GLOBAL DAT_005a3458 undefined4 *
// GLOBAL DAT_005a3468 undefined4
// GLOBAL DAT_005a346c undefined4 *
// GLOBAL DAT_005a3470 undefined4
// GLOBAL DAT_005a3474 undefined4 *
// GLOBAL DAT_005a3478 undefined
// GLOBAL DAT_005a3490 uint *
// GLOBAL DAT_005a3494 undefined4
// GLOBAL DAT_005a3498 undefined4 *
// GLOBAL DAT_005a349c undefined4
// GLOBAL s_KinStaWater_005a345c string
// GLOBAL s_N_ArrowB_00_005a33a0 string
// GLOBAL s_N_ArrowL_00_005a33ac string
// GLOBAL s_N_ArrowR_00_005a33b8 string
// GLOBAL s_N_ArrowT_00_005a3390 string
// GLOBAL s_ObjKinSta_005a3484 string
// GLOBAL s_absorb_005a3420 string
// GLOBAL s_absorb_player_005a3428 string
// GLOBAL s_bound_005a33d8 string
// GLOBAL s_bound_struggle_005a3410 string
// GLOBAL s_bound_tornado_005a3400 string
// GLOBAL s_guard_005a33ec string
// GLOBAL s_guard_hand_005a33f4 string
// GLOBAL s_struggle_005a33e0 string
// GLOBAL s_walk_jump_005a3440 string

undefined8 func_005A31C8(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define puStack_14 (*(undefined * *)(albw_frame + 0xc))
  #define uStack_10 (*(undefined4 *)(albw_frame + 0x10))
  #define local_c (*(char * *)(albw_frame + 0x14))
  puVar1 = DAT_005a3384;
  *DAT_005a3384 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  local_18 = DAT_005a339c;
  puVar1 = DAT_005a3388;
  *DAT_005a3388 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005a338c;
  DAT_005a338c[1] = s_N_ArrowT_00_005a3390;
  *puVar1 = local_18;
  puVar1[3] = s_N_ArrowB_00_005a33a0;
  puVar1[2] = local_18;
  puVar1[5] = s_N_ArrowL_00_005a33ac;
  puVar1[4] = local_18;
  puVar1[6] = local_18;
  puVar1[7] = s_N_ArrowR_00_005a33b8;
  puVar1 = DAT_005a33cc;
  DAT_005a33cc[1] = &DAT_005a33d0;
  *puVar1 = local_18;
  puVar1[3] = s_bound_005a33d8;
  puVar1[2] = local_18;
  puVar1[5] = s_struggle_005a33e0;
  puVar1[4] = local_18;
  puVar1[7] = s_guard_005a33ec;
  puVar1[6] = local_18;
  puVar1[9] = s_guard_hand_005a33f4;
  puVar1[8] = local_18;
  puVar1[0xb] = s_bound_tornado_005a3400;
  puVar1[10] = local_18;
  puVar1[0xd] = s_bound_struggle_005a3410;
  puVar1[0xc] = local_18;
  puVar1[0xf] = s_absorb_005a3420;
  puVar1[0xe] = local_18;
  puVar1[0x11] = s_absorb_player_005a3428;
  puVar1[0x10] = local_18;
  puVar1[0x13] = &DAT_005a3438;
  puVar1[0x12] = local_18;
  puVar1[0x14] = local_18;
  puVar1[0x15] = s_walk_jump_005a3440;
  puVar1 = DAT_005a3450;
  DAT_005a3450[1] = s_absorb_005a3420;
  *puVar1 = local_18;
  puVar1[2] = local_18;
  puVar1[3] = s_absorb_player_005a3428;
  puVar1 = DAT_005a3458;
  DAT_005a3458[1] = s_KinStaWater_005a345c;
  *puVar1 = local_18;
  puVar1 = DAT_005a346c;
  DAT_005a346c[1] = s_KinStaWater_005a345c;
  *puVar1 = local_18;
  puVar1 = DAT_005a3474;
  puVar3 = DAT_005a3474 + 3;
  *DAT_005a3474 = 0;
  puVar1[1] = 5;
  puVar1[2] = puVar3;
  puStack_14 = &DAT_005a3478;
  uStack_10 = local_18;
  local_c = s_ObjKinSta_005a3484;
  uVar2 = func_0019B51C(DAT_005a3498,DAT_005a3494,*DAT_005a3490,(int)&uStack_10,DAT_005a3474,
                        &local_18,0);
  return CONCAT44(DAT_005a349c,uVar2);
}

