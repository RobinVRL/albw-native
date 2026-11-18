#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern undefined4 *DAT_005fa698;
extern undefined4 *DAT_005fa69c;
extern undefined4 *DAT_005fa6a0;
extern undefined4 DAT_005fa6b0;
extern undefined4 DAT_005fa6d8;
extern undefined4 DAT_005fa6dc;
extern undefined4 *DAT_005fa6e0;
extern undefined4 DAT_005fa6f4;
extern undefined4 *DAT_005fa6f8;
extern undefined DAT_005fa6fc;
extern undefined DAT_005fa700;
extern undefined4 DAT_005fa718;
extern char s_Attention_005fa70c[];
extern char s_Gm_AnalogTimerT_005fa6e4[];
extern char s_Meter_005fa704[];
extern char s_N_ArrowB_00_005fa6b4[];
extern char s_N_ArrowL_00_005fa6c0[];
extern char s_N_ArrowR_00_005fa6cc[];
extern char s_N_ArrowT_00_005fa6a4[];

// USA 005FA5F0 <- EU 005FA5C8 (Ghidra, non-matching)
// GLOBAL DAT_005fa698 undefined4 *
// GLOBAL DAT_005fa69c undefined4 *
// GLOBAL DAT_005fa6a0 undefined4 *
// GLOBAL DAT_005fa6b0 undefined4
// GLOBAL DAT_005fa6d8 undefined4
// GLOBAL DAT_005fa6dc undefined4
// GLOBAL DAT_005fa6e0 undefined4 *
// GLOBAL DAT_005fa6f4 undefined4
// GLOBAL DAT_005fa6f8 undefined4 *
// GLOBAL DAT_005fa6fc undefined
// GLOBAL DAT_005fa700 undefined
// GLOBAL DAT_005fa718 undefined4
// GLOBAL s_Attention_005fa70c string
// GLOBAL s_Gm_AnalogTimerT_005fa6e4 string
// GLOBAL s_Meter_005fa704 string
// GLOBAL s_N_ArrowB_00_005fa6b4 string
// GLOBAL s_N_ArrowL_00_005fa6c0 string
// GLOBAL s_N_ArrowR_00_005fa6cc string
// GLOBAL s_N_ArrowT_00_005fa6a4 string

undefined4 func_005FA5F0(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = DAT_005fa698;
  *DAT_005fa698 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  uVar2 = DAT_005fa6b0;
  puVar1 = DAT_005fa69c;
  *DAT_005fa69c = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005fa6a0;
  DAT_005fa6a0[1] = s_N_ArrowT_00_005fa6a4;
  *puVar1 = uVar2;
  puVar1[3] = s_N_ArrowB_00_005fa6b4;
  puVar1[2] = uVar2;
  puVar1[5] = s_N_ArrowL_00_005fa6c0;
  puVar1[4] = uVar2;
  puVar1[6] = uVar2;
  puVar1[7] = s_N_ArrowR_00_005fa6cc;
  puVar1 = DAT_005fa6e0;
  DAT_005fa6e0[1] = s_Gm_AnalogTimerT_005fa6e4;
  *puVar1 = uVar2;
  puVar1 = DAT_005fa6f8;
  DAT_005fa6f8[1] = &DAT_005fa6fc;
  *puVar1 = uVar2;
  puVar1[3] = &DAT_005fa700;
  puVar1[2] = uVar2;
  puVar1[5] = s_Meter_005fa704;
  puVar1[4] = uVar2;
  puVar1[6] = uVar2;
  puVar1[7] = s_Attention_005fa70c;
  return func_005902C0(0);
}

