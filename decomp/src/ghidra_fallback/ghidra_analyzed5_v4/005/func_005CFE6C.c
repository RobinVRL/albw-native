#include "ghidra_types.h"

extern undefined1 *DAT_005cff24;
extern undefined4 *DAT_005cff28;
extern undefined4 *DAT_005cff2c;
extern undefined4 DAT_005cff3c;
extern undefined4 DAT_005cff64;
extern undefined4 DAT_005cff68;
extern char s_N_ArrowB_00_005cff40[];
extern char s_N_ArrowL_00_005cff4c[];
extern char s_N_ArrowR_00_005cff58[];
extern char s_N_ArrowT_00_005cff30[];

// USA 005CFE6C <- EU 005CFE44 (Ghidra, non-matching)
// GLOBAL DAT_005cff24 undefined1 *
// GLOBAL DAT_005cff28 undefined4 *
// GLOBAL DAT_005cff2c undefined4 *
// GLOBAL DAT_005cff3c undefined4
// GLOBAL DAT_005cff64 undefined4
// GLOBAL DAT_005cff68 undefined4
// GLOBAL s_N_ArrowB_00_005cff40 string
// GLOBAL s_N_ArrowL_00_005cff4c string
// GLOBAL s_N_ArrowR_00_005cff58 string
// GLOBAL s_N_ArrowT_00_005cff30 string

void func_005CFE6C(void)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  puVar1 = DAT_005cff24;
  *(undefined4 *)(DAT_005cff24 + 0x10) = 0xffffffff;
  *(undefined4 *)(puVar1 + 0x14) = 0xffffffff;
  puVar2 = DAT_005cff28;
  *DAT_005cff28 = 0;
  puVar2[1] = 0;
  uVar3 = DAT_005cff3c;
  puVar2 = DAT_005cff2c;
  DAT_005cff2c[1] = s_N_ArrowT_00_005cff30;
  *puVar2 = uVar3;
  puVar2[2] = uVar3;
  puVar2[3] = s_N_ArrowB_00_005cff40;
  puVar2[4] = uVar3;
  puVar2[5] = s_N_ArrowL_00_005cff4c;
  puVar2[6] = uVar3;
  puVar2[7] = s_N_ArrowR_00_005cff58;
  puVar1 = DAT_005cff24;
  *DAT_005cff24 = 0x8c;
  puVar1[1] = 0xd8;
  puVar1[2] = 0x7f;
  puVar1[3] = 0xff;
  puVar1[4] = 0xd8;
  puVar1[5] = 0xff;
  puVar1[6] = 0xcc;
  puVar1[7] = 0xff;
  puVar1[8] = 0xd8;
  puVar1[9] = 0xff;
  puVar1[10] = 0xcc;
  puVar1[0xb] = 0xff;
  puVar1[0xc] = 0xe5;
  puVar1[0xd] = 0x99;
  puVar1[0xe] = 0xb2;
  puVar1[0xf] = 0xff;
  return;
}

