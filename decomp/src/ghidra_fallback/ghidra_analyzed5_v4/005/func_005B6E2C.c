#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005b6f78;
extern undefined4 *DAT_005b6f7c;
extern undefined4 *DAT_005b6f80;
extern undefined4 DAT_005b6f90;
extern undefined4 DAT_005b6fb8;
extern undefined4 DAT_005b6fbc;
extern undefined4 *DAT_005b6fc0;
extern undefined DAT_005b6fc4;
extern undefined DAT_005b6fcc;
extern undefined DAT_005b6fd4;
extern undefined4 DAT_005b6fdc;
extern undefined4 *DAT_005b6fe0;
extern undefined4 DAT_005b6fe4;
extern undefined4 DAT_005b6fe8;
extern undefined4 DAT_005b6fec;
extern undefined4 DAT_005b6ff0;
extern undefined4 DAT_005b6ff4;
extern undefined4 DAT_005b6ff8;
extern undefined DAT_005b6ffc;
extern undefined4 DAT_005b7018;
extern uint *DAT_005b701c;
extern undefined4 DAT_005b7020;
extern undefined4 *DAT_005b7024;
extern undefined4 DAT_005b7028;
extern char s_N_ArrowB_00_005b6f94[];
extern char s_N_ArrowL_00_005b6fa0[];
extern char s_N_ArrowR_00_005b6fac[];
extern char s_N_ArrowT_00_005b6f84[];
extern char s_NpcGameTower_005b7008[];

// USA 005B6E2C <- EU 005B6E04 (Ghidra, non-matching)
// GLOBAL DAT_005b6f78 undefined4 *
// GLOBAL DAT_005b6f7c undefined4 *
// GLOBAL DAT_005b6f80 undefined4 *
// GLOBAL DAT_005b6f90 undefined4
// GLOBAL DAT_005b6fb8 undefined4
// GLOBAL DAT_005b6fbc undefined4
// GLOBAL DAT_005b6fc0 undefined4 *
// GLOBAL DAT_005b6fc4 undefined
// GLOBAL DAT_005b6fcc undefined
// GLOBAL DAT_005b6fd4 undefined
// GLOBAL DAT_005b6fdc undefined4
// GLOBAL DAT_005b6fe0 undefined4 *
// GLOBAL DAT_005b6fe4 undefined4
// GLOBAL DAT_005b6fe8 undefined4
// GLOBAL DAT_005b6fec undefined4
// GLOBAL DAT_005b6ff0 undefined4
// GLOBAL DAT_005b6ff4 undefined4
// GLOBAL DAT_005b6ff8 undefined4
// GLOBAL DAT_005b6ffc undefined
// GLOBAL DAT_005b7018 undefined4
// GLOBAL DAT_005b701c uint *
// GLOBAL DAT_005b7020 undefined4
// GLOBAL DAT_005b7024 undefined4 *
// GLOBAL DAT_005b7028 undefined4
// GLOBAL s_N_ArrowB_00_005b6f94 string
// GLOBAL s_N_ArrowL_00_005b6fa0 string
// GLOBAL s_N_ArrowR_00_005b6fac string
// GLOBAL s_N_ArrowT_00_005b6f84 string
// GLOBAL s_NpcGameTower_005b7008 string

undefined8 func_005B6E2C(void)

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
  puVar1 = DAT_005b6f78;
  *DAT_005b6f78 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  local_20 = DAT_005b6f90;
  puVar1 = DAT_005b6f7c;
  *DAT_005b6f7c = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005b6f80;
  DAT_005b6f80[1] = s_N_ArrowT_00_005b6f84;
  *puVar1 = local_20;
  puVar1[3] = s_N_ArrowB_00_005b6f94;
  puVar1[2] = local_20;
  puVar1[5] = s_N_ArrowL_00_005b6fa0;
  puVar1[4] = local_20;
  puVar1[6] = local_20;
  puVar1[7] = s_N_ArrowR_00_005b6fac;
  puVar1 = DAT_005b6fc0;
  DAT_005b6fc0[1] = &DAT_005b6fc4;
  *puVar1 = local_20;
  puVar1[4] = &DAT_005b6fcc;
  puVar1[3] = local_20;
  puVar1[6] = local_20;
  puVar1[7] = &DAT_005b6fd4;
  uVar5 = DAT_005b6ff8;
  uVar4 = DAT_005b6ff4;
  uVar3 = DAT_005b6ff0;
  uVar2 = DAT_005b6fec;
  uVar6 = DAT_005b6fe8;
  puVar1 = DAT_005b6fe0;
  *DAT_005b6fe0 = DAT_005b6fe4;
  puVar1[1] = uVar6;
  puVar1[2] = uVar2;
  puVar1[3] = uVar3;
  puVar1[4] = uVar4;
  puVar1[5] = uVar5;
  puVar1[6] = 0xf;
  *(undefined2 *)(puVar1 + 7) = 0x5f;
  *(undefined2 *)((int)puVar1 + 0x1e) = 0xb4;
  *(undefined1 *)(puVar1 + 8) = 0xee;
  *(undefined1 *)((int)puVar1 + 0x21) = 0xec;
  *(undefined1 *)((int)puVar1 + 0x22) = 0xf;
  *(undefined1 *)((int)puVar1 + 0x23) = 0x1e;
  *(undefined1 *)(puVar1 + 9) = 0xf;
  puVar1[-0xa2] = 0;
  puVar1[-0xa1] = 5;
  puVar1[-0xa0] = puVar1 + -0x9f;
  local_1c = &DAT_005b6ffc;
  local_24 = s_NpcGameTower_005b7008;
  uStack_28 = local_20;
  uVar6 = func_0019B51C(DAT_005b7024,DAT_005b7020,*DAT_005b701c,(int)&uStack_28,DAT_005b7018,
                        &local_20,0);
  return CONCAT44(DAT_005b7028,uVar6);
}

