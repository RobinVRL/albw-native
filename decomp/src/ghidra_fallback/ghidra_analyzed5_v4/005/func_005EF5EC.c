#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern undefined4 *DAT_005ef724;
extern undefined4 *DAT_005ef728;
extern undefined4 DAT_005ef73c;
extern undefined4 DAT_005ef740;
extern undefined4 DAT_005ef744;
extern undefined4 *DAT_005ef748;
extern undefined4 *DAT_005ef75c;
extern undefined4 *DAT_005ef770;
extern undefined4 *DAT_005ef780;
extern undefined4 *DAT_005ef790;
extern undefined4 *DAT_005ef7a8;
extern undefined4 *DAT_005ef7c4;
extern undefined4 *DAT_005ef7e0;
extern undefined4 *DAT_005ef7fc;
extern undefined4 *DAT_005ef800;
extern char s_Mn_FileSelectT_005ef72c[];
extern char s_N_AttentionText_00_005ef794[];
extern char s_P_HardModeAttention_01_005ef7c8[];
extern char s_T_FileNumber_00_005ef74c[];
extern char s_T_FileNumber_Hard_00_005ef804[];
extern char s_T_HardModeAttention_00_005ef7ac[];
extern char s_T_HardModeAttention_01_005ef7e4[];
extern char s_T_Rupee_00_005ef784[];
extern char s_T_Rupy_00_005ef774[];
extern char s_T_SavePlace_00_005ef760[];

// USA 005EF5EC <- EU 005EF5C4 (Ghidra, non-matching)
// GLOBAL DAT_005ef724 undefined4 *
// GLOBAL DAT_005ef728 undefined4 *
// GLOBAL DAT_005ef73c undefined4
// GLOBAL DAT_005ef740 undefined4
// GLOBAL DAT_005ef744 undefined4
// GLOBAL DAT_005ef748 undefined4 *
// GLOBAL DAT_005ef75c undefined4 *
// GLOBAL DAT_005ef770 undefined4 *
// GLOBAL DAT_005ef780 undefined4 *
// GLOBAL DAT_005ef790 undefined4 *
// GLOBAL DAT_005ef7a8 undefined4 *
// GLOBAL DAT_005ef7c4 undefined4 *
// GLOBAL DAT_005ef7e0 undefined4 *
// GLOBAL DAT_005ef7fc undefined4 *
// GLOBAL DAT_005ef800 undefined4 *
// GLOBAL s_Mn_FileSelectT_005ef72c string
// GLOBAL s_N_AttentionText_00_005ef794 string
// GLOBAL s_P_HardModeAttention_01_005ef7c8 string
// GLOBAL s_T_FileNumber_00_005ef74c string
// GLOBAL s_T_FileNumber_Hard_00_005ef804 string
// GLOBAL s_T_HardModeAttention_00_005ef7ac string
// GLOBAL s_T_HardModeAttention_01_005ef7e4 string
// GLOBAL s_T_Rupee_00_005ef784 string
// GLOBAL s_T_Rupy_00_005ef774 string
// GLOBAL s_T_SavePlace_00_005ef760 string

undefined4 func_005EF5EC(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = DAT_005ef724;
  *DAT_005ef724 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  uVar2 = DAT_005ef73c;
  puVar1 = DAT_005ef728;
  *DAT_005ef728 = 0;
  puVar1[1] = 0;
  puVar1[3] = s_Mn_FileSelectT_005ef72c;
  puVar1[2] = uVar2;
  puVar1 = DAT_005ef748;
  DAT_005ef748[1] = s_T_FileNumber_00_005ef74c;
  *puVar1 = uVar2;
  puVar1 = DAT_005ef75c;
  DAT_005ef75c[1] = s_T_SavePlace_00_005ef760;
  *puVar1 = uVar2;
  puVar1 = DAT_005ef770;
  DAT_005ef770[1] = s_T_Rupy_00_005ef774;
  *puVar1 = uVar2;
  puVar1 = DAT_005ef780;
  DAT_005ef780[1] = s_T_Rupee_00_005ef784;
  *puVar1 = uVar2;
  puVar1 = DAT_005ef790;
  DAT_005ef790[1] = s_N_AttentionText_00_005ef794;
  *puVar1 = uVar2;
  puVar1 = DAT_005ef7a8;
  DAT_005ef7a8[1] = s_T_HardModeAttention_00_005ef7ac;
  *puVar1 = uVar2;
  puVar1 = DAT_005ef7c4;
  DAT_005ef7c4[1] = s_P_HardModeAttention_01_005ef7c8;
  *puVar1 = uVar2;
  puVar1 = DAT_005ef7e0;
  DAT_005ef7e0[1] = s_T_HardModeAttention_01_005ef7e4;
  *puVar1 = uVar2;
  puVar1 = DAT_005ef7fc;
  DAT_005ef7fc[1] = s_T_FileNumber_00_005ef74c;
  *puVar1 = uVar2;
  puVar1 = DAT_005ef800;
  DAT_005ef800[1] = s_T_FileNumber_Hard_00_005ef804;
  *puVar1 = uVar2;
  return func_005902C0(puVar1);
}

