#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005bdf8c;
extern undefined4 *DAT_005bdf90;
extern undefined4 *DAT_005bdf94;
extern undefined4 DAT_005bdfa4;
extern undefined4 DAT_005bdfcc;
extern undefined4 DAT_005bdfd0;
extern undefined4 *DAT_005bdfd4;
extern undefined DAT_005bdfd8;
extern undefined DAT_005bdfdc;
extern undefined4 DAT_005bdfe0;
extern undefined4 *DAT_005bdfe4;
extern undefined DAT_005bdfe8;
extern uint *DAT_005be008;
extern undefined4 DAT_005be00c;
extern undefined4 *DAT_005be010;
extern undefined4 DAT_005be014;
extern char s_MiniGameRSPot_005bdff8[];
extern char s_N_ArrowB_00_005bdfa8[];
extern char s_N_ArrowL_00_005bdfb4[];
extern char s_N_ArrowR_00_005bdfc0[];
extern char s_N_ArrowT_00_005bdf98[];

// USA 005BDEA8 <- EU 005BDE80 (Ghidra, non-matching)
// GLOBAL DAT_005bdf8c undefined4 *
// GLOBAL DAT_005bdf90 undefined4 *
// GLOBAL DAT_005bdf94 undefined4 *
// GLOBAL DAT_005bdfa4 undefined4
// GLOBAL DAT_005bdfcc undefined4
// GLOBAL DAT_005bdfd0 undefined4
// GLOBAL DAT_005bdfd4 undefined4 *
// GLOBAL DAT_005bdfd8 undefined
// GLOBAL DAT_005bdfdc undefined
// GLOBAL DAT_005bdfe0 undefined4
// GLOBAL DAT_005bdfe4 undefined4 *
// GLOBAL DAT_005bdfe8 undefined
// GLOBAL DAT_005be008 uint *
// GLOBAL DAT_005be00c undefined4
// GLOBAL DAT_005be010 undefined4 *
// GLOBAL DAT_005be014 undefined4
// GLOBAL s_MiniGameRSPot_005bdff8 string
// GLOBAL s_N_ArrowB_00_005bdfa8 string
// GLOBAL s_N_ArrowL_00_005bdfb4 string
// GLOBAL s_N_ArrowR_00_005bdfc0 string
// GLOBAL s_N_ArrowT_00_005bdf98 string

undefined8 func_005BDEA8(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define puStack_14 (*(undefined * *)(albw_frame + 0xc))
  #define uStack_10 (*(undefined4 *)(albw_frame + 0x10))
  #define local_c (*(char * *)(albw_frame + 0x14))
  puVar1 = DAT_005bdf8c;
  *DAT_005bdf8c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  local_18 = DAT_005bdfa4;
  puVar1 = DAT_005bdf90;
  *DAT_005bdf90 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005bdf94;
  DAT_005bdf94[1] = s_N_ArrowT_00_005bdf98;
  *puVar1 = local_18;
  puVar1[3] = s_N_ArrowB_00_005bdfa8;
  puVar1[2] = local_18;
  puVar1[5] = s_N_ArrowL_00_005bdfb4;
  puVar1[4] = local_18;
  puVar1[6] = local_18;
  puVar1[7] = s_N_ArrowR_00_005bdfc0;
  puVar1 = DAT_005bdfd4;
  DAT_005bdfd4[1] = &DAT_005bdfd8;
  *puVar1 = local_18;
  puVar1[2] = local_18;
  puVar1[3] = &DAT_005bdfdc;
  puVar1 = DAT_005bdfe4;
  puVar3 = DAT_005bdfe4 + 3;
  *DAT_005bdfe4 = 0;
  puVar1[1] = 5;
  puVar1[2] = puVar3;
  puStack_14 = &DAT_005bdfe8;
  uStack_10 = local_18;
  local_c = s_MiniGameRSPot_005bdff8;
  uVar2 = func_0019B51C(DAT_005be010,DAT_005be00c,*DAT_005be008,(int)&uStack_10,DAT_005bdfe4,
                        &local_18,0);
  return CONCAT44(DAT_005be014,uVar2);
}

