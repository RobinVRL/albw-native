#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005a28d8;
extern undefined4 *DAT_005a28dc;
extern undefined4 *DAT_005a28e0;
extern undefined4 DAT_005a28f0;
extern undefined4 DAT_005a2918;
extern undefined4 DAT_005a291c;
extern undefined4 *DAT_005a2920;
extern undefined DAT_005a2924;
extern undefined DAT_005a292c;
extern undefined DAT_005a2934;
extern undefined DAT_005a293c;
extern undefined DAT_005a2980;
extern undefined4 DAT_005a29a0;
extern undefined4 *DAT_005a29a4;
extern undefined4 DAT_005a29b0;
extern undefined4 DAT_005a29b4;
extern undefined4 *DAT_005a29b8;
extern undefined4 DAT_005a29bc;
extern undefined4 DAT_005a29c0;
extern undefined4 DAT_005a29c4;
extern undefined4 DAT_005a29c8;
extern undefined4 DAT_005a29cc;
extern undefined4 DAT_005a29d0;
extern undefined4 *DAT_005a29d4;
extern undefined DAT_005a29d8;
extern uint *DAT_005a29f4;
extern undefined4 DAT_005a29f8;
extern undefined4 *DAT_005a29fc;
extern undefined4 DAT_005a2a00;
extern char s_N_ArrowB_00_005a28f4[];
extern char s_N_ArrowL_00_005a2900[];
extern char s_N_ArrowR_00_005a290c[];
extern char s_N_ArrowT_00_005a28e4[];
extern char s_NpcMedium_005a29e8[];
extern char s_attack_005a2950[];
extern char s_attack_wait_005a2958[];
extern char s_carry_005a2964[];
extern char s_carry_wait_005a296c[];
extern char s_catch_005a2978[];
extern char s_stand_up_005a2988[];
extern char s_talk_angry_005a2994[];
extern char s_wait_angry_005a2944[];
extern char s_wrist_r_005a29a8[];

// USA 005A26D0 <- EU 005A26A8 (Ghidra, non-matching)
// GLOBAL DAT_005a28d8 undefined4 *
// GLOBAL DAT_005a28dc undefined4 *
// GLOBAL DAT_005a28e0 undefined4 *
// GLOBAL DAT_005a28f0 undefined4
// GLOBAL DAT_005a2918 undefined4
// GLOBAL DAT_005a291c undefined4
// GLOBAL DAT_005a2920 undefined4 *
// GLOBAL DAT_005a2924 undefined
// GLOBAL DAT_005a292c undefined
// GLOBAL DAT_005a2934 undefined
// GLOBAL DAT_005a293c undefined
// GLOBAL DAT_005a2980 undefined
// GLOBAL DAT_005a29a0 undefined4
// GLOBAL DAT_005a29a4 undefined4 *
// GLOBAL DAT_005a29b0 undefined4
// GLOBAL DAT_005a29b4 undefined4
// GLOBAL DAT_005a29b8 undefined4 *
// GLOBAL DAT_005a29bc undefined4
// GLOBAL DAT_005a29c0 undefined4
// GLOBAL DAT_005a29c4 undefined4
// GLOBAL DAT_005a29c8 undefined4
// GLOBAL DAT_005a29cc undefined4
// GLOBAL DAT_005a29d0 undefined4
// GLOBAL DAT_005a29d4 undefined4 *
// GLOBAL DAT_005a29d8 undefined
// GLOBAL DAT_005a29f4 uint *
// GLOBAL DAT_005a29f8 undefined4
// GLOBAL DAT_005a29fc undefined4 *
// GLOBAL DAT_005a2a00 undefined4
// GLOBAL s_N_ArrowB_00_005a28f4 string
// GLOBAL s_N_ArrowL_00_005a2900 string
// GLOBAL s_N_ArrowR_00_005a290c string
// GLOBAL s_N_ArrowT_00_005a28e4 string
// GLOBAL s_NpcMedium_005a29e8 string
// GLOBAL s_attack_005a2950 string
// GLOBAL s_attack_wait_005a2958 string
// GLOBAL s_carry_005a2964 string
// GLOBAL s_carry_wait_005a296c string
// GLOBAL s_catch_005a2978 string
// GLOBAL s_stand_up_005a2988 string
// GLOBAL s_talk_angry_005a2994 string
// GLOBAL s_wait_angry_005a2944 string
// GLOBAL s_wrist_r_005a29a8 string

