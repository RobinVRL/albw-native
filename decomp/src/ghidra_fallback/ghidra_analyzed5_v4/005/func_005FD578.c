#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern int DAT_005fd6a8;
extern undefined4 *DAT_005fd6ac;
extern undefined4 *DAT_005fd6b0;
extern undefined4 DAT_005fd6c0;
extern undefined4 DAT_005fd6e8;
extern undefined4 DAT_005fd6ec;
extern undefined4 *DAT_005fd6f0;
extern undefined4 DAT_005fd708;
extern undefined4 *DAT_005fd70c;
extern undefined DAT_005fd710;
extern undefined DAT_005fd714;
extern undefined DAT_005fd724;
extern undefined4 DAT_005fd73c;
extern undefined4 *DAT_005fd740;
extern undefined4 *DAT_005fd750;
extern undefined4 *DAT_005fd760;
extern undefined4 *DAT_005fd770;
extern char s_Bonus_005fd728[];
extern char s_CountEnd_005fd718[];
extern char s_Gm_GiriGiriResultT_005fd6f4[];
extern char s_LinkColor_005fd730[];
extern char s_N_ArrowB_00_005fd6c4[];
extern char s_N_ArrowL_00_005fd6d0[];
extern char s_N_ArrowR_00_005fd6dc[];
extern char s_N_ArrowT_00_005fd6b4[];
extern char s_T_Result_00_005fd744[];
extern char s_T_Result_01_005fd754[];
extern char s_T_Result_02_005fd764[];

// USA 005FD578 <- EU 005FD550 (Ghidra, non-matching)
// GLOBAL DAT_005fd6a8 int
// GLOBAL DAT_005fd6ac undefined4 *
// GLOBAL DAT_005fd6b0 undefined4 *
// GLOBAL DAT_005fd6c0 undefined4
// GLOBAL DAT_005fd6e8 undefined4
// GLOBAL DAT_005fd6ec undefined4
// GLOBAL DAT_005fd6f0 undefined4 *
// GLOBAL DAT_005fd708 undefined4
// GLOBAL DAT_005fd70c undefined4 *
// GLOBAL DAT_005fd710 undefined
// GLOBAL DAT_005fd714 undefined
// GLOBAL DAT_005fd724 undefined
// GLOBAL DAT_005fd73c undefined4
// GLOBAL DAT_005fd740 undefined4 *
// GLOBAL DAT_005fd750 undefined4 *
// GLOBAL DAT_005fd760 undefined4 *
// GLOBAL DAT_005fd770 undefined4 *
// GLOBAL s_Bonus_005fd728 string
// GLOBAL s_CountEnd_005fd718 string
// GLOBAL s_Gm_GiriGiriResultT_005fd6f4 string
// GLOBAL s_LinkColor_005fd730 string
// GLOBAL s_N_ArrowB_00_005fd6c4 string
// GLOBAL s_N_ArrowL_00_005fd6d0 string
// GLOBAL s_N_ArrowR_00_005fd6dc string
// GLOBAL s_N_ArrowT_00_005fd6b4 string
// GLOBAL s_T_Result_00_005fd744 string
// GLOBAL s_T_Result_01_005fd754 string
// GLOBAL s_T_Result_02_005fd764 string

undefined4 func_005FD578(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  iVar1 = DAT_005fd6a8;
  *(undefined4 *)(DAT_005fd6a8 + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  uVar3 = DAT_005fd6c0;
  puVar2 = DAT_005fd6ac;
  *DAT_005fd6ac = 0;
  puVar2[1] = 0;
  puVar2 = DAT_005fd6b0;
  DAT_005fd6b0[1] = s_N_ArrowT_00_005fd6b4;
  *puVar2 = uVar3;
  puVar2[3] = s_N_ArrowB_00_005fd6c4;
  puVar2[2] = uVar3;
  puVar2[5] = s_N_ArrowL_00_005fd6d0;
  puVar2[4] = uVar3;
  puVar2[6] = uVar3;
  puVar2[7] = s_N_ArrowR_00_005fd6dc;
  puVar2 = DAT_005fd6f0;
  DAT_005fd6f0[1] = s_Gm_GiriGiriResultT_005fd6f4;
  *puVar2 = uVar3;
  puVar2 = DAT_005fd70c;
  DAT_005fd70c[1] = &DAT_005fd710;
  *puVar2 = uVar3;
  puVar2[3] = &DAT_005fd714;
  puVar2[2] = uVar3;
  puVar2[5] = s_CountEnd_005fd718;
  puVar2[4] = uVar3;
  puVar2[7] = &DAT_005fd724;
  puVar2[6] = uVar3;
  puVar2[9] = s_Bonus_005fd728;
  puVar2[8] = uVar3;
  puVar2[10] = uVar3;
  puVar2[0xb] = s_LinkColor_005fd730;
  puVar2 = DAT_005fd740;
  DAT_005fd740[1] = s_T_Result_00_005fd744;
  *puVar2 = uVar3;
  puVar2 = DAT_005fd750;
  DAT_005fd750[1] = s_T_Result_01_005fd754;
  *puVar2 = uVar3;
  puVar2 = DAT_005fd760;
  DAT_005fd760[1] = s_T_Result_02_005fd764;
  *puVar2 = uVar3;
  puVar2 = DAT_005fd770;
  DAT_005fd770[1] = s_T_Result_00_005fd744;
  *puVar2 = uVar3;
  return func_005902C0(puVar2);
}

