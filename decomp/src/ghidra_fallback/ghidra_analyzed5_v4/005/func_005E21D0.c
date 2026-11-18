#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern int DAT_005e245c;
extern undefined4 *DAT_005e2460;
extern undefined4 *DAT_005e2464;
extern undefined4 DAT_005e2474;
extern undefined4 DAT_005e249c;
extern undefined4 DAT_005e24a0;
extern undefined4 *DAT_005e24a4;
extern undefined DAT_005e24a8;
extern undefined DAT_005e24b0;
extern undefined DAT_005e24b8;
extern undefined DAT_005e24c0;
extern undefined DAT_005e24c8;
extern undefined4 DAT_005e251c;
extern undefined4 DAT_005e2520;
extern undefined4 DAT_005e2524;
extern undefined4 DAT_005e2528;
extern undefined4 *DAT_005e252c;
extern undefined4 DAT_005e2530;
extern undefined4 DAT_005e2534;
extern undefined4 DAT_005e2538;
extern undefined4 *DAT_005e253c;
extern undefined4 DAT_005e254c;
extern undefined4 *DAT_005e2550;
extern undefined4 *DAT_005e2570;
extern undefined4 DAT_005e2590;
extern undefined4 *DAT_005e2594;
extern undefined4 DAT_005e2598;
extern undefined4 DAT_005e259c;
extern undefined4 DAT_005e25a0;
extern undefined4 DAT_005e25a4;
extern undefined4 DAT_005e25a8;
extern undefined4 DAT_005e25ac;
extern undefined4 DAT_005e25b0;
extern undefined4 DAT_005e25b4;
extern undefined DAT_005e25b8;
extern undefined4 DAT_005e25d8;
extern uint *DAT_005e25dc;
extern undefined4 DAT_005e25e0;
extern undefined4 *DAT_005e25e4;
extern undefined4 DAT_005e25e8;
extern char s_N_ArrowB_00_005e2478[];
extern char s_N_ArrowL_00_005e2484[];
extern char s_N_ArrowR_00_005e2490[];
extern char s_N_ArrowT_00_005e2468[];
extern char s_NpcRentalShop_AfterGameOver_005e2554[];
extern char s_NpcShopManRental_005e25c4[];
extern char s_RentalItem_005e2540[];
extern char s_cf_005e2574[];
extern char s_get_loop_005e24cc[];
extern char s_sleep_005e2514[];
extern char s_surprise_005e24d8[];
extern char s_surprise_loop_005e24e4[];
extern char s_surprise_st_surprise_loop_005e2574[];
extern char s_talk_calm_005e24f4[];
extern char s_talk_panic_005e2500[];
extern char s_watch_005e250c[];

// USA 005E21D0 <- EU 005E21A8 (Ghidra, non-matching)
// GLOBAL DAT_005e245c int
// GLOBAL DAT_005e2460 undefined4 *
// GLOBAL DAT_005e2464 undefined4 *
// GLOBAL DAT_005e2474 undefined4
// GLOBAL DAT_005e249c undefined4
// GLOBAL DAT_005e24a0 undefined4
// GLOBAL DAT_005e24a4 undefined4 *
// GLOBAL DAT_005e24a8 undefined
// GLOBAL DAT_005e24b0 undefined
// GLOBAL DAT_005e24b8 undefined
// GLOBAL DAT_005e24c0 undefined
// GLOBAL DAT_005e24c8 undefined
// GLOBAL DAT_005e251c undefined4
// GLOBAL DAT_005e2520 undefined4
// GLOBAL DAT_005e2524 undefined4
// GLOBAL DAT_005e2528 undefined4
// GLOBAL DAT_005e252c undefined4 *
// GLOBAL DAT_005e2530 undefined4
// GLOBAL DAT_005e2534 undefined4
// GLOBAL DAT_005e2538 undefined4
// GLOBAL DAT_005e253c undefined4 *
// GLOBAL DAT_005e254c undefined4
// GLOBAL DAT_005e2550 undefined4 *
// GLOBAL DAT_005e2570 undefined4 *
// GLOBAL DAT_005e2590 undefined4
// GLOBAL DAT_005e2594 undefined4 *
// GLOBAL DAT_005e2598 undefined4
// GLOBAL DAT_005e259c undefined4
// GLOBAL DAT_005e25a0 undefined4
// GLOBAL DAT_005e25a4 undefined4
// GLOBAL DAT_005e25a8 undefined4
// GLOBAL DAT_005e25ac undefined4
// GLOBAL DAT_005e25b0 undefined4
// GLOBAL DAT_005e25b4 undefined4
// GLOBAL DAT_005e25b8 undefined
// GLOBAL DAT_005e25d8 undefined4
// GLOBAL DAT_005e25dc uint *
// GLOBAL DAT_005e25e0 undefined4
// GLOBAL DAT_005e25e4 undefined4 *
// GLOBAL DAT_005e25e8 undefined4
// GLOBAL s_N_ArrowB_00_005e2478 string
// GLOBAL s_N_ArrowL_00_005e2484 string
// GLOBAL s_N_ArrowR_00_005e2490 string
// GLOBAL s_N_ArrowT_00_005e2468 string
// GLOBAL s_NpcRentalShop_AfterGameOver_005e2554 string
// GLOBAL s_NpcShopManRental_005e25c4 string
// GLOBAL s_RentalItem_005e2540 string
// GLOBAL s_get_loop_005e24cc string
// GLOBAL s_sleep_005e2514 string
// GLOBAL s_surprise_005e24d8 string
// GLOBAL s_surprise_loop_005e24e4 string
// GLOBAL s_cf_005e2574 string
// GLOBAL s_talk_calm_005e24f4 string
// GLOBAL s_talk_panic_005e2500 string
// GLOBAL s_watch_005e250c string

