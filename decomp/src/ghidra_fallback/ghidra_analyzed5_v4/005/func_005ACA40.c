#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005acbe4;
extern undefined4 *DAT_005acbe8;
extern undefined4 *DAT_005acbec;
extern undefined4 DAT_005acbfc;
extern undefined4 DAT_005acc24;
extern undefined4 DAT_005acc28;
extern undefined4 *DAT_005acc2c;
extern undefined DAT_005acc30;
extern undefined DAT_005acc38;
extern undefined DAT_005acc40;
extern undefined4 DAT_005acc50;
extern undefined4 *DAT_005acc54;
extern undefined4 DAT_005acc58;
extern undefined4 DAT_005acc5c;
extern undefined4 DAT_005acc60;
extern undefined4 *DAT_005acc64;
extern undefined4 DAT_005acc68;
extern undefined4 DAT_005acc6c;
extern undefined DAT_005acc70;
extern undefined4 DAT_005acc98;
extern uint *DAT_005acc9c;
extern undefined4 DAT_005acca0;
extern undefined4 *DAT_005acca4;
extern undefined4 DAT_005acca8;
extern char s_N_ArrowB_00_005acc00[];
extern char s_N_ArrowL_00_005acc0c[];
extern char s_N_ArrowR_00_005acc18[];
extern char s_N_ArrowT_00_005acbf0[];
extern char s_NpcKokkoBig_005acc8c[];
extern char s_dance_005acc48[];

// USA 005ACA40 <- EU 005ACA18 (Ghidra, non-matching)
// GLOBAL DAT_005acbe4 undefined4 *
// GLOBAL DAT_005acbe8 undefined4 *
// GLOBAL DAT_005acbec undefined4 *
// GLOBAL DAT_005acbfc undefined4
// GLOBAL DAT_005acc24 undefined4
// GLOBAL DAT_005acc28 undefined4
// GLOBAL DAT_005acc2c undefined4 *
// GLOBAL DAT_005acc30 undefined
// GLOBAL DAT_005acc38 undefined
// GLOBAL DAT_005acc40 undefined
// GLOBAL DAT_005acc50 undefined4
// GLOBAL DAT_005acc54 undefined4 *
// GLOBAL DAT_005acc58 undefined4
// GLOBAL DAT_005acc5c undefined4
// GLOBAL DAT_005acc60 undefined4
// GLOBAL DAT_005acc64 undefined4 *
// GLOBAL DAT_005acc68 undefined4
// GLOBAL DAT_005acc6c undefined4
// GLOBAL DAT_005acc70 undefined
// GLOBAL DAT_005acc98 undefined4
// GLOBAL DAT_005acc9c uint *
// GLOBAL DAT_005acca0 undefined4
// GLOBAL DAT_005acca4 undefined4 *
// GLOBAL DAT_005acca8 undefined4
// GLOBAL s_N_ArrowB_00_005acc00 string
// GLOBAL s_N_ArrowL_00_005acc0c string
// GLOBAL s_N_ArrowR_00_005acc18 string
// GLOBAL s_N_ArrowT_00_005acbf0 string
// GLOBAL s_NpcKokkoBig_005acc8c string
// GLOBAL s_dance_005acc48 string

undefined8 func_005ACA40(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x8))
  #define local_24 (*(char * *)(albw_frame + 0xc))
  #define local_20 (*(undefined4 *)(albw_frame + 0x10))
  #define local_1c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005acbe4;
  *DAT_005acbe4 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  local_20 = DAT_005acbfc;
  puVar1 = DAT_005acbe8;
  *DAT_005acbe8 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005acbec;
  DAT_005acbec[1] = s_N_ArrowT_00_005acbf0;
  *puVar1 = local_20;
  puVar1[3] = s_N_ArrowB_00_005acc00;
  puVar1[2] = local_20;
  puVar1[5] = s_N_ArrowL_00_005acc0c;
  puVar1[4] = local_20;
  puVar1[6] = local_20;
  puVar1[7] = s_N_ArrowR_00_005acc18;
  puVar1 = DAT_005acc2c;
  DAT_005acc2c[1] = &DAT_005acc30;
  *puVar1 = local_20;
  puVar1[4] = &DAT_005acc38;
  puVar1[3] = local_20;
  puVar1[7] = &DAT_005acc40;
  puVar1[6] = local_20;
  puVar1[9] = local_20;
  puVar1[10] = s_dance_005acc48;
  puVar1 = DAT_005acc54;
  DAT_005acc54[1] = s_dance_005acc48;
  *puVar1 = local_20;
  uVar3 = DAT_005acc6c;
  puVar1 = DAT_005acc64;
  uVar4 = DAT_005acc5c;
  *DAT_005acc64 = DAT_005acc68;
  uVar2 = DAT_005acc60;
  puVar1[1] = uVar3;
  puVar1[2] = uVar4;
  puVar1[3] = uVar2;
  puVar1[4] = uVar2;
  puVar1[5] = uVar4;
  puVar1[6] = 10;
  *(undefined2 *)(puVar1 + 7) = 0x5f;
  *(undefined2 *)((int)puVar1 + 0x1e) = 0xb4;
  *(undefined1 *)(puVar1 + 8) = 0xee;
  *(undefined1 *)((int)puVar1 + 0x21) = 0xec;
  *(undefined1 *)((int)puVar1 + 0x22) = 0xf;
  *(undefined1 *)((int)puVar1 + 0x23) = 0x32;
  *(undefined1 *)(puVar1 + 9) = 0x1e;
  puVar1[10] = 1;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  *(undefined1 *)(puVar1 + 0xd) = 0;
  *(undefined1 *)((int)puVar1 + 0x35) = 1;
  puVar1[-0xa2] = 0;
  puVar1[-0xa1] = 5;
  puVar1[-0xa0] = puVar1 + -0x9f;
  local_1c = &DAT_005acc70;
  local_24 = s_NpcKokkoBig_005acc8c;
  uStack_28 = local_20;
  uVar4 = func_0019B51C(DAT_005acca4,DAT_005acca0,*DAT_005acc9c,(int)&uStack_28,DAT_005acc98,
                        &local_20,0);
  return CONCAT44(DAT_005acca8,uVar4);
}

