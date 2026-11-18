#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern int DAT_00599a4c;
extern undefined4 *DAT_00599a50;
extern undefined4 *DAT_00599a54;
extern undefined4 DAT_00599a64;
extern undefined4 DAT_00599a8c;
extern undefined4 DAT_00599a90;
extern undefined4 *DAT_00599a94;
extern undefined4 *DAT_00599a98;
extern undefined4 *DAT_00599a9c;
extern undefined4 *DAT_00599aa0;
extern undefined4 *DAT_00599aa4;
extern undefined4 *DAT_00599aa8;
extern undefined4 *DAT_00599aac;
extern undefined4 *DAT_00599ab0;
extern undefined4 *DAT_00599ab4;
extern undefined DAT_00599ab8;
extern undefined DAT_00599ac0;
extern undefined DAT_00599ac8;
extern undefined DAT_00599ad0;
extern undefined4 DAT_00599ad8;
extern char s_N_ArrowB_00_00599a68[];
extern char s_N_ArrowL_00_00599a74[];
extern char s_N_ArrowR_00_00599a80[];
extern char s_N_ArrowT_00_00599a58[];

// USA 00599968 <- EU 00599940 (Ghidra, non-matching)
// GLOBAL DAT_00599a4c int
// GLOBAL DAT_00599a50 undefined4 *
// GLOBAL DAT_00599a54 undefined4 *
// GLOBAL DAT_00599a64 undefined4
// GLOBAL DAT_00599a8c undefined4
// GLOBAL DAT_00599a90 undefined4
// GLOBAL DAT_00599a94 undefined4 *
// GLOBAL DAT_00599a98 undefined4 *
// GLOBAL DAT_00599a9c undefined4 *
// GLOBAL DAT_00599aa0 undefined4 *
// GLOBAL DAT_00599aa4 undefined4 *
// GLOBAL DAT_00599aa8 undefined4 *
// GLOBAL DAT_00599aac undefined4 *
// GLOBAL DAT_00599ab0 undefined4 *
// GLOBAL DAT_00599ab4 undefined4 *
// GLOBAL DAT_00599ab8 undefined
// GLOBAL DAT_00599ac0 undefined
// GLOBAL DAT_00599ac8 undefined
// GLOBAL DAT_00599ad0 undefined
// GLOBAL DAT_00599ad8 undefined4
// GLOBAL s_N_ArrowB_00_00599a68 string
// GLOBAL s_N_ArrowL_00_00599a74 string
// GLOBAL s_N_ArrowR_00_00599a80 string
// GLOBAL s_N_ArrowT_00_00599a58 string

undefined4 func_00599968(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  iVar1 = DAT_00599a4c;
  *(undefined4 *)(DAT_00599a4c + 0x18) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x1c) = 0xffffffff;
  uVar3 = DAT_00599a64;
  puVar2 = DAT_00599a50;
  *DAT_00599a50 = 0;
  puVar2[1] = 0;
  puVar2 = DAT_00599a54;
  DAT_00599a54[1] = s_N_ArrowT_00_00599a58;
  *puVar2 = uVar3;
  puVar2[3] = s_N_ArrowB_00_00599a68;
  puVar2[2] = uVar3;
  puVar2[5] = s_N_ArrowL_00_00599a74;
  puVar2[4] = uVar3;
  puVar2[6] = uVar3;
  puVar2[7] = s_N_ArrowR_00_00599a80;
  puVar2 = DAT_00599a98;
  *DAT_00599a98 = *DAT_00599a94;
  puVar2[1] = *DAT_00599a9c;
  puVar2[2] = *DAT_00599aa0;
  puVar2[3] = *DAT_00599aa4;
  puVar2[4] = *DAT_00599aa8;
  puVar2[5] = *DAT_00599aac;
  puVar2[6] = *DAT_00599ab0;
  puVar2 = DAT_00599ab4;
  DAT_00599ab4[1] = &DAT_00599ab8;
  *puVar2 = uVar3;
  puVar2[4] = &DAT_00599ac0;
  puVar2[3] = uVar3;
  puVar2[7] = &DAT_00599ac8;
  puVar2[6] = uVar3;
  puVar2[9] = uVar3;
  puVar2[10] = &DAT_00599ad0;
  return func_005902C0(0);
}

