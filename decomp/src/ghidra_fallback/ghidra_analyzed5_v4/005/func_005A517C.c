#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern int func_004FC6FC(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4, undefined4 param_5,undefined4 *param_6,undefined4 param_7);
extern int DAT_005a53e0;
extern undefined4 *DAT_005a53e4;
extern undefined4 *DAT_005a53e8;
extern undefined DAT_005a53ec;
extern undefined4 DAT_005a53f4;
extern undefined DAT_005a5408;
extern undefined DAT_005a5410;
extern undefined DAT_005a5420;
extern undefined DAT_005a5468;
extern undefined4 DAT_005a5470;
extern uint DAT_005a5474;
extern undefined4 *DAT_005a5478;
extern uint DAT_005a547c;
extern uint DAT_005a5480;
extern uint DAT_005a5484;
extern uint DAT_005a5488;
extern uint DAT_005a548c;
extern undefined4 DAT_005a5490;
extern uint DAT_005a5494;
extern uint DAT_005a5498;
extern undefined4 *DAT_005a549c;
extern undefined4 DAT_005a54a0;
extern undefined4 *DAT_005a54a4;
extern undefined4 DAT_005a54a8;
extern undefined4 *DAT_005a54ac;
extern undefined DAT_005a54b0;
extern int DAT_005a54c8;
extern uint *DAT_005a54cc;
extern undefined4 DAT_005a54d0;
extern undefined4 *DAT_005a54d4;
extern undefined4 DAT_005a54d8;
extern char s_EnemyLynel_005a54bc[];
extern char s_burn_ed_005a5434[];
extern char s_burn_st_005a5418[];
extern char s_burn_turn_005a5428[];
extern char s_damage_005a5454[];
extern char s_jitabata_005a543c[];
extern char s_nondamage_005a545c[];
extern char s_piyopiyo_005a5448[];
extern char s_walk0_005a53f8[];
extern char s_walk1_005a5400[];

// USA 005A517C <- EU 005A5154 (Ghidra, non-matching)
// GLOBAL DAT_005a53e0 int
// GLOBAL DAT_005a53e4 undefined4 *
// GLOBAL DAT_005a53e8 undefined4 *
// GLOBAL DAT_005a53ec undefined
// GLOBAL DAT_005a53f4 undefined4
// GLOBAL DAT_005a5408 undefined
// GLOBAL DAT_005a5410 undefined
// GLOBAL DAT_005a5420 undefined
// GLOBAL DAT_005a5468 undefined
// GLOBAL DAT_005a5470 undefined4
// GLOBAL DAT_005a5474 uint
// GLOBAL DAT_005a5478 undefined4 *
// GLOBAL DAT_005a547c uint
// GLOBAL DAT_005a5480 uint
// GLOBAL DAT_005a5484 uint
// GLOBAL DAT_005a5488 uint
// GLOBAL DAT_005a548c uint
// GLOBAL DAT_005a5490 undefined4
// GLOBAL DAT_005a5494 uint
// GLOBAL DAT_005a5498 uint
// GLOBAL DAT_005a549c undefined4 *
// GLOBAL DAT_005a54a0 undefined4
// GLOBAL DAT_005a54a4 undefined4 *
// GLOBAL DAT_005a54a8 undefined4
// GLOBAL DAT_005a54ac undefined4 *
// GLOBAL DAT_005a54b0 undefined
// GLOBAL DAT_005a54c8 int
// GLOBAL DAT_005a54cc uint *
// GLOBAL DAT_005a54d0 undefined4
// GLOBAL DAT_005a54d4 undefined4 *
// GLOBAL DAT_005a54d8 undefined4
// GLOBAL s_EnemyLynel_005a54bc string
// GLOBAL s_burn_ed_005a5434 string
// GLOBAL s_burn_st_005a5418 string
// GLOBAL s_burn_turn_005a5428 string
// GLOBAL s_damage_005a5454 string
// GLOBAL s_jitabata_005a543c string
// GLOBAL s_nondamage_005a545c string
// GLOBAL s_piyopiyo_005a5448 string
// GLOBAL s_walk0_005a53f8 string
// GLOBAL s_walk1_005a5400 string

