#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern int func_004FC6FC(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4, undefined4 param_5,undefined4 *param_6,undefined4 param_7);
extern int *DAT_005bb24c;
extern undefined4 *DAT_005bb250;
extern undefined DAT_005bb254;
extern undefined4 DAT_005bb25c;
extern undefined DAT_005bb260;
extern undefined DAT_005bb264;
extern undefined DAT_005bb268;
extern undefined DAT_005bb26c;
extern undefined DAT_005bb278;
extern undefined DAT_005bb284;
extern undefined DAT_005bb298;
extern undefined DAT_005bb2a8;
extern undefined DAT_005bb2b8;
extern undefined DAT_005bb2cc;
extern undefined DAT_005bb2d8;
extern undefined DAT_005bb2e8;
extern undefined DAT_005bb2f8;
extern undefined DAT_005bb300;
extern undefined DAT_005bb30c;
extern undefined DAT_005bb31c;
extern undefined DAT_005bb328;
extern undefined DAT_005bb334;
extern undefined DAT_005bb340;
extern undefined DAT_005bb34c;
extern undefined DAT_005bb358;
extern undefined DAT_005bb360;
extern undefined DAT_005bb368;
extern undefined DAT_005bb374;
extern undefined DAT_005bb380;
extern undefined DAT_005bb388;
extern undefined DAT_005bb390;
extern undefined DAT_005bb39c;
extern undefined DAT_005bb3a8;
extern undefined DAT_005bb3bc;
extern undefined DAT_005bb3c4;
extern undefined4 DAT_005bb3d0;
extern undefined4 DAT_005bb3d4;
extern undefined4 *DAT_005bb3d8;
extern undefined DAT_005bb3dc;
extern undefined DAT_005bb3e0;
extern undefined DAT_005bb3f4;
extern undefined DAT_005bb434;
extern uint DAT_005bb43c;
extern uint DAT_005bb440;
extern undefined4 *DAT_005bb444;
extern undefined4 DAT_005bb448;
extern undefined4 *DAT_005bb44c;
extern undefined DAT_005bb450;
extern int DAT_005bb46c;
extern uint *DAT_005bb470;
extern undefined4 DAT_005bb474;
extern undefined4 *DAT_005bb478;
extern undefined4 DAT_005bb47c;
extern char s_EnemyDeviland_005bb45c[];
extern char s_damage_005bb3fc[];
extern char s_jitabata_005bb428[];
extern char s_panic_005bb420[];
extern char s_struggle_005bb404[];
extern char s_struggle_down_005bb410[];
extern char s_wait_down_005bb3e8[];

