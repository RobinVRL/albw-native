#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern int DAT_005b71e0;
extern undefined4 *DAT_005b71e4;
extern undefined4 *DAT_005b71e8;
extern undefined4 DAT_005b71f8;
extern undefined4 DAT_005b7220;
extern undefined4 DAT_005b7224;
extern undefined4 *DAT_005b7228;
extern undefined DAT_005b722c;
extern undefined DAT_005b7234;
extern undefined DAT_005b7258;
extern undefined4 DAT_005b7268;
extern undefined4 *DAT_005b726c;
extern undefined4 DAT_005b7270;
extern undefined4 DAT_005b7274;
extern undefined4 DAT_005b7278;
extern undefined4 DAT_005b727c;
extern undefined4 DAT_005b7280;
extern undefined4 DAT_005b7284;
extern undefined4 *DAT_005b7288;
extern undefined4 DAT_005b7298;
extern undefined4 *DAT_005b729c;
extern undefined DAT_005b72a0;
extern uint *DAT_005b72bc;
extern undefined4 DAT_005b72c0;
extern undefined4 *DAT_005b72c4;
extern undefined4 DAT_005b72c8;
extern char s_HintGhost_005b728c[];
extern char s_N_ArrowB_00_005b71fc[];
extern char s_N_ArrowL_00_005b7208[];
extern char s_N_ArrowR_00_005b7214[];
extern char s_N_ArrowT_00_005b71ec[];
extern char s_NpcHintGhost_005b72ac[];
extern char s_sleep_005b7260[];
extern char s_surprise_loop_005b7248[];
extern char s_surprise_st_005b723c[];

// USA 005B7054 <- EU 005B702C (Ghidra, non-matching)
// GLOBAL DAT_005b71e0 int
// GLOBAL DAT_005b71e4 undefined4 *
// GLOBAL DAT_005b71e8 undefined4 *
// GLOBAL DAT_005b71f8 undefined4
// GLOBAL DAT_005b7220 undefined4
// GLOBAL DAT_005b7224 undefined4
// GLOBAL DAT_005b7228 undefined4 *
// GLOBAL DAT_005b722c undefined
// GLOBAL DAT_005b7234 undefined
// GLOBAL DAT_005b7258 undefined
// GLOBAL DAT_005b7268 undefined4
// GLOBAL DAT_005b726c undefined4 *
// GLOBAL DAT_005b7270 undefined4
// GLOBAL DAT_005b7274 undefined4
// GLOBAL DAT_005b7278 undefined4
// GLOBAL DAT_005b727c undefined4
// GLOBAL DAT_005b7280 undefined4
// GLOBAL DAT_005b7284 undefined4
// GLOBAL DAT_005b7288 undefined4 *
// GLOBAL DAT_005b7298 undefined4
// GLOBAL DAT_005b729c undefined4 *
// GLOBAL DAT_005b72a0 undefined
// GLOBAL DAT_005b72bc uint *
// GLOBAL DAT_005b72c0 undefined4
// GLOBAL DAT_005b72c4 undefined4 *
// GLOBAL DAT_005b72c8 undefined4
// GLOBAL s_HintGhost_005b728c string
// GLOBAL s_N_ArrowB_00_005b71fc string
// GLOBAL s_N_ArrowL_00_005b7208 string
// GLOBAL s_N_ArrowR_00_005b7214 string
// GLOBAL s_N_ArrowT_00_005b71ec string
// GLOBAL s_NpcHintGhost_005b72ac string
// GLOBAL s_sleep_005b7260 string
// GLOBAL s_surprise_loop_005b7248 string
// GLOBAL s_surprise_st_005b723c string

undefined8 func_005B7054(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x8))
  #define local_24 (*(char * *)(albw_frame + 0xc))
  #define local_20 (*(undefined4 *)(albw_frame + 0x10))
  #define local_1c (*(undefined * *)(albw_frame + 0x14))
  iVar1 = DAT_005b71e0;
  *(undefined4 *)(DAT_005b71e0 + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  local_20 = DAT_005b71f8;
  puVar2 = DAT_005b71e4;
  *DAT_005b71e4 = 0;
  puVar2[1] = 0;
  puVar2 = DAT_005b71e8;
  DAT_005b71e8[1] = s_N_ArrowT_00_005b71ec;
  *puVar2 = local_20;
  puVar2[3] = s_N_ArrowB_00_005b71fc;
  puVar2[2] = local_20;
  puVar2[5] = s_N_ArrowL_00_005b7208;
  puVar2[4] = local_20;
  puVar2[6] = local_20;
  puVar2[7] = s_N_ArrowR_00_005b7214;
  puVar2 = DAT_005b7228;
  DAT_005b7228[1] = &DAT_005b722c;
  *puVar2 = local_20;
  puVar2[4] = &DAT_005b7234;
  puVar2[3] = local_20;
  puVar2[7] = s_surprise_st_005b723c;
  puVar2[6] = local_20;
  puVar2[10] = s_surprise_loop_005b7248;
  puVar2[9] = local_20;
  puVar2[0xd] = &DAT_005b7258;
  puVar2[0xc] = local_20;
  puVar2[0xf] = local_20;
  puVar2[0x10] = s_sleep_005b7260;
  uVar6 = DAT_005b7284;
  uVar5 = DAT_005b7280;
  uVar4 = DAT_005b727c;
  uVar3 = DAT_005b7278;
  uVar7 = DAT_005b7274;
  puVar2 = DAT_005b726c;
  *DAT_005b726c = DAT_005b7270;
  puVar2[1] = uVar7;
  puVar2[2] = uVar3;
  puVar2[3] = uVar4;
  puVar2[4] = uVar5;
  puVar2[5] = uVar6;
  puVar2[6] = 0xc;
  *(undefined2 *)(puVar2 + 7) = 0x5f;
  *(undefined2 *)((int)puVar2 + 0x1e) = 0xb4;
  *(undefined1 *)(puVar2 + 8) = 0;
  *(undefined1 *)((int)puVar2 + 0x21) = 0xff;
  *(undefined1 *)((int)puVar2 + 0x22) = 1;
  *(undefined1 *)((int)puVar2 + 0x23) = 1;
  *(undefined1 *)(puVar2 + 9) = 1;
  puVar2 = DAT_005b7288;
  DAT_005b7288[1] = s_HintGhost_005b728c;
  *puVar2 = local_20;
  puVar2 = DAT_005b729c;
  puVar8 = DAT_005b729c + 3;
  *DAT_005b729c = 0;
  puVar2[1] = 5;
  puVar2[2] = puVar8;
  local_1c = &DAT_005b72a0;
  local_24 = s_NpcHintGhost_005b72ac;
  uStack_28 = local_20;
  uVar7 = func_0019B51C(DAT_005b72c4,DAT_005b72c0,*DAT_005b72bc,(int)&uStack_28,DAT_005b729c,
                        &local_20,0);
  return CONCAT44(DAT_005b72c8,uVar7);
}