undefined8 func_005A26D0(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x8))
  #define local_24 (*(char * *)(albw_frame + 0xc))
  #define local_20 (*(undefined4 *)(albw_frame + 0x10))
  #define local_1c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005a28d8;
  *DAT_005a28d8 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  local_20 = DAT_005a28f0;
  puVar1 = DAT_005a28dc;
  *DAT_005a28dc = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005a28e0;
  DAT_005a28e0[1] = s_N_ArrowT_00_005a28e4;
  *puVar1 = local_20;
  puVar1[3] = s_N_ArrowB_00_005a28f4;
  puVar1[2] = local_20;
  puVar1[5] = s_N_ArrowL_00_005a2900;
  puVar1[4] = local_20;
  puVar1[6] = local_20;
  puVar1[7] = s_N_ArrowR_00_005a290c;
  puVar1 = DAT_005a2920;
  DAT_005a2920[1] = &DAT_005a2924;
  *puVar1 = local_20;
  puVar1[4] = &DAT_005a292c;
  puVar1[3] = local_20;
  puVar1[7] = &DAT_005a2934;
  puVar1[6] = local_20;
  puVar1[10] = &DAT_005a293c;
  puVar1[9] = local_20;
  puVar1[0xd] = s_wait_angry_005a2944;
  puVar1[0xc] = local_20;
  puVar1[0x10] = s_attack_005a2950;
  puVar1[0xf] = local_20;
  puVar1[0x13] = s_attack_wait_005a2958;
  puVar1[0x12] = local_20;
  puVar1[0x16] = s_carry_005a2964;
  puVar1[0x15] = local_20;
  puVar1[0x19] = s_carry_wait_005a296c;
  puVar1[0x18] = local_20;
  puVar1[0x1c] = s_catch_005a2978;
  puVar1[0x1b] = local_20;
  puVar1[0x1f] = &DAT_005a2980;
  puVar1[0x1e] = local_20;
  puVar1[0x22] = s_stand_up_005a2988;
  puVar1[0x21] = local_20;
  puVar1[0x24] = local_20;
  puVar1[0x25] = s_talk_angry_005a2994;
  puVar1 = DAT_005a29a4;
  DAT_005a29a4[1] = s_wrist_r_005a29a8;
  *puVar1 = local_20;
  uVar2 = DAT_005a29c0;
  puVar1 = DAT_005a29b8;
  uVar4 = DAT_005a29b4;
  *DAT_005a29b8 = DAT_005a29bc;
  puVar1[1] = uVar2;
  uVar3 = DAT_005a29c8;
  uVar2 = DAT_005a29c4;
  puVar1[2] = uVar4;
  puVar1[3] = uVar2;
  puVar1[4] = uVar3;
  puVar1[5] = uVar4;
  puVar1[6] = 0x12;
  *(undefined2 *)(puVar1 + 7) = 0x5f;
  *(undefined2 *)((int)puVar1 + 0x1e) = 0xb4;
  *(undefined1 *)(puVar1 + 8) = 0xea;
  *(undefined1 *)((int)puVar1 + 0x21) = 0xd3;
  *(undefined1 *)((int)puVar1 + 0x22) = 0xf;
  *(undefined1 *)((int)puVar1 + 0x23) = 0x1e;
  *(undefined1 *)(puVar1 + 9) = 0x14;
  uVar2 = DAT_005a29d0;
  uVar4 = DAT_005a29cc;
  puVar1[10] = DAT_005a29cc;
  puVar1[0xb] = uVar4;
  puVar1[0xc] = uVar2;
  puVar1 = DAT_005a29d4;
  puVar5 = DAT_005a29d4 + 3;
  *DAT_005a29d4 = 0;
  puVar1[1] = 5;
  puVar1[2] = puVar5;
  local_1c = &DAT_005a29d8;
  local_24 = s_NpcMedium_005a29e8;
  uStack_28 = local_20;
  uVar4 = func_0019B51C(DAT_005a29fc,DAT_005a29f8,*DAT_005a29f4,(int)&uStack_28,DAT_005a29d4,
                        &local_20,0);
  return CONCAT44(DAT_005a2a00,uVar4);
}

