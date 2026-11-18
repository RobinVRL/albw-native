#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005bfac4;
extern undefined4 *DAT_005bfac8;
extern undefined4 *DAT_005bfacc;
extern undefined4 DAT_005bfadc;
extern undefined4 DAT_005bfb04;
extern undefined4 DAT_005bfb08;
extern undefined4 *DAT_005bfb0c;
extern undefined DAT_005bfb10;
extern undefined DAT_005bfb18;
extern undefined DAT_005bfb20;
extern undefined DAT_005bfb28;
extern undefined4 DAT_005bfb30;
extern undefined4 *DAT_005bfb34;
extern undefined4 DAT_005bfb38;
extern undefined4 DAT_005bfb3c;
extern undefined4 DAT_005bfb40;
extern undefined4 DAT_005bfb44;
extern undefined4 DAT_005bfb48;
extern undefined4 DAT_005bfb4c;
extern undefined4 *DAT_005bfb50;
extern undefined4 DAT_005bfb5c;
extern undefined4 *DAT_005bfb60;
extern undefined DAT_005bfb64;
extern uint *DAT_005bfb84;
extern undefined4 DAT_005bfb88;
extern undefined4 *DAT_005bfb8c;
extern undefined4 DAT_005bfb90;
extern char s_HandR_005bfb54[];
extern char s_N_ArrowB_00_005bfae0[];
extern char s_N_ArrowL_00_005bfaec[];
extern char s_N_ArrowR_00_005bfaf8[];
extern char s_N_ArrowT_00_005bfad0[];
extern char s_NpcGhostGanon_005bfb74[];

// USA 005BF94C <- EU 005BF924 (Ghidra, non-matching)
// GLOBAL DAT_005bfac4 undefined4 *
// GLOBAL DAT_005bfac8 undefined4 *
// GLOBAL DAT_005bfacc undefined4 *
// GLOBAL DAT_005bfadc undefined4
// GLOBAL DAT_005bfb04 undefined4
// GLOBAL DAT_005bfb08 undefined4
// GLOBAL DAT_005bfb0c undefined4 *
// GLOBAL DAT_005bfb10 undefined
// GLOBAL DAT_005bfb18 undefined
// GLOBAL DAT_005bfb20 undefined
// GLOBAL DAT_005bfb28 undefined
// GLOBAL DAT_005bfb30 undefined4
// GLOBAL DAT_005bfb34 undefined4 *
// GLOBAL DAT_005bfb38 undefined4
// GLOBAL DAT_005bfb3c undefined4
// GLOBAL DAT_005bfb40 undefined4
// GLOBAL DAT_005bfb44 undefined4
// GLOBAL DAT_005bfb48 undefined4
// GLOBAL DAT_005bfb4c undefined4
// GLOBAL DAT_005bfb50 undefined4 *
// GLOBAL DAT_005bfb5c undefined4
// GLOBAL DAT_005bfb60 undefined4 *
// GLOBAL DAT_005bfb64 undefined
// GLOBAL DAT_005bfb84 uint *
// GLOBAL DAT_005bfb88 undefined4
// GLOBAL DAT_005bfb8c undefined4 *
// GLOBAL DAT_005bfb90 undefined4
// GLOBAL s_HandR_005bfb54 string
// GLOBAL s_N_ArrowB_00_005bfae0 string
// GLOBAL s_N_ArrowL_00_005bfaec string
// GLOBAL s_N_ArrowR_00_005bfaf8 string
// GLOBAL s_N_ArrowT_00_005bfad0 string
// GLOBAL s_NpcGhostGanon_005bfb74 string

undefined8 func_005BF94C(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x8))
  #define local_24 (*(char * *)(albw_frame + 0xc))
  #define local_20 (*(undefined4 *)(albw_frame + 0x10))
  #define local_1c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005bfac4;
  *DAT_005bfac4 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  local_20 = DAT_005bfadc;
  puVar1 = DAT_005bfac8;
  *DAT_005bfac8 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005bfacc;
  DAT_005bfacc[1] = s_N_ArrowT_00_005bfad0;
  *puVar1 = local_20;
  puVar1[3] = s_N_ArrowB_00_005bfae0;
  puVar1[2] = local_20;
  puVar1[5] = s_N_ArrowL_00_005bfaec;
  puVar1[4] = local_20;
  puVar1[6] = local_20;
  puVar1[7] = s_N_ArrowR_00_005bfaf8;
  puVar1 = DAT_005bfb0c;
  DAT_005bfb0c[1] = &DAT_005bfb10;
  *puVar1 = local_20;
  puVar1[4] = &DAT_005bfb18;
  puVar1[3] = local_20;
  puVar1[7] = &DAT_005bfb20;
  puVar1[6] = local_20;
  puVar1[9] = local_20;
  puVar1[10] = &DAT_005bfb28;
  uVar5 = DAT_005bfb4c;
  uVar4 = DAT_005bfb48;
  uVar3 = DAT_005bfb44;
  uVar2 = DAT_005bfb40;
  uVar6 = DAT_005bfb3c;
  puVar1 = DAT_005bfb34;
  *DAT_005bfb34 = DAT_005bfb38;
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
  *(undefined1 *)((int)puVar1 + 0x23) = 0x32;
  *(undefined1 *)(puVar1 + 9) = 0x1e;
  puVar1 = DAT_005bfb50;
  DAT_005bfb50[1] = s_HandR_005bfb54;
  *puVar1 = local_20;
  puVar1 = DAT_005bfb60;
  puVar7 = DAT_005bfb60 + 3;
  *DAT_005bfb60 = 0;
  puVar1[1] = 5;
  puVar1[2] = puVar7;
  local_1c = &DAT_005bfb64;
  local_24 = s_NpcGhostGanon_005bfb74;
  uStack_28 = local_20;
  uVar6 = func_0019B51C(DAT_005bfb8c,DAT_005bfb88,*DAT_005bfb84,(int)&uStack_28,DAT_005bfb60,
                        &local_20,0);
  return CONCAT44(DAT_005bfb90,uVar6);
}

