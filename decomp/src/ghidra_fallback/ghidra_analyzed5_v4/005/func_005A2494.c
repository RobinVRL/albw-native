#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005a25f0;
extern undefined4 *DAT_005a25f4;
extern undefined4 *DAT_005a25f8;
extern undefined4 DAT_005a2608;
extern undefined4 DAT_005a2630;
extern undefined4 DAT_005a2634;
extern undefined4 *DAT_005a2638;
extern undefined DAT_005a263c;
extern undefined DAT_005a2644;
extern undefined DAT_005a264c;
extern undefined DAT_005a2654;
extern undefined4 DAT_005a265c;
extern undefined4 *DAT_005a2660;
extern undefined4 DAT_005a2664;
extern undefined4 DAT_005a2668;
extern undefined4 DAT_005a266c;
extern undefined4 DAT_005a2670;
extern undefined4 DAT_005a2674;
extern undefined4 DAT_005a2678;
extern undefined DAT_005a267c;
extern undefined4 DAT_005a2694;
extern uint *DAT_005a2698;
extern undefined4 DAT_005a269c;
extern undefined4 *DAT_005a26a0;
extern undefined4 DAT_005a26a4;
extern char s_N_ArrowB_00_005a260c[];
extern char s_N_ArrowL_00_005a2618[];
extern char s_N_ArrowR_00_005a2624[];
extern char s_N_ArrowT_00_005a25fc[];
extern char s_NpcKinSta_005a2688[];

// USA 005A2494 <- EU 005A246C (Ghidra, non-matching)
// GLOBAL DAT_005a25f0 undefined4 *
// GLOBAL DAT_005a25f4 undefined4 *
// GLOBAL DAT_005a25f8 undefined4 *
// GLOBAL DAT_005a2608 undefined4
// GLOBAL DAT_005a2630 undefined4
// GLOBAL DAT_005a2634 undefined4
// GLOBAL DAT_005a2638 undefined4 *
// GLOBAL DAT_005a263c undefined
// GLOBAL DAT_005a2644 undefined
// GLOBAL DAT_005a264c undefined
// GLOBAL DAT_005a2654 undefined
// GLOBAL DAT_005a265c undefined4
// GLOBAL DAT_005a2660 undefined4 *
// GLOBAL DAT_005a2664 undefined4
// GLOBAL DAT_005a2668 undefined4
// GLOBAL DAT_005a266c undefined4
// GLOBAL DAT_005a2670 undefined4
// GLOBAL DAT_005a2674 undefined4
// GLOBAL DAT_005a2678 undefined4
// GLOBAL DAT_005a267c undefined
// GLOBAL DAT_005a2694 undefined4
// GLOBAL DAT_005a2698 uint *
// GLOBAL DAT_005a269c undefined4
// GLOBAL DAT_005a26a0 undefined4 *
// GLOBAL DAT_005a26a4 undefined4
// GLOBAL s_N_ArrowB_00_005a260c string
// GLOBAL s_N_ArrowL_00_005a2618 string
// GLOBAL s_N_ArrowR_00_005a2624 string
// GLOBAL s_N_ArrowT_00_005a25fc string
// GLOBAL s_NpcKinSta_005a2688 string

undefined8 func_005A2494(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x8))
  #define local_24 (*(char * *)(albw_frame + 0xc))
  #define local_20 (*(undefined4 *)(albw_frame + 0x10))
  #define local_1c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005a25f0;
  *DAT_005a25f0 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  local_20 = DAT_005a2608;
  puVar1 = DAT_005a25f4;
  *DAT_005a25f4 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005a25f8;
  DAT_005a25f8[1] = s_N_ArrowT_00_005a25fc;
  *puVar1 = local_20;
  puVar1[3] = s_N_ArrowB_00_005a260c;
  puVar1[2] = local_20;
  puVar1[5] = s_N_ArrowL_00_005a2618;
  puVar1[4] = local_20;
  puVar1[6] = local_20;
  puVar1[7] = s_N_ArrowR_00_005a2624;
  puVar1 = DAT_005a2638;
  DAT_005a2638[1] = &DAT_005a263c;
  *puVar1 = local_20;
  puVar1[4] = &DAT_005a2644;
  puVar1[3] = local_20;
  puVar1[7] = &DAT_005a264c;
  puVar1[6] = local_20;
  puVar1[9] = local_20;
  puVar1[10] = &DAT_005a2654;
  uVar5 = DAT_005a2678;
  uVar4 = DAT_005a2674;
  uVar3 = DAT_005a2670;
  uVar2 = DAT_005a266c;
  uVar6 = DAT_005a2668;
  puVar1 = DAT_005a2660;
  *DAT_005a2660 = DAT_005a2664;
  puVar1[1] = uVar6;
  puVar1[2] = uVar2;
  puVar1[3] = uVar3;
  puVar1[4] = uVar4;
  puVar1[5] = uVar5;
  puVar1[6] = 10;
  *(undefined2 *)(puVar1 + 7) = 0x5f;
  *(undefined2 *)((int)puVar1 + 0x1e) = 0xb4;
  *(undefined1 *)(puVar1 + 8) = 0xee;
  *(undefined1 *)((int)puVar1 + 0x21) = 0xec;
  *(undefined1 *)((int)puVar1 + 0x22) = 0xf;
  *(undefined1 *)((int)puVar1 + 0x23) = 1;
  *(undefined1 *)(puVar1 + 9) = 1;
  puVar1[-0xa2] = 0;
  puVar1[-0xa1] = 5;
  puVar1[-0xa0] = puVar1 + -0x9f;
  local_1c = &DAT_005a267c;
  local_24 = s_NpcKinSta_005a2688;
  uStack_28 = local_20;
  uVar6 = func_0019B51C(DAT_005a26a0,DAT_005a269c,*DAT_005a2698,(int)&uStack_28,DAT_005a2694,
                        &local_20,0);
  return CONCAT44(DAT_005a26a4,uVar6);
}

