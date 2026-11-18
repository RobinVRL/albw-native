#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005b573c;
extern undefined4 *DAT_005b5740;
extern undefined4 *DAT_005b5744;
extern undefined4 DAT_005b5754;
extern undefined4 DAT_005b577c;
extern undefined4 DAT_005b5780;
extern undefined4 *DAT_005b5784;
extern undefined DAT_005b5790;
extern undefined DAT_005b5798;
extern undefined4 DAT_005b57b0;
extern undefined4 *DAT_005b57b4;
extern undefined4 DAT_005b57b8;
extern undefined4 *DAT_005b57bc;
extern undefined DAT_005b57c0;
extern uint *DAT_005b57e4;
extern undefined4 DAT_005b57e8;
extern undefined4 *DAT_005b57ec;
extern undefined4 DAT_005b57f0;
extern undefined4 *DAT_005b57f4;
extern undefined DAT_005b57f8;
extern uint *DAT_005b5820;
extern undefined4 *DAT_005b5824;
extern char s_MojTelephoneDark_005b580c[];
extern char s_MojTelephone_005b57d4[];
extern char s_N_ArrowB_00_005b5758[];
extern char s_N_ArrowL_00_005b5764[];
extern char s_N_ArrowR_00_005b5770[];
extern char s_N_ArrowT_00_005b5748[];
extern char s_appeal_005b57a8[];
extern char s_start_005b5788[];
extern char s_tornade_005b57a0[];

// USA 005B559C <- EU 005B5574 (Ghidra, non-matching)
// GLOBAL DAT_005b573c undefined4 *
// GLOBAL DAT_005b5740 undefined4 *
// GLOBAL DAT_005b5744 undefined4 *
// GLOBAL DAT_005b5754 undefined4
// GLOBAL DAT_005b577c undefined4
// GLOBAL DAT_005b5780 undefined4
// GLOBAL DAT_005b5784 undefined4 *
// GLOBAL DAT_005b5790 undefined
// GLOBAL DAT_005b5798 undefined
// GLOBAL DAT_005b57b0 undefined4
// GLOBAL DAT_005b57b4 undefined4 *
// GLOBAL DAT_005b57b8 undefined4
// GLOBAL DAT_005b57bc undefined4 *
// GLOBAL DAT_005b57c0 undefined
// GLOBAL DAT_005b57e4 uint *
// GLOBAL DAT_005b57e8 undefined4
// GLOBAL DAT_005b57ec undefined4 *
// GLOBAL DAT_005b57f0 undefined4
// GLOBAL DAT_005b57f4 undefined4 *
// GLOBAL DAT_005b57f8 undefined
// GLOBAL DAT_005b5820 uint *
// GLOBAL DAT_005b5824 undefined4 *
// GLOBAL s_MojTelephoneDark_005b580c string
// GLOBAL s_MojTelephone_005b57d4 string
// GLOBAL s_N_ArrowB_00_005b5758 string
// GLOBAL s_N_ArrowL_00_005b5764 string
// GLOBAL s_N_ArrowR_00_005b5770 string
// GLOBAL s_N_ArrowT_00_005b5748 string
// GLOBAL s_appeal_005b57a8 string
// GLOBAL s_start_005b5788 string
// GLOBAL s_tornade_005b57a0 string

undefined8 func_005B559C(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(undefined4 *)(albw_frame + 0x0))
  #define local_2c (*(char * *)(albw_frame + 0x4))
  #define local_28 (*(undefined4 *)(albw_frame + 0x8))
  #define local_24 (*(undefined * *)(albw_frame + 0xc))
  #define local_20 (*(undefined4 *)(albw_frame + 0x10))
  #define local_1c (*(char * *)(albw_frame + 0x14))
  #define local_18 (*(undefined4 *)(albw_frame + 0x18))
  #define local_14 (*(undefined * *)(albw_frame + 0x1c))
  puVar1 = DAT_005b573c;
  *DAT_005b573c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  uVar2 = DAT_005b5754;
  puVar1 = DAT_005b5740;
  *DAT_005b5740 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005b5744;
  DAT_005b5744[1] = s_N_ArrowT_00_005b5748;
  *puVar1 = uVar2;
  puVar1[3] = s_N_ArrowB_00_005b5758;
  puVar1[2] = uVar2;
  puVar1[5] = s_N_ArrowL_00_005b5764;
  puVar1[4] = uVar2;
  puVar1[6] = uVar2;
  puVar1[7] = s_N_ArrowR_00_005b5770;
  puVar1 = DAT_005b5784;
  DAT_005b5784[1] = s_start_005b5788;
  *puVar1 = uVar2;
  puVar1[3] = &DAT_005b5790;
  puVar1[2] = uVar2;
  puVar1[5] = &DAT_005b5798;
  puVar1[4] = uVar2;
  puVar1[7] = s_tornade_005b57a0;
  puVar1[6] = uVar2;
  puVar1[8] = uVar2;
  puVar1[9] = s_appeal_005b57a8;
  puVar1 = DAT_005b57b4;
  DAT_005b57b4[1] = s_start_005b5788;
  *puVar1 = uVar2;
  puVar1[2] = uVar2;
  puVar1[3] = &DAT_005b5790;
  puVar1 = DAT_005b57bc;
  puVar3 = DAT_005b57bc + 3;
  DAT_005b57bc[1] = 5;
  puVar1[2] = puVar3;
  *puVar1 = 0;
  local_24 = &DAT_005b57c0;
  local_2c = s_MojTelephone_005b57d4;
  local_28 = uVar2;
  local_30 = uVar2;
  func_0019B51C(DAT_005b57ec,DAT_005b57e8,*DAT_005b57e4,(int)&local_30,DAT_005b57bc,&local_28,0);
  puVar1 = DAT_005b57f4;
  puVar3 = DAT_005b57f4 + 3;
  DAT_005b57f4[1] = 5;
  puVar1[2] = puVar3;
  *puVar1 = 0;
  local_14 = &DAT_005b57f8;
  local_1c = s_MojTelephoneDark_005b580c;
  local_18 = uVar2;
  local_20 = uVar2;
  uVar2 = func_0019B51C(DAT_005b5824,DAT_005b57e8,*DAT_005b5820,(int)&local_20,DAT_005b57f4,
                        &local_18,0);
  return CONCAT44(DAT_005b57f0,uVar2);
}

