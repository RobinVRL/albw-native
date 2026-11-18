#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005e207c;
extern undefined4 *DAT_005e2080;
extern undefined4 *DAT_005e2084;
extern undefined4 DAT_005e2094;
extern undefined4 DAT_005e20bc;
extern undefined4 DAT_005e20c0;
extern undefined4 *DAT_005e20c4;
extern undefined DAT_005e20c8;
extern undefined DAT_005e20d0;
extern undefined DAT_005e20d8;
extern undefined DAT_005e20e0;
extern undefined4 DAT_005e210c;
extern undefined4 *DAT_005e2110;
extern undefined4 DAT_005e2114;
extern undefined4 DAT_005e2118;
extern undefined4 DAT_005e211c;
extern undefined4 DAT_005e2120;
extern undefined4 DAT_005e2124;
extern undefined4 DAT_005e2128;
extern undefined4 *DAT_005e212c;
extern undefined DAT_005e2130;
extern undefined4 DAT_005e2138;
extern undefined4 *DAT_005e213c;
extern undefined4 *DAT_005e2154;
extern undefined4 *DAT_005e2170;
extern undefined DAT_005e2174;
extern uint *DAT_005e2198;
extern undefined4 DAT_005e219c;
extern undefined4 *DAT_005e21a0;
extern undefined4 DAT_005e21a4;
extern char s_N_ArrowB_00_005e2098[];
extern char s_N_ArrowL_00_005e20a4[];
extern char s_N_ArrowR_00_005e20b0[];
extern char s_N_ArrowT_00_005e2088[];
extern char s_NpcShopManKinSta_005e2184[];
extern char s_absorb_005e20e8[];
extern char s_absorb_bomb_005e2100[];
extern char s_absorb_player_005e20f0[];
extern char s_cave_KinstaLight_005e2140[];
extern char s_cave_KinstaLight_Link_005e2158[];

// USA 005E1EA8 <- EU 005E1E80 (Ghidra, non-matching)
// GLOBAL DAT_005e207c undefined4 *
// GLOBAL DAT_005e2080 undefined4 *
// GLOBAL DAT_005e2084 undefined4 *
// GLOBAL DAT_005e2094 undefined4
// GLOBAL DAT_005e20bc undefined4
// GLOBAL DAT_005e20c0 undefined4
// GLOBAL DAT_005e20c4 undefined4 *
// GLOBAL DAT_005e20c8 undefined
// GLOBAL DAT_005e20d0 undefined
// GLOBAL DAT_005e20d8 undefined
// GLOBAL DAT_005e20e0 undefined
// GLOBAL DAT_005e210c undefined4
// GLOBAL DAT_005e2110 undefined4 *
// GLOBAL DAT_005e2114 undefined4
// GLOBAL DAT_005e2118 undefined4
// GLOBAL DAT_005e211c undefined4
// GLOBAL DAT_005e2120 undefined4
// GLOBAL DAT_005e2124 undefined4
// GLOBAL DAT_005e2128 undefined4
// GLOBAL DAT_005e212c undefined4 *
// GLOBAL DAT_005e2130 undefined
// GLOBAL DAT_005e2138 undefined4
// GLOBAL DAT_005e213c undefined4 *
// GLOBAL DAT_005e2154 undefined4 *
// GLOBAL DAT_005e2170 undefined4 *
// GLOBAL DAT_005e2174 undefined
// GLOBAL DAT_005e2198 uint *
// GLOBAL DAT_005e219c undefined4
// GLOBAL DAT_005e21a0 undefined4 *
// GLOBAL DAT_005e21a4 undefined4
// GLOBAL s_N_ArrowB_00_005e2098 string
// GLOBAL s_N_ArrowL_00_005e20a4 string
// GLOBAL s_N_ArrowR_00_005e20b0 string
// GLOBAL s_N_ArrowT_00_005e2088 string
// GLOBAL s_NpcShopManKinSta_005e2184 string
// GLOBAL s_absorb_005e20e8 string
// GLOBAL s_absorb_bomb_005e2100 string
// GLOBAL s_absorb_player_005e20f0 string
// GLOBAL s_cave_KinstaLight_005e2140 string
// GLOBAL s_cave_KinstaLight_Link_005e2158 string

undefined8 func_005E1EA8(void)

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
  puVar1 = DAT_005e207c;
  *DAT_005e207c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  local_20 = DAT_005e2094;
  puVar1 = DAT_005e2080;
  *DAT_005e2080 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005e2084;
  DAT_005e2084[1] = s_N_ArrowT_00_005e2088;
  *puVar1 = local_20;
  puVar1[3] = s_N_ArrowB_00_005e2098;
  puVar1[2] = local_20;
  puVar1[5] = s_N_ArrowL_00_005e20a4;
  puVar1[4] = local_20;
  puVar1[6] = local_20;
  puVar1[7] = s_N_ArrowR_00_005e20b0;
  puVar1 = DAT_005e20c4;
  DAT_005e20c4[1] = &DAT_005e20c8;
  *puVar1 = local_20;
  puVar1[4] = &DAT_005e20d0;
  puVar1[3] = local_20;
  puVar1[7] = &DAT_005e20d8;
  puVar1[6] = local_20;
  puVar1[10] = &DAT_005e20e0;
  puVar1[9] = local_20;
  puVar1[0xd] = s_absorb_005e20e8;
  puVar1[0xc] = local_20;
  puVar1[0x10] = s_absorb_player_005e20f0;
  puVar1[0xf] = local_20;
  puVar1[0x12] = local_20;
  puVar1[0x13] = s_absorb_bomb_005e2100;
  uVar5 = DAT_005e2128;
  uVar4 = DAT_005e2124;
  uVar3 = DAT_005e2120;
  uVar2 = DAT_005e211c;
  uVar6 = DAT_005e2118;
  puVar1 = DAT_005e2110;
  *DAT_005e2110 = DAT_005e2114;
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
  puVar1 = DAT_005e212c;
  DAT_005e212c[1] = &DAT_005e2130;
  *puVar1 = local_20;
  puVar1 = DAT_005e213c;
  DAT_005e213c[1] = s_cave_KinstaLight_005e2140;
  *puVar1 = local_20;
  puVar1 = DAT_005e2154;
  DAT_005e2154[1] = s_cave_KinstaLight_Link_005e2158;
  *puVar1 = local_20;
  puVar1 = DAT_005e2170;
  puVar7 = DAT_005e2170 + 3;
  *DAT_005e2170 = 0;
  puVar1[1] = 5;
  puVar1[2] = puVar7;
  local_1c = &DAT_005e2174;
  local_24 = s_NpcShopManKinSta_005e2184;
  uStack_28 = local_20;
  uVar6 = func_0019B51C(DAT_005e21a0,DAT_005e219c,*DAT_005e2198,(int)&uStack_28,DAT_005e2170,
                        &local_20,0);
  return CONCAT44(DAT_005e21a4,uVar6);
}

