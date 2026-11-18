#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern undefined4 *DAT_005fb8e8;
extern undefined4 *DAT_005fb8ec;
extern undefined4 *DAT_005fb8f0;
extern undefined4 DAT_005fb900;
extern undefined4 DAT_005fb928;
extern undefined4 DAT_005fb92c;
extern undefined4 *DAT_005fb930;
extern undefined4 DAT_005fb948;
extern undefined4 *DAT_005fb94c;
extern undefined4 *DAT_005fb968;
extern undefined DAT_005fb96c;
extern undefined DAT_005fb970;
extern undefined4 DAT_005fb974;
extern char s_Gm_SRCRecordListIndexT_005fb950[];
extern char s_Gm_SRCRecordListT_005fb934[];
extern char s_N_ArrowB_00_005fb904[];
extern char s_N_ArrowL_00_005fb910[];
extern char s_N_ArrowR_00_005fb91c[];
extern char s_N_ArrowT_00_005fb8f4[];

// USA 005FB83C <- EU 005FB814 (Ghidra, non-matching)
// GLOBAL DAT_005fb8e8 undefined4 *
// GLOBAL DAT_005fb8ec undefined4 *
// GLOBAL DAT_005fb8f0 undefined4 *
// GLOBAL DAT_005fb900 undefined4
// GLOBAL DAT_005fb928 undefined4
// GLOBAL DAT_005fb92c undefined4
// GLOBAL DAT_005fb930 undefined4 *
// GLOBAL DAT_005fb948 undefined4
// GLOBAL DAT_005fb94c undefined4 *
// GLOBAL DAT_005fb968 undefined4 *
// GLOBAL DAT_005fb96c undefined
// GLOBAL DAT_005fb970 undefined
// GLOBAL DAT_005fb974 undefined4
// GLOBAL s_Gm_SRCRecordListIndexT_005fb950 string
// GLOBAL s_Gm_SRCRecordListT_005fb934 string
// GLOBAL s_N_ArrowB_00_005fb904 string
// GLOBAL s_N_ArrowL_00_005fb910 string
// GLOBAL s_N_ArrowR_00_005fb91c string
// GLOBAL s_N_ArrowT_00_005fb8f4 string

undefined4 func_005FB83C(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = DAT_005fb8e8;
  *DAT_005fb8e8 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  uVar2 = DAT_005fb900;
  puVar1 = DAT_005fb8ec;
  *DAT_005fb8ec = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005fb8f0;
  DAT_005fb8f0[1] = s_N_ArrowT_00_005fb8f4;
  *puVar1 = uVar2;
  puVar1[3] = s_N_ArrowB_00_005fb904;
  puVar1[2] = uVar2;
  puVar1[5] = s_N_ArrowL_00_005fb910;
  puVar1[4] = uVar2;
  puVar1[6] = uVar2;
  puVar1[7] = s_N_ArrowR_00_005fb91c;
  puVar1 = DAT_005fb930;
  DAT_005fb930[1] = s_Gm_SRCRecordListT_005fb934;
  *puVar1 = uVar2;
  puVar1 = DAT_005fb94c;
  DAT_005fb94c[1] = s_Gm_SRCRecordListIndexT_005fb950;
  *puVar1 = uVar2;
  puVar1 = DAT_005fb968;
  DAT_005fb968[1] = &DAT_005fb96c;
  *puVar1 = uVar2;
  puVar1[2] = uVar2;
  puVar1[3] = &DAT_005fb970;
  return func_005902C0(0);
}

