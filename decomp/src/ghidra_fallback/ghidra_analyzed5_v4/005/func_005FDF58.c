#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern undefined4 *DAT_005fe0fc;
extern undefined4 *DAT_005fe100;
extern undefined4 *DAT_005fe104;
extern undefined4 DAT_005fe114;
extern undefined4 DAT_005fe13c;
extern undefined4 DAT_005fe140;
extern undefined4 *DAT_005fe144;
extern undefined4 DAT_005fe15c;
extern undefined4 *DAT_005fe160;
extern undefined DAT_005fe16c;
extern undefined DAT_005fe170;
extern undefined DAT_005fe174;
extern undefined DAT_005fe178;
extern undefined4 DAT_005fe188;
extern undefined4 *DAT_005fe18c;
extern undefined4 DAT_005fe1c8;
extern undefined4 *DAT_005fe1cc;
extern undefined DAT_005fe1d0;
extern undefined DAT_005fe1d4;
extern undefined DAT_005fe1d8;
extern undefined DAT_005fe1dc;
extern undefined4 DAT_005fe1e0;
extern undefined4 *DAT_005fe1e4;
extern undefined4 DAT_005fe208;
extern char s_G_MeterL_00_005fe1ac[];
extern char s_G_MeterNumL_00_005fe1b8[];
extern char s_G_MeterNumS_00_005fe19c[];
extern char s_G_MeterS_00_005fe190[];
extern char s_Gm_SRCResultTimeUpT_005fe148[];
extern char s_LinkColor_005fe17c[];
extern char s_Meter_005fe164[];
extern char s_N_ArrowB_00_005fe118[];
extern char s_N_ArrowL_00_005fe124[];
extern char s_N_ArrowR_00_005fe130[];
extern char s_N_ArrowT_00_005fe108[];
extern char s_T_MeterNumL_00_005fe1f8[];
extern char s_T_MeterNumS_00_005fe1e8[];

// USA 005FDF58 <- EU 005FDF30 (Ghidra, non-matching)
// GLOBAL DAT_005fe0fc undefined4 *
// GLOBAL DAT_005fe100 undefined4 *
// GLOBAL DAT_005fe104 undefined4 *
// GLOBAL DAT_005fe114 undefined4
// GLOBAL DAT_005fe13c undefined4
// GLOBAL DAT_005fe140 undefined4
// GLOBAL DAT_005fe144 undefined4 *
// GLOBAL DAT_005fe15c undefined4
// GLOBAL DAT_005fe160 undefined4 *
// GLOBAL DAT_005fe16c undefined
// GLOBAL DAT_005fe170 undefined
// GLOBAL DAT_005fe174 undefined
// GLOBAL DAT_005fe178 undefined
// GLOBAL DAT_005fe188 undefined4
// GLOBAL DAT_005fe18c undefined4 *
// GLOBAL DAT_005fe1c8 undefined4
// GLOBAL DAT_005fe1cc undefined4 *
// GLOBAL DAT_005fe1d0 undefined
// GLOBAL DAT_005fe1d4 undefined
// GLOBAL DAT_005fe1d8 undefined
// GLOBAL DAT_005fe1dc undefined
// GLOBAL DAT_005fe1e0 undefined4
// GLOBAL DAT_005fe1e4 undefined4 *
// GLOBAL DAT_005fe208 undefined4
// GLOBAL s_G_MeterL_00_005fe1ac string
// GLOBAL s_G_MeterNumL_00_005fe1b8 string
// GLOBAL s_G_MeterNumS_00_005fe19c string
// GLOBAL s_G_MeterS_00_005fe190 string
// GLOBAL s_Gm_SRCResultTimeUpT_005fe148 string
// GLOBAL s_LinkColor_005fe17c string
// GLOBAL s_Meter_005fe164 string
// GLOBAL s_N_ArrowB_00_005fe118 string
// GLOBAL s_N_ArrowL_00_005fe124 string
// GLOBAL s_N_ArrowR_00_005fe130 string
// GLOBAL s_N_ArrowT_00_005fe108 string
// GLOBAL s_T_MeterNumL_00_005fe1f8 string
// GLOBAL s_T_MeterNumS_00_005fe1e8 string

undefined4 func_005FDF58(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = DAT_005fe0fc;
  *DAT_005fe0fc = 0xffffffff;
  puVar1[1] = 0xffffffff;
  uVar2 = DAT_005fe114;
  puVar1 = DAT_005fe100;
  *DAT_005fe100 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005fe104;
  DAT_005fe104[1] = s_N_ArrowT_00_005fe108;
  *puVar1 = uVar2;
  puVar1[3] = s_N_ArrowB_00_005fe118;
  puVar1[2] = uVar2;
  puVar1[5] = s_N_ArrowL_00_005fe124;
  puVar1[4] = uVar2;
  puVar1[6] = uVar2;
  puVar1[7] = s_N_ArrowR_00_005fe130;
  puVar1 = DAT_005fe144;
  DAT_005fe144[1] = s_Gm_SRCResultTimeUpT_005fe148;
  *puVar1 = uVar2;
  puVar1 = DAT_005fe160;
  DAT_005fe160[1] = s_Meter_005fe164;
  *puVar1 = uVar2;
  puVar1[3] = &DAT_005fe16c;
  puVar1[2] = uVar2;
  puVar1[5] = s_Meter_005fe164;
  puVar1[4] = uVar2;
  puVar1[7] = &DAT_005fe16c;
  puVar1[6] = uVar2;
  puVar1[9] = &DAT_005fe174;
  puVar1[8] = uVar2;
  puVar1[0xb] = &DAT_005fe178;
  puVar1[10] = uVar2;
  puVar1[0xc] = uVar2;
  puVar1[0xd] = s_LinkColor_005fe17c;
  puVar1 = DAT_005fe18c;
  DAT_005fe18c[1] = s_G_MeterS_00_005fe190;
  *puVar1 = uVar2;
  puVar1[3] = s_G_MeterNumS_00_005fe19c;
  puVar1[2] = uVar2;
  puVar1[5] = s_G_MeterL_00_005fe1ac;
  puVar1[4] = uVar2;
  puVar1[7] = s_G_MeterNumL_00_005fe1b8;
  puVar1[6] = uVar2;
  puVar1[9] = &DAT_005fe170;
  puVar1[8] = uVar2;
  puVar1[0xb] = &DAT_005fe170;
  puVar1[10] = uVar2;
  puVar1[0xc] = uVar2;
  puVar1[0xd] = &DAT_005fe170;
  puVar1 = DAT_005fe1cc;
  DAT_005fe1cc[1] = &DAT_005fe1d0;
  *puVar1 = uVar2;
  puVar1[3] = &DAT_005fe1d4;
  puVar1[2] = uVar2;
  puVar1[5] = &DAT_005fe1d8;
  puVar1[4] = uVar2;
  puVar1[6] = uVar2;
  puVar1[7] = &DAT_005fe1dc;
  puVar1 = DAT_005fe1e4;
  DAT_005fe1e4[1] = s_T_MeterNumS_00_005fe1e8;
  *puVar1 = uVar2;
  puVar1[2] = uVar2;
  puVar1[3] = s_T_MeterNumL_00_005fe1f8;
  return func_005902C0(0);
}

