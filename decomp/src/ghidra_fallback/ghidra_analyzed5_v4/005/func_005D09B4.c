#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern undefined4 *DAT_005d0a48;
extern undefined4 *DAT_005d0a4c;
extern undefined4 DAT_005d0a5c;
extern undefined4 DAT_005d0a60;
extern undefined4 DAT_005d0a64;
extern undefined4 *DAT_005d0a68;
extern undefined DAT_005d0a74;
extern undefined4 DAT_005d0aa8;
extern char s_Decide_005d0a7c[];
extern char s_L_Kimo_00_005d0a50[];
extern char s_OnOff_005d0a6c[];
extern char s_ScrollDecide_005d0a90[];
extern char s_ScrollOn_005d0a84[];
extern char s_Select_005d0aa0[];

// USA 005D09B4 <- EU 005D098C (Ghidra, non-matching)
// GLOBAL DAT_005d0a48 undefined4 *
// GLOBAL DAT_005d0a4c undefined4 *
// GLOBAL DAT_005d0a5c undefined4
// GLOBAL DAT_005d0a60 undefined4
// GLOBAL DAT_005d0a64 undefined4
// GLOBAL DAT_005d0a68 undefined4 *
// GLOBAL DAT_005d0a74 undefined
// GLOBAL DAT_005d0aa8 undefined4
// GLOBAL s_Decide_005d0a7c string
// GLOBAL s_L_Kimo_00_005d0a50 string
// GLOBAL s_OnOff_005d0a6c string
// GLOBAL s_ScrollDecide_005d0a90 string
// GLOBAL s_ScrollOn_005d0a84 string
// GLOBAL s_Select_005d0aa0 string

undefined4 func_005D09B4(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = DAT_005d0a48;
  *DAT_005d0a48 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  uVar2 = DAT_005d0a5c;
  puVar1 = DAT_005d0a4c;
  *DAT_005d0a4c = 0;
  puVar1[1] = 0;
  puVar1[3] = s_L_Kimo_00_005d0a50;
  puVar1[2] = uVar2;
  puVar1 = DAT_005d0a68;
  DAT_005d0a68[1] = s_OnOff_005d0a6c;
  *puVar1 = uVar2;
  puVar1[3] = &DAT_005d0a74;
  puVar1[2] = uVar2;
  puVar1[5] = s_Decide_005d0a7c;
  puVar1[4] = uVar2;
  puVar1[7] = s_ScrollOn_005d0a84;
  puVar1[6] = uVar2;
  puVar1[9] = s_ScrollOn_005d0a84;
  puVar1[8] = uVar2;
  puVar1[0xb] = s_ScrollDecide_005d0a90;
  puVar1[10] = uVar2;
  puVar1[0xd] = s_ScrollDecide_005d0a90;
  puVar1[0xc] = uVar2;
  puVar1[0xe] = uVar2;
  puVar1[0xf] = s_Select_005d0aa0;
  return func_005902C0(0);
}

