#include "ghidra_types.h"

extern int DAT_005e3b24;
extern undefined4 *DAT_005e3b28;
extern undefined4 *DAT_005e3b2c;
extern undefined4 DAT_005e3b3c;
extern undefined4 DAT_005e3b64;
extern undefined4 DAT_005e3b68;
extern undefined4 DAT_005e3b6c;
extern undefined4 *DAT_005e3b70;
extern undefined4 DAT_005e3b74;
extern char s_N_ArrowB_00_005e3b40[];
extern char s_N_ArrowL_00_005e3b4c[];
extern char s_N_ArrowR_00_005e3b58[];
extern char s_N_ArrowT_00_005e3b30[];

// USA 005E3AC8 <- EU 005E3AA0 (Ghidra, non-matching)
// GLOBAL DAT_005e3b24 int
// GLOBAL DAT_005e3b28 undefined4 *
// GLOBAL DAT_005e3b2c undefined4 *
// GLOBAL DAT_005e3b3c undefined4
// GLOBAL DAT_005e3b64 undefined4
// GLOBAL DAT_005e3b68 undefined4
// GLOBAL DAT_005e3b6c undefined4
// GLOBAL DAT_005e3b70 undefined4 *
// GLOBAL DAT_005e3b74 undefined4
// GLOBAL s_N_ArrowB_00_005e3b40 string
// GLOBAL s_N_ArrowL_00_005e3b4c string
// GLOBAL s_N_ArrowR_00_005e3b58 string
// GLOBAL s_N_ArrowT_00_005e3b30 string

void func_005E3AC8(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = DAT_005e3b24;
  *(undefined4 *)(DAT_005e3b24 + 0x10) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x14) = 0xffffffff;
  puVar2 = DAT_005e3b28;
  *DAT_005e3b28 = 0;
  puVar2[1] = 0;
  uVar3 = DAT_005e3b3c;
  puVar2 = DAT_005e3b2c;
  DAT_005e3b2c[1] = s_N_ArrowT_00_005e3b30;
  *puVar2 = uVar3;
  puVar2[2] = uVar3;
  puVar2[3] = s_N_ArrowB_00_005e3b40;
  puVar2[4] = uVar3;
  puVar2[5] = s_N_ArrowL_00_005e3b4c;
  puVar2[6] = uVar3;
  puVar2[7] = s_N_ArrowR_00_005e3b58;
  uVar4 = DAT_005e3b74;
  puVar2 = DAT_005e3b70;
  uVar3 = DAT_005e3b6c;
  *DAT_005e3b70 = DAT_005e3b6c;
  puVar2[1] = uVar4;
  puVar2[2] = uVar3;
  return;
}

