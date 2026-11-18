#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern int DAT_005ef52c;
extern undefined4 *DAT_005ef530;
extern undefined4 DAT_005ef548;
extern undefined4 DAT_005ef54c;
extern undefined4 DAT_005ef550;
extern undefined4 *DAT_005ef554;
extern undefined4 *DAT_005ef568;
extern undefined DAT_005ef56c;
extern undefined DAT_005ef570;
extern undefined DAT_005ef594;
extern undefined DAT_005ef5a0;
extern undefined4 DAT_005ef5a8;
extern undefined4 *DAT_005ef5ac;
extern undefined DAT_005ef5b0;
extern undefined DAT_005ef5b4;
extern undefined DAT_005ef5b8;
extern undefined DAT_005ef5bc;
extern undefined4 DAT_005ef5c0;
extern char s_DecideGuide_005ef588[];
extern char s_Gm_SRCSignBoardT_005ef534[];
extern char s_InGuide_005ef574[];
extern char s_OutGuide_005ef57c[];
extern char s_OutPos_005ef598[];
extern char s_T_Message_00_005ef558[];

// USA 005EF438 <- EU 005EF410 (Ghidra, non-matching)
// GLOBAL DAT_005ef52c int
// GLOBAL DAT_005ef530 undefined4 *
// GLOBAL DAT_005ef548 undefined4
// GLOBAL DAT_005ef54c undefined4
// GLOBAL DAT_005ef550 undefined4
// GLOBAL DAT_005ef554 undefined4 *
// GLOBAL DAT_005ef568 undefined4 *
// GLOBAL DAT_005ef56c undefined
// GLOBAL DAT_005ef570 undefined
// GLOBAL DAT_005ef594 undefined
// GLOBAL DAT_005ef5a0 undefined
// GLOBAL DAT_005ef5a8 undefined4
// GLOBAL DAT_005ef5ac undefined4 *
// GLOBAL DAT_005ef5b0 undefined
// GLOBAL DAT_005ef5b4 undefined
// GLOBAL DAT_005ef5b8 undefined
// GLOBAL DAT_005ef5bc undefined
// GLOBAL DAT_005ef5c0 undefined4
// GLOBAL s_DecideGuide_005ef588 string
// GLOBAL s_Gm_SRCSignBoardT_005ef534 string
// GLOBAL s_InGuide_005ef574 string
// GLOBAL s_OutGuide_005ef57c string
// GLOBAL s_OutPos_005ef598 string
// GLOBAL s_T_Message_00_005ef558 string

undefined4 func_005EF438(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  iVar1 = DAT_005ef52c;
  *(undefined4 *)(DAT_005ef52c + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  uVar3 = DAT_005ef548;
  puVar2 = DAT_005ef530;
  *DAT_005ef530 = 0;
  puVar2[1] = 0;
  puVar2[3] = s_Gm_SRCSignBoardT_005ef534;
  puVar2[2] = uVar3;
  puVar2 = DAT_005ef554;
  DAT_005ef554[1] = s_T_Message_00_005ef558;
  *puVar2 = uVar3;
  puVar2 = DAT_005ef568;
  DAT_005ef568[1] = &DAT_005ef56c;
  *puVar2 = uVar3;
  puVar2[3] = &DAT_005ef570;
  puVar2[2] = uVar3;
  puVar2[5] = s_InGuide_005ef574;
  puVar2[4] = uVar3;
  puVar2[7] = s_OutGuide_005ef57c;
  puVar2[6] = uVar3;
  puVar2[9] = s_DecideGuide_005ef588;
  puVar2[8] = uVar3;
  puVar2[0xb] = &DAT_005ef594;
  puVar2[10] = uVar3;
  puVar2[0xd] = s_OutPos_005ef598;
  puVar2[0xc] = uVar3;
  puVar2[0xe] = uVar3;
  puVar2[0xf] = &DAT_005ef5a0;
  puVar2 = DAT_005ef5ac;
  DAT_005ef5ac[1] = &DAT_005ef5b0;
  *puVar2 = uVar3;
  puVar2[3] = &DAT_005ef5b4;
  puVar2[2] = uVar3;
  puVar2[5] = &DAT_005ef5b8;
  puVar2[4] = uVar3;
  puVar2[6] = uVar3;
  puVar2[7] = &DAT_005ef5bc;
  return func_005902C0(0);
}

