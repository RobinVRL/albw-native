#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005ac670;
extern undefined4 *DAT_005ac674;
extern undefined4 *DAT_005ac678;
extern undefined4 DAT_005ac688;
extern undefined4 DAT_005ac6b0;
extern undefined4 DAT_005ac6b4;
extern undefined4 *DAT_005ac6b8;
extern undefined DAT_005ac6bc;
extern undefined DAT_005ac6c4;
extern undefined DAT_005ac6cc;
extern undefined4 DAT_005ac6e8;
extern undefined4 DAT_005ac6ec;
extern undefined4 DAT_005ac6f0;
extern undefined4 DAT_005ac6f4;
extern undefined4 DAT_005ac6f8;
extern undefined4 DAT_005ac6fc;
extern undefined4 DAT_005ac700;
extern undefined4 *DAT_005ac704;
extern undefined4 *DAT_005ac708;
extern undefined4 DAT_005ac718;
extern undefined4 *DAT_005ac71c;
extern undefined4 DAT_005ac720;
extern undefined4 *DAT_005ac724;
extern undefined4 DAT_005ac730;
extern undefined4 *DAT_005ac734;
extern undefined DAT_005ac738;
extern uint *DAT_005ac768;
extern undefined4 DAT_005ac76c;
extern undefined4 *DAT_005ac770;
extern undefined4 DAT_005ac774;
extern undefined4 *DAT_005ac778;
extern undefined DAT_005ac77c;
extern uint *DAT_005ac7a4;
extern undefined4 DAT_005ac7a8;
extern undefined4 *DAT_005ac7ac;
extern char s_HandL_005ac728[];
extern char s_N_ArrowB_00_005ac68c[];
extern char s_N_ArrowL_00_005ac698[];
extern char s_N_ArrowR_00_005ac6a4[];
extern char s_N_ArrowT_00_005ac67c[];
extern char s_NpcGameRaceGoal_005ac794[];
extern char s_NpcGameRaceStart_005ac754[];
extern char s_RaceFlag_005ac70c[];
extern char s_random_005ac6d4[];
extern char s_shake_flag_005ac6dc[];

// USA 005AC3D0 <- EU 005AC3A8 (Ghidra, non-matching)
// GLOBAL DAT_005ac670 undefined4 *
// GLOBAL DAT_005ac674 undefined4 *
// GLOBAL DAT_005ac678 undefined4 *
// GLOBAL DAT_005ac688 undefined4
// GLOBAL DAT_005ac6b0 undefined4
// GLOBAL DAT_005ac6b4 undefined4
// GLOBAL DAT_005ac6b8 undefined4 *
// GLOBAL DAT_005ac6bc undefined
// GLOBAL DAT_005ac6c4 undefined
// GLOBAL DAT_005ac6cc undefined
// GLOBAL DAT_005ac6e8 undefined4
// GLOBAL DAT_005ac6ec undefined4
// GLOBAL DAT_005ac6f0 undefined4
// GLOBAL DAT_005ac6f4 undefined4
// GLOBAL DAT_005ac6f8 undefined4
// GLOBAL DAT_005ac6fc undefined4
// GLOBAL DAT_005ac700 undefined4
// GLOBAL DAT_005ac704 undefined4 *
// GLOBAL DAT_005ac708 undefined4 *
// GLOBAL DAT_005ac718 undefined4
// GLOBAL DAT_005ac71c undefined4 *
// GLOBAL DAT_005ac720 undefined4
// GLOBAL DAT_005ac724 undefined4 *
// GLOBAL DAT_005ac730 undefined4
// GLOBAL DAT_005ac734 undefined4 *
// GLOBAL DAT_005ac738 undefined
// GLOBAL DAT_005ac768 uint *
// GLOBAL DAT_005ac76c undefined4
// GLOBAL DAT_005ac770 undefined4 *
// GLOBAL DAT_005ac774 undefined4
// GLOBAL DAT_005ac778 undefined4 *
// GLOBAL DAT_005ac77c undefined
// GLOBAL DAT_005ac7a4 uint *
// GLOBAL DAT_005ac7a8 undefined4
// GLOBAL DAT_005ac7ac undefined4 *
// GLOBAL s_HandL_005ac728 string
// GLOBAL s_N_ArrowB_00_005ac68c string
// GLOBAL s_N_ArrowL_00_005ac698 string
// GLOBAL s_N_ArrowR_00_005ac6a4 string
// GLOBAL s_N_ArrowT_00_005ac67c string
// GLOBAL s_NpcGameRaceGoal_005ac794 string
// GLOBAL s_NpcGameRaceStart_005ac754 string
// GLOBAL s_RaceFlag_005ac70c string
// GLOBAL s_random_005ac6d4 string
// GLOBAL s_shake_flag_005ac6dc string

