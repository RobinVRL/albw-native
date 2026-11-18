#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005b6814;
extern undefined4 *DAT_005b6818;
extern undefined4 *DAT_005b681c;
extern undefined4 DAT_005b682c;
extern undefined4 DAT_005b6854;
extern undefined4 DAT_005b6858;
extern undefined4 *DAT_005b685c;
extern undefined DAT_005b6860;
extern uint *DAT_005b687c;
extern undefined4 DAT_005b6880;
extern undefined4 *DAT_005b6884;
extern undefined4 DAT_005b6888;
extern undefined4 *DAT_005b688c;
extern undefined DAT_005b6890;
extern uint *DAT_005b68ac;
extern undefined4 *DAT_005b68b0;
extern undefined4 *DAT_005b68b4;
extern undefined DAT_005b68b8;
extern uint *DAT_005b68d4;
extern undefined4 *DAT_005b68d8;
extern char s_N_ArrowB_00_005b6830[];
extern char s_N_ArrowL_00_005b683c[];
extern char s_N_ArrowR_00_005b6848[];
extern char s_N_ArrowT_00_005b6820[];
extern char s_NpcAttention1_005b686c[];
extern char s_NpcAttention2_005b689c[];
extern char s_NpcAttention3_005b68c4[];

// USA 005B6688 <- EU 005B6660 (Ghidra, non-matching)
// GLOBAL DAT_005b6814 undefined4 *
// GLOBAL DAT_005b6818 undefined4 *
// GLOBAL DAT_005b681c undefined4 *
// GLOBAL DAT_005b682c undefined4
// GLOBAL DAT_005b6854 undefined4
// GLOBAL DAT_005b6858 undefined4
// GLOBAL DAT_005b685c undefined4 *
// GLOBAL DAT_005b6860 undefined
// GLOBAL DAT_005b687c uint *
// GLOBAL DAT_005b6880 undefined4
// GLOBAL DAT_005b6884 undefined4 *
// GLOBAL DAT_005b6888 undefined4
// GLOBAL DAT_005b688c undefined4 *
// GLOBAL DAT_005b6890 undefined
// GLOBAL DAT_005b68ac uint *
// GLOBAL DAT_005b68b0 undefined4 *
// GLOBAL DAT_005b68b4 undefined4 *
// GLOBAL DAT_005b68b8 undefined
// GLOBAL DAT_005b68d4 uint *
// GLOBAL DAT_005b68d8 undefined4 *
// GLOBAL s_N_ArrowB_00_005b6830 string
// GLOBAL s_N_ArrowL_00_005b683c string
// GLOBAL s_N_ArrowR_00_005b6848 string
// GLOBAL s_N_ArrowT_00_005b6820 string
// GLOBAL s_NpcAttention1_005b686c string
// GLOBAL s_NpcAttention2_005b689c string
// GLOBAL s_NpcAttention3_005b68c4 string

undefined8 func_005B6688(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(undefined4 *)(albw_frame + 0x0))
  #define local_3c (*(char * *)(albw_frame + 0x4))
  #define local_38 (*(undefined4 *)(albw_frame + 0x8))
  #define local_34 (*(undefined * *)(albw_frame + 0xc))
  #define local_30 (*(undefined4 *)(albw_frame + 0x10))
  #define local_2c (*(char * *)(albw_frame + 0x14))
  #define local_28 (*(undefined4 *)(albw_frame + 0x18))
  #define local_24 (*(undefined * *)(albw_frame + 0x1c))
  #define local_20 (*(undefined4 *)(albw_frame + 0x20))
  #define local_1c (*(char * *)(albw_frame + 0x24))
  #define local_18 (*(undefined4 *)(albw_frame + 0x28))
  #define local_14 (*(undefined * *)(albw_frame + 0x2c))
  puVar1 = DAT_005b6814;
  *DAT_005b6814 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  uVar2 = DAT_005b682c;
  puVar1 = DAT_005b6818;
  *DAT_005b6818 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005b681c;
  DAT_005b681c[1] = s_N_ArrowT_00_005b6820;
  *puVar1 = uVar2;
  puVar1[3] = s_N_ArrowB_00_005b6830;
  puVar1[2] = uVar2;
  puVar1[5] = s_N_ArrowL_00_005b683c;
  puVar1[4] = uVar2;
  puVar1[6] = uVar2;
  puVar1[7] = s_N_ArrowR_00_005b6848;
  puVar1 = DAT_005b685c;
  puVar3 = DAT_005b685c + 3;
  DAT_005b685c[1] = 5;
  puVar1[2] = puVar3;
  *puVar1 = 0;
  local_34 = &DAT_005b6860;
  local_3c = s_NpcAttention1_005b686c;
  local_38 = uVar2;
  local_40 = uVar2;
  func_0019B51C(DAT_005b6884,DAT_005b6880,*DAT_005b687c,(int)&local_40,DAT_005b685c,&local_38,0);
  puVar1 = DAT_005b688c;
  puVar3 = DAT_005b688c + 3;
  DAT_005b688c[1] = 5;
  puVar1[2] = puVar3;
  *puVar1 = 0;
  local_24 = &DAT_005b6890;
  local_2c = s_NpcAttention2_005b689c;
  local_28 = uVar2;
  local_30 = uVar2;
  func_0019B51C(DAT_005b68b0,DAT_005b6880,*DAT_005b68ac,(int)&local_30,DAT_005b688c,&local_28,0);
  puVar1 = DAT_005b68b4;
  puVar3 = DAT_005b68b4 + 3;
  DAT_005b68b4[1] = 5;
  puVar1[2] = puVar3;
  *puVar1 = 0;
  local_14 = &DAT_005b68b8;
  local_1c = s_NpcAttention3_005b68c4;
  local_18 = uVar2;
  local_20 = uVar2;
  uVar2 = func_0019B51C(DAT_005b68d8,DAT_005b6880,*DAT_005b68d4,(int)&local_20,DAT_005b68b4,
                        &local_18,0);
  return CONCAT44(DAT_005b6888,uVar2);
}

