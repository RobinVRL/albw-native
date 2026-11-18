#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00434d44;
extern undefined4 *DAT_00434d48;
extern undefined4 DAT_00434d4c;
extern undefined DAT_00434d74;
extern undefined DAT_00434d80;
extern undefined DAT_00434d84;
extern undefined DAT_00434dec;
extern undefined4 DAT_00434df0;
extern undefined4 DAT_00434df4;
extern char s_DoAction_00434dd0[];
extern char s_EnemyItem_00434d68[];
extern char s_Enemy_00434d60[];
extern char s_MapObj_00434d58[];
extern char s_Object_00434d78[];
extern char s_PlayerBody_00434d8c[];
extern char s_PlayerFlatBody_00434ddc[];
extern char s_PlayerHammer_00434da4[];
extern char s_PlayerItem_00434dc4[];
extern char s_PlayerShield_00434db4[];
extern char s_PlayerSword_00434d98[];
extern char s_Unknown_00434d50[];

// USA 00434C3C <- EU 00434C1C (Ghidra, non-matching)
// GLOBAL DAT_00434d44 uint *
// GLOBAL DAT_00434d48 undefined4 *
// GLOBAL DAT_00434d4c undefined4
// GLOBAL DAT_00434d74 undefined
// GLOBAL DAT_00434d80 undefined
// GLOBAL DAT_00434d84 undefined
// GLOBAL DAT_00434dec undefined
// GLOBAL DAT_00434df0 undefined4
// GLOBAL DAT_00434df4 undefined4
// GLOBAL s_DoAction_00434dd0 string
// GLOBAL s_EnemyItem_00434d68 string
// GLOBAL s_Enemy_00434d60 string
// GLOBAL s_MapObj_00434d58 string
// GLOBAL s_Object_00434d78 string
// GLOBAL s_PlayerBody_00434d8c string
// GLOBAL s_PlayerFlatBody_00434ddc string
// GLOBAL s_PlayerHammer_00434da4 string
// GLOBAL s_PlayerItem_00434dc4 string
// GLOBAL s_PlayerShield_00434db4 string
// GLOBAL s_PlayerSword_00434d98 string
// GLOBAL s_Unknown_00434d50 string

void func_00434C3C(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = DAT_00434d4c;
  puVar1 = DAT_00434d48;
  if (((*DAT_00434d44 & 1) == 0) && (iVar3 = func_00100174((int *)DAT_00434d44), iVar3 != 0)) {
    puVar1[1] = s_Unknown_00434d50;
    *puVar1 = uVar2;
    puVar1[3] = s_MapObj_00434d58;
    puVar1[2] = uVar2;
    puVar1[5] = s_Enemy_00434d60;
    puVar1[4] = uVar2;
    puVar1[7] = s_EnemyItem_00434d68;
    puVar1[6] = uVar2;
    puVar1[9] = &DAT_00434d74;
    puVar1[8] = uVar2;
    puVar1[0xb] = s_Object_00434d78;
    puVar1[10] = uVar2;
    puVar1[0xd] = &DAT_00434d80;
    puVar1[0xc] = uVar2;
    puVar1[0xf] = &DAT_00434d84;
    puVar1[0xe] = uVar2;
    puVar1[0x11] = s_PlayerBody_00434d8c;
    puVar1[0x10] = uVar2;
    puVar1[0x13] = s_PlayerSword_00434d98;
    puVar1[0x12] = uVar2;
    puVar1[0x15] = s_PlayerHammer_00434da4;
    puVar1[0x14] = uVar2;
    puVar1[0x17] = s_PlayerShield_00434db4;
    puVar1[0x16] = uVar2;
    puVar1[0x19] = s_PlayerItem_00434dc4;
    puVar1[0x18] = uVar2;
    puVar1[0x1b] = s_DoAction_00434dd0;
    puVar1[0x1a] = uVar2;
    puVar1[0x1c] = uVar2;
    puVar1[0x1d] = s_PlayerFlatBody_00434ddc;
    puVar1[0x1f] = &DAT_00434dec;
    puVar1[0x1e] = uVar2;
  }
  *param_1 = uVar2;
  param_1[1] = puVar1[param_2 * 2 + 1];
  return;
}

