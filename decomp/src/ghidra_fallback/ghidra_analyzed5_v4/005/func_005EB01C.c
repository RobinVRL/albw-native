#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern undefined4 *DAT_005eb110;
extern undefined4 *DAT_005eb114;
extern undefined4 *DAT_005eb118;
extern undefined4 DAT_005eb128;
extern undefined4 DAT_005eb150;
extern undefined4 DAT_005eb154;
extern undefined4 *DAT_005eb158;
extern undefined4 DAT_005eb168;
extern undefined4 *DAT_005eb16c;
extern undefined4 *DAT_005eb180;
extern undefined4 *DAT_005eb190;
extern undefined4 DAT_005eb1bc;
extern undefined4 *DAT_005eb1c0;
extern undefined4 DAT_005eb1ec;
extern char s_Gm_PauseT_005eb15c[];
extern char s_L_Btn_00_T_GmOvr_00_005eb1a8[];
extern char s_L_Btn_01_T_GmOvr_00_005eb194[];
extern char s_L_Btn_02_T_GmOvr_00_005eb1c4[];
extern char s_L_Btn_03_T_GmOvr_00_005eb1d8[];
extern char s_N_ArrowB_00_005eb12c[];
extern char s_N_ArrowL_00_005eb138[];
extern char s_N_ArrowR_00_005eb144[];
extern char s_N_ArrowT_00_005eb11c[];
extern char s_T_GmOvr_00_005eb184[];
extern char s_T_Message_00_005eb170[];

// USA 005EB01C <- EU 005EAFF4 (Ghidra, non-matching)
// GLOBAL DAT_005eb110 undefined4 *
// GLOBAL DAT_005eb114 undefined4 *
// GLOBAL DAT_005eb118 undefined4 *
// GLOBAL DAT_005eb128 undefined4
// GLOBAL DAT_005eb150 undefined4
// GLOBAL DAT_005eb154 undefined4
// GLOBAL DAT_005eb158 undefined4 *
// GLOBAL DAT_005eb168 undefined4
// GLOBAL DAT_005eb16c undefined4 *
// GLOBAL DAT_005eb180 undefined4 *
// GLOBAL DAT_005eb190 undefined4 *
// GLOBAL DAT_005eb1bc undefined4
// GLOBAL DAT_005eb1c0 undefined4 *
// GLOBAL DAT_005eb1ec undefined4
// GLOBAL s_Gm_PauseT_005eb15c string
// GLOBAL s_L_Btn_00_T_GmOvr_00_005eb1a8 string
// GLOBAL s_L_Btn_01_T_GmOvr_00_005eb194 string
// GLOBAL s_L_Btn_02_T_GmOvr_00_005eb1c4 string
// GLOBAL s_L_Btn_03_T_GmOvr_00_005eb1d8 string
// GLOBAL s_N_ArrowB_00_005eb12c string
// GLOBAL s_N_ArrowL_00_005eb138 string
// GLOBAL s_N_ArrowR_00_005eb144 string
// GLOBAL s_N_ArrowT_00_005eb11c string
// GLOBAL s_T_GmOvr_00_005eb184 string
// GLOBAL s_T_Message_00_005eb170 string

undefined4 func_005EB01C(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = DAT_005eb110;
  *DAT_005eb110 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  uVar2 = DAT_005eb128;
  puVar1 = DAT_005eb114;
  *DAT_005eb114 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005eb118;
  DAT_005eb118[1] = s_N_ArrowT_00_005eb11c;
  *puVar1 = uVar2;
  puVar1[3] = s_N_ArrowB_00_005eb12c;
  puVar1[2] = uVar2;
  puVar1[5] = s_N_ArrowL_00_005eb138;
  puVar1[4] = uVar2;
  puVar1[6] = uVar2;
  puVar1[7] = s_N_ArrowR_00_005eb144;
  puVar1 = DAT_005eb158;
  DAT_005eb158[1] = s_Gm_PauseT_005eb15c;
  *puVar1 = uVar2;
  puVar1 = DAT_005eb16c;
  DAT_005eb16c[1] = s_T_Message_00_005eb170;
  *puVar1 = uVar2;
  puVar1 = DAT_005eb180;
  DAT_005eb180[1] = s_T_GmOvr_00_005eb184;
  *puVar1 = uVar2;
  puVar1 = DAT_005eb190;
  DAT_005eb190[1] = s_L_Btn_01_T_GmOvr_00_005eb194;
  *puVar1 = uVar2;
  puVar1[2] = uVar2;
  puVar1[3] = s_L_Btn_00_T_GmOvr_00_005eb1a8;
  puVar1 = DAT_005eb1c0;
  DAT_005eb1c0[1] = s_L_Btn_02_T_GmOvr_00_005eb1c4;
  *puVar1 = uVar2;
  puVar1[2] = uVar2;
  puVar1[3] = s_L_Btn_03_T_GmOvr_00_005eb1d8;
  return func_005902C0(0);
}

