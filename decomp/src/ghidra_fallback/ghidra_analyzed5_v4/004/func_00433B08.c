#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern undefined4 DAT_00433c68;
extern undefined DAT_00433c6c;
extern uint *DAT_00433c74;
extern undefined4 *DAT_00433c78;
extern undefined DAT_00433d1c;
extern undefined DAT_00433d2c;
extern undefined DAT_00433d34;
extern undefined4 DAT_00433d38;
extern undefined4 DAT_00433d3c;
extern char s_Arrow_00433cc8[];
extern char s_Bomber_00433d24[];
extern char s_Boomerang_00433ce4[];
extern char s_FirePillar_00433c8c[];
extern char s_Hammer_00433cd0[];
extern char s_Hookshot_00433cd8[];
extern char s_IcePillar_00433c98[];
extern char s_Insectnet_00433d10[];
extern char s_Kandelaar_00433d04[];
extern char s_Magic_00433ca4[];
extern char s_Object_00433c84[];
extern char s_Shield_00433cac[];
extern char s_ShockWave_00433cf8[];
extern char s_SwordBeam_00433cbc[];
extern char s_Sword_00433cb4[];
extern char s_Tornade_00433cf0[];
extern char s_Unknown_00433c7c[];

// USA 00433B08 <- EU 00433AE8 (Ghidra, non-matching)
// GLOBAL DAT_00433c68 undefined4
// GLOBAL DAT_00433c6c undefined
// GLOBAL DAT_00433c74 uint *
// GLOBAL DAT_00433c78 undefined4 *
// GLOBAL DAT_00433d1c undefined
// GLOBAL DAT_00433d2c undefined
// GLOBAL DAT_00433d34 undefined
// GLOBAL DAT_00433d38 undefined4
// GLOBAL DAT_00433d3c undefined4
// GLOBAL s_Arrow_00433cc8 string
// GLOBAL s_Bomber_00433d24 string
// GLOBAL s_Boomerang_00433ce4 string
// GLOBAL s_FirePillar_00433c8c string
// GLOBAL s_Hammer_00433cd0 string
// GLOBAL s_Hookshot_00433cd8 string
// GLOBAL s_IcePillar_00433c98 string
// GLOBAL s_Insectnet_00433d10 string
// GLOBAL s_Kandelaar_00433d04 string
// GLOBAL s_Magic_00433ca4 string
// GLOBAL s_Object_00433c84 string
// GLOBAL s_Shield_00433cac string
// GLOBAL s_ShockWave_00433cf8 string
// GLOBAL s_SwordBeam_00433cbc string
// GLOBAL s_Sword_00433cb4 string
// GLOBAL s_Tornade_00433cf0 string
// GLOBAL s_Unknown_00433c7c string

void func_00433B08(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  int iVar5;
  
  puVar2 = DAT_00433c78;
  uVar1 = DAT_00433c68;
  if (param_2 != -1) {
    if (param_2 == 0x1f) {
      puVar4 = &DAT_00433c6c;
      *param_1 = DAT_00433c68;
    }
    else {
      if (((*DAT_00433c74 & 1) == 0) &&
         (iVar5 = func_00100174((int *)DAT_00433c74), puVar3 = DAT_00433c78, iVar5 != 0)) {
        DAT_00433c78[1] = s_Object_00433c84;
        *puVar3 = uVar1;
        puVar2[3] = s_FirePillar_00433c8c;
        puVar2[2] = uVar1;
        puVar2[5] = s_IcePillar_00433c98;
        puVar2[4] = uVar1;
        puVar2[7] = s_Magic_00433ca4;
        puVar2[6] = uVar1;
        puVar2[9] = s_Shield_00433cac;
        puVar2[8] = uVar1;
        puVar2[0xb] = s_Sword_00433cb4;
        puVar2[10] = uVar1;
        puVar2[0xd] = s_SwordBeam_00433cbc;
        puVar2[0xc] = uVar1;
        puVar2[0xf] = s_Arrow_00433cc8;
        puVar2[0xe] = uVar1;
        puVar2[0x11] = s_Hammer_00433cd0;
        puVar2[0x10] = uVar1;
        puVar2[0x13] = s_Hookshot_00433cd8;
        puVar2[0x12] = uVar1;
        puVar2[0x15] = s_Boomerang_00433ce4;
        puVar2[0x14] = uVar1;
        puVar2[0x17] = s_Tornade_00433cf0;
        puVar2[0x16] = uVar1;
        puVar2[0x19] = s_ShockWave_00433cf8;
        puVar2[0x18] = uVar1;
        puVar2[0x1b] = s_Kandelaar_00433d04;
        puVar2[0x1a] = uVar1;
        puVar2[0x1d] = s_Insectnet_00433d10;
        puVar2[0x1c] = uVar1;
        puVar2[0x1f] = &DAT_00433d1c;
        puVar2[0x1e] = uVar1;
        puVar2[0x21] = s_Bomber_00433d24;
        puVar2[0x20] = uVar1;
        puVar2[0x22] = uVar1;
        puVar2[0x23] = &DAT_00433d2c;
        puVar2[0x25] = &DAT_00433d34;
        puVar2[0x24] = uVar1;
      }
      *param_1 = uVar1;
      puVar4 = (undefined *)puVar2[param_2 * 2 + 1];
    }
    param_1[1] = puVar4;
    return;
  }
  param_1[1] = s_Unknown_00433c7c;
  *param_1 = uVar1;
  return;
}

