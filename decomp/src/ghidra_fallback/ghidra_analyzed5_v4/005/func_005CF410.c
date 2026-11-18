#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005cf5b0;
extern undefined4 *DAT_005cf5b4;
extern undefined4 *DAT_005cf5b8;
extern undefined4 DAT_005cf5c8;
extern undefined4 DAT_005cf5f0;
extern undefined4 DAT_005cf5f4;
extern undefined4 *DAT_005cf5f8;
extern undefined DAT_005cf5fc;
extern undefined DAT_005cf604;
extern undefined DAT_005cf60c;
extern undefined DAT_005cf614;
extern undefined4 DAT_005cf634;
extern undefined4 DAT_005cf638;
extern undefined4 *DAT_005cf63c;
extern undefined4 DAT_005cf640;
extern undefined4 DAT_005cf644;
extern undefined4 DAT_005cf648;
extern undefined4 DAT_005cf64c;
extern undefined4 *DAT_005cf650;
extern undefined4 DAT_005cf66c;
extern undefined4 *DAT_005cf670;
extern undefined DAT_005cf674;
extern uint *DAT_005cf694;
extern undefined4 DAT_005cf698;
extern undefined4 *DAT_005cf69c;
extern undefined4 DAT_005cf6a0;
extern char s_FieldDark_35_KameFamiry_005cf654[];
extern char s_N_ArrowB_00_005cf5cc[];
extern char s_N_ArrowL_00_005cf5d8[];
extern char s_N_ArrowR_00_005cf5e4[];
extern char s_N_ArrowT_00_005cf5bc[];
extern char s_NpcTurtleMother_005cf684[];
extern char s_swim_start_005cf61c[];
extern char s_swim_talk_005cf628[];

// USA 005CF410 <- EU 005CF3E8 (Ghidra, non-matching)
// GLOBAL DAT_005cf5b0 undefined4 *
// GLOBAL DAT_005cf5b4 undefined4 *
// GLOBAL DAT_005cf5b8 undefined4 *
// GLOBAL DAT_005cf5c8 undefined4
// GLOBAL DAT_005cf5f0 undefined4
// GLOBAL DAT_005cf5f4 undefined4
// GLOBAL DAT_005cf5f8 undefined4 *
// GLOBAL DAT_005cf5fc undefined
// GLOBAL DAT_005cf604 undefined
// GLOBAL DAT_005cf60c undefined
// GLOBAL DAT_005cf614 undefined
// GLOBAL DAT_005cf634 undefined4
// GLOBAL DAT_005cf638 undefined4
// GLOBAL DAT_005cf63c undefined4 *
// GLOBAL DAT_005cf640 undefined4
// GLOBAL DAT_005cf644 undefined4
// GLOBAL DAT_005cf648 undefined4
// GLOBAL DAT_005cf64c undefined4
// GLOBAL DAT_005cf650 undefined4 *
// GLOBAL DAT_005cf66c undefined4
// GLOBAL DAT_005cf670 undefined4 *
// GLOBAL DAT_005cf674 undefined
// GLOBAL DAT_005cf694 uint *
// GLOBAL DAT_005cf698 undefined4
// GLOBAL DAT_005cf69c undefined4 *
// GLOBAL DAT_005cf6a0 undefined4
// GLOBAL s_FieldDark_35_KameFamiry_005cf654 string
// GLOBAL s_N_ArrowB_00_005cf5cc string
// GLOBAL s_N_ArrowL_00_005cf5d8 string
// GLOBAL s_N_ArrowR_00_005cf5e4 string
// GLOBAL s_N_ArrowT_00_005cf5bc string
// GLOBAL s_NpcTurtleMother_005cf684 string
// GLOBAL s_swim_start_005cf61c string
// GLOBAL s_swim_talk_005cf628 string

undefined8 func_005CF410(void)

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
  puVar1 = DAT_005cf5b0;
  *DAT_005cf5b0 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  local_20 = DAT_005cf5c8;
  puVar1 = DAT_005cf5b4;
  *DAT_005cf5b4 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005cf5b8;
  DAT_005cf5b8[1] = s_N_ArrowT_00_005cf5bc;
  *puVar1 = local_20;
  puVar1[3] = s_N_ArrowB_00_005cf5cc;
  puVar1[2] = local_20;
  puVar1[5] = s_N_ArrowL_00_005cf5d8;
  puVar1[4] = local_20;
  puVar1[6] = local_20;
  puVar1[7] = s_N_ArrowR_00_005cf5e4;
  puVar1 = DAT_005cf5f8;
  DAT_005cf5f8[1] = &DAT_005cf5fc;
  *puVar1 = local_20;
  puVar1[4] = &DAT_005cf604;
  puVar1[3] = local_20;
  puVar1[7] = &DAT_005cf60c;
  puVar1[6] = local_20;
  puVar1[10] = &DAT_005cf614;
  puVar1[9] = local_20;
  puVar1[0xd] = s_swim_start_005cf61c;
  puVar1[0xc] = local_20;
  puVar1[0xf] = local_20;
  puVar1[0x10] = s_swim_talk_005cf628;
  uVar3 = DAT_005cf648;
  uVar2 = DAT_005cf644;
  puVar1 = DAT_005cf63c;
  *DAT_005cf63c = DAT_005cf640;
  uVar4 = DAT_005cf638;
  puVar1[1] = uVar2;
  puVar1[2] = uVar3;
  uVar2 = DAT_005cf64c;
  puVar1[3] = uVar4;
  puVar1[4] = uVar4;
  puVar1[5] = uVar2;
  puVar1[6] = 10;
  *(undefined2 *)(puVar1 + 7) = 0x5f;
  *(undefined2 *)((int)puVar1 + 0x1e) = 0xb4;
  *(undefined1 *)(puVar1 + 8) = 0;
  *(undefined1 *)((int)puVar1 + 0x21) = 0xff;
  *(undefined1 *)((int)puVar1 + 0x22) = 0xf;
  *(undefined1 *)((int)puVar1 + 0x23) = 1;
  *(undefined1 *)(puVar1 + 9) = 0x1e;
  puVar1 = DAT_005cf650;
  DAT_005cf650[1] = s_FieldDark_35_KameFamiry_005cf654;
  *puVar1 = local_20;
  puVar1 = DAT_005cf670;
  puVar5 = DAT_005cf670 + 3;
  *DAT_005cf670 = 0;
  puVar1[1] = 5;
  puVar1[2] = puVar5;
  local_1c = &DAT_005cf674;
  local_24 = s_NpcTurtleMother_005cf684;
  uStack_28 = local_20;
  uVar4 = func_0019B51C(DAT_005cf69c,DAT_005cf698,*DAT_005cf694,(int)&uStack_28,DAT_005cf670,
                        &local_20,0);
  return CONCAT44(DAT_005cf6a0,uVar4);
}