undefined8 func_005AC3D0(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(undefined4 *)(albw_frame + 0x8))
  #define local_34 (*(char * *)(albw_frame + 0xc))
  #define local_30 (*(undefined4 *)(albw_frame + 0x10))
  #define local_2c (*(undefined * *)(albw_frame + 0x14))
  #define local_28 (*(undefined4 *)(albw_frame + 0x18))
  #define local_24 (*(char * *)(albw_frame + 0x1c))
  #define local_20 (*(undefined4 *)(albw_frame + 0x20))
  #define local_1c (*(undefined * *)(albw_frame + 0x24))
  puVar1 = DAT_005ac670;
  *DAT_005ac670 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  uVar8 = DAT_005ac688;
  puVar1 = DAT_005ac674;
  *DAT_005ac674 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005ac678;
  DAT_005ac678[1] = s_N_ArrowT_00_005ac67c;
  *puVar1 = uVar8;
  puVar1[3] = s_N_ArrowB_00_005ac68c;
  puVar1[2] = uVar8;
  puVar1[5] = s_N_ArrowL_00_005ac698;
  puVar1[4] = uVar8;
  puVar1[6] = uVar8;
  puVar1[7] = s_N_ArrowR_00_005ac6a4;
  puVar1 = DAT_005ac6b8;
  DAT_005ac6b8[1] = &DAT_005ac6bc;
  *puVar1 = uVar8;
  puVar1[4] = &DAT_005ac6c4;
  puVar1[3] = uVar8;
  puVar1[7] = &DAT_005ac6cc;
  puVar1[6] = uVar8;
  puVar1[10] = s_random_005ac6d4;
  puVar1[9] = uVar8;
  puVar1[0xc] = uVar8;
  puVar1[0xd] = s_shake_flag_005ac6dc;
  puVar1 = DAT_005ac704;
  uVar7 = DAT_005ac700;
  uVar6 = DAT_005ac6fc;
  uVar2 = DAT_005ac6ec;
  DAT_005ac704[4] = DAT_005ac6fc;
  uVar5 = DAT_005ac6f8;
  uVar4 = DAT_005ac6f4;
  uVar3 = DAT_005ac6f0;
  puVar1[5] = uVar7;
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  puVar1[2] = uVar4;
  puVar1[3] = uVar5;
  puVar1[6] = 0xe;
  *(undefined2 *)(puVar1 + 7) = 0x5a;
  *(undefined2 *)((int)puVar1 + 0x1e) = 0xb4;
  *(undefined1 *)(puVar1 + 8) = 0xf6;
  *(undefined1 *)((int)puVar1 + 0x21) = 0xf1;
  *(undefined1 *)((int)puVar1 + 0x22) = 0x14;
  *(undefined1 *)((int)puVar1 + 0x23) = 0x14;
  *(undefined1 *)(puVar1 + 9) = 10;
  puVar1[0xe] = uVar6;
  puVar1[0xf] = uVar7;
  puVar1[10] = uVar2;
  puVar1[0xb] = uVar3;
  puVar1[0xc] = uVar4;
  puVar1[0xd] = uVar5;
  puVar1[0x10] = 0xe;
  *(undefined2 *)(puVar1 + 0x11) = 0x5a;
  *(undefined2 *)((int)puVar1 + 0x46) = 0xb4;
  *(undefined1 *)(puVar1 + 0x12) = 0xf6;
  *(undefined1 *)((int)puVar1 + 0x49) = 0xf1;
  *(undefined1 *)((int)puVar1 + 0x4a) = 0x14;
  *(undefined1 *)((int)puVar1 + 0x4b) = 0xf;
  *(undefined1 *)(puVar1 + 0x13) = 10;
  puVar1 = DAT_005ac708;
  DAT_005ac708[1] = s_RaceFlag_005ac70c;
  *puVar1 = uVar8;
  puVar1 = DAT_005ac71c;
  DAT_005ac71c[1] = &DAT_005ac6bc;
  *puVar1 = uVar8;
  puVar1[4] = &DAT_005ac6c4;
  puVar1[3] = uVar8;
  puVar1[7] = &DAT_005ac6cc;
  puVar1[6] = uVar8;
  puVar1[10] = s_random_005ac6d4;
  puVar1[9] = uVar8;
  puVar1[0xc] = uVar8;
  puVar1[0xd] = s_shake_flag_005ac6dc;
  puVar1 = DAT_005ac724;
  DAT_005ac724[1] = s_HandL_005ac728;
  *puVar1 = uVar8;
  puVar1 = DAT_005ac734;
  DAT_005ac734[2] = DAT_005ac734 + 3;
  puVar1[1] = 5;
  *puVar1 = 0;
  local_2c = &DAT_005ac738;
  local_34 = s_NpcGameRaceStart_005ac754;
  local_30 = uVar8;
  local_38 = uVar8;
  func_0019B51C(DAT_005ac770,DAT_005ac76c,*DAT_005ac768,(int)&local_38,DAT_005ac734,&local_30,0);
  puVar1 = DAT_005ac778;
  DAT_005ac778[2] = DAT_005ac778 + 3;
  puVar1[1] = 5;
  *puVar1 = 0;
  local_1c = &DAT_005ac77c;
  local_24 = s_NpcGameRaceGoal_005ac794;
  local_20 = uVar8;
  local_28 = uVar8;
  uVar8 = func_0019B51C(DAT_005ac7ac,DAT_005ac7a8,*DAT_005ac7a4,(int)&local_28,DAT_005ac778,
                        &local_20,0);
  return CONCAT44(DAT_005ac774,uVar8);
}