undefined8 func_005E21D0(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define uStack_38 (*(undefined4 *)(albw_frame + 0x8))
  #define local_34 (*(char * *)(albw_frame + 0xc))
  #define local_30 (*(undefined4 *)(albw_frame + 0x10))
  #define local_2c (*(undefined * *)(albw_frame + 0x14))
  local_30 = DAT_005e2474;
  iVar1 = DAT_005e245c;
  *(undefined4 *)(DAT_005e245c + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  puVar2 = DAT_005e2460;
  *DAT_005e2460 = 0;
  puVar2[1] = 0;
  puVar2 = DAT_005e2464;
  DAT_005e2464[1] = s_N_ArrowT_00_005e2468;
  *puVar2 = local_30;
  puVar2[3] = s_N_ArrowB_00_005e2478;
  puVar2[2] = local_30;
  puVar2[5] = s_N_ArrowL_00_005e2484;
  puVar2[4] = local_30;
  puVar2[6] = local_30;
  puVar2[7] = s_N_ArrowR_00_005e2490;
  puVar2 = DAT_005e24a4;
  DAT_005e24a4[1] = &DAT_005e24a8;
  *puVar2 = local_30;
  puVar2[4] = &DAT_005e24b0;
  puVar2[3] = local_30;
  puVar2[7] = &DAT_005e24b8;
  puVar2[6] = local_30;
  puVar2[10] = &DAT_005e24c0;
  puVar2[9] = local_30;
  puVar2[0xd] = &DAT_005e24c8;
  puVar2[0xc] = local_30;
  puVar2[0x10] = s_get_loop_005e24cc;
  puVar2[0xf] = local_30;
  puVar2[0x13] = s_surprise_005e24d8;
  puVar2[0x12] = local_30;
  puVar2[0x16] = s_surprise_loop_005e24e4;
  puVar2[0x15] = local_30;
  puVar2[0x19] = s_talk_calm_005e24f4;
  puVar2[0x18] = local_30;
  puVar2[0x1c] = s_talk_panic_005e2500;
  puVar2[0x1b] = local_30;
  puVar2[0x1f] = s_watch_005e250c;
  puVar2[0x1e] = local_30;
  puVar2[0x21] = local_30;
  puVar2[0x22] = s_sleep_005e2514;
  uVar4 = DAT_005e2534;
  puVar2 = DAT_005e252c;
  uVar7 = DAT_005e2520;
  *DAT_005e252c = DAT_005e2530;
  uVar5 = DAT_005e2538;
  puVar2[1] = uVar7;
  uVar3 = DAT_005e2524;
  puVar2[2] = uVar4;
  uVar4 = DAT_005e2528;
  puVar2[3] = uVar5;
  puVar2[4] = uVar3;
  puVar2[5] = uVar4;
  puVar2[6] = 0xf;
  *(undefined2 *)(puVar2 + 7) = 0x5f;
  *(undefined2 *)((int)puVar2 + 0x1e) = 0xb4;
  *(undefined1 *)(puVar2 + 8) = 0xef;
  *(undefined1 *)((int)puVar2 + 0x21) = 0xec;
  *(undefined1 *)((int)puVar2 + 0x22) = 0xf;
  *(undefined1 *)((int)puVar2 + 0x23) = 0x23;
  *(undefined1 *)(puVar2 + 9) = 0x1e;
  puVar2 = DAT_005e253c;
  DAT_005e253c[1] = s_RentalItem_005e2540;
  *puVar2 = local_30;
  puVar2 = DAT_005e2550;
  DAT_005e2550[1] = s_NpcRentalShop_AfterGameOver_005e2554;
  *puVar2 = local_30;
  puVar2 = DAT_005e2570;
  DAT_005e2570[1] = &DAT_005e24a8;
  *puVar2 = local_30;
  puVar2[2] = local_30;
  puVar2[3] = s_surprise_st_surprise_loop_005e2574;
  uVar6 = DAT_005e25a0;
  uVar5 = DAT_005e259c;
  puVar2 = DAT_005e2594;
  *DAT_005e2594 = DAT_005e2598;
  puVar2[1] = uVar5;
  puVar2[2] = uVar6;
  uVar6 = DAT_005e25ac;
  puVar2[5] = DAT_005e25a4;
  uVar5 = DAT_005e25a8;
  puVar2[3] = uVar3;
  puVar2[4] = uVar7;
  puVar2[6] = uVar6;
  puVar2[7] = uVar5;
  puVar2[8] = uVar5;
  uVar7 = DAT_005e25b4;
  puVar2[9] = DAT_005e25b0;
  puVar2[10] = uVar7;
  puVar2[0xb] = uVar4;
  puVar2[-0xb0] = 0;
  puVar2[-0xaf] = 5;
  puVar2[-0xae] = puVar2 + -0xad;
  local_2c = &DAT_005e25b8;
  local_34 = s_NpcShopManRental_005e25c4;
  uStack_38 = local_30;
  uVar7 = func_0019B51C(DAT_005e25e4,DAT_005e25e0,*DAT_005e25dc,(int)&uStack_38,DAT_005e25d8,
                        &local_30,0);
  return CONCAT44(DAT_005e25e8,uVar7);
}

