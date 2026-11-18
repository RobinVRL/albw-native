#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005c52d0;
extern undefined4 *DAT_005c52d4;
extern undefined4 *DAT_005c52d8;
extern undefined4 DAT_005c52e8;
extern undefined4 DAT_005c5310;
extern undefined4 DAT_005c5314;
extern undefined4 *DAT_005c5318;
extern undefined4 DAT_005c532c;
extern undefined4 *DAT_005c5330;
extern undefined4 *DAT_005c5340;
extern undefined4 *DAT_005c5350;
extern undefined4 *DAT_005c5360;
extern undefined DAT_005c5364;
extern undefined DAT_005c536c;
extern undefined DAT_005c5374;
extern undefined DAT_005c537c;
extern undefined4 DAT_005c5384;
extern undefined4 *DAT_005c5388;
extern undefined4 DAT_005c538c;
extern undefined4 *DAT_005c5390;
extern undefined4 DAT_005c5394;
extern undefined4 DAT_005c5398;
extern undefined4 DAT_005c539c;
extern undefined4 DAT_005c53a0;
extern undefined4 DAT_005c53a4;
extern undefined4 DAT_005c53a8;
extern undefined DAT_005c53ac;
extern undefined4 DAT_005c53cc;
extern uint *DAT_005c53d0;
extern undefined4 DAT_005c53d4;
extern undefined4 *DAT_005c53d8;
extern undefined4 DAT_005c53dc;
extern char s_CrossForceTalk_005c531c[];
extern char s_N_ArrowB_00_005c52ec[];
extern char s_N_ArrowL_00_005c52f8[];
extern char s_N_ArrowR_00_005c5304[];
extern char s_N_ArrowT_00_005c52dc[];
extern char s_NpcCrossOldMan_005c53bc[];
extern char s_chest_jnt_005c5344[];
extern char s_cl_RhandA_005c5354[];
extern char s_head_jnt_005c5334[];

// USA 005C50AC <- EU 005C5084 (Ghidra, non-matching)
// GLOBAL DAT_005c52d0 undefined4 *
// GLOBAL DAT_005c52d4 undefined4 *
// GLOBAL DAT_005c52d8 undefined4 *
// GLOBAL DAT_005c52e8 undefined4
// GLOBAL DAT_005c5310 undefined4
// GLOBAL DAT_005c5314 undefined4
// GLOBAL DAT_005c5318 undefined4 *
// GLOBAL DAT_005c532c undefined4
// GLOBAL DAT_005c5330 undefined4 *
// GLOBAL DAT_005c5340 undefined4 *
// GLOBAL DAT_005c5350 undefined4 *
// GLOBAL DAT_005c5360 undefined4 *
// GLOBAL DAT_005c5364 undefined
// GLOBAL DAT_005c536c undefined
// GLOBAL DAT_005c5374 undefined
// GLOBAL DAT_005c537c undefined
// GLOBAL DAT_005c5384 undefined4
// GLOBAL DAT_005c5388 undefined4 *
// GLOBAL DAT_005c538c undefined4
// GLOBAL DAT_005c5390 undefined4 *
// GLOBAL DAT_005c5394 undefined4
// GLOBAL DAT_005c5398 undefined4
// GLOBAL DAT_005c539c undefined4
// GLOBAL DAT_005c53a0 undefined4
// GLOBAL DAT_005c53a4 undefined4
// GLOBAL DAT_005c53a8 undefined4
// GLOBAL DAT_005c53ac undefined
// GLOBAL DAT_005c53cc undefined4
// GLOBAL DAT_005c53d0 uint *
// GLOBAL DAT_005c53d4 undefined4
// GLOBAL DAT_005c53d8 undefined4 *
// GLOBAL DAT_005c53dc undefined4
// GLOBAL s_CrossForceTalk_005c531c string
// GLOBAL s_N_ArrowB_00_005c52ec string
// GLOBAL s_N_ArrowL_00_005c52f8 string
// GLOBAL s_N_ArrowR_00_005c5304 string
// GLOBAL s_N_ArrowT_00_005c52dc string
// GLOBAL s_NpcCrossOldMan_005c53bc string
// GLOBAL s_chest_jnt_005c5344 string
// GLOBAL s_cl_RhandA_005c5354 string
// GLOBAL s_head_jnt_005c5334 string

