#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005e6f2c;
extern undefined4 *DAT_005e6f30;
extern undefined4 *DAT_005e6f34;
extern undefined4 DAT_005e6f44;
extern undefined4 DAT_005e6f6c;
extern undefined4 DAT_005e6f70;
extern undefined4 *DAT_005e6f74;
extern undefined4 DAT_005e6fb0;
extern undefined4 *DAT_005e6fb4;
extern undefined4 DAT_005e7028;
extern undefined4 *DAT_005e702c;
extern undefined DAT_005e7030;
extern uint *DAT_005e7054;
extern undefined4 DAT_005e7058;
extern undefined4 *DAT_005e705c;
extern undefined4 DAT_005e7060;
extern char s_MojSagesPlaceStep_005e7040[];
extern char s_N_ArrowB_00_005e6f48[];
extern char s_N_ArrowL_00_005e6f54[];
extern char s_N_ArrowR_00_005e6f60[];
extern char s_N_ArrowT_00_005e6f38[];
extern char s_SagesAppear1_005e6fb8[];
extern char s_SagesAppear2_005e6fc8[];
extern char s_SagesAppear3_005e6fd8[];
extern char s_SagesAppear4_005e6fe8[];
extern char s_SagesAppear5_005e6ff8[];
extern char s_SagesAppear6_005e7008[];
extern char s_SagesAppear7_005e7018[];
extern char s_point1_005e6f78[];
extern char s_point2_005e6f80[];
extern char s_point3_005e6f88[];
extern char s_point4_005e6f90[];
extern char s_point5_005e6f98[];
extern char s_point6_005e6fa0[];
extern char s_point7_005e6fa8[];

// USA 005E6DA4 <- EU 005E6D7C (Ghidra, non-matching)
// GLOBAL DAT_005e6f2c undefined4 *
// GLOBAL DAT_005e6f30 undefined4 *
// GLOBAL DAT_005e6f34 undefined4 *
// GLOBAL DAT_005e6f44 undefined4
// GLOBAL DAT_005e6f6c undefined4
// GLOBAL DAT_005e6f70 undefined4
// GLOBAL DAT_005e6f74 undefined4 *
// GLOBAL DAT_005e6fb0 undefined4
// GLOBAL DAT_005e6fb4 undefined4 *
// GLOBAL DAT_005e7028 undefined4
// GLOBAL DAT_005e702c undefined4 *
// GLOBAL DAT_005e7030 undefined
// GLOBAL DAT_005e7054 uint *
// GLOBAL DAT_005e7058 undefined4
// GLOBAL DAT_005e705c undefined4 *
// GLOBAL DAT_005e7060 undefined4
// GLOBAL s_MojSagesPlaceStep_005e7040 string
// GLOBAL s_N_ArrowB_00_005e6f48 string
// GLOBAL s_N_ArrowL_00_005e6f54 string
// GLOBAL s_N_ArrowR_00_005e6f60 string
// GLOBAL s_N_ArrowT_00_005e6f38 string
// GLOBAL s_SagesAppear1_005e6fb8 string
// GLOBAL s_SagesAppear2_005e6fc8 string
// GLOBAL s_SagesAppear3_005e6fd8 string
// GLOBAL s_SagesAppear4_005e6fe8 string
// GLOBAL s_SagesAppear5_005e6ff8 string
// GLOBAL s_SagesAppear6_005e7008 string
// GLOBAL s_SagesAppear7_005e7018 string
// GLOBAL s_point1_005e6f78 string
// GLOBAL s_point2_005e6f80 string
// GLOBAL s_point3_005e6f88 string
// GLOBAL s_point4_005e6f90 string
// GLOBAL s_point5_005e6f98 string
// GLOBAL s_point6_005e6fa0 string
// GLOBAL s_point7_005e6fa8 string

undefined8 func_005E6DA4(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define puStack_14 (*(undefined * *)(albw_frame + 0xc))
  #define uStack_10 (*(undefined4 *)(albw_frame + 0x10))
  #define local_c (*(char * *)(albw_frame + 0x14))
  puVar1 = DAT_005e6f2c;
  *DAT_005e6f2c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  local_18 = DAT_005e6f44;
  puVar1 = DAT_005e6f30;
  *DAT_005e6f30 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005e6f34;
  DAT_005e6f34[1] = s_N_ArrowT_00_005e6f38;
  *puVar1 = local_18;
  puVar1[3] = s_N_ArrowB_00_005e6f48;
  puVar1[2] = local_18;
  puVar1[5] = s_N_ArrowL_00_005e6f54;
  puVar1[4] = local_18;
  puVar1[6] = local_18;
  puVar1[7] = s_N_ArrowR_00_005e6f60;
  puVar1 = DAT_005e6f74;
  DAT_005e6f74[1] = s_point1_005e6f78;
  *puVar1 = local_18;
  puVar1[3] = s_point2_005e6f80;
  puVar1[2] = local_18;
  puVar1[5] = s_point3_005e6f88;
  puVar1[4] = local_18;
  puVar1[7] = s_point4_005e6f90;
  puVar1[6] = local_18;
  puVar1[9] = s_point5_005e6f98;
  puVar1[8] = local_18;
  puVar1[0xb] = s_point6_005e6fa0;
  puVar1[10] = local_18;
  puVar1[0xc] = local_18;
  puVar1[0xd] = s_point7_005e6fa8;
  puVar1 = DAT_005e6fb4;
  DAT_005e6fb4[1] = s_SagesAppear1_005e6fb8;
  *puVar1 = local_18;
  puVar1[3] = s_SagesAppear2_005e6fc8;
  puVar1[2] = local_18;
  puVar1[5] = s_SagesAppear3_005e6fd8;
  puVar1[4] = local_18;
  puVar1[7] = s_SagesAppear4_005e6fe8;
  puVar1[6] = local_18;
  puVar1[9] = s_SagesAppear5_005e6ff8;
  puVar1[8] = local_18;
  puVar1[0xb] = s_SagesAppear6_005e7008;
  puVar1[10] = local_18;
  puVar1[0xc] = local_18;
  puVar1[0xd] = s_SagesAppear7_005e7018;
  puVar1 = DAT_005e702c;
  puVar3 = DAT_005e702c + 3;
  *DAT_005e702c = 0;
  puVar1[1] = 5;
  puVar1[2] = puVar3;
  puStack_14 = &DAT_005e7030;
  uStack_10 = local_18;
  local_c = s_MojSagesPlaceStep_005e7040;
  uVar2 = func_0019B51C(DAT_005e705c,DAT_005e7058,*DAT_005e7054,(int)&uStack_10,DAT_005e702c,
                        &local_18,0);
  return CONCAT44(DAT_005e7060,uVar2);
}

