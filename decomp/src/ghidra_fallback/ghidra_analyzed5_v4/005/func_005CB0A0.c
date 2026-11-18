#include "ghidra_types.h"

extern undefined4 *DAT_005cb1b8;
extern undefined4 *DAT_005cb1bc;
extern undefined4 *DAT_005cb1c0;
extern undefined4 DAT_005cb1d0;
extern undefined4 DAT_005cb1f8;
extern undefined4 DAT_005cb1fc;
extern undefined4 *DAT_005cb200;
extern undefined4 DAT_005cb210;
extern undefined4 *DAT_005cb214;
extern undefined4 DAT_005cb218;
extern undefined4 DAT_005cb21c;
extern undefined4 DAT_005cb220;
extern undefined4 DAT_005cb224;
extern undefined4 DAT_005cb228;
extern undefined4 DAT_005cb22c;
extern undefined4 DAT_005cb230;
extern undefined4 DAT_005cb234;
extern undefined4 DAT_005cb238;
extern undefined4 DAT_005cb23c;
extern undefined4 DAT_005cb240;
extern undefined4 DAT_005cb244;
extern undefined4 *DAT_005cb248;
extern undefined4 DAT_005cb24c;
extern undefined4 DAT_005cb250;
extern undefined4 DAT_005cb254;
extern undefined4 *DAT_005cb258;
extern undefined4 DAT_005cb25c;
extern undefined4 DAT_005cb260;
extern char s_Gm_FieldMap_005cb204[];
extern char s_N_ArrowB_00_005cb1d4[];
extern char s_N_ArrowL_00_005cb1e0[];
extern char s_N_ArrowR_00_005cb1ec[];
extern char s_N_ArrowT_00_005cb1c4[];

// USA 005CB0A0 <- EU 005CB078 (Ghidra, non-matching)
// GLOBAL DAT_005cb1b8 undefined4 *
// GLOBAL DAT_005cb1bc undefined4 *
// GLOBAL DAT_005cb1c0 undefined4 *
// GLOBAL DAT_005cb1d0 undefined4
// GLOBAL DAT_005cb1f8 undefined4
// GLOBAL DAT_005cb1fc undefined4
// GLOBAL DAT_005cb200 undefined4 *
// GLOBAL DAT_005cb210 undefined4
// GLOBAL DAT_005cb214 undefined4 *
// GLOBAL DAT_005cb218 undefined4
// GLOBAL DAT_005cb21c undefined4
// GLOBAL DAT_005cb220 undefined4
// GLOBAL DAT_005cb224 undefined4
// GLOBAL DAT_005cb228 undefined4
// GLOBAL DAT_005cb22c undefined4
// GLOBAL DAT_005cb230 undefined4
// GLOBAL DAT_005cb234 undefined4
// GLOBAL DAT_005cb238 undefined4
// GLOBAL DAT_005cb23c undefined4
// GLOBAL DAT_005cb240 undefined4
// GLOBAL DAT_005cb244 undefined4
// GLOBAL DAT_005cb248 undefined4 *
// GLOBAL DAT_005cb24c undefined4
// GLOBAL DAT_005cb250 undefined4
// GLOBAL DAT_005cb254 undefined4
// GLOBAL DAT_005cb258 undefined4 *
// GLOBAL DAT_005cb25c undefined4
// GLOBAL DAT_005cb260 undefined4
// GLOBAL s_Gm_FieldMap_005cb204 string
// GLOBAL s_N_ArrowB_00_005cb1d4 string
// GLOBAL s_N_ArrowL_00_005cb1e0 string
// GLOBAL s_N_ArrowR_00_005cb1ec string
// GLOBAL s_N_ArrowT_00_005cb1c4 string

void func_005CB0A0(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  puVar1 = DAT_005cb1b8;
  *DAT_005cb1b8 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  uVar2 = DAT_005cb1d0;
  puVar1 = DAT_005cb1bc;
  *DAT_005cb1bc = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005cb1c0;
  DAT_005cb1c0[1] = s_N_ArrowT_00_005cb1c4;
  *puVar1 = uVar2;
  puVar1[3] = s_N_ArrowB_00_005cb1d4;
  puVar1[2] = uVar2;
  puVar1[5] = s_N_ArrowL_00_005cb1e0;
  puVar1[4] = uVar2;
  puVar1[6] = uVar2;
  puVar1[7] = s_N_ArrowR_00_005cb1ec;
  puVar1 = DAT_005cb200;
  DAT_005cb200[1] = s_Gm_FieldMap_005cb204;
  *puVar1 = uVar2;
  uVar3 = DAT_005cb220;
  uVar2 = DAT_005cb21c;
  puVar1 = DAT_005cb214;
  *DAT_005cb214 = DAT_005cb218;
  puVar1[1] = uVar2;
  puVar1[2] = uVar3;
  uVar2 = DAT_005cb224;
  puVar1[3] = DAT_005cb228;
  uVar3 = DAT_005cb22c;
  puVar1[4] = uVar2;
  puVar1[5] = uVar3;
  uVar3 = DAT_005cb234;
  puVar1[6] = DAT_005cb230;
  puVar1[7] = uVar2;
  puVar1[8] = uVar3;
  uVar3 = DAT_005cb23c;
  puVar1[9] = DAT_005cb238;
  puVar1[10] = uVar2;
  puVar1[0xb] = uVar3;
  uVar3 = DAT_005cb244;
  puVar1[0xc] = DAT_005cb240;
  uVar4 = DAT_005cb24c;
  puVar1[0xd] = uVar2;
  puVar1[0xe] = uVar3;
  uVar3 = DAT_005cb250;
  puVar1 = DAT_005cb248;
  *DAT_005cb248 = uVar4;
  uVar4 = DAT_005cb25c;
  puVar1[1] = uVar2;
  puVar1[2] = uVar3;
  puVar1 = DAT_005cb258;
  uVar3 = DAT_005cb254;
  *DAT_005cb258 = DAT_005cb254;
  puVar1[1] = uVar2;
  puVar1[2] = uVar4;
  uVar4 = DAT_005cb260;
  puVar1[3] = uVar3;
  puVar1[4] = uVar2;
  puVar1[5] = uVar4;
  return;
}