// USA 005BAF50 <- EU 005BAF28 (Ghidra, non-matching)
// GLOBAL DAT_005bb24c int *
// GLOBAL DAT_005bb250 undefined4 *
// GLOBAL DAT_005bb254 undefined
// GLOBAL DAT_005bb25c undefined4
// GLOBAL DAT_005bb260 undefined
// GLOBAL DAT_005bb264 undefined
// GLOBAL DAT_005bb268 undefined
// GLOBAL DAT_005bb26c undefined
// GLOBAL DAT_005bb278 undefined
// GLOBAL DAT_005bb284 undefined
// GLOBAL DAT_005bb298 undefined
// GLOBAL DAT_005bb2a8 undefined
// GLOBAL DAT_005bb2b8 undefined
// GLOBAL DAT_005bb2cc undefined
// GLOBAL DAT_005bb2d8 undefined
// GLOBAL DAT_005bb2e8 undefined
// GLOBAL DAT_005bb2f8 undefined
// GLOBAL DAT_005bb300 undefined
// GLOBAL DAT_005bb30c undefined
// GLOBAL DAT_005bb31c undefined
// GLOBAL DAT_005bb328 undefined
// GLOBAL DAT_005bb334 undefined
// GLOBAL DAT_005bb340 undefined
// GLOBAL DAT_005bb34c undefined
// GLOBAL DAT_005bb358 undefined
// GLOBAL DAT_005bb360 undefined
// GLOBAL DAT_005bb368 undefined
// GLOBAL DAT_005bb374 undefined
// GLOBAL DAT_005bb380 undefined
// GLOBAL DAT_005bb388 undefined
// GLOBAL DAT_005bb390 undefined
// GLOBAL DAT_005bb39c undefined
// GLOBAL DAT_005bb3a8 undefined
// GLOBAL DAT_005bb3bc undefined
// GLOBAL DAT_005bb3c4 undefined
// GLOBAL DAT_005bb3d0 undefined4
// GLOBAL DAT_005bb3d4 undefined4
// GLOBAL DAT_005bb3d8 undefined4 *
// GLOBAL DAT_005bb3dc undefined
// GLOBAL DAT_005bb3e0 undefined
// GLOBAL DAT_005bb3f4 undefined
// GLOBAL DAT_005bb434 undefined
// GLOBAL DAT_005bb43c uint
// GLOBAL DAT_005bb440 uint
// GLOBAL DAT_005bb444 undefined4 *
// GLOBAL DAT_005bb448 undefined4
// GLOBAL DAT_005bb44c undefined4 *
// GLOBAL DAT_005bb450 undefined
// GLOBAL DAT_005bb46c int
// GLOBAL DAT_005bb470 uint *
// GLOBAL DAT_005bb474 undefined4
// GLOBAL DAT_005bb478 undefined4 *
// GLOBAL DAT_005bb47c undefined4
// GLOBAL s_EnemyDeviland_005bb45c string
// GLOBAL s_damage_005bb3fc string
// GLOBAL s_jitabata_005bb428 string
// GLOBAL s_panic_005bb420 string
// GLOBAL s_struggle_005bb404 string
// GLOBAL s_struggle_down_005bb410 string
// GLOBAL s_wait_down_005bb3e8 string

