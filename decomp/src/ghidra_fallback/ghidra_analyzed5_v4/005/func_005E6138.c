#include "ghidra_types.h"

extern undefined4 *DAT_005e61cc;
extern undefined4 *DAT_005e61d0;
extern undefined4 *DAT_005e61d4;
extern undefined4 DAT_005e61e4;
extern undefined4 DAT_005e620c;
extern undefined4 DAT_005e6210;
extern undefined4 *DAT_005e6214;
extern undefined DAT_005e6224;
extern undefined4 DAT_005e622c;
extern undefined4 *DAT_005e6230;
extern undefined4 DAT_005e6234;
extern undefined4 DAT_005e6238;
extern undefined4 DAT_005e623c;
extern undefined4 DAT_005e6240;
extern char s_Continue_005e6218[];
extern char s_N_ArrowB_00_005e61e8[];
extern char s_N_ArrowL_00_005e61f4[];
extern char s_N_ArrowR_00_005e6200[];
extern char s_N_ArrowT_00_005e61d8[];

// USA 005E6138 <- EU 005E6110 (Ghidra, non-matching)
// GLOBAL DAT_005e61cc undefined4 *
// GLOBAL DAT_005e61d0 undefined4 *
// GLOBAL DAT_005e61d4 undefined4 *
// GLOBAL DAT_005e61e4 undefined4
// GLOBAL DAT_005e620c undefined4
// GLOBAL DAT_005e6210 undefined4
// GLOBAL DAT_005e6214 undefined4 *
// GLOBAL DAT_005e6224 undefined
// GLOBAL DAT_005e622c undefined4
// GLOBAL DAT_005e6230 undefined4 *
// GLOBAL DAT_005e6234 undefined4
// GLOBAL DAT_005e6238 undefined4
// GLOBAL DAT_005e623c undefined4
// GLOBAL DAT_005e6240 undefined4
// GLOBAL s_Continue_005e6218 string
// GLOBAL s_N_ArrowB_00_005e61e8 string
// GLOBAL s_N_ArrowL_00_005e61f4 string
// GLOBAL s_N_ArrowR_00_005e6200 string
// GLOBAL s_N_ArrowT_00_005e61d8 string

void func_005E6138(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = DAT_005e61cc;
  *DAT_005e61cc = 0xffffffff;
  puVar1[1] = 0xffffffff;
  uVar2 = DAT_005e61e4;
  puVar1 = DAT_005e61d0;
  *DAT_005e61d0 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005e61d4;
  DAT_005e61d4[1] = s_N_ArrowT_00_005e61d8;
  *puVar1 = uVar2;
  puVar1[3] = s_N_ArrowB_00_005e61e8;
  puVar1[2] = uVar2;
  puVar1[5] = s_N_ArrowL_00_005e61f4;
  puVar1[4] = uVar2;
  puVar1[6] = uVar2;
  puVar1[7] = s_N_ArrowR_00_005e6200;
  puVar1 = DAT_005e6214;
  DAT_005e6214[1] = s_Continue_005e6218;
  *puVar1 = uVar2;
  puVar1[2] = uVar2;
  puVar1[3] = &DAT_005e6224;
  uVar2 = DAT_005e6238;
  puVar1 = DAT_005e6230;
  *DAT_005e6230 = DAT_005e6234;
  puVar1[1] = uVar2;
  uVar2 = DAT_005e6240;
  puVar1[2] = DAT_005e623c;
  puVar1[3] = uVar2;
  return;
}