undefined8 func_005C50AC(void)

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
  puVar1 = DAT_005c52d0;
  *DAT_005c52d0 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  local_20 = DAT_005c52e8;
  puVar1 = DAT_005c52d4;
  *DAT_005c52d4 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005c52d8;
  DAT_005c52d8[1] = s_N_ArrowT_00_005c52dc;
  *puVar1 = local_20;
  puVar1[3] = s_N_ArrowB_00_005c52ec;
  puVar1[2] = local_20;
  puVar1[5] = s_N_ArrowL_00_005c52f8;
  puVar1[4] = local_20;
  puVar1[6] = local_20;
  puVar1[7] = s_N_ArrowR_00_005c5304;
  puVar1 = DAT_005c5318;
  DAT_005c5318[1] = s_CrossForceTalk_005c531c;
  *puVar1 = local_20;
  puVar1 = DAT_005c5330;
  DAT_005c5330[1] = s_head_jnt_005c5334;
  *puVar1 = local_20;
  puVar1 = DAT_005c5340;
  DAT_005c5340[1] = s_chest_jnt_005c5344;
  *puVar1 = local_20;
  puVar1 = DAT_005c5350;
  DAT_005c5350[1] = s_cl_RhandA_005c5354;
  *puVar1 = local_20;
  puVar1 = DAT_005c5360;
  DAT_005c5360[1] = &DAT_005c5364;
  *puVar1 = local_20;
  puVar1[4] = &DAT_005c536c;
  puVar1[3] = local_20;
  puVar1[7] = &DAT_005c5374;
  puVar1[6] = local_20;
  puVar1[9] = local_20;
  puVar1[10] = &DAT_005c537c;
  puVar1 = DAT_005c5388;
  DAT_005c5388[1] = &DAT_005c5364;
  *puVar1 = local_20;
  puVar1[4] = &DAT_005c536c;
  puVar1[3] = local_20;
  puVar1[6] = local_20;
  puVar1[7] = &DAT_005c5374;
  uVar5 = DAT_005c53a8;
  uVar4 = DAT_005c53a4;
  uVar3 = DAT_005c53a0;
  uVar2 = DAT_005c539c;
  uVar6 = DAT_005c5398;
  puVar1 = DAT_005c5390;
  *DAT_005c5390 = DAT_005c5394;
  puVar1[1] = uVar6;
  puVar1[2] = uVar2;
  puVar1[3] = uVar3;
  puVar1[4] = uVar4;
  puVar1[5] = uVar5;
  puVar1[6] = 0xe;
  *(undefined2 *)(puVar1 + 7) = 0x5f;
  *(undefined2 *)((int)puVar1 + 0x1e) = 0xb4;
  *(undefined1 *)(puVar1 + 8) = 0xee;
  *(undefined1 *)((int)puVar1 + 0x21) = 0xec;
  *(undefined1 *)((int)puVar1 + 0x22) = 0xf;
  *(undefined1 *)((int)puVar1 + 0x23) = 0x28;
  *(undefined1 *)(puVar1 + 9) = 1;
  puVar1[10] = 0;
  puVar1[0xb] = 0xffffffff;
  puVar1[0xc] = 0;
  *(undefined1 *)(puVar1 + 0xd) = 1;
  *(undefined1 *)((int)puVar1 + 0x35) = 1;
  puVar1[-0xa2] = 0;
  puVar1[-0xa1] = 5;
  puVar1[-0xa0] = puVar1 + -0x9f;
  local_1c = &DAT_005c53ac;
  local_24 = s_NpcCrossOldMan_005c53bc;
  uStack_28 = local_20;
  uVar6 = func_0019B51C(DAT_005c53d8,DAT_005c53d4,*DAT_005c53d0,(int)&uStack_28,DAT_005c53cc,
                        &local_20,0);
  return CONCAT44(DAT_005c53dc,uVar6);
}