undefined8 func_005BAF50(void)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(undefined4 *)(albw_frame + 0x0))
  #define local_2c (*(char * *)(albw_frame + 0x4))
  #define local_24 (*(undefined1 *)(albw_frame + 0xc))
  #define local_23 (*(undefined1 *)(albw_frame + 0xd))
  #define local_22 (*(undefined1 *)(albw_frame + 0xe))
  #define local_21 (*(undefined1 *)(albw_frame + 0xf))
  #define local_20 (*(undefined1 *)(albw_frame + 0x10))
  #define local_18 (*(undefined4 *)(albw_frame + 0x18))
  #define local_14 (*(undefined * *)(albw_frame + 0x1c))
  piVar1 = DAT_005bb24c;
  DAT_005bb24c[2] = -1;
  piVar1[3] = -1;
  uVar3 = DAT_005bb25c;
  piVar1[4] = 0;
  piVar1[5] = 0;
  puVar2 = DAT_005bb250;
  DAT_005bb250[1] = &DAT_005bb254;
  *puVar2 = uVar3;
  puVar2[3] = &DAT_005bb260;
  puVar2[2] = uVar3;
  puVar2[5] = &DAT_005bb264;
  puVar2[4] = uVar3;
  puVar2[7] = &DAT_005bb268;
  puVar2[6] = uVar3;
  puVar2[9] = &DAT_005bb26c;
  puVar2[8] = uVar3;
  puVar2[0xb] = &DAT_005bb278;
  puVar2[10] = uVar3;
  puVar2[0xd] = &DAT_005bb284;
  puVar2[0xc] = uVar3;
  puVar2[0xf] = &DAT_005bb298;
  puVar2[0xe] = uVar3;
  puVar2[0x11] = &DAT_005bb2a8;
  puVar2[0x10] = uVar3;
  puVar2[0x13] = &DAT_005bb2b8;
  puVar2[0x12] = uVar3;
  puVar2[0x15] = &DAT_005bb2cc;
  puVar2[0x14] = uVar3;
  puVar2[0x17] = &DAT_005bb2d8;
  puVar2[0x16] = uVar3;
  puVar2[0x19] = &DAT_005bb2e8;
  puVar2[0x18] = uVar3;
  puVar2[0x1b] = &DAT_005bb2f8;
  puVar2[0x1a] = uVar3;
  puVar2[0x1d] = &DAT_005bb300;
  puVar2[0x1c] = uVar3;
  puVar2[0x1f] = &DAT_005bb30c;
  puVar2[0x1e] = uVar3;
  puVar2[0x21] = &DAT_005bb31c;
  puVar2[0x20] = uVar3;
  puVar2[0x23] = &DAT_005bb328;
  puVar2[0x22] = uVar3;
  puVar2[0x25] = &DAT_005bb334;
  puVar2[0x24] = uVar3;
  puVar2[0x27] = &DAT_005bb340;
  puVar2[0x26] = uVar3;
  puVar2[0x29] = &DAT_005bb34c;
  puVar2[0x28] = uVar3;
  puVar2[0x2b] = &DAT_005bb358;
  puVar2[0x2a] = uVar3;
  puVar2[0x2d] = &DAT_005bb360;
  puVar2[0x2c] = uVar3;
  puVar2[0x2f] = &DAT_005bb368;
  puVar2[0x2e] = uVar3;
  puVar2[0x31] = &DAT_005bb374;
  puVar2[0x30] = uVar3;
  puVar2[0x33] = &DAT_005bb380;
  puVar2[0x32] = uVar3;
  puVar2[0x35] = &DAT_005bb388;
  puVar2[0x34] = uVar3;
  puVar2[0x37] = &DAT_005bb390;
  puVar2[0x36] = uVar3;
  puVar2[0x39] = &DAT_005bb39c;
  puVar2[0x38] = uVar3;
  puVar2[0x3b] = &DAT_005bb3a8;
  puVar2[0x3a] = uVar3;
  puVar2[0x3d] = &DAT_005bb3bc;
  puVar2[0x3c] = uVar3;
  puVar2[0x3e] = uVar3;
  puVar2[0x3f] = &DAT_005bb3c4;
  puVar2 = DAT_005bb3d8;
  DAT_005bb3d8[1] = &DAT_005bb3dc;
  *puVar2 = uVar3;
  puVar2[3] = &DAT_005bb3e0;
  puVar2[2] = uVar3;
  puVar2[5] = s_wait_down_005bb3e8;
  puVar2[4] = uVar3;
  puVar2[7] = &DAT_005bb3f4;
  puVar2[6] = uVar3;
  puVar2[9] = s_damage_005bb3fc;
  puVar2[8] = uVar3;
  puVar2[0xb] = s_struggle_005bb404;
  puVar2[10] = uVar3;
  puVar2[0xd] = s_struggle_down_005bb410;
  puVar2[0xc] = uVar3;
  puVar2[0xf] = s_panic_005bb420;
  puVar2[0xe] = uVar3;
  puVar2[0x11] = s_jitabata_005bb428;
  puVar2[0x10] = uVar3;
  puVar2[0x12] = uVar3;
  puVar2[0x13] = &DAT_005bb434;
  uVar5 = func_00114608(DAT_005bb440,DAT_005bb43c);
  piVar1[1] = (int)uVar5;
  local_24 = 0;
  local_23 = 0;
  local_22 = 0;
  local_21 = 0xff;
  local_20 = 0xff;
  func_004FC6FC(DAT_005bb444,0,1,0,0,(undefined4 *)&local_24,0xb);
  puVar2 = DAT_005bb44c;
  DAT_005bb44c[2] = DAT_005bb44c + 3;
  puVar2[1] = 5;
  *puVar2 = 0;
  local_14 = &DAT_005bb450;
  local_18 = uVar3;
  local_2c = s_EnemyDeviland_005bb45c;
  local_30 = uVar3;
  iVar4 = *piVar1;
  if (*piVar1 == 0) {
    iVar4 = DAT_005bb46c;
  }
  uVar3 = func_0019B51C(DAT_005bb478,DAT_005bb474,*DAT_005bb470,(int)&local_30,DAT_005bb44c,
                        &local_18,iVar4);
  return CONCAT44(DAT_005bb47c,uVar3);
}