undefined8 func_005A517C(void)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_48 (*(undefined4 *)(albw_frame + 0x8))
  #define local_44 (*(char * *)(albw_frame + 0xc))
  #define local_3c (*(undefined1 *)(albw_frame + 0x14))
  #define local_3b (*(undefined1 *)(albw_frame + 0x15))
  #define local_3a (*(undefined1 *)(albw_frame + 0x16))
  #define local_39 (*(undefined1 *)(albw_frame + 0x17))
  #define local_38 (*(undefined1 *)(albw_frame + 0x18))
  #define local_30 (*(undefined4 *)(albw_frame + 0x20))
  #define local_2c (*(undefined * *)(albw_frame + 0x24))
  uVar6 = DAT_005a53f4;
  iVar7 = DAT_005a53e0;
  *(undefined4 *)(DAT_005a53e0 + 0x38) = 0xffffffff;
  *(undefined4 *)(iVar7 + 0x3c) = 0xffffffff;
  puVar1 = DAT_005a53e4;
  *DAT_005a53e4 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005a53e8;
  DAT_005a53e8[1] = &DAT_005a53ec;
  *puVar1 = uVar6;
  puVar1[3] = s_walk0_005a53f8;
  puVar1[2] = uVar6;
  puVar1[5] = s_walk1_005a5400;
  puVar1[4] = uVar6;
  puVar1[7] = &DAT_005a5408;
  puVar1[6] = uVar6;
  puVar1[9] = &DAT_005a5410;
  puVar1[8] = uVar6;
  puVar1[0xb] = s_burn_st_005a5418;
  puVar1[10] = uVar6;
  puVar1[0xd] = &DAT_005a5420;
  puVar1[0xc] = uVar6;
  puVar1[0xf] = s_burn_turn_005a5428;
  puVar1[0xe] = uVar6;
  puVar1[0x11] = s_burn_ed_005a5434;
  puVar1[0x10] = uVar6;
  puVar1[0x13] = s_jitabata_005a543c;
  puVar1[0x12] = uVar6;
  puVar1[0x15] = s_piyopiyo_005a5448;
  puVar1[0x14] = uVar6;
  puVar1[0x17] = s_damage_005a5454;
  puVar1[0x16] = uVar6;
  puVar1[0x19] = s_nondamage_005a545c;
  puVar1[0x18] = uVar6;
  puVar1[0x1a] = uVar6;
  puVar1[0x1b] = &DAT_005a5468;
  puVar1 = DAT_005a5478;
  uVar10 = func_00114608(0x4e000000,DAT_005a5474);
  *puVar1 = (int)uVar10;
  uVar10 = func_00114608(DAT_005a547c,(uint)((ulonglong)uVar10 >> 0x20));
  uVar5 = (undefined4)uVar10;
  puVar1[1] = uVar5;
  uVar10 = func_00114608(DAT_005a5480,(uint)((ulonglong)uVar10 >> 0x20));
  puVar1[2] = (int)uVar10;
  uVar11 = func_00114608(DAT_005a5484,(uint)((ulonglong)uVar10 >> 0x20));
  puVar1[3] = (int)uVar11;
  uVar11 = func_00114608(DAT_005a5488,(uint)((ulonglong)uVar11 >> 0x20));
  puVar1[4] = (int)uVar11;
  uVar12 = func_00114608(DAT_005a548c,(uint)((ulonglong)uVar11 >> 0x20));
  puVar1[5] = (int)uVar12;
  uVar9 = DAT_005a5490;
  uVar12 = func_00114608(0,(uint)((ulonglong)uVar12 >> 0x20));
  puVar1[6] = (int)uVar12;
  uVar12 = func_00114608(DAT_005a5494,(uint)((ulonglong)uVar12 >> 0x20));
  puVar1[7] = (int)uVar12;
  puVar1[8] = uVar5;
  uVar2 = DAT_005a5498;
  puVar1[9] = (int)uVar10;
  uVar10 = func_00114608(uVar2,(uint)(puVar1 + 9));
  puVar1[10] = (int)uVar10;
  uVar4 = DAT_005a54a0;
  puVar1[0xb] = uVar5;
  puVar1[0xc] = (int)uVar11;
  puVar3 = DAT_005a549c;
  *DAT_005a549c = uVar9;
  puVar3[1] = uVar9;
  puVar3[2] = uVar4;
  local_3c = 0;
  local_3b = 0;
  local_3a = 0;
  local_39 = 0xff;
  local_38 = 0xff;
  func_004FC6FC(DAT_005a54a4,0,1,0,0,(undefined4 *)&local_3c,0xb);
  puVar3 = DAT_005a54ac;
  puVar8 = DAT_005a54ac + 3;
  DAT_005a54ac[1] = 5;
  puVar3[2] = puVar8;
  *puVar3 = 0;
  local_2c = &DAT_005a54b0;
  local_30 = uVar6;
  local_44 = s_EnemyLynel_005a54bc;
  local_48 = uVar6;
  iVar7 = puVar1[-1];
  if (puVar1[-1] == 0) {
    iVar7 = DAT_005a54c8;
  }
  uVar6 = func_0019B51C(DAT_005a54d4,DAT_005a54d0,*DAT_005a54cc,(int)&local_48,DAT_005a54ac,
                        &local_30,iVar7);
  return CONCAT44(DAT_005a54d8,uVar6);
}

