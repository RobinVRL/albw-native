#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern int DAT_005ad0a8;
extern undefined4 *DAT_005ad0ac;
extern undefined4 *DAT_005ad0b0;
extern undefined4 DAT_005ad0c0;
extern undefined4 DAT_005ad0e8;
extern undefined4 DAT_005ad0ec;
extern undefined4 *DAT_005ad0f0;
extern undefined DAT_005ad0f4;
extern undefined DAT_005ad0fc;
extern undefined DAT_005ad104;
extern undefined DAT_005ad10c;
extern undefined DAT_005ad12c;
extern undefined4 DAT_005ad130;
extern undefined4 *DAT_005ad134;
extern undefined4 DAT_005ad138;
extern undefined4 DAT_005ad13c;
extern undefined4 DAT_005ad140;
extern undefined4 DAT_005ad144;
extern undefined4 DAT_005ad148;
extern undefined4 DAT_005ad14c;
extern undefined DAT_005ad150;
extern undefined4 DAT_005ad16c;
extern uint *DAT_005ad170;
extern undefined4 DAT_005ad174;
extern undefined4 *DAT_005ad178;
extern undefined4 DAT_005ad17c;
extern char s_N_ArrowB_00_005ad0c4[];
extern char s_N_ArrowL_00_005ad0d0[];
extern char s_N_ArrowR_00_005ad0dc[];
extern char s_N_ArrowT_00_005ad0b4[];
extern char s_NpcWoodGirl_005ad160[];
extern char s_talk_sit_005ad120[];
extern char s_wait_sit_005ad114[];

// USA 005ACF34 <- EU 005ACF0C (Ghidra, non-matching)
// GLOBAL DAT_005ad0a8 int
// GLOBAL DAT_005ad0ac undefined4 *
// GLOBAL DAT_005ad0b0 undefined4 *
// GLOBAL DAT_005ad0c0 undefined4
// GLOBAL DAT_005ad0e8 undefined4
// GLOBAL DAT_005ad0ec undefined4
// GLOBAL DAT_005ad0f0 undefined4 *
// GLOBAL DAT_005ad0f4 undefined
// GLOBAL DAT_005ad0fc undefined
// GLOBAL DAT_005ad104 undefined
// GLOBAL DAT_005ad10c undefined
// GLOBAL DAT_005ad12c undefined
// GLOBAL DAT_005ad130 undefined4
// GLOBAL DAT_005ad134 undefined4 *
// GLOBAL DAT_005ad138 undefined4
// GLOBAL DAT_005ad13c undefined4
// GLOBAL DAT_005ad140 undefined4
// GLOBAL DAT_005ad144 undefined4
// GLOBAL DAT_005ad148 undefined4
// GLOBAL DAT_005ad14c undefined4
// GLOBAL DAT_005ad150 undefined
// GLOBAL DAT_005ad16c undefined4
// GLOBAL DAT_005ad170 uint *
// GLOBAL DAT_005ad174 undefined4
// GLOBAL DAT_005ad178 undefined4 *
// GLOBAL DAT_005ad17c undefined4
// GLOBAL s_N_ArrowB_00_005ad0c4 string
// GLOBAL s_N_ArrowL_00_005ad0d0 string
// GLOBAL s_N_ArrowR_00_005ad0dc string
// GLOBAL s_N_ArrowT_00_005ad0b4 string
// GLOBAL s_NpcWoodGirl_005ad160 string
// GLOBAL s_talk_sit_005ad120 string
// GLOBAL s_wait_sit_005ad114 string

undefined8 func_005ACF34(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x8))
  #define local_24 (*(char * *)(albw_frame + 0xc))
  #define local_20 (*(undefined4 *)(albw_frame + 0x10))
  #define local_1c (*(undefined * *)(albw_frame + 0x14))
  iVar1 = DAT_005ad0a8;
  *(undefined4 *)(DAT_005ad0a8 + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  local_20 = DAT_005ad0c0;
  puVar2 = DAT_005ad0ac;
  *DAT_005ad0ac = 0;
  puVar2[1] = 0;
  puVar2 = DAT_005ad0b0;
  DAT_005ad0b0[1] = s_N_ArrowT_00_005ad0b4;
  *puVar2 = local_20;
  puVar2[3] = s_N_ArrowB_00_005ad0c4;
  puVar2[2] = local_20;
  puVar2[5] = s_N_ArrowL_00_005ad0d0;
  puVar2[4] = local_20;
  puVar2[6] = local_20;
  puVar2[7] = s_N_ArrowR_00_005ad0dc;
  puVar2 = DAT_005ad0f0;
  DAT_005ad0f0[1] = &DAT_005ad0f4;
  *puVar2 = local_20;
  puVar2[4] = &DAT_005ad0fc;
  puVar2[3] = local_20;
  puVar2[7] = &DAT_005ad104;
  puVar2[6] = local_20;
  puVar2[10] = &DAT_005ad10c;
  puVar2[9] = local_20;
  puVar2[0xd] = s_wait_sit_005ad114;
  puVar2[0xc] = local_20;
  puVar2[0x10] = s_talk_sit_005ad120;
  puVar2[0xf] = local_20;
  puVar2[0x12] = local_20;
  puVar2[0x13] = &DAT_005ad12c;
  uVar6 = DAT_005ad14c;
  uVar5 = DAT_005ad148;
  uVar4 = DAT_005ad144;
  uVar3 = DAT_005ad140;
  uVar7 = DAT_005ad13c;
  puVar2 = DAT_005ad134;
  *DAT_005ad134 = DAT_005ad138;
  puVar2[1] = uVar7;
  puVar2[2] = uVar3;
  puVar2[3] = uVar4;
  puVar2[4] = uVar5;
  puVar2[5] = uVar6;
  puVar2[6] = 0xf;
  *(undefined2 *)(puVar2 + 7) = 0x5f;
  *(undefined2 *)((int)puVar2 + 0x1e) = 0xb4;
  *(undefined1 *)(puVar2 + 8) = 0xec;
  *(undefined1 *)((int)puVar2 + 0x21) = 0xec;
  *(undefined1 *)((int)puVar2 + 0x22) = 0xf;
  *(undefined1 *)((int)puVar2 + 0x23) = 0x1e;
  *(undefined1 *)(puVar2 + 9) = 0x1e;
  puVar2[-0xa2] = 0;
  puVar2[-0xa1] = 5;
  puVar2[-0xa0] = puVar2 + -0x9f;
  local_1c = &DAT_005ad150;
  local_24 = s_NpcWoodGirl_005ad160;
  uStack_28 = local_20;
  uVar7 = func_0019B51C(DAT_005ad178,DAT_005ad174,*DAT_005ad170,(int)&uStack_28,DAT_005ad16c,
                        &local_20,0);
  return CONCAT44(DAT_005ad17c,uVar7);
}

