#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern int func_004FC6FC(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4, undefined4 param_5,undefined4 *param_6,undefined4 param_7);
extern int *DAT_005cdf30;
extern undefined4 *DAT_005cdf34;
extern undefined4 DAT_005cdf44;
extern undefined4 DAT_005cdf6c;
extern undefined4 DAT_005cdf70;
extern undefined4 *DAT_005cdf74;
extern undefined DAT_005cdf78;
extern undefined4 DAT_005cdf94;
extern undefined4 *DAT_005cdf98;
extern undefined4 DAT_005cdf9c;
extern undefined4 *DAT_005cdfa0;
extern undefined DAT_005cdfa4;
extern int DAT_005cdfc8;
extern uint *DAT_005cdfcc;
extern undefined4 DAT_005cdfd0;
extern undefined4 *DAT_005cdfd4;
extern undefined4 DAT_005cdfd8;
extern char s_MiniGameRSPeace_005cdfb8[];
extern char s_N_ArrowB_00_005cdf48[];
extern char s_N_ArrowL_00_005cdf54[];
extern char s_N_ArrowR_00_005cdf60[];
extern char s_N_ArrowT_00_005cdf38[];
extern char s_damage_005cdf8c[];
extern char s_lowral_walk_005cdf80[];

// USA 005CDDE8 <- EU 005CDDC0 (Ghidra, non-matching)
// GLOBAL DAT_005cdf30 int *
// GLOBAL DAT_005cdf34 undefined4 *
// GLOBAL DAT_005cdf44 undefined4
// GLOBAL DAT_005cdf6c undefined4
// GLOBAL DAT_005cdf70 undefined4
// GLOBAL DAT_005cdf74 undefined4 *
// GLOBAL DAT_005cdf78 undefined
// GLOBAL DAT_005cdf94 undefined4
// GLOBAL DAT_005cdf98 undefined4 *
// GLOBAL DAT_005cdf9c undefined4
// GLOBAL DAT_005cdfa0 undefined4 *
// GLOBAL DAT_005cdfa4 undefined
// GLOBAL DAT_005cdfc8 int
// GLOBAL DAT_005cdfcc uint *
// GLOBAL DAT_005cdfd0 undefined4
// GLOBAL DAT_005cdfd4 undefined4 *
// GLOBAL DAT_005cdfd8 undefined4
// GLOBAL s_MiniGameRSPeace_005cdfb8 string
// GLOBAL s_N_ArrowB_00_005cdf48 string
// GLOBAL s_N_ArrowL_00_005cdf54 string
// GLOBAL s_N_ArrowR_00_005cdf60 string
// GLOBAL s_N_ArrowT_00_005cdf38 string
// GLOBAL s_damage_005cdf8c string
// GLOBAL s_lowral_walk_005cdf80 string

undefined8 func_005CDDE8(void)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(undefined1 *)(albw_frame + 0x8))
  #define local_27 (*(undefined1 *)(albw_frame + 0x9))
  #define local_26 (*(undefined1 *)(albw_frame + 0xa))
  #define local_25 (*(undefined1 *)(albw_frame + 0xb))
  #define local_24 (*(undefined1 *)(albw_frame + 0xc))
  #define local_20 (*(undefined4 *)(albw_frame + 0x10))
  #define local_1c (*(char * *)(albw_frame + 0x14))
  #define local_18 (*(undefined4 *)(albw_frame + 0x18))
  #define local_14 (*(undefined * *)(albw_frame + 0x1c))
  piVar1 = DAT_005cdf30;
  DAT_005cdf30[2] = -1;
  piVar1[3] = -1;
  uVar3 = DAT_005cdf44;
  piVar1[4] = 0;
  piVar1[5] = 0;
  puVar2 = DAT_005cdf34;
  DAT_005cdf34[1] = s_N_ArrowT_00_005cdf38;
  *puVar2 = uVar3;
  puVar2[3] = s_N_ArrowB_00_005cdf48;
  puVar2[2] = uVar3;
  puVar2[5] = s_N_ArrowL_00_005cdf54;
  puVar2[4] = uVar3;
  puVar2[6] = uVar3;
  puVar2[7] = s_N_ArrowR_00_005cdf60;
  puVar2 = DAT_005cdf74;
  DAT_005cdf74[1] = &DAT_005cdf78;
  *puVar2 = uVar3;
  puVar2[3] = s_lowral_walk_005cdf80;
  puVar2[2] = uVar3;
  puVar2[4] = uVar3;
  puVar2[5] = s_damage_005cdf8c;
  local_28 = 0;
  local_27 = 0;
  local_26 = 0;
  local_24 = 0xff;
  local_25 = 0xff;
  func_004FC6FC(DAT_005cdf98,0,0,0,0,(undefined4 *)&local_28,0xb);
  puVar2 = DAT_005cdfa0;
  puVar5 = DAT_005cdfa0 + 3;
  DAT_005cdfa0[1] = 5;
  puVar2[2] = puVar5;
  *puVar2 = 0;
  local_14 = &DAT_005cdfa4;
  local_18 = uVar3;
  local_1c = s_MiniGameRSPeace_005cdfb8;
  local_20 = uVar3;
  iVar4 = *piVar1;
  if (*piVar1 == 0) {
    iVar4 = DAT_005cdfc8;
  }
  uVar3 = func_0019B51C(DAT_005cdfd4,DAT_005cdfd0,*DAT_005cdfcc,(int)&local_20,DAT_005cdfa0,
                        &local_18,iVar4);
  return CONCAT44(DAT_005cdfd8,uVar3);
}

