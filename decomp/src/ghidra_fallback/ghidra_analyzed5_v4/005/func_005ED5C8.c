#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern int DAT_005ed6f4;
extern undefined4 *DAT_005ed6f8;
extern undefined4 DAT_005ed70c;
extern undefined4 DAT_005ed710;
extern undefined4 DAT_005ed714;
extern undefined4 *DAT_005ed718;
extern undefined DAT_005ed71c;
extern undefined DAT_005ed720;
extern undefined4 DAT_005ed73c;
extern undefined4 *DAT_005ed740;
extern undefined4 DAT_005ed768;
extern undefined4 *DAT_005ed76c;
extern undefined4 DAT_005ed788;
extern undefined4 *DAT_005ed78c;
extern undefined4 DAT_005ed7dc;
extern undefined4 *DAT_005ed7e0;
extern char s_ChangeMessage_005ed72c[];
extern char s_Gm_SellKimoT_005ed6fc[];
extern char s_L_BtnL_00_005ed770[];
extern char s_L_BtnR_00_005ed77c[];
extern char s_L_KimoB_00_005ed744[];
extern char s_L_KimoP_00_005ed75c[];
extern char s_L_KimoY_00_005ed750[];
extern char s_OutBtn_005ed724[];
extern char s_T_MessageKimoB_00_005ed7a0[];
extern char s_T_MessageKimoP_00_005ed7c8[];
extern char s_T_MessageKimoY_00_005ed7b4[];
extern char s_T_Message_00_005ed790[];

// USA 005ED5C8 <- EU 005ED5A0 (Ghidra, non-matching)
// GLOBAL DAT_005ed6f4 int
// GLOBAL DAT_005ed6f8 undefined4 *
// GLOBAL DAT_005ed70c undefined4
// GLOBAL DAT_005ed710 undefined4
// GLOBAL DAT_005ed714 undefined4
// GLOBAL DAT_005ed718 undefined4 *
// GLOBAL DAT_005ed71c undefined
// GLOBAL DAT_005ed720 undefined
// GLOBAL DAT_005ed73c undefined4
// GLOBAL DAT_005ed740 undefined4 *
// GLOBAL DAT_005ed768 undefined4
// GLOBAL DAT_005ed76c undefined4 *
// GLOBAL DAT_005ed788 undefined4
// GLOBAL DAT_005ed78c undefined4 *
// GLOBAL DAT_005ed7dc undefined4
// GLOBAL DAT_005ed7e0 undefined4 *
// GLOBAL s_ChangeMessage_005ed72c string
// GLOBAL s_Gm_SellKimoT_005ed6fc string
// GLOBAL s_L_BtnL_00_005ed770 string
// GLOBAL s_L_BtnR_00_005ed77c string
// GLOBAL s_L_KimoB_00_005ed744 string
// GLOBAL s_L_KimoP_00_005ed75c string
// GLOBAL s_L_KimoY_00_005ed750 string
// GLOBAL s_OutBtn_005ed724 string
// GLOBAL s_T_MessageKimoB_00_005ed7a0 string
// GLOBAL s_T_MessageKimoP_00_005ed7c8 string
// GLOBAL s_T_MessageKimoY_00_005ed7b4 string
// GLOBAL s_T_Message_00_005ed790 string

undefined4 func_005ED5C8(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  iVar1 = DAT_005ed6f4;
  *(undefined4 *)(DAT_005ed6f4 + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  uVar3 = DAT_005ed70c;
  puVar2 = DAT_005ed6f8;
  *DAT_005ed6f8 = 0;
  puVar2[1] = 0;
  puVar2[3] = s_Gm_SellKimoT_005ed6fc;
  puVar2[2] = uVar3;
  puVar2 = DAT_005ed718;
  DAT_005ed718[1] = &DAT_005ed71c;
  *puVar2 = uVar3;
  puVar2[3] = &DAT_005ed720;
  puVar2[2] = uVar3;
  puVar2[5] = s_OutBtn_005ed724;
  puVar2[4] = uVar3;
  puVar2[6] = uVar3;
  puVar2[7] = s_ChangeMessage_005ed72c;
  puVar2 = DAT_005ed740;
  DAT_005ed740[1] = s_L_KimoB_00_005ed744;
  *puVar2 = uVar3;
  puVar2[3] = s_L_KimoY_00_005ed750;
  puVar2[2] = uVar3;
  puVar2[4] = uVar3;
  puVar2[5] = s_L_KimoP_00_005ed75c;
  puVar2 = DAT_005ed76c;
  DAT_005ed76c[1] = s_L_BtnL_00_005ed770;
  *puVar2 = uVar3;
  puVar2[2] = uVar3;
  puVar2[3] = s_L_BtnR_00_005ed77c;
  puVar2 = DAT_005ed78c;
  DAT_005ed78c[1] = s_T_Message_00_005ed790;
  *puVar2 = uVar3;
  puVar2[3] = s_T_MessageKimoB_00_005ed7a0;
  puVar2[2] = uVar3;
  puVar2[5] = s_T_MessageKimoY_00_005ed7b4;
  puVar2[4] = uVar3;
  puVar2[6] = uVar3;
  puVar2[7] = s_T_MessageKimoP_00_005ed7c8;
  puVar2 = DAT_005ed7e0;
  DAT_005ed7e0[1] = s_T_Message_00_005ed790;
  *puVar2 = uVar3;
  return func_005902C0(puVar2);
}

