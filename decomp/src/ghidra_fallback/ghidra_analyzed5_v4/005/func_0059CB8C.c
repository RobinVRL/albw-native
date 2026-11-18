#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_0059cd38;
extern undefined4 *DAT_0059cd3c;
extern undefined4 *DAT_0059cd40;
extern undefined4 DAT_0059cd50;
extern undefined4 DAT_0059cd78;
extern undefined4 DAT_0059cd7c;
extern undefined4 *DAT_0059cd80;
extern undefined DAT_0059cd84;
extern undefined DAT_0059cd8c;
extern undefined DAT_0059cd94;
extern undefined DAT_0059cd9c;
extern undefined DAT_0059cdb0;
extern undefined4 DAT_0059cde4;
extern undefined4 *DAT_0059cde8;
extern undefined4 DAT_0059cdec;
extern undefined4 DAT_0059cdf0;
extern undefined4 DAT_0059cdf4;
extern undefined4 DAT_0059cdf8;
extern undefined4 DAT_0059cdfc;
extern undefined4 DAT_0059ce00;
extern undefined DAT_0059ce04;
extern undefined4 DAT_0059ce18;
extern uint *DAT_0059ce1c;
extern undefined4 DAT_0059ce20;
extern undefined4 *DAT_0059ce24;
extern undefined4 DAT_0059ce28;
extern char s_N_ArrowB_00_0059cd54[];
extern char s_N_ArrowL_00_0059cd60[];
extern char s_N_ArrowR_00_0059cd6c[];
extern char s_N_ArrowT_00_0059cd44[];
extern char s_NpcThief_0059ce0c[];
extern char s_catch_0059cddc[];
extern char s_down_wait_0059cdc8[];
extern char s_knock_down_0059cdbc[];
extern char s_search_0059cdb4[];
extern char s_standup_0059cdd4[];
extern char s_surprise_0059cda4[];

// USA 0059CB8C <- EU 0059CB64 (Ghidra, non-matching)
// GLOBAL DAT_0059cd38 undefined4 *
// GLOBAL DAT_0059cd3c undefined4 *
// GLOBAL DAT_0059cd40 undefined4 *
// GLOBAL DAT_0059cd50 undefined4
// GLOBAL DAT_0059cd78 undefined4
// GLOBAL DAT_0059cd7c undefined4
// GLOBAL DAT_0059cd80 undefined4 *
// GLOBAL DAT_0059cd84 undefined
// GLOBAL DAT_0059cd8c undefined
// GLOBAL DAT_0059cd94 undefined
// GLOBAL DAT_0059cd9c undefined
// GLOBAL DAT_0059cdb0 undefined
// GLOBAL DAT_0059cde4 undefined4
// GLOBAL DAT_0059cde8 undefined4 *
// GLOBAL DAT_0059cdec undefined4
// GLOBAL DAT_0059cdf0 undefined4
// GLOBAL DAT_0059cdf4 undefined4
// GLOBAL DAT_0059cdf8 undefined4
// GLOBAL DAT_0059cdfc undefined4
// GLOBAL DAT_0059ce00 undefined4
// GLOBAL DAT_0059ce04 undefined
// GLOBAL DAT_0059ce18 undefined4
// GLOBAL DAT_0059ce1c uint *
// GLOBAL DAT_0059ce20 undefined4
// GLOBAL DAT_0059ce24 undefined4 *
// GLOBAL DAT_0059ce28 undefined4
// GLOBAL s_N_ArrowB_00_0059cd54 string
// GLOBAL s_N_ArrowL_00_0059cd60 string
// GLOBAL s_N_ArrowR_00_0059cd6c string
// GLOBAL s_N_ArrowT_00_0059cd44 string
// GLOBAL s_NpcThief_0059ce0c string
// GLOBAL s_catch_0059cddc string
// GLOBAL s_down_wait_0059cdc8 string
// GLOBAL s_knock_down_0059cdbc string
// GLOBAL s_search_0059cdb4 string
// GLOBAL s_standup_0059cdd4 string
// GLOBAL s_surprise_0059cda4 string

undefined8 func_0059CB8C(void)

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
  puVar1 = DAT_0059cd38;
  *DAT_0059cd38 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  local_20 = DAT_0059cd50;
  puVar1 = DAT_0059cd3c;
  *DAT_0059cd3c = 0;
  puVar1[1] = 0;
  puVar1 = DAT_0059cd40;
  DAT_0059cd40[1] = s_N_ArrowT_00_0059cd44;
  *puVar1 = local_20;
  puVar1[3] = s_N_ArrowB_00_0059cd54;
  puVar1[2] = local_20;
  puVar1[5] = s_N_ArrowL_00_0059cd60;
  puVar1[4] = local_20;
  puVar1[6] = local_20;
  puVar1[7] = s_N_ArrowR_00_0059cd6c;
  puVar1 = DAT_0059cd80;
  DAT_0059cd80[1] = &DAT_0059cd84;
  *puVar1 = local_20;
  puVar1[4] = &DAT_0059cd8c;
  puVar1[3] = local_20;
  puVar1[7] = &DAT_0059cd94;
  puVar1[6] = local_20;
  puVar1[10] = &DAT_0059cd9c;
  puVar1[9] = local_20;
  puVar1[0xd] = s_surprise_0059cda4;
  puVar1[0xc] = local_20;
  puVar1[0x10] = &DAT_0059cdb0;
  puVar1[0xf] = local_20;
  puVar1[0x13] = s_search_0059cdb4;
  puVar1[0x12] = local_20;
  puVar1[0x16] = s_knock_down_0059cdbc;
  puVar1[0x15] = local_20;
  puVar1[0x19] = s_down_wait_0059cdc8;
  puVar1[0x18] = local_20;
  puVar1[0x1c] = s_standup_0059cdd4;
  puVar1[0x1b] = local_20;
  puVar1[0x1e] = local_20;
  puVar1[0x1f] = s_catch_0059cddc;
  uVar5 = DAT_0059ce00;
  uVar4 = DAT_0059cdfc;
  uVar3 = DAT_0059cdf8;
  uVar2 = DAT_0059cdf4;
  uVar6 = DAT_0059cdf0;
  puVar1 = DAT_0059cde8;
  *DAT_0059cde8 = DAT_0059cdec;
  puVar1[1] = uVar6;
  puVar1[2] = uVar2;
  puVar1[3] = uVar3;
  puVar1[4] = uVar4;
  puVar1[5] = uVar5;
  puVar1[6] = 0xf;
  *(undefined2 *)(puVar1 + 7) = 0x5f;
  *(undefined2 *)((int)puVar1 + 0x1e) = 0xb4;
  *(undefined1 *)(puVar1 + 8) = 0xe7;
  *(undefined1 *)((int)puVar1 + 0x21) = 0xec;
  *(undefined1 *)((int)puVar1 + 0x22) = 0xf;
  *(undefined1 *)((int)puVar1 + 0x23) = 0x1e;
  *(undefined1 *)(puVar1 + 9) = 0x19;
  puVar1[-0xa2] = 0;
  puVar1[-0xa1] = 5;
  puVar1[-0xa0] = puVar1 + -0x9f;
  local_1c = &DAT_0059ce04;
  local_24 = s_NpcThief_0059ce0c;
  uStack_28 = local_20;
  uVar6 = func_0019B51C(DAT_0059ce24,DAT_0059ce20,*DAT_0059ce1c,(int)&uStack_28,DAT_0059ce18,
                        &local_20,0);
  return CONCAT44(DAT_0059ce28,uVar6);
}

